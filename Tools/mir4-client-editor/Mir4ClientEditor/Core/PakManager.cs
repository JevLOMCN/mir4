using System;
using System.IO;
using System.Threading.Tasks;
using CUE4Parse;
using CUE4Parse.UE4.Objects.Core.Misc;
using CUE4Parse.UE4.Versions;
using CUE4Parse.FileProvider;
using CUE4Parse.FileProvider.Objects;
using CUE4Parse.Encryption.Aes;
using CUE4Parse.Compression;

namespace Mir4ClientEditor.Core
{
    public class PakManager
    {
        private const string AES_KEY = "0xAD768F68B8795A776100525791F675E15341D565D9AB4B4B74C95F31B03310F3";
        private readonly string _clientPath;
        private DefaultFileProvider? _provider;

        public PakManager(string clientPath)
        {
            _clientPath = clientPath;
        }

        public async Task Initialize()
        {
            try
            {
                Console.WriteLine($"Initializing with client path: {_clientPath}");
                Console.WriteLine($"Directory exists: {Directory.Exists(_clientPath)}");
                var pakFiles = Directory.GetFiles(_clientPath, "*.pak", SearchOption.AllDirectories);
                Console.WriteLine($"Found {pakFiles.Length} .pak files:");
                foreach (var pakFile in pakFiles)
                {
                    Console.WriteLine($"  - {pakFile}");
                }

                _provider = new DefaultFileProvider(_clientPath, SearchOption.AllDirectories, false, new VersionContainer(EGame.GAME_UE4_LATEST));
                await Task.Run(() => _provider.Initialize());
                if (AES_KEY != null)
                    _provider.SubmitKey(new FGuid(), new FAesKey(AES_KEY));
            }
            catch (Exception ex)
            {
                throw new Exception($"Failed to initialize PAK manager: {ex.Message}");
            }
        }

        public async Task ExtractPak(string outputPath)
        {
            try
            {
                if (_provider == null)
                    throw new Exception("Provider not initialized. Call Initialize() first.");

                ZlibHelper.DownloadDll();
                ZlibHelper.Initialize(ZlibHelper.DLL_NAME);

                await Task.Run(() =>
                {
                    var files = _provider.Files.Values
                        .GroupBy(it => Path.GetDirectoryName(it.Path) ?? string.Empty)
                        .ToDictionary(it => it.Key, it => it.ToArray());

                    var watch = new System.Diagnostics.Stopwatch();
                    watch.Start();

                    foreach (KeyValuePair<string, CUE4Parse.FileProvider.Objects.GameFile[]> fileGroup in files)
                    {
                        string folder = fileGroup.Key;
                        CUE4Parse.FileProvider.Objects.GameFile[] packages = fileGroup.Value;
                        Console.WriteLine($"Unpacking {folder} ({packages.Length} packages)");

                        Parallel.ForEach(packages, package =>
                        {
                            try
                            {
                                var data = _provider.SavePackage(package);
                                foreach (var (path, bytes) in data)
                                {
                                    var fullFolderPath = Path.Combine(outputPath, folder);
                                    Directory.CreateDirectory(fullFolderPath);
                                    File.WriteAllBytes(Path.Combine(outputPath, path), bytes);
                                }
                            }
                            catch (Exception ex)
                            {
                                Console.WriteLine($"Error extracting package {package.Path}: {ex.Message}");
                            }
                        });
                    }

                    watch.Stop();
                    int totalPackages = files.Values.Sum(arr => arr.Length);
                    Console.WriteLine($"Unpacked {totalPackages} packages in {files.Count} folders in {watch.Elapsed}");
                });
            }
            catch (Exception ex)
            {
                throw new Exception($"Failed to extract PAK: {ex.Message}");
            }
        }

        public async Task SaveChanges(string pakPath, string modifiedFilesPath)
        {
            try
            {
                await Task.Run(() =>
                {
                    // Implementation for saving changes and creating new PAK file
                    // This will use RePak functionality
                    throw new NotImplementedException("PAK repacking not yet implemented");
                });
            }
            catch (Exception ex)
            {
                throw new Exception($"Failed to save changes: {ex.Message}");
            }
        }
    }
}
