<h1 align="center">
Legend of Mir 4 - Official Public Topaz Source
</h2>

<h3 align="center">

[![Latest Release](https://img.shields.io/github/v/release/JevLOMCN/mir4?label=release&style=flat-square)](https://github.com/JevLOMCN/mir4/releases/latest)
[![License: GPL v2](https://img.shields.io/badge/License-GPL%20v2-blue.svg?style=flat-square)](LICENSE)
![Build](Tools/icons/badge.svg)
![MySQL](https://img.shields.io/badge/mysql-4479A1.svg?style=for-the-badge&logo=mysql&logoColor=white)
![C#](https://img.shields.io/badge/c%23-%23239120.svg?style=for-the-badge&logo=csharp&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Discord](https://img.shields.io/badge/Discord-%235865F2.svg?style=for-the-badge&logo=discord&logoColor=white)
</h3>

<h2 align="center">
Topaz Mir 4 is an open-source implementation of the official Legend of Mir 4 server code that empowers community organizers, modders, and hobbyists to spin up their own private Mir 4 server in minutes. <br><br>
Built directly from the official sources for maximum compatibility, using MySQL for data storage and JSON files for server configuration, with simple setup scripts and detailed guides/wikis. <br><br>
Its friendly architecture lets you tweak rates, items, stats, and more, while an active LOMCN community provides a hub for sharing setups, reporting bugs, and collaborating on new features. <br><br>
No NFTs. No crypto. Just a clean, moddable Mir 4 experience built by and for the community. <br><br>
Dive in to explore, customize, and host your personalized Legend of Mir 4 experience today!
</h2>

> [!IMPORTANT]  
> Server Source is NOT available at this time. Please stand by for us to Open Source it.

> [!WARNING]  
> Anyone claiming to have the Mir 4 Source code is trying to scam you! [Never buy files](https://forum.ragezone.com/threads/stay-safe-list-of-known-mmorpg-scammers-and-fake-file-sellers.1233633/).

---

## 📘 Table of Contents

1. [Legend of Mir 4 – Official Public Topaz Source](#legend-of-mir-4--official-public-topaz-source)
2. [Important & Warning](#important--warning)
3. [Previews](#previews)  
   - [Server Console](#server-console)  
   - [Client Launcher](#client-launcher)  
   - [Website](#website)  
   - [Network Diagram](#network-diagram)
4. [📦 Codebase Composition](#-codebase-composition)
5. [Folder Structure](#folder-structure)
6. [🧩 Multi-Server Setup Examples](#-multi-server-setup-examples)
7. [Quick Links](#quick-links)  
   - [Official Resources](#official-resources)  
   - [LOMCN Community](#lomcn-community)  
   - [Downloads](#downloads)
8. [Dependencies](#dependencies)  
   - [Server (Windows & Linux)](#server-windows--linux)  
   - [Client (Windows)](#client-windows)  
   - [Optional Components](#optional-components)
9. [Compatibility](#compatibility)
10. [To Do](#to-do)
11. [Dev Team](#dev-team)
12. [Contributors](#contributors)
13. [Other Projects](#other-projects)
14. [Sponsored By](#sponsored-by)
15. [Stop Killing Games](#stop-killing-games)
16. [Disclaimer](#disclaimer)

---

## 👀 Previews

<details>
<summary><b>Server Console Preview</b></summary>

![image](https://github.com/user-attachments/assets/c59b0351-30eb-401f-ada3-7b23a4da826d)
</details>

<details>
<summary><b>Client Launcher Preview</b></summary>

![image](https://github.com/user-attachments/assets/69a6a5e0-d11d-4570-96c0-a5c9fa07b720)
</details>

<details>
<summary><b>Website Preview</b></summary>

![image](https://github.com/user-attachments/assets/47f27ca6-80e4-4cf0-b0c0-dc29e587dff6)
</details>

<details>
<summary><b>Network Diagram</b></summary>

![image](https://github.com/user-attachments/assets/487e6b08-9458-4e1f-aa31-cbd3c6b83807)
</details>

---

## 📦 Codebase Composition

| Code Origin | Lines of Code | Percentage |
|-------------|---------------|------------|
| **WEMADE**  | 308,737       | 3.46%      |
| **Topaz**   | 8,926,627     | 96.54%     |

> This shows how much of the original Wemade code remains unchanged compared to the substantial updates, additions, and improvements made by the Topaz team. Binaries, metadata, and configuration files are not included in these figures.

---

## 📂 Folder Structure
- [**Tools**](/Tools)  
  A collection of useful MIR4 tools, ranging from premade websites to client editors.  
- [**mir4-client-launcher**](/mir4-client-launcher)  
  An optional client launcher, designed to look and feel like the official MIR4 launcher.  
- [**mir4-db-sps**](/mir4-db-sps)  
  Complete MIR4 server database exports, including all schemas and stored procedures.  
- [**mir4-server-console**](/mir4-server-console)  
  An optional server launcher with quick-edit tools for live tweaking.  
- [**mir4-server-jsons**](/mir4-server-jsons)  
  Full set of MIR4 server JSON configuration files.

---

## 🖥️ Multi-Server Setup Examples

| Scenario # | Front Server | Chatting Server | World Server(s) | Game Server(s) | MySQL    | Couchbase | Memurai  | Character Data Shared? | Chat Shared? | Login Shared? | Notes                                      |
|------------|--------------|------------------|------------------|----------------|----------|-----------|----------|-------------------------|--------------|----------------|---------------------------------------------|
| 1          | Single       | Single           | Single           | Single         | ✔️       | ✔️        | ✔️       | ✔️                      | ✔️           | ✔️             | Basic Single Server Setup                   |
| 2          | Single       | Single           | Multiple         | Single         | ✔️       | ✔️        | ✔️       | ✔️                      | ✔️           | ✔️             | Shared characters across all worlds         |
| 3          | Single       | Single           | Multiple         | Multiple       | ✔️       | ✔️        | ✔️       | ✔️                      | ✔️           | ✔️             | Shared account + characters, separate game servers |
| 4          | Single       | Single           | Multiple         | Multiple       | Multiple | ✔️        | ✔️       | ❌                      | ✔️           | ✔️             | Characters unique per MySQL, same login     |
| 5          | Multiple     | Single           | Multiple         | Multiple       | Multiple | ✔️        | ✔️       | ❌                      | ✔️           | ❌             | Fully separate account/char servers, shared chat |
| 6          | Single       | Multiple         | Multiple         | Multiple       | Single   | ✔️        | ✔️       | ✔️                      | ❌           | ✔️             | Same char/login, but isolated chats         |
| 7          | Multiple     | Multiple         | Multiple         | Multiple       | Multiple | ✔️        | ✔️       | ❌                      | ❌           | ❌             | Completely isolated servers                 |

---

## 🔗 Quick Links

### Official Resources
- [Test Website](https://thelegendofmir.uk/mir4/Website)
- [Server WIKI](https://thelegendofmir.uk/mir4/Website/wiki/wiki)
- [Server Database](https://thelegendofmir.uk/mir4/Website/databases)
- [Mir 4 Tools](https://www.mir4tools.com/)
- [Discord](https://discord.gg/KCnHvwJJWN)
- [Server Setup Guide (YouTube)](https://youtu.be/_f9N_MuEFb0)
- [Server Setup Guide (Written)](https://thelegendofmir.uk/mir4/Website/wiki/guide)

### LOMCN Community
- [Tutorials](https://www.lomcn.net/forum/forums/topaz-mir-4-tutorials.847/)
- [Releases](https://www.lomcn.net/forum/forums/topaz-mir-4-releases.848/)
- [Bug Reports](https://www.lomcn.net/forum/forums/topaz-mir-4-bug-reports.849/)
- [Help](https://www.lomcn.net/forum/forums/topaz-mir-4-help.850/)
- [Updates](https://www.lomcn.net/forum/forums/topaz-mir-4-updates.851/)

### Downloads

[![Latest Release](https://img.shields.io/github/v/release/JevLOMCN/mir4?label=release&style=flat-square)](https://github.com/JevLOMCN/mir4/releases/latest)

---

## Dependencies

| Component              | Supported OS                          | Required Packages & Links                                                                                                                                                                                                                                                                                   |
|------------------------|---------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **Server (Windows)**   | Windows 10+<br>Windows Server 2016+    | - [MySQL Community 8.0.42](https://dev.mysql.com/downloads/installer/) <br>- [Couchbase Community 7.2](https://packages.couchbase.com/releases/7.2.0/couchbase-server-enterprise_7.2.0-windows_amd64.msi) <br>- [Memurai](https://www.memurai.com/get-memurai) <br>- [Windows Terminal](https://aka.ms/terminal) <br>- [Microsoft Visual C++ Redistributable](https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist?view=msvc-170) |
| **Server (Linux)**     | Ubuntu 18.04+ / CentOS 7+             | - [MySQL Community 8.0.42](https://dev.mysql.com/downloads/installer/) <br>- [Couchbase Community 7.2](https://docs.couchbase.com/server/current/install/install-linux.html) <br>- [Memurai](https://www.memurai.com/get-memurai)             |
| **Client (Windows)**   | Windows 8.1 / 10 / 11                 | - [DirectX Runtime](https://www.microsoft.com/en-us/download/details.aspx?id=35) <br>- [.NET Desktop Runtime](https://dotnet.microsoft.com/en-us/download/dotnet/thank-you/runtime-desktop-8.0.15-windows-x64-installer)                                                                                                                                            |
| **Optional**           | —                                     | - cPanel (Website)<br>- [Unreal Engine 4.24.3](https://docs.unrealengine.com/4.24/en-US/)<br>- [Plugins List](https://mirfiles.com/resources/mir2/users/Jev/Mir%204/MirMobile.upluginmanifest.txt)                                                                                                                                                                                                  |

---

## Compatibility

| Function           | Windows | Linux | MacOS | Required       |
|--------------------|---------|-------|-------|----------------|
| Servers            | ✔️      | ➖    | ➖    | ✔️             |
| Client             | ✔️      | ➖    | ➖    | ✔️             |
| Server Console     | ✔️      | ✔️    | ✔️    | ❌             |
| Client Launcher    | ✔️      | ❌    | ❌    | ❌             |
| Website            | ✔️      | ✔️    | ✔️    | ❌             |

**✔️** = Supported | **➖** = To be tested | **❌** = Not supported  

---

## 🛠 To Do

<details>
  <summary>To Do List</summary>

  You can see the full task list here: [To Do List](todo.md)
</details>

---

## 👨‍💻 Dev Team

| <img src="https://avatars.githubusercontent.com/u/68875342" width="96" height="96"><br>**Jev**<br><sub>Dev</sub><br>[Profile](https://www.lomcn.net/forum/members/jev.29880/) | <img src="https://media0.giphy.com/media/aqFRBqGjnznd6/200w.gif?cid=6c09b952wuk8b08io9qjladlzo7ru8dtnbyt82ll1m3pzaxd&ep=v1_gifs_search&rid=200w.gif&ct=g" width="96" height="96"><br>**Meacher**<br><sub>Dev</sub><br>[Profile](https://www.lomcn.net/forum/members/meacher.3993/) | <img src="https://i.imgur.com/gn1N4bQ.gif" width="96" height="96"><br>**1PKRyan**<br><sub>Dev</sub><br>[Profile](https://www.lomcn.net/forum/members/1pkryan.13050/) |
|:--:|:--:|:--:|
| <img src="https://66.media.tumblr.com/725aeaf36ff6262f947aa945164e49a2/tumblr_pfnyfnGjG81wzypxlo1_640.gif" width="96" height="96"><br>**Wagner**<br><sub>Dev</sub><br>[Profile](https://www.lomcn.net/forum/members/estregoik.45841/) | <img src="https://avatars.akamai.steamstatic.com/e23f6d5fdd009b3b4660166c28b18cc743093d20_full.jpg" width="96" height="96"><br>**Nyyl**<br><sub>JSONs</sub><br>[Profile](https://www.lomcn.net/forum/members/nyylxd.42262/) | <img src="https://media.tenor.com/iX3IgCDMOfgAAAAj/bonnie-bonnie-swanson.gif" width="96" height="96"><br>**Charlotte**<br><sub>Translations</sub><br>[Profile](https://www.lomcn.net/forum/members/charlotte.44502/) |
| <img src="https://media.tenor.com/GtmGLCw1SmUAAAAM/buggriddy-lusgifs.gif" width="96" height="96"><br>**BughyT**<br><sub>Dev</sub><br>[Profile](https://www.lomcn.net/forum/members/bughyt.46860/) | <img src="https://media2.giphy.com/media/HbU1apZE5zopB0e8Hq/giphy-downsized.gif" width="96" height="96"><br>**CodePwr**<br><sub>Dev</sub><br>[Profile](https://www.lomcn.net/forum/members/damian.1126/) | <img src="https://encrypted-tbn2.gstatic.com/images?q=tbn:ANd9GcTNs5tTmCNN6AXCXUspYleX_-LLN_-c1UPECpVnPHfy9C0V3AlS" width="96" height="96"><br>**Chriz**<br><sub>Dev</sub><br>[Profile](https://www.lomcn.net/forum/members/chriz.86/) |

---

# Contributors:

> [Netskee](https://www.lomcn.net/forum/members/netskee.19772/) - Graphic Design
>
> [Firev2 (AboveYou)](https://www.lomcn.net/forum/members/aboveyou.45200/) - Sourcing Clients/Server Side JSONs
>
> [Mental](https://www.lomcn.net/forum/members/mental.3870/) - Outsourcing contacts/Sponsorship/Advertisement
>
> [Gurgel](https://www.lomcn.net/forum/members/gurgell.45127/) - Art/Videos/Graphics
>
> [carolyangbb](https://www.lomcn.net/forum/members/yangboy.45108/) - GVAS Logic/Bot sourcing
>
> [Treffy](https://www.mir4tools.com/) - Mir4Tools/Bot Collab
>
> [Sumiao](https://www.lomcn.net/forum/members/sumiao.42897/) - Server Console (Map/Item/Monster Intergration)
>
> [S4oul](https://github.com/s4oul) - C++
>
> [cmb](https://forum.ragezone.com/members/cmb.330743/) - C++
>
> [Hells](https://www.lomcn.net/forum/members/hells.7536/) - Outsourcing developers
>
> [Community Contributors](https://github.com/JevLOMCN/mir4-launcher/graphs/contributors)

---

## <img src="https://mirfiles.co.uk/resources/mir2/users/Jev/favicon.png" width="40"> Other Projects

- <img src="https://github.com/JevLOMCN/mir4/blob/main/Tools/icons/mir1.png" alt="Mir1" width="20"/> [Mir 1](https://github.com/JevLOMCN/mir1/) | [Database](https://github.com/Suprcode/Carbon.Database) - Remake of ActozSoft's 1997 _The Legend Of Mir 1_
- <img src="https://github.com/JevLOMCN/mir4/blob/main/Tools/icons/mir2.png" alt="Mir2" width="20"/> [Mir 2](https://github.com/Suprcode/Crystal) | [Database](https://github.com/Suprcode/Crystal.Database) | [Map Editor](https://github.com/Suprcode/Crystal.MapEditor) - Remake of ActozSoft/Wemade Entertainment's 1999 _The Legend Of Mir 2_
- <img src="https://github.com/JevLOMCN/mir4/blob/main/Tools/icons/mir3.png" alt="Mir3" width="20"/> [Mir 3](https://github.com/Suprcode/Zircon) | [Database](https://mirfiles.com/resources/mir3/zircon/Database.7z) | [Map Editor](https://www.lomcn.net/forum/threads/map-editor.109317/)- Remake of Wemade Entertainment's 2003 _The Legend Of Mir 3_
- <img src="https://github.com/JevLOMCN/mir4/blob/main/Tools/icons/woool.png" alt="WoOOL" width="20"/> [WoOOL](https://www.lomcn.net/forum/forums/woool-development-project-onyx.857/) - Remake of Shanda Games' (now Shengqu Games) 2003 _The World Of Legend_
- <img src="https://github.com/JevLOMCN/mir4/blob/main/Tools/icons/mir3d.png" alt="Mir3D" width="20"/> [Mir 3D (Moon Spirit)](https://github.com/mir-ethernity/mir-eternal) | [Mir 3D (Holy Cow)](https://github.com/JevLOMCN/Legend-Eternal-Mir3D) - Remake of Shanda Games' (now Shengqu Games) 2016 _Legend Eternal_
- <img src="https://github.com/JevLOMCN/mir4/blob/main/Tools/icons/mir4.png" alt="Mir4" width="20"/> [Mir 4](https://github.com/JevLOMCN/mir4) - Remake of Wemade Entertainment's 2021 _The Legend Of Mir 4_

---

# Sponsored By:

<img src="https://forum.ragezone.com/data/styles/10/styles/ragezone/xenforo/xenforo-logo.png" width="40"> [RageZone](https://forum.ragezone.com/) - A leading forum and resource hub for MMORPG development, featuring open-source projects, server files, tutorials, and a passionate community of game developers and modders.

---
<img src="https://www.lomcn.net/forum/styles/uix/images/logo2024_100.png" alt="LOMCN">

<img src="https://camo.githubusercontent.com/fb34351333ae47378e5d40705f3d81899d64e5b9a16255e22acc7ea2324ebebf/68747470733a2f2f6d697266696c65732e636f2e756b2f7265736f75726365732f6d6972322f75736572732f4a65762f66617669636f6e2e706e67" width="40"> [LOMCN](https://www.lomcn.net/) - The Legend of Mir Community Network, A fan-driven hub for the Legend of Mir MMORPG series, featuring community forums, private server development, and a growing library of open-source projects.

---
<img src="http://ptserver.servegame.com/images/news/logo1.png" alt="PTS">

<img src="http://ptserver.servegame.com/images/favicon.ico" width="40"> [PTS Games](http://ptserver.servegame.com/) - PTS Games began as a private server project in 2011, originally just for friends and family. What started as a fun way to play games like Ark: Survival Evolved and Conan Exiles soon evolved into a public gaming community after an accidental server misconfiguration attracted unexpected players. Since then, PTS Games has grown into a welcoming space for gamers to connect and play together.

---
# Stop Killing Games:
<img src="https://www.stopkillinggames.com/images/skglogo.svg" alt="SKG" width="70" height="70">

"Stop Killing Games" is a consumer movement started to challenge the legality of publishers destroying video games they have sold to customers. An increasing number of video games are sold effectively as goods - with no stated expiration date - but designed to be completely unplayable as soon as support from the publisher ends. This practice is a form of planned obsolescence and is not only detrimental to customers, but makes preservation effectively impossible. Furthermore, the legality of this practice is largely untested in many countries.

[Stop Killing Games](https://www.stopkillinggames.com/)

---

[📄 Disclaimer](./DISCLAIMER.md)
