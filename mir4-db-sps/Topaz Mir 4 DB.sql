-- MySQL dump 10.13  Distrib 8.0.40, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: mm_front_db
-- ------------------------------------------------------
-- Server version	5.7.44

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Current Database: `mm_front_db`
--

CREATE DATABASE /*!32312 IF NOT EXISTS*/ `mm_front_db` /*!40100 DEFAULT CHARACTER SET latin1 */;

USE `mm_front_db`;

--
-- Table structure for table `account_block_tb`
--

DROP TABLE IF EXISTS `account_block_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `account_block_tb` (
  `AccountUID` bigint(20) unsigned NOT NULL,
  `BlockReason` tinyint(3) unsigned NOT NULL,
  `BlockEndTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`AccountUID`),
  CONSTRAINT `FK_account_block_tb_account_tb` FOREIGN KEY (`AccountUID`) REFERENCES `account_tb` (`AccountUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `account_block_tb`
--

LOCK TABLES `account_block_tb` WRITE;
/*!40000 ALTER TABLE `account_block_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `account_block_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `account_grade_tb`
--

DROP TABLE IF EXISTS `account_grade_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `account_grade_tb` (
  `AccountUID` bigint(20) unsigned NOT NULL,
  `AccountGrade` tinyint(3) unsigned NOT NULL,
  PRIMARY KEY (`AccountUID`),
  CONSTRAINT `FK_account_grade_tb_account_tb` FOREIGN KEY (`AccountUID`) REFERENCES `account_tb` (`AccountUID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `account_grade_tb`
--

LOCK TABLES `account_grade_tb` WRITE;
/*!40000 ALTER TABLE `account_grade_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `account_grade_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `account_tb`
--

DROP TABLE IF EXISTS `account_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `account_tb` (
  `AccountUID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `AccountType` tinyint(3) unsigned DEFAULT NULL,
  `AccountName` varchar(50) NOT NULL,
  `SDKUID` tinyint(3) unsigned NOT NULL,
  `NationUID` tinyint(3) unsigned DEFAULT NULL,
  `CreateTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `LoginTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `LogoutTime` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`AccountUID`),
  UNIQUE KEY `AccountName_UNIQUE` (`AccountName`,`SDKUID`,`AccountType`),
  KEY `account_tb_NationID_fk_idx` (`NationUID`),
  KEY `account_tb_SDKUID_fk_idx` (`SDKUID`),
  CONSTRAINT `FK_account_tb_nation_tb` FOREIGN KEY (`NationUID`) REFERENCES `nation_tb` (`NationUID`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `FK_account_tb_sdk_tb` FOREIGN KEY (`SDKUID`) REFERENCES `sdk_tb` (`SDKUID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=5001 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `account_tb`
--

LOCK TABLES `account_tb` WRITE;
/*!40000 ALTER TABLE `account_tb` DISABLE KEYS */;
INSERT INTO `account_tb` VALUES (1,2,'Gamemaster',1,3,'2018-11-20 01:09:57','2025-03-23 21:06:03',NULL);
/*!40000 ALTER TABLE `account_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `db_tb`
--

DROP TABLE IF EXISTS `db_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `db_tb` (
  `DBUID` mediumint(8) unsigned NOT NULL,
  `DBName` varchar(64) NOT NULL,
  `DBType` tinyint(3) unsigned NOT NULL,
  `PrivateDBIP` varchar(15) NOT NULL,
  `PrivateDBPort` smallint(5) unsigned NOT NULL,
  `DBUserUID` tinyint(3) unsigned NOT NULL,
  PRIMARY KEY (`DBUID`),
  KEY `db_tb_DBType_fk_idx` (`DBType`),
  KEY `db_tb_DBUserUID_fk_idx` (`DBUserUID`),
  CONSTRAINT `FK_db_tb_db_type_tb` FOREIGN KEY (`DBType`) REFERENCES `db_type_tb` (`DBType`),
  CONSTRAINT `FK_db_tb_db_user_tb` FOREIGN KEY (`DBUserUID`) REFERENCES `db_user_tb` (`DBUserUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `db_tb`
--

LOCK TABLES `db_tb` WRITE;
/*!40000 ALTER TABLE `db_tb` DISABLE KEYS */;
INSERT INTO `db_tb` VALUES (1,'mm_front_db',1,'127.0.0.1',3306,1),(2,'mm_game_db_release',2,'127.0.0.1',3306,1),(3,'mm_game_db',2,'127.0.0.1',3306,1),(7,'mm_game_db_release',2,'127.0.0.1',3306,1),(8,'user_data_redis',4,'127.0.0.1',6379,1),(9,'summary_user_data_redis',5,'127.0.0.1',6379,1),(10,'matching_data_redis',6,'127.0.0.1',6379,1),(11,'mm_log_bucket',7,'127.0.0.1',8091,2),(12,'server_info_data',8,'127.0.0.1',6379,1);
/*!40000 ALTER TABLE `db_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `db_type_tb`
--

DROP TABLE IF EXISTS `db_type_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `db_type_tb` (
  `DBType` tinyint(3) unsigned NOT NULL,
  `DBTypeName` varchar(10) NOT NULL,
  `DBConnectionCnt` tinyint(3) unsigned NOT NULL DEFAULT '15',
  PRIMARY KEY (`DBType`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `db_type_tb`
--

LOCK TABLES `db_type_tb` WRITE;
/*!40000 ALTER TABLE `db_type_tb` DISABLE KEYS */;
INSERT INTO `db_type_tb` VALUES (1,'front',1),(2,'game',3),(4,'redis',2),(5,'redis',2),(6,'redis',2),(7,'couchbase',1),(8,'redis',2);
/*!40000 ALTER TABLE `db_type_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `db_user_tb`
--

DROP TABLE IF EXISTS `db_user_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `db_user_tb` (
  `DBUserUID` tinyint(3) unsigned NOT NULL,
  `DBUserName` varchar(20) NOT NULL,
  `DBUserPassword` varchar(20) NOT NULL,
  PRIMARY KEY (`DBUserUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `db_user_tb`
--

LOCK TABLES `db_user_tb` WRITE;
/*!40000 ALTER TABLE `db_user_tb` DISABLE KEYS */;
INSERT INTO `db_user_tb` VALUES (1,'dev','1111'),(2,'222222','111111');
/*!40000 ALTER TABLE `db_user_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `nation_tb`
--

DROP TABLE IF EXISTS `nation_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `nation_tb` (
  `NationUID` tinyint(3) unsigned NOT NULL AUTO_INCREMENT,
  `NationName` varchar(20) NOT NULL,
  PRIMARY KEY (`NationUID`),
  UNIQUE KEY `NationName_UNIQUE` (`NationName`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `nation_tb`
--

LOCK TABLES `nation_tb` WRITE;
/*!40000 ALTER TABLE `nation_tb` DISABLE KEYS */;
INSERT INTO `nation_tb` VALUES (2,'chi'),(3,'eng'),(1,'kor');
/*!40000 ALTER TABLE `nation_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `patch_url_tb`
--

DROP TABLE IF EXISTS `patch_url_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `patch_url_tb` (
  `PatchNum` int(10) unsigned NOT NULL,
  `RootUrl` varchar(100) DEFAULT NULL,
  `SubPath` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`PatchNum`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `patch_url_tb`
--

LOCK TABLES `patch_url_tb` WRITE;
/*!40000 ALTER TABLE `patch_url_tb` DISABLE KEYS */;
INSERT INTO `patch_url_tb` VALUES (1,'http://nextmir.wemade.gscdn.com/cdn/','Patch_DailyBuild/');
/*!40000 ALTER TABLE `patch_url_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `revision_tb`
--

DROP TABLE IF EXISTS `revision_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `revision_tb` (
  `Revision` varchar(20) NOT NULL,
  `PatchNum` int(10) unsigned NOT NULL,
  `WorldList` varchar(100) NOT NULL,
  PRIMARY KEY (`Revision`),
  UNIQUE KEY `revision_UNIQUE` (`Revision`),
  KEY `FK_revision_tb_patch_url_tb_idx` (`PatchNum`),
  CONSTRAINT `FK_revision_tb_patch_url_tb` FOREIGN KEY (`PatchNum`) REFERENCES `patch_url_tb` (`PatchNum`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `revision_tb`
--

LOCK TABLES `revision_tb` WRITE;
/*!40000 ALTER TABLE `revision_tb` DISABLE KEYS */;
INSERT INTO `revision_tb` VALUES ('1',1,'10');
/*!40000 ALTER TABLE `revision_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `sdk_tb`
--

DROP TABLE IF EXISTS `sdk_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `sdk_tb` (
  `SDKUID` tinyint(3) unsigned NOT NULL AUTO_INCREMENT,
  `SDKName` varchar(20) NOT NULL,
  PRIMARY KEY (`SDKUID`),
  UNIQUE KEY `SDKName_UNIQUE` (`SDKName`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sdk_tb`
--

LOCK TABLES `sdk_tb` WRITE;
/*!40000 ALTER TABLE `sdk_tb` DISABLE KEYS */;
INSERT INTO `sdk_tb` VALUES (2,'Mobile'),(1,'PC');
/*!40000 ALTER TABLE `sdk_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `server_db_tb`
--

DROP TABLE IF EXISTS `server_db_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `server_db_tb` (
  `ServerUID` mediumint(8) unsigned NOT NULL,
  `DBUID` mediumint(8) unsigned NOT NULL,
  PRIMARY KEY (`ServerUID`,`DBUID`),
  KEY `FK_server_db_tb_db_tb_idx` (`DBUID`),
  CONSTRAINT `FK_server_db_tb_db_tb` FOREIGN KEY (`DBUID`) REFERENCES `db_tb` (`DBUID`),
  CONSTRAINT `FK_server_db_tb_server_tb` FOREIGN KEY (`ServerUID`) REFERENCES `server_tb` (`ServerUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `server_db_tb`
--

LOCK TABLES `server_db_tb` WRITE;
/*!40000 ALTER TABLE `server_db_tb` DISABLE KEYS */;
INSERT INTO `server_db_tb` VALUES (25,7),(25,8),(25,9),(25,10),(25,11),(25,12);
/*!40000 ALTER TABLE `server_db_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `server_tb`
--

DROP TABLE IF EXISTS `server_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `server_tb` (
  `ServerUID` mediumint(8) unsigned NOT NULL,
  `ServerType` tinyint(3) unsigned NOT NULL,
  `WorldUID` tinyint(3) unsigned NOT NULL,
  `PrivateServerIP` varchar(15) NOT NULL,
  `PrivateServerPort` smallint(5) unsigned NOT NULL,
  `PublicServerIP` varchar(15) NOT NULL,
  `PublicServerPort` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`ServerUID`),
  KEY `server_tb_WorldUID_fk_idx` (`WorldUID`),
  KEY `FK_server_tb_server_type_tb` (`ServerType`),
  CONSTRAINT `FK_server_tb_server_type_tb` FOREIGN KEY (`ServerType`) REFERENCES `server_type_tb` (`ServerType`),
  CONSTRAINT `FK_server_tb_world_tb` FOREIGN KEY (`WorldUID`) REFERENCES `world_tb` (`WorldUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `server_tb`
--

LOCK TABLES `server_tb` WRITE;
/*!40000 ALTER TABLE `server_tb` DISABLE KEYS */;
INSERT INTO `server_tb` VALUES (25,1,14,'127.0.0.1',13000,'127.0.0.1',13000),(26,2,14,'127.0.0.1',12000,'127.0.0.1',12000),(27,3,14,'127.0.0.1',33000,'127.0.0.1',33000),(28,4,14,'127.0.0.1',13004,'127.0.0.1',13004);
/*!40000 ALTER TABLE `server_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `server_type_tb`
--

DROP TABLE IF EXISTS `server_type_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `server_type_tb` (
  `ServerType` tinyint(3) unsigned NOT NULL,
  `ServerName` varchar(20) NOT NULL,
  PRIMARY KEY (`ServerType`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `server_type_tb`
--

LOCK TABLES `server_type_tb` WRITE;
/*!40000 ALTER TABLE `server_type_tb` DISABLE KEYS */;
INSERT INTO `server_type_tb` VALUES (1,'WorldServer'),(2,'GameServer'),(3,'GatewayServer'),(4,'ChattingServer');
/*!40000 ALTER TABLE `server_type_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `vw_world`
--

DROP TABLE IF EXISTS `vw_world`;
/*!50001 DROP VIEW IF EXISTS `vw_world`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `vw_world` AS SELECT 
 1 AS `WorldUID`,
 1 AS `WorldState`,
 1 AS `WorldName`,
 1 AS `OrderNum`,
 1 AS `ServerUID`,
 1 AS `ServerType`,
 1 AS `PrivateServerIP`,
 1 AS `PrivateServerPort`,
 1 AS `PublicServerIP`,
 1 AS `PublicServerPort`,
 1 AS `DBUID`,
 1 AS `DBName`,
 1 AS `DBType`,
 1 AS `PrivateDBIP`,
 1 AS `PrivateDBPort`,
 1 AS `DBConnectionCnt`,
 1 AS `DBTypeName`,
 1 AS `DBUserName`,
 1 AS `DBUserPassword`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `world_tb`
--

DROP TABLE IF EXISTS `world_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `world_tb` (
  `WorldUID` tinyint(3) unsigned NOT NULL,
  `WorldState` tinyint(3) unsigned NOT NULL,
  `WorldName` varchar(20) NOT NULL,
  `OrderNum` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`WorldUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `world_tb`
--

LOCK TABLES `world_tb` WRITE;
/*!40000 ALTER TABLE `world_tb` DISABLE KEYS */;
INSERT INTO `world_tb` VALUES (14,2,'Topaz Alpha Server',1);
/*!40000 ALTER TABLE `world_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'mm_front_db'
--

--
-- Dumping routines for database 'mm_front_db'
--
/*!50003 DROP FUNCTION IF EXISTS `AccountType_fn` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` FUNCTION `AccountType_fn`() RETURNS tinyint(3) unsigned
BEGIN
 
RETURN 2;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `AccountLogin_Get_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `AccountLogin_Get_Front`(
	IN	_AccountType	TINYINT	UNSIGNED
,	IN	_AccountName	VARCHAR(50)	
,   IN	_SDKName		VARCHAR(20)	
-- ,   IN	_NationName		VARCHAR(20)	
    
,   OUT	_AccountUID		BIGINT	UNSIGNED
,   OUT	_AccountGrade	TINYINT	UNSIGNED
,   OUT	_BlockReason	TINYINT	UNSIGNED
,   OUT	_BlockEndTime	INT		UNSIGNED
,	OUT _Result			INT
)
BEGIN
	DECLARE	_NationUID	TINYINT;
	DECLARE	_SDKUID		TINYINT; 
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;
 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
	SET	_AccountUID = 0, _AccountGrade = 0, _BlockReason = 0, _BlockEndTime = 0, _Result = -1;
	SET	_AccountName = LTRIM( RTRIM(_AccountName) );
    
	MAIN_ROUTINE:
    BEGIN
		IF	_AccountType = 0 OR _AccountName = '' OR _SDKName = '' THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		END IF;
		
        SET _AccountType = AccountType_fn();
        
		SELECT	AC.AccountUID
		INTO	_AccountUID	
		FROM		account_tb	AS AC	
		INNER JOIN	sdk_tb		AS SD	ON SD.SDKUID = AC.SDKUID
		WHERE	AC.AccountName = _AccountName AND AC.AccountType = _AccountType AND SD.SDKName = _SDKName;
        
		IF FOUND_ROWS() <= 0 AND _AccountType = 1	THEN	-- 계정이 없고 개발용 계정인 경우 : 접속 불가
			SET _Result = 101;	LEAVE MAIN_ROUTINE;	-- 존재하지 않는 계정
            
        ELSEIF	FOUND_ROWS() <= 0	THEN	-- 계정이 없고 개발용 계정이 아닌 경우 : 계정 입력
			SELECT SDKUID	INTO _SDKUID	FROM sdk_tb	WHERE SDKName = _SDKName;
			IF	FOUND_ROWS() = 0	THEN
				INSERT INTO	sdk_tb(SDKName)	VALUES(_SDKName);
				SET	_SDKUID = LAST_INSERT_ID();
			END IF;
			
			INSERT INTO account_tb
					( AccountType	, AccountName	, SDKUID	, NationUID	, CreateTime, LoginTime	, LogoutTime 	)		
			VALUES	( _AccountType	, _AccountName	, _SDKUID	, _NationUID, NOW() 	, NOW()		, NULL			);
			SET	_AccountUID = LAST_INSERT_ID();
        
        ELSE	-- 계정이 있는 경우
			UPDATE account_tb	SET LoginTime = NOW()	WHERE AccountUID = _AccountUID;
		
			SELECT 	BlockReason	, UNIX_TIMESTAMP(BlockEndTime)
			INTO	_BlockReason, _BlockEndTime
			FROM 	account_block_tb	
			WHERE 	AccountUID = _AccountUID;
			
			SELECT AccountGrade	INTO _AccountGrade	FROM account_grade_tb	WHERE AccountUID = _AccountUID;
        END IF;
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `AccountLogout_Update_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `AccountLogout_Update_Front`(
	IN	_AccountUID	BIGINT	UNSIGNED

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
	SET	_Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		UPDATE account_tb	SET LogoutTime = NOW()	WHERE AccountUID = _AccountUID;
		IF ROW_COUNT() <= 0	THEN SET _Result = 101;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 계정
    
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `PatchUrl_Get_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `PatchUrl_Get_Front`(
	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
	SET	_Result = -1;
    
	MAIN_ROUTINE:  
    BEGIN
        SELECT PatchNum, RootUrl, SubPath FROM patch_url_tb;
        
		SET	_Result = 0;      
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Revision_Delete_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Revision_Delete_Front`(
	IN	_Revision	VARCHAR(20),
    
	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
	SET	_Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
        DELETE FROM revision_tb	WHERE Revision = _Revision;
        IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 0;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터		
    
		SET	_Result = 0;        
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Revision_Get_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Revision_Get_Front`(
	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
	SET	_Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
        SELECT Revision, PatchNum, WorldList FROM revision_tb;
        
		SET	_Result = 0;      
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Revision_Insert_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Revision_Insert_Front`(
	IN	_Revision	VARCHAR(20),
    IN	_PatchNum 	INT UNSIGNED,
    IN	_WorldList	VARCHAR(100),

	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
	SET	_Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		INSERT INTO revision_tb(Revision, PatchNum, WorldList) VALUES (_Revision, _PatchNum, _WorldList)
        ON DUPLICATE KEY UPDATE PatchNum=_PatchNum, WorldList=_WorldList; 
        IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 0;	LEAVE MAIN_ROUTINE;	END IF;	-- 이미 존재하는 리비전 번호				
    
		SET	_Result = 0;       
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ServerList_Get_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ServerList_Get_World`(
	IN	_WorldUID	TINYINT	UNSIGNED

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
	SET	_Result = -1;

	MAIN_ROUTINE:
    BEGIN
/*        -- 서버 리스트
        SELECT	ServerType, PrivateServerIP, PrivateServerPort, PublicServerIP, PublicServerPort 
        FROM	server_tb 
        WHERE	WorldUID = _WorldUID;
		IF	FOUND_ROWS() <= 0	THEN SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
*/		
        -- DB 리스트
        SELECT	DB.DBName, DB.DBType, DB.PrivateDBIP, DB.PrivateDBPort, DU.DBUserName, DU.DBUserPassword, DT.DBConnectionCnt
		FROM		server_tb		AS SE
		INNER JOIN	server_db_tb	AS SD	ON SD.ServerUID = SE.ServerUID
		INNER JOIN	db_tb			AS DB	ON DB.DBUID = SD.DBUID
		INNER JOIN	db_type_tb		AS DT	ON DT.DBType = DB.DBType
		INNER JOIN	db_user_tb		AS DU	ON DU.DBUserUID = DB.DBUserUID
		WHERE	SE.WorldUID = _WorldUID;
        IF	FOUND_ROWS() <= 0	THEN SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `TestAccount_Insert_DBA` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `TestAccount_Insert_DBA`(
	IN	_AccountName	VARCHAR(50)	
,	IN	_StartNum		TINYINT	UNSIGNED
,	IN	_CreateCnt		TINYINT	UNSIGNED
    
,	OUT _Result	INT
)
BEGIN
	DECLARE	_i	TINYINT		DEFAULT 0;
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
        ROLLBACK;
	END;
    
	SET	_Result = -1;
	SET	_AccountName = LTRIM( RTRIM(_AccountName) );
    
	MAIN_ROUTINE:
    BEGIN
		IF	_AccountName = '' OR _CreateCnt = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		END IF;
		
        START TRANSACTION;
			WHILE	_i < _CreateCnt	DO
				INSERT IGNORE INTO account_tb
						( AccountType 	, AccountName 											, SDKUID 	, NationUID , CreateTime, LoginTime , LogoutTime  	)	 
				VALUES 	( 1 			, CONCAT( _AccountName, CONVERT( _StartNum, CHAR(50) ) ), 1 		, 1			, NOW()  	, NULL  	, NULL   		);
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;
				
                SET _StartNum = _StartNum + 1;
				SET	_i = _i + 1;
			END WHILE;
			
			SET	_Result = 0;
        COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `WorldList_Get_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `WorldList_Get_Front`(
	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
	SET	_Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
        SELECT 	WO.WorldUID, WO.WorldState, WO.WorldName, SE.PublicServerIP, SE.PublicServerPort, SE.ServerType
        FROM 		world_tb	AS WO
        INNER JOIN	server_tb	AS SE	ON SE.WorldUID = WO.WorldUID
        WHERE	SE.ServerType = 3 AND WO.WorldUID <> 1
        ORDER BY	WO.OrderNum DESC, WO.WorldUID;
        
		IF	FOUND_ROWS() <= 0	THEN SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_AccountLogin_Get_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`%` PROCEDURE `_AccountLogin_Get_Front`(
	IN	_AccountName	VARCHAR(50)	
,   IN	_SDKName		VARCHAR(20)	
,   IN	_NationName		VARCHAR(20)	
    
,   OUT	_AccountUID		BIGINT	UNSIGNED
,   OUT	_AccountGrade	TINYINT	
,   OUT	_BlockReason	TINYINT	 
,   OUT	_BlockEndTime	TIMESTAMP
)
BEGIN
	DECLARE	_NationUID	TINYINT;
	DECLARE	_SDKUID		TINYINT;
    -- declare _BlockEndTime TIMESTAMP;
/*    
    DECLARE EXIT HANDLER FOR SQLWARNING, NOT FOUND, SQLEXCEPTION
    BEGIN
		
    END;
*/
	SET	_AccountName = LTRIM( RTRIM(_AccountName) );
	IF	_AccountName = ''	THEN	# _AccountName 비어있을 경우 guest로 생성
		SET _AccountName = CONCAT( 'guest_', TIMESTAMPDIFF( SECOND, '1970-01-01 00:00:00', NOW() ) );
        
        SELECT NationUID	INTO _NationUID	FROM nation_tb	WHERE NationName = _NationName;
		IF	FOUND_ROWS() = 0	THEN
			INSERT INTO	nation_tb(NationName)	VALUES(_NationName);
			SET	_NationUID = LAST_INSERT_ID();
		END IF;
		
		SELECT SDKUID	INTO _SDKUID	FROM sdk_tb	WHERE SDKName = _SDKName;
		IF	FOUND_ROWS() = 0	THEN
			INSERT INTO	sdk_tb(SDKName)	VALUES(_SDKName);
			SET	_SDKUID = LAST_INSERT_ID();
		END IF;
            
        INSERT INTO account_tb
				( AccountName	, SDKUID	, NationUID	, CreateTime, LoginTime	, LogoutTime 	)	
		VALUES	( _AccountName	, _SDKUID	, _NationUID, NOW() 	, NOW()		, NULL			);
		
		SET	_AccountUID = LAST_INSERT_ID(), _AccountGrade = 0, _BlockReason = 0, _BlockEndTime = 0;
        
	ELSE	# Account 데이터 가져오기
		SELECT	AC.AccountUID
        INTO	_AccountUID	
		FROM		account_tb			AS AC	
		INNER JOIN	sdk_tb				AS SD	ON SD.SDKUID = AC.SDKUID
		WHERE	AC.AccountName = _AccountName AND SD.SDKName = _SDKName;

		IF	FOUND_ROWS() = 0	THEN	# Account 데이터가 없을 경우 생성
			SELECT NationUID	INTO _NationUID	FROM nation_tb	WHERE NationName = _NationName;
			IF	FOUND_ROWS() = 0	THEN
				INSERT INTO	nation_tb(NationName)	VALUES(_NationName);
				SET	_NationUID = LAST_INSERT_ID();
			END IF;
			
			SELECT SDKUID	INTO _SDKUID	FROM sdk_tb	WHERE SDKName = _SDKName;
			IF	FOUND_ROWS() = 0	THEN
				INSERT INTO	sdk_tb(SDKName)	VALUES(_SDKName);
				SET	_SDKUID = LAST_INSERT_ID();
			END IF;
			
			INSERT INTO account_tb
					( AccountName	, SDKUID	, NationUID	, CreateTime, LoginTime	, LogoutTime 	)		
			VALUES	( _AccountName	, _SDKUID	, _NationUID, NOW() 	, NOW()		, NULL			);
			SET	_AccountUID = LAST_INSERT_ID(), _AccountGrade = 0, _BlockReason = 0, _BlockEndTime = 0;
            
		ELSE	# Account 데이터가 있을 경우 Block, Grade 데이터 가져오기, LoginTime 기록
			SELECT 	BlockReason	, UNIX_TIMESTAMP(BlockEndTime)
            INTO	_BlockReason, _BlockEndTime
			FROM 	account_block_tb	
			WHERE 	AccountUID = _AccountUID;
            IF	FOUND_ROWS() = 0	THEN
				SET _BlockReason = 0, _BlockEndTime = 0;
			END IF;
            
            SELECT AccountGrade	INTO _AccountGrade	FROM account_grade_tb	WHERE AccountUID = _AccountUID;
			IF	FOUND_ROWS() = 0	THEN
				SET _AccountGrade = 0;
			END IF;
            
            UPDATE account_tb	SET LoginTime = NOW()	WHERE AccountUID = _AccountUID;
		END IF;
    END IF;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_DBList_Get_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `_DBList_Get_Front`(
	IN	_WorldUID	TINYINT	UNSIGNED

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
	SET	_Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		SELECT	DB.DBUID, DT.DBTypeName, DB.DBIP, DB.DBPort, DU.DBUserName, DU.DBUserPassword, DB.DBName, DT.DBConnectionCnt
		FROM		db_tb	AS DB
		INNER JOIN	db_type_tb	AS DT	ON DT.DBType = DB.DBType
		INNER JOIN	db_user_tb	AS DU	ON DU.DBUserUID = DB.DBUserUID
		WHERE	DB.WorldUID = _WorldUID;
		IF	FOUND_ROWS() <= 0	THEN SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Current Database: `mm_device_db`
--

CREATE DATABASE /*!32312 IF NOT EXISTS*/ `mm_device_db` /*!40100 DEFAULT CHARACTER SET latin1 */;

USE `mm_device_db`;

--
-- Table structure for table `department_tb`
--

DROP TABLE IF EXISTS `department_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `department_tb` (
  `DepartmentUID` tinyint(3) unsigned NOT NULL AUTO_INCREMENT,
  `DepartmentName` varchar(10) NOT NULL,
  PRIMARY KEY (`DepartmentUID`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `department_tb`
--

LOCK TABLES `department_tb` WRITE;
/*!40000 ALTER TABLE `department_tb` DISABLE KEYS */;
INSERT INTO `department_tb` VALUES (1,'LOMCN');
/*!40000 ALTER TABLE `department_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `deviceid_tb`
--

DROP TABLE IF EXISTS `deviceid_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `deviceid_tb` (
  `OSUID` tinyint(3) unsigned NOT NULL,
  `DeviceID` varchar(40) NOT NULL,
  `UserName` varchar(10) NOT NULL,
  `DepartmentUID` tinyint(3) unsigned NOT NULL,
  `Memo` varchar(20) DEFAULT '',
  PRIMARY KEY (`OSUID`,`DeviceID`),
  KEY `FK_deviceid_tb_department_tb_idx` (`DepartmentUID`),
  KEY `FK_deviceid_tb_os_tb_idx` (`OSUID`),
  CONSTRAINT `FK_deviceid_tb_department_tb` FOREIGN KEY (`DepartmentUID`) REFERENCES `department_tb` (`DepartmentUID`),
  CONSTRAINT `FK_deviceid_tb_os_tb` FOREIGN KEY (`OSUID`) REFERENCES `os_tb` (`OSUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `deviceid_tb`
--

LOCK TABLES `deviceid_tb` WRITE;
/*!40000 ALTER TABLE `deviceid_tb` DISABLE KEYS */;
INSERT INTO `deviceid_tb` VALUES (1,'00bd7fb8-821f-47b6-97e4-046bcf2d212e','Andriod',1,'Andriod Phone'),(2,'0CC8B9A0-151D-4588-8F5F-A63387A8BCE7','IOS',1,'IPhone');
/*!40000 ALTER TABLE `deviceid_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `os_tb`
--

DROP TABLE IF EXISTS `os_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `os_tb` (
  `OSUID` tinyint(3) unsigned NOT NULL AUTO_INCREMENT,
  `OSName` varchar(10) NOT NULL,
  PRIMARY KEY (`OSUID`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `os_tb`
--

LOCK TABLES `os_tb` WRITE;
/*!40000 ALTER TABLE `os_tb` DISABLE KEYS */;
INSERT INTO `os_tb` VALUES (1,'Android'),(2,'iOS'),(3,'PC');
/*!40000 ALTER TABLE `os_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `vw_deviceid`
--

DROP TABLE IF EXISTS `vw_deviceid`;
/*!50001 DROP VIEW IF EXISTS `vw_deviceid`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `vw_deviceid` AS SELECT 
 1 AS `OSUID`,
 1 AS `OSName`,
 1 AS `DeviceID`,
 1 AS `UserName`,
 1 AS `DepartmentUID`,
 1 AS `DepartmentName`*/;
SET character_set_client = @saved_cs_client;

--
-- Dumping events for database 'mm_device_db'
--

--
-- Dumping routines for database 'mm_device_db'
--
/*!50003 DROP PROCEDURE IF EXISTS `DepartmentList_Get_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `DepartmentList_Get_Front`(
	OUT _Result			INT	
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
    SET	_Result = -1;

	MAIN_ROUTINE:
    BEGIN
		SELECT DepartmentUID, DepartmentName	FROM department_tb;
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `DeviceIDCertification_Get_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `DeviceIDCertification_Get_Front`(
	IN	_OSUID		TINYINT UNSIGNED
,	IN	_DeviceID	VARCHAR(40)

,	OUT	_UserName		VARCHAR(10)
,	OUT _DepartmentUID	TINYINT UNSIGNED
-- ,	OUT	_Memo			VARCHAR(20)
,	OUT _Result			INT	
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
	SET	_UserName = '', _DepartmentUID = 0/*, _Memo = ''*/ , _Result = -1;

	MAIN_ROUTINE:
    BEGIN
		IF	_OSUID = 0 OR _DeviceID = ''	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
        SELECT OSUID	INTO _OSUID	FROM os_tb	WHERE OSUID = _OSUID;
        IF	FOUND_ROWS() <= 0	THEN SET _Result = 6;	LEAVE MAIN_ROUTINE;	END IF;	-- 정의되지 않은 값
        
        SELECT	UserName	, DepartmentUID	-- , Memo
        INTO	_UserName	, _DepartmentUID-- , _Memo
        FROM	deviceid_tb		
        WHERE	OSUID = _OSUID AND DeviceID = _DeviceID;
        IF	FOUND_ROWS() <= 0	THEN SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `DeviceIDList_Get_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `DeviceIDList_Get_Front`(
	OUT _Result			INT	
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET	_Result = -1;

	MAIN_ROUTINE:
    BEGIN
		SELECT OSUID, DeviceID, UserName, DepartmentUID, Memo	FROM deviceid_tb;
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `DeviceID_Delete_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `DeviceID_Delete_Front`(
	IN	_OSUID		TINYINT UNSIGNED
,	IN	_DeviceID	VARCHAR(40)

,	OUT _Result	INT	
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
	SET	_Result = -1;

	MAIN_ROUTINE:
    BEGIN
		IF	_OSUID = 0 OR _DeviceID = ''	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
        DELETE FROM deviceid_tb	WHERE OSUID = _OSUID AND DeviceID = _DeviceID;
        IF ROW_COUNT() <= 0	THEN SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `DeviceID_Insert_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `DeviceID_Insert_Front`(
	IN	_OSUID			TINYINT UNSIGNED
,	IN	_DeviceID		VARCHAR(40)
,	IN	_UserName		VARCHAR(10)
,	IN	_DepartmentUID	TINYINT UNSIGNED
,	IN	_Memo			VARCHAR(20)

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
	SET	_Result = -1;

	MAIN_ROUTINE:
    BEGIN
		IF	_OSUID = 0 OR _DeviceID = '' OR _UserName = '' OR _DepartmentUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
        SELECT OSUID	INTO _OSUID	FROM os_tb	WHERE OSUID = _OSUID;
        IF	FOUND_ROWS() <= 0	THEN SET _Result = 6;	LEAVE MAIN_ROUTINE;	END IF;	-- 정의되지 않은 값
        
        SELECT DepartmentUID	INTO _DepartmentUID	FROM department_tb	WHERE DepartmentUID = _DepartmentUID;
        IF	FOUND_ROWS() <= 0	THEN SET _Result = 6;	LEAVE MAIN_ROUTINE;	END IF;	-- 정의되지 않은 값
        
        INSERT IGNORE INTO deviceid_tb( OSUID, DeviceID, UserName, DepartmentUID, Memo )	VALUES( _OSUID, _DeviceID, _UserName, _DepartmentUID, _Memo );
        IF ROW_COUNT() <= 0	THEN SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;	-- 중복된 데이터 존재
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `OSList_Get_Front` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `OSList_Get_Front`(
	OUT _Result			INT	
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
    SET	_Result = -1;

	MAIN_ROUTINE:
    BEGIN
		SELECT OSUID, OSName	FROM os_tb;
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Current Database: `mm_user_db`
--

CREATE DATABASE /*!32312 IF NOT EXISTS*/ `mm_user_db` /*!40100 DEFAULT CHARACTER SET latin1 */;

USE `mm_user_db`;

--
-- Table structure for table `user_tb`
--

DROP TABLE IF EXISTS `user_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `user_tb` (
  `UserUID` bigint(20) NOT NULL AUTO_INCREMENT,
  `AccountUID` bigint(20) NOT NULL,
  `Username` varchar(45) NOT NULL,
  `PasswordHash` varchar(64) NOT NULL,
  `Email` varchar(100) NOT NULL,
  `Status` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`UserUID`),
  KEY `idx_user_tb_AccountUID_Username_PasswordHash` (`AccountUID`,`Username`,`PasswordHash`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user_tb`
--

LOCK TABLES `user_tb` WRITE;
/*!40000 ALTER TABLE `user_tb` DISABLE KEYS */;
INSERT INTO `user_tb` VALUES (1,1,'Gamemaster','ABA9796A63F9A96B21885A899240408C7783B91FCCAABE57482918D71FC5D5BD','ADMIN@LOMCN.net',0);
/*!40000 ALTER TABLE `user_tb` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`%`*/ /*!50003 TRIGGER accountuid_match
BEFORE INSERT ON mm_user_db.user_tb
FOR EACH ROW
BEGIN
    SET NEW.AccountUID = (SELECT AUTO_INCREMENT
                          FROM information_schema.TABLES
                          WHERE TABLE_SCHEMA = 'mm_user_db'
                          AND TABLE_NAME = 'user_tb');
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Dumping events for database 'mm_user_db'
--

--
-- Dumping routines for database 'mm_user_db'
--

--
-- Current Database: `mm_game_db_release`
--

CREATE DATABASE /*!32312 IF NOT EXISTS*/ `mm_game_db_release` /*!40100 DEFAULT CHARACTER SET latin1 */;

USE `mm_game_db_release`;

--
-- Table structure for table `account_auth_tb`
--

DROP TABLE IF EXISTS `account_auth_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `account_auth_tb` (
  `AccountUID` bigint(20) NOT NULL,
  `AuthKey` varchar(38) NOT NULL,
  `Expires` datetime NOT NULL,
  PRIMARY KEY (`AccountUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `account_auth_tb`
--

LOCK TABLES `account_auth_tb` WRITE;
/*!40000 ALTER TABLE `account_auth_tb` DISABLE KEYS */;
INSERT INTO `account_auth_tb` VALUES (1,'{1cb568a6-c5a6-4642-bf47-cc6fed01f497}','2025-03-24 21:06:00');
/*!40000 ALTER TABLE `account_auth_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `account_tb`
--

DROP TABLE IF EXISTS `account_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `account_tb` (
  `AccountUID` bigint(20) unsigned NOT NULL,
  `AccountName` varchar(50) NOT NULL,
  `Cash` int(10) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`AccountUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `account_tb`
--

LOCK TABLES `account_tb` WRITE;
/*!40000 ALTER TABLE `account_tb` DISABLE KEYS */;
INSERT INTO `account_tb` VALUES (1,'Gamemaster',0);
/*!40000 ALTER TABLE `account_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `achievement_tb`
--

DROP TABLE IF EXISTS `achievement_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `achievement_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `AchievementGroupIdx` smallint(5) unsigned NOT NULL,
  `AchievementGroupGrade` tinyint(3) unsigned NOT NULL DEFAULT '1',
  PRIMARY KEY (`CharacterUID`,`AchievementGroupIdx`),
  CONSTRAINT `FK_achievement_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `achievement_tb`
--

LOCK TABLES `achievement_tb` WRITE;
/*!40000 ALTER TABLE `achievement_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `achievement_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `blackiron_tb`
--

DROP TABLE IF EXISTS `blackiron_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `blackiron_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `BlackIron` int(10) NOT NULL DEFAULT '1',
  `LootingCnt` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `LastLootingTime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  PRIMARY KEY (`CharacterUID`),
  CONSTRAINT `FK_blackiron_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `blackiron_tb`
--

LOCK TABLES `blackiron_tb` WRITE;
/*!40000 ALTER TABLE `blackiron_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `blackiron_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `character_delete_tb`
--

DROP TABLE IF EXISTS `character_delete_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `character_delete_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `DeleteTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`CharacterUID`),
  CONSTRAINT `FK_character_delete_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `character_delete_tb`
--

LOCK TABLES `character_delete_tb` WRITE;
/*!40000 ALTER TABLE `character_delete_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `character_delete_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `character_guild_tb`
--

DROP TABLE IF EXISTS `character_guild_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `character_guild_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `GuildUID` int(10) unsigned NOT NULL,
  `MemberGrade` tinyint(3) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`),
  KEY `FK_character_guild_tb_guild_tb_idx` (`GuildUID`),
  CONSTRAINT `FK_character_guild_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`),
  CONSTRAINT `FK_character_guild_tb_guild_tb` FOREIGN KEY (`GuildUID`) REFERENCES `guild_tb` (`GuildUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `character_guild_tb`
--

LOCK TABLES `character_guild_tb` WRITE;
/*!40000 ALTER TABLE `character_guild_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `character_guild_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `character_tb`
--

DROP TABLE IF EXISTS `character_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `character_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `CharacterName` varchar(50) NOT NULL,
  `AccountUID` bigint(20) unsigned NOT NULL,
  `Class` tinyint(3) unsigned NOT NULL,
  `Lev` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `Exp` int(10) unsigned NOT NULL DEFAULT '0',
  `CurrentHP` int(10) unsigned NOT NULL,
  `CurrentMP` int(10) unsigned NOT NULL,
  `StageIdx` int(10) unsigned NOT NULL,
  `PositionX` float NOT NULL,
  `PositionY` float NOT NULL,
  `PositionZ` float NOT NULL,
  `Wonbo` int(10) NOT NULL DEFAULT '0',
  `Gold` bigint(20) NOT NULL DEFAULT '0',
  `CreateTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `LoginTime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `LogoutTime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `PlaytimeSec` int(10) unsigned NOT NULL DEFAULT '0',
  `CombatPoint` int(10) unsigned NOT NULL,
  `EnergyPoint` smallint(5) unsigned NOT NULL DEFAULT '0',
  `BlackIron` int(10) unsigned NOT NULL DEFAULT '0',
  `AncientCoin` bigint(20) NOT NULL,
  `ActionPoint` smallint(5) unsigned NOT NULL DEFAULT '0',
  `LastActionPointUpdateTime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `AwakenGrade` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `InvenExtendCnt` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `PKPoint` smallint(6) NOT NULL DEFAULT '0',
  `CostumeIdx` int(10) NOT NULL DEFAULT '0',
  PRIMARY KEY (`CharacterUID`),
  KEY `character_tb_AccountUID_fk_idx` (`AccountUID`),
  CONSTRAINT `FK_character_tb_account_tb` FOREIGN KEY (`AccountUID`) REFERENCES `account_tb` (`AccountUID`)
) ENGINE=InnoDB AUTO_INCREMENT=451 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `character_tb`
--

LOCK TABLES `character_tb` WRITE;
/*!40000 ALTER TABLE `character_tb` DISABLE KEYS */;
INSERT INTO `character_tb` VALUES (449,'Gamemaster',1,4,200,148834,9080,500,107001010,28230.4,-18107,-677.708,6666666,729194,'2025-01-26 19:58:06','2025-03-23 21:07:33','2025-03-23 21:07:28',15125,800000,65535,99999999,9223372036854775807,65535,'2025-01-26 19:58:36',0,0,4725,0);
/*!40000 ALTER TABLE `character_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `collectionbook_stagereward_tb`
--

DROP TABLE IF EXISTS `collectionbook_stagereward_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `collectionbook_stagereward_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `CollectionStageIdx` int(10) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`,`CollectionStageIdx`),
  CONSTRAINT `FK_collectionbook_stagereward_tb_collectionbook_tb` FOREIGN KEY (`CharacterUID`, `CollectionStageIdx`) REFERENCES `collectionbook_tb` (`CharacterUID`, `CollectionStageIdx`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `collectionbook_stagereward_tb`
--

LOCK TABLES `collectionbook_stagereward_tb` WRITE;
/*!40000 ALTER TABLE `collectionbook_stagereward_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `collectionbook_stagereward_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `collectionbook_tb`
--

DROP TABLE IF EXISTS `collectionbook_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `collectionbook_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `CollectionStageIdx` int(10) unsigned NOT NULL,
  `CollectionMonsterIdx` int(10) unsigned NOT NULL,
  `CollectionLev` tinyint(3) unsigned NOT NULL,
  `CollectionCnt` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`,`CollectionStageIdx`,`CollectionMonsterIdx`),
  KEY `FK_collectionbook_tb_character_tb_idx` (`CharacterUID`),
  CONSTRAINT `FK_collectionbook_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `collectionbook_tb`
--

LOCK TABLES `collectionbook_tb` WRITE;
/*!40000 ALTER TABLE `collectionbook_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `collectionbook_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `costume_tb`
--

DROP TABLE IF EXISTS `costume_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `costume_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `CostumeIdx` int(10) unsigned NOT NULL,
  `CostumeGrade` tinyint(3) unsigned NOT NULL,
  `HairColorIdx` int(10) unsigned NOT NULL,
  `ClothesColorIdx` int(10) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`,`CostumeIdx`),
  CONSTRAINT `FK_costume_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `costume_tb`
--

LOCK TABLES `costume_tb` WRITE;
/*!40000 ALTER TABLE `costume_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `costume_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `customize_tb`
--

DROP TABLE IF EXISTS `customize_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `customize_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `ElementType` tinyint(3) unsigned NOT NULL,
  `ElementValue` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `customize_tb`
--

LOCK TABLES `customize_tb` WRITE;
/*!40000 ALTER TABLE `customize_tb` DISABLE KEYS */;
INSERT INTO `customize_tb` VALUES (445,1,1),(445,2,240000),(445,3,261016),(445,4,245000),(445,5,262003),(445,6,263010),(445,7,266010),(445,8,264001),(445,9,265009),(445,10,0),(445,11,-1),(445,12,-11),(445,13,-4),(445,14,-100),(445,15,0),(445,16,0),(445,17,0),(445,18,0),(445,19,0),(445,20,0),(445,21,0),(445,22,0),(445,23,0),(445,24,0),(445,25,0),(445,26,0),(445,27,0),(445,28,0),(445,29,0),(445,30,0),(446,1,1),(446,2,210005),(446,3,261023),(446,4,215002),(446,5,262002),(446,6,263010),(446,7,266015),(446,8,264001),(446,9,265001),(446,10,0),(446,11,-34),(446,12,-41),(446,13,54),(446,14,-100),(446,15,0),(446,16,0),(446,17,0),(446,18,0),(446,19,0),(446,20,0),(446,21,0),(446,22,0),(446,23,0),(446,24,0),(446,25,0),(446,26,0),(446,27,0),(446,28,0),(446,29,0),(446,30,0),(447,1,1),(447,2,210005),(447,3,261023),(447,4,215002),(447,5,262002),(447,6,263010),(447,7,266015),(447,8,264001),(447,9,265001),(447,10,0),(447,11,-34),(447,12,-41),(447,13,54),(447,14,-100),(447,15,0),(447,16,0),(447,17,0),(447,18,0),(447,19,0),(447,20,0),(447,21,0),(447,22,0),(447,23,0),(447,24,0),(447,25,0),(447,26,0),(447,27,0),(447,28,0),(447,29,0),(447,30,0),(448,1,1),(448,2,240000),(448,3,261016),(448,4,245000),(448,5,262003),(448,6,263010),(448,7,266010),(448,8,264001),(448,9,265009),(448,10,0),(448,11,-1),(448,12,-11),(448,13,-4),(448,14,-100),(448,15,0),(448,16,0),(448,17,0),(448,18,0),(448,19,0),(448,20,0),(448,21,0),(448,22,0),(448,23,0),(448,24,0),(448,25,0),(448,26,0),(448,27,0),(448,28,0),(448,29,0),(448,30,0),(449,1,1),(449,2,240000),(449,3,261016),(449,4,245000),(449,5,262003),(449,6,263010),(449,7,266010),(449,8,264001),(449,9,265009),(449,10,0),(449,11,-1),(449,12,-11),(449,13,-4),(449,14,-100),(449,15,0),(449,16,0),(449,17,0),(449,18,0),(449,19,0),(449,20,0),(449,21,0),(449,22,0),(449,23,0),(449,24,0),(449,25,0),(449,26,0),(449,27,0),(449,28,0),(449,29,0),(449,30,0),(450,1,1),(450,2,240000),(450,3,261016),(450,4,245000),(450,5,262003),(450,6,263010),(450,7,266010),(450,8,264001),(450,9,265009),(450,10,0),(450,11,-1),(450,12,-11),(450,13,-4),(450,14,-100),(450,15,0),(450,16,0),(450,17,0),(450,18,0),(450,19,0),(450,20,0),(450,21,0),(450,22,0),(450,23,0),(450,24,0),(450,25,0),(450,26,0),(450,27,0),(450,28,0),(450,29,0),(450,30,0);
/*!40000 ALTER TABLE `customize_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `customtitle_tb`
--

DROP TABLE IF EXISTS `customtitle_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `customtitle_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `CustomTitle` varchar(12) NOT NULL,
  PRIMARY KEY (`CharacterUID`),
  CONSTRAINT `FK_customtitle_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `customtitle_tb`
--

LOCK TABLES `customtitle_tb` WRITE;
/*!40000 ALTER TABLE `customtitle_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `customtitle_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `equip_costume_hide_tb`
--

DROP TABLE IF EXISTS `equip_costume_hide_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `equip_costume_hide_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `CostumeEquipSlot` tinyint(3) unsigned NOT NULL,
  `IsHidden` tinyint(3) unsigned NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `equip_costume_hide_tb`
--

LOCK TABLES `equip_costume_hide_tb` WRITE;
/*!40000 ALTER TABLE `equip_costume_hide_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `equip_costume_hide_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `equip_costume_tb`
--

DROP TABLE IF EXISTS `equip_costume_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `equip_costume_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `CostumeEquipSlot` tinyint(3) unsigned NOT NULL,
  `CostumeIdx` int(10) unsigned NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `equip_costume_tb`
--

LOCK TABLES `equip_costume_tb` WRITE;
/*!40000 ALTER TABLE `equip_costume_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `equip_costume_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `equip_item_tb`
--

DROP TABLE IF EXISTS `equip_item_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `equip_item_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `ItemUID` bigint(20) unsigned NOT NULL,
  `EquipSlot` tinyint(3) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`,`EquipSlot`),
  KEY `FK_equip_item_tb_item_character_tb_idx` (`CharacterUID`,`ItemUID`),
  CONSTRAINT `FK_equip_item_tb_item_character_tb` FOREIGN KEY (`CharacterUID`, `ItemUID`) REFERENCES `item_character_tb` (`CharacterUID`, `ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `equip_item_tb`
--

LOCK TABLES `equip_item_tb` WRITE;
/*!40000 ALTER TABLE `equip_item_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `equip_item_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `equip_jewel_tb`
--

DROP TABLE IF EXISTS `equip_jewel_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `equip_jewel_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `EquipSlot` tinyint(3) unsigned NOT NULL,
  `JewelSlot` tinyint(3) unsigned NOT NULL,
  `JewelItemIdx` int(10) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`,`EquipSlot`,`JewelSlot`),
  CONSTRAINT `FK_equip_jewel_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `equip_jewel_tb`
--

LOCK TABLES `equip_jewel_tb` WRITE;
/*!40000 ALTER TABLE `equip_jewel_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `equip_jewel_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `equip_vehicle_tb`
--

DROP TABLE IF EXISTS `equip_vehicle_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `equip_vehicle_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `VehicleGroupId` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`),
  KEY `FK_equip_vehicle_tb_vehicle_tb_idx` (`CharacterUID`,`VehicleGroupId`),
  CONSTRAINT `FK_equip_vehicle_tb_vehicle_tb` FOREIGN KEY (`CharacterUID`, `VehicleGroupId`) REFERENCES `vehicle_tb` (`CharacterUID`, `VehicleGroupId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `equip_vehicle_tb`
--

LOCK TABLES `equip_vehicle_tb` WRITE;
/*!40000 ALTER TABLE `equip_vehicle_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `equip_vehicle_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `escape_position_tb`
--

DROP TABLE IF EXISTS `escape_position_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `escape_position_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `EscapeStageIdx` int(10) unsigned NOT NULL,
  `EscapePositionX` float NOT NULL,
  `EscapePositionY` float NOT NULL,
  `EscapePositionZ` float NOT NULL,
  PRIMARY KEY (`CharacterUID`),
  CONSTRAINT `FK_escape_position_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `escape_position_tb`
--

LOCK TABLES `escape_position_tb` WRITE;
/*!40000 ALTER TABLE `escape_position_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `escape_position_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `force_blood_tb`
--

DROP TABLE IF EXISTS `force_blood_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `force_blood_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `ForceIdx` smallint(5) unsigned NOT NULL,
  `BloodIdx` int(10) unsigned NOT NULL,
  `BloodLev` tinyint(3) unsigned NOT NULL DEFAULT '1',
  PRIMARY KEY (`CharacterUID`,`ForceIdx`,`BloodIdx`),
  CONSTRAINT `FK_force_blood_tb_force_tb` FOREIGN KEY (`CharacterUID`, `ForceIdx`) REFERENCES `force_tb` (`CharacterUID`, `ForceIdx`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `force_blood_tb`
--

LOCK TABLES `force_blood_tb` WRITE;
/*!40000 ALTER TABLE `force_blood_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `force_blood_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `force_tb`
--

DROP TABLE IF EXISTS `force_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `force_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `ForceIdx` smallint(5) unsigned NOT NULL,
  `SlumpExpireTime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  PRIMARY KEY (`CharacterUID`,`ForceIdx`),
  CONSTRAINT `FK_force_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `force_tb`
--

LOCK TABLES `force_tb` WRITE;
/*!40000 ALTER TABLE `force_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `force_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `guild_delete_tb`
--

DROP TABLE IF EXISTS `guild_delete_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `guild_delete_tb` (
  `GuildUID` int(10) unsigned NOT NULL,
  `DeleteTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`GuildUID`),
  KEY `FK_guild_delete_tb_guild_tb_idx` (`GuildUID`),
  CONSTRAINT `FK_guild_delete_tb_guild_tb` FOREIGN KEY (`GuildUID`) REFERENCES `guild_tb` (`GuildUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `guild_delete_tb`
--

LOCK TABLES `guild_delete_tb` WRITE;
/*!40000 ALTER TABLE `guild_delete_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `guild_delete_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `guild_mark_tb`
--

DROP TABLE IF EXISTS `guild_mark_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `guild_mark_tb` (
  `GuildUID` int(10) unsigned NOT NULL,
  `MarkType` tinyint(3) unsigned NOT NULL,
  `MarkIdx` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`GuildUID`,`MarkType`),
  CONSTRAINT `FK_guild_mark_tb_guild_tb` FOREIGN KEY (`GuildUID`) REFERENCES `guild_tb` (`GuildUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `guild_mark_tb`
--

LOCK TABLES `guild_mark_tb` WRITE;
/*!40000 ALTER TABLE `guild_mark_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `guild_mark_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `guild_membergradename_tb`
--

DROP TABLE IF EXISTS `guild_membergradename_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `guild_membergradename_tb` (
  `GuildUID` int(10) unsigned NOT NULL,
  `MemberGrade` tinyint(3) unsigned NOT NULL,
  `MemberGradeName` varchar(20) NOT NULL,
  PRIMARY KEY (`GuildUID`,`MemberGrade`),
  CONSTRAINT `FK_guild_membergradename_tb_guild_tb` FOREIGN KEY (`GuildUID`) REFERENCES `guild_tb` (`GuildUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `guild_membergradename_tb`
--

LOCK TABLES `guild_membergradename_tb` WRITE;
/*!40000 ALTER TABLE `guild_membergradename_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `guild_membergradename_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `guild_tb`
--

DROP TABLE IF EXISTS `guild_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `guild_tb` (
  `GuildUID` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `GuildName` varchar(16) NOT NULL,
  `GuildNotice` varchar(150) NOT NULL,
  `GuildPR` varchar(150) NOT NULL,
  PRIMARY KEY (`GuildUID`),
  FULLTEXT KEY `guild_tb_GuildName_idx` (`GuildName`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `guild_tb`
--

LOCK TABLES `guild_tb` WRITE;
/*!40000 ALTER TABLE `guild_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `guild_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `guild_war_tb`
--

DROP TABLE IF EXISTS `guild_war_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `guild_war_tb` (
  `DeclareGuildUID` int(10) unsigned NOT NULL,
  `TargetGuildUID` int(10) unsigned NOT NULL,
  PRIMARY KEY (`DeclareGuildUID`,`TargetGuildUID`),
  KEY `FK_guild_war_tb_guild_tb_01_idx` (`TargetGuildUID`),
  CONSTRAINT `FK_guild_war_tb_guild_tb_01` FOREIGN KEY (`DeclareGuildUID`) REFERENCES `guild_tb` (`GuildUID`),
  CONSTRAINT `FK_guild_war_tb_guild_tb_02` FOREIGN KEY (`TargetGuildUID`) REFERENCES `guild_tb` (`GuildUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `guild_war_tb`
--

LOCK TABLES `guild_war_tb` WRITE;
/*!40000 ALTER TABLE `guild_war_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `guild_war_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `holystuff_tb`
--

DROP TABLE IF EXISTS `holystuff_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `holystuff_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `HolyStuffIdx` smallint(5) unsigned NOT NULL,
  `HolyStuffLev` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `HolyStuffExp` int(10) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`CharacterUID`,`HolyStuffIdx`),
  KEY `FK_holystuff_tb_character_tb_idx` (`CharacterUID`),
  CONSTRAINT `FK_holystuff_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `holystuff_tb`
--

LOCK TABLES `holystuff_tb` WRITE;
/*!40000 ALTER TABLE `holystuff_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `holystuff_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `item_binding_tb`
--

DROP TABLE IF EXISTS `item_binding_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `item_binding_tb` (
  `ItemUID` bigint(20) unsigned NOT NULL,
  `EquipBinding` tinyint(3) unsigned NOT NULL,
  PRIMARY KEY (`ItemUID`),
  CONSTRAINT `FK_item_binding_tb_item_character_tb` FOREIGN KEY (`ItemUID`) REFERENCES `item_character_tb` (`ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `item_binding_tb`
--

LOCK TABLES `item_binding_tb` WRITE;
/*!40000 ALTER TABLE `item_binding_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `item_binding_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `item_character_tb`
--

DROP TABLE IF EXISTS `item_character_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `item_character_tb` (
  `ItemUID` bigint(20) unsigned NOT NULL,
  `CharacterUID` bigint(20) unsigned NOT NULL,
  PRIMARY KEY (`ItemUID`),
  KEY `item_character_tb_CharacterUID_fk_idx` (`CharacterUID`),
  CONSTRAINT `FK_item_character_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`),
  CONSTRAINT `FK_item_character_tb_item_tb` FOREIGN KEY (`ItemUID`) REFERENCES `item_tb` (`ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `item_character_tb`
--

LOCK TABLES `item_character_tb` WRITE;
/*!40000 ALTER TABLE `item_character_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `item_character_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `item_delete_tb`
--

DROP TABLE IF EXISTS `item_delete_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `item_delete_tb` (
  `ItemUID` bigint(20) unsigned NOT NULL,
  `DeleteTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`ItemUID`),
  CONSTRAINT `FK_item_delete_tb_item_tb` FOREIGN KEY (`ItemUID`) REFERENCES `item_tb` (`ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `item_delete_tb`
--

LOCK TABLES `item_delete_tb` WRITE;
/*!40000 ALTER TABLE `item_delete_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `item_delete_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `item_holdoption_tb`
--

DROP TABLE IF EXISTS `item_holdoption_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `item_holdoption_tb` (
  `ItemUID` bigint(20) unsigned NOT NULL,
  `OptionSlot` tinyint(3) unsigned NOT NULL,
  `OptionIdx` int(10) unsigned NOT NULL,
  `OptionValue` int(10) unsigned NOT NULL,
  PRIMARY KEY (`OptionSlot`,`ItemUID`),
  KEY `FK_item_holdoption_tb_item_character_tb_idx` (`ItemUID`),
  CONSTRAINT `FK_item_holdoption_tb_item_character_tb` FOREIGN KEY (`ItemUID`) REFERENCES `item_character_tb` (`ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `item_holdoption_tb`
--

LOCK TABLES `item_holdoption_tb` WRITE;
/*!40000 ALTER TABLE `item_holdoption_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `item_holdoption_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `item_jewel_tb`
--

DROP TABLE IF EXISTS `item_jewel_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `item_jewel_tb` (
  `ItemUID` bigint(20) unsigned NOT NULL,
  `JewelSlot` tinyint(3) unsigned NOT NULL,
  `JewelItemIdx` int(10) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`ItemUID`,`JewelSlot`),
  CONSTRAINT `FK_item_jewel_tb_item_tb` FOREIGN KEY (`ItemUID`) REFERENCES `item_tb` (`ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `item_jewel_tb`
--

LOCK TABLES `item_jewel_tb` WRITE;
/*!40000 ALTER TABLE `item_jewel_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `item_jewel_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `item_option_tb`
--

DROP TABLE IF EXISTS `item_option_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `item_option_tb` (
  `ItemUID` bigint(20) unsigned NOT NULL,
  `OptionSlot` tinyint(3) unsigned NOT NULL,
  `OptionIdx` smallint(5) unsigned NOT NULL,
  `OptionValue` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`ItemUID`,`OptionSlot`),
  CONSTRAINT `FK_item_option_tb_item_tb` FOREIGN KEY (`ItemUID`) REFERENCES `item_tb` (`ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `item_option_tb`
--

LOCK TABLES `item_option_tb` WRITE;
/*!40000 ALTER TABLE `item_option_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `item_option_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `item_polishing_tb`
--

DROP TABLE IF EXISTS `item_polishing_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `item_polishing_tb` (
  `ItemUID` bigint(20) unsigned NOT NULL,
  `PolishingSlot` tinyint(3) unsigned NOT NULL,
  `PolishingCnt` tinyint(3) unsigned NOT NULL,
  PRIMARY KEY (`ItemUID`,`PolishingSlot`),
  CONSTRAINT `FK_item_polishing_tb_item_tb` FOREIGN KEY (`ItemUID`) REFERENCES `item_tb` (`ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `item_polishing_tb`
--

LOCK TABLES `item_polishing_tb` WRITE;
/*!40000 ALTER TABLE `item_polishing_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `item_polishing_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `item_reinforce_tb`
--

DROP TABLE IF EXISTS `item_reinforce_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `item_reinforce_tb` (
  `ItemUID` bigint(20) unsigned NOT NULL,
  `ReinforceLev` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `ReinforceExp` int(10) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`ItemUID`),
  CONSTRAINT `FK_item_reinforce_tb_item_tb` FOREIGN KEY (`ItemUID`) REFERENCES `item_tb` (`ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `item_reinforce_tb`
--

LOCK TABLES `item_reinforce_tb` WRITE;
/*!40000 ALTER TABLE `item_reinforce_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `item_reinforce_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `item_smelting_tb`
--

DROP TABLE IF EXISTS `item_smelting_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `item_smelting_tb` (
  `ItemUID` bigint(20) unsigned NOT NULL,
  `SmeltingLev` tinyint(3) unsigned NOT NULL DEFAULT '1',
  PRIMARY KEY (`ItemUID`),
  CONSTRAINT `FK_item_smelting_tb_item_tb` FOREIGN KEY (`ItemUID`) REFERENCES `item_tb` (`ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `item_smelting_tb`
--

LOCK TABLES `item_smelting_tb` WRITE;
/*!40000 ALTER TABLE `item_smelting_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `item_smelting_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `item_stack_tb`
--

DROP TABLE IF EXISTS `item_stack_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `item_stack_tb` (
  `ItemUID` bigint(20) unsigned NOT NULL,
  `StackCnt` mediumint(8) NOT NULL DEFAULT '1',
  PRIMARY KEY (`ItemUID`),
  CONSTRAINT `FK_item_stack_tb_item_tb` FOREIGN KEY (`ItemUID`) REFERENCES `item_tb` (`ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `item_stack_tb`
--

LOCK TABLES `item_stack_tb` WRITE;
/*!40000 ALTER TABLE `item_stack_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `item_stack_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `item_tb`
--

DROP TABLE IF EXISTS `item_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `item_tb` (
  `ItemUID` bigint(20) unsigned NOT NULL DEFAULT '0',
  `ItemIdx` int(11) unsigned NOT NULL,
  `IsLock` tinyint(3) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`ItemUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `item_tb`
--

LOCK TABLES `item_tb` WRITE;
/*!40000 ALTER TABLE `item_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `item_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `mail_itemidx_tb`
--

DROP TABLE IF EXISTS `mail_itemidx_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `mail_itemidx_tb` (
  `MailUID` bigint(20) unsigned NOT NULL,
  `AttachSlot` tinyint(3) unsigned NOT NULL,
  `ItemIdx` int(10) unsigned NOT NULL,
  `StackCnt` mediumint(8) unsigned NOT NULL,
  PRIMARY KEY (`MailUID`,`AttachSlot`),
  KEY `FK_mail_itemidx_tb_mail_tb_idx` (`MailUID`),
  CONSTRAINT `FK_mail_itemidx_tb_mail_tb` FOREIGN KEY (`MailUID`) REFERENCES `mail_tb` (`MailUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `mail_itemidx_tb`
--

LOCK TABLES `mail_itemidx_tb` WRITE;
/*!40000 ALTER TABLE `mail_itemidx_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `mail_itemidx_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `mail_itemuid_tb`
--

DROP TABLE IF EXISTS `mail_itemuid_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `mail_itemuid_tb` (
  `MailUID` bigint(20) unsigned NOT NULL,
  `AttachSlot` tinyint(3) unsigned NOT NULL,
  `ItemUID` bigint(20) unsigned NOT NULL,
  PRIMARY KEY (`MailUID`,`AttachSlot`),
  UNIQUE KEY `UK_mail_itemuid_tb_ItemUID` (`MailUID`,`ItemUID`),
  KEY `FK_mail_itemuid_tb_item_tb_idx` (`ItemUID`),
  CONSTRAINT `FK_mail_itemuid_tb_item_tb` FOREIGN KEY (`ItemUID`) REFERENCES `item_tb` (`ItemUID`),
  CONSTRAINT `FK_mail_itemuid_tb_mail_tb` FOREIGN KEY (`MailUID`) REFERENCES `mail_tb` (`MailUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `mail_itemuid_tb`
--

LOCK TABLES `mail_itemuid_tb` WRITE;
/*!40000 ALTER TABLE `mail_itemuid_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `mail_itemuid_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `mail_money_tb`
--

DROP TABLE IF EXISTS `mail_money_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `mail_money_tb` (
  `MailUID` bigint(20) unsigned NOT NULL,
  `AttachSlot` tinyint(3) unsigned NOT NULL,
  `MoneyType` tinyint(3) unsigned NOT NULL,
  `Money` bigint(20) unsigned NOT NULL,
  PRIMARY KEY (`MailUID`,`AttachSlot`),
  CONSTRAINT `FK_mail_money_tb_mail_tb` FOREIGN KEY (`MailUID`) REFERENCES `mail_tb` (`MailUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `mail_money_tb`
--

LOCK TABLES `mail_money_tb` WRITE;
/*!40000 ALTER TABLE `mail_money_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `mail_money_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `mail_tb`
--

DROP TABLE IF EXISTS `mail_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `mail_tb` (
  `MailUID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `ReceiveCharacterUID` bigint(20) unsigned NOT NULL,
  `SenderIdx` smallint(3) unsigned NOT NULL,
  `TitleIdx` smallint(3) unsigned NOT NULL,
  `ContentsIdx` smallint(3) unsigned NOT NULL,
  `ExpiryTime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  `MailRead` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `Deleted` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `TitleText` varchar(36) DEFAULT '',
  `ContentsText` varchar(300) DEFAULT '',
  PRIMARY KEY (`MailUID`),
  KEY `FK_mail_tb_character_tb_idx` (`ReceiveCharacterUID`),
  CONSTRAINT `FK_mail_tb_character_tb` FOREIGN KEY (`ReceiveCharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `mail_tb`
--

LOCK TABLES `mail_tb` WRITE;
/*!40000 ALTER TABLE `mail_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `mail_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `mastery_tb`
--

DROP TABLE IF EXISTS `mastery_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `mastery_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `MasterySlot` tinyint(3) unsigned NOT NULL,
  `MasteryCnt` tinyint(3) unsigned NOT NULL DEFAULT '1',
  PRIMARY KEY (`CharacterUID`,`MasterySlot`),
  CONSTRAINT `FK_equip_mastery_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `mastery_tb`
--

LOCK TABLES `mastery_tb` WRITE;
/*!40000 ALTER TABLE `mastery_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `mastery_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `occupation_tb`
--

DROP TABLE IF EXISTS `occupation_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `occupation_tb` (
  `OccupationIdx` smallint(5) unsigned NOT NULL,
  `GuildUID` int(10) unsigned NOT NULL,
  `ExpiryTime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',
  PRIMARY KEY (`OccupationIdx`),
  KEY `FK_occupation_tb_guild_tb_idx` (`GuildUID`),
  CONSTRAINT `FK_occupation_tb_guild_tb` FOREIGN KEY (`GuildUID`) REFERENCES `guild_tb` (`GuildUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `occupation_tb`
--

LOCK TABLES `occupation_tb` WRITE;
/*!40000 ALTER TABLE `occupation_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `occupation_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `playdata_tb`
--

DROP TABLE IF EXISTS `playdata_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `playdata_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `PlayDataIdx` smallint(5) unsigned NOT NULL,
  `PlayDataValue` bigint(20) NOT NULL,
  PRIMARY KEY (`CharacterUID`,`PlayDataIdx`),
  CONSTRAINT `FK_playdata_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `playdata_tb`
--

LOCK TABLES `playdata_tb` WRITE;
/*!40000 ALTER TABLE `playdata_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `playdata_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `product_buy_cnt_account_tb`
--

DROP TABLE IF EXISTS `product_buy_cnt_account_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `product_buy_cnt_account_tb` (
  `AccountUID` bigint(20) unsigned NOT NULL,
  `ProductIdx` int(10) unsigned NOT NULL,
  `BuyCount` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `LastBuyTime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `product_buy_cnt_account_tb`
--

LOCK TABLES `product_buy_cnt_account_tb` WRITE;
/*!40000 ALTER TABLE `product_buy_cnt_account_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `product_buy_cnt_account_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `product_buy_cnt_character_tb`
--

DROP TABLE IF EXISTS `product_buy_cnt_character_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `product_buy_cnt_character_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `ProductIdx` int(10) unsigned NOT NULL,
  `BuyCount` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `LastBuyTime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `product_buy_cnt_character_tb`
--

LOCK TABLES `product_buy_cnt_character_tb` WRITE;
/*!40000 ALTER TABLE `product_buy_cnt_character_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `product_buy_cnt_character_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `quest_daily_list_tb`
--

DROP TABLE IF EXISTS `quest_daily_list_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `quest_daily_list_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `QuestIdx` int(10) unsigned NOT NULL,
  `State` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `QuestValue` tinyint(3) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`,`QuestIdx`),
  CONSTRAINT `FK_quest_daily_list_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `quest_daily_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `quest_daily_list_tb`
--

LOCK TABLES `quest_daily_list_tb` WRITE;
/*!40000 ALTER TABLE `quest_daily_list_tb` DISABLE KEYS */;
INSERT INTO `quest_daily_list_tb` VALUES (449,10601,1,0),(449,10602,1,0),(449,10603,1,0),(449,10604,1,0),(449,10605,1,0),(449,10606,1,0),(449,10607,1,0),(449,10608,1,0),(449,10609,1,0),(449,10610,1,0);
/*!40000 ALTER TABLE `quest_daily_list_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `quest_daily_tb`
--

DROP TABLE IF EXISTS `quest_daily_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `quest_daily_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `ListReceiveTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `PlusRewardReceiveCnt` tinyint(3) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`CharacterUID`),
  CONSTRAINT `FK_quest_daily_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `quest_daily_tb`
--

LOCK TABLES `quest_daily_tb` WRITE;
/*!40000 ALTER TABLE `quest_daily_tb` DISABLE KEYS */;
INSERT INTO `quest_daily_tb` VALUES (449,'2025-03-23 20:35:34',0);
/*!40000 ALTER TABLE `quest_daily_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `quest_main_tb`
--

DROP TABLE IF EXISTS `quest_main_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `quest_main_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `QuestIdx` int(10) unsigned NOT NULL,
  `State` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `QuestValue` int(10) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`),
  CONSTRAINT `FK_quest_main_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `quest_main_tb`
--

LOCK TABLES `quest_main_tb` WRITE;
/*!40000 ALTER TABLE `quest_main_tb` DISABLE KEYS */;
INSERT INTO `quest_main_tb` VALUES (449,109207300,1,0);
/*!40000 ALTER TABLE `quest_main_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `quest_sub_clearcnt_tb`
--

DROP TABLE IF EXISTS `quest_sub_clearcnt_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `quest_sub_clearcnt_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `QuestIdx` int(10) unsigned NOT NULL,
  `ClearCnt` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `ClearTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`CharacterUID`,`QuestIdx`),
  CONSTRAINT `FK_quest_sub_clearcnt_tb_quest_sub_tb` FOREIGN KEY (`CharacterUID`, `QuestIdx`) REFERENCES `quest_sub_tb` (`CharacterUID`, `QuestIdx`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `quest_sub_clearcnt_tb`
--

LOCK TABLES `quest_sub_clearcnt_tb` WRITE;
/*!40000 ALTER TABLE `quest_sub_clearcnt_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `quest_sub_clearcnt_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `quest_sub_tb`
--

DROP TABLE IF EXISTS `quest_sub_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `quest_sub_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `QuestIdx` int(10) unsigned NOT NULL,
  `State` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `QuestValue` int(10) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`,`QuestIdx`),
  CONSTRAINT `FK_quest_sub_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `quest_sub_tb`
--

LOCK TABLES `quest_sub_tb` WRITE;
/*!40000 ALTER TABLE `quest_sub_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `quest_sub_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `reward_tb`
--

DROP TABLE IF EXISTS `reward_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `reward_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `RewardIdx` smallint(5) unsigned NOT NULL,
  `RewardReceiveCnt` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `LastReceiveTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`CharacterUID`,`RewardIdx`),
  CONSTRAINT `FK_reward_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `reward_tb`
--

LOCK TABLES `reward_tb` WRITE;
/*!40000 ALTER TABLE `reward_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `reward_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `skill_active_tb`
--

DROP TABLE IF EXISTS `skill_active_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `skill_active_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `ActiveIdx` mediumint(8) unsigned NOT NULL,
  `ActiveLev` tinyint(3) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`,`ActiveIdx`),
  CONSTRAINT `FK_skill_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `skill_active_tb`
--

LOCK TABLES `skill_active_tb` WRITE;
/*!40000 ALTER TABLE `skill_active_tb` DISABLE KEYS */;
INSERT INTO `skill_active_tb` VALUES (449,4104,1),(449,4105,1),(449,4107,1),(449,4108,1),(449,4109,1),(449,4110,1),(449,4111,1),(449,4112,1),(449,4113,1);
/*!40000 ALTER TABLE `skill_active_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `skill_deck_tb`
--

DROP TABLE IF EXISTS `skill_deck_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `skill_deck_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `DeckNum` tinyint(3) unsigned NOT NULL,
  `SkillSlot` tinyint(3) unsigned NOT NULL,
  `ActiveIdx` int(10) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`,`SkillSlot`,`DeckNum`),
  KEY `FK_skill_deck_tb_skill_tb_idx` (`CharacterUID`,`ActiveIdx`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `skill_deck_tb`
--

LOCK TABLES `skill_deck_tb` WRITE;
/*!40000 ALTER TABLE `skill_deck_tb` DISABLE KEYS */;
INSERT INTO `skill_deck_tb` VALUES (449,2,4,4104),(449,2,3,4105),(449,1,6,4107),(449,2,1,4108),(449,2,5,4109),(449,2,6,4110),(449,2,2,4111),(449,1,5,4112);
/*!40000 ALTER TABLE `skill_deck_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `skill_passive_tb`
--

DROP TABLE IF EXISTS `skill_passive_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `skill_passive_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `PassiveGroupIdx` mediumint(8) unsigned NOT NULL,
  `PassiveIdx` mediumint(8) unsigned NOT NULL,
  `PassiveLev` tinyint(3) unsigned NOT NULL DEFAULT '1',
  PRIMARY KEY (`CharacterUID`,`PassiveGroupIdx`,`PassiveIdx`),
  CONSTRAINT `FK_skill_passive_tb_skill_passivegroup_tb` FOREIGN KEY (`CharacterUID`, `PassiveGroupIdx`) REFERENCES `skill_passivegroup_tb` (`CharacterUID`, `PassiveGroupIdx`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `skill_passive_tb`
--

LOCK TABLES `skill_passive_tb` WRITE;
/*!40000 ALTER TABLE `skill_passive_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `skill_passive_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `skill_passivegroup_tb`
--

DROP TABLE IF EXISTS `skill_passivegroup_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `skill_passivegroup_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `PassiveGroupIdx` mediumint(8) unsigned NOT NULL,
  `PassiveGroupLev` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `PassiveGroupExp` smallint(5) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`CharacterUID`,`PassiveGroupIdx`),
  CONSTRAINT `FK_skill_passivegroup_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `skill_passivegroup_tb`
--

LOCK TABLES `skill_passivegroup_tb` WRITE;
/*!40000 ALTER TABLE `skill_passivegroup_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `skill_passivegroup_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `treasure_lev_tb`
--

DROP TABLE IF EXISTS `treasure_lev_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `treasure_lev_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `TreasureIdx` smallint(5) unsigned NOT NULL,
  `TreasureLev` tinyint(3) unsigned NOT NULL DEFAULT '1',
  PRIMARY KEY (`CharacterUID`,`TreasureIdx`),
  CONSTRAINT `FK_treasure_lev_tb_treasure_meterial_tb` FOREIGN KEY (`CharacterUID`, `TreasureIdx`) REFERENCES `treasure_meterial_tb` (`CharacterUID`, `TreasureIdx`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `treasure_lev_tb`
--

LOCK TABLES `treasure_lev_tb` WRITE;
/*!40000 ALTER TABLE `treasure_lev_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `treasure_lev_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `treasure_meterial_tb`
--

DROP TABLE IF EXISTS `treasure_meterial_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `treasure_meterial_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `TreasureIdx` smallint(5) unsigned NOT NULL,
  `MeterialSlot` tinyint(3) unsigned NOT NULL,
  PRIMARY KEY (`CharacterUID`,`TreasureIdx`,`MeterialSlot`),
  CONSTRAINT `FK_treasure_meterial_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `treasure_meterial_tb`
--

LOCK TABLES `treasure_meterial_tb` WRITE;
/*!40000 ALTER TABLE `treasure_meterial_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `treasure_meterial_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tutorial_clear_tb`
--

DROP TABLE IF EXISTS `tutorial_clear_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tutorial_clear_tb` (
  `AccountUID` bigint(20) unsigned NOT NULL,
  `TutorialGroupIdx` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`AccountUID`,`TutorialGroupIdx`),
  CONSTRAINT `FK_tutorial_clear_tb_account_tb` FOREIGN KEY (`AccountUID`) REFERENCES `account_tb` (`AccountUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tutorial_clear_tb`
--

LOCK TABLES `tutorial_clear_tb` WRITE;
/*!40000 ALTER TABLE `tutorial_clear_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `tutorial_clear_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `uid_tb`
--

DROP TABLE IF EXISTS `uid_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `uid_tb` (
  `UIDType` tinyint(3) unsigned NOT NULL,
  `StartUID` bigint(20) unsigned NOT NULL,
  `EndUID` bigint(20) unsigned NOT NULL,
  `CreateTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`UIDType`,`StartUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `uid_tb`
--

LOCK TABLES `uid_tb` WRITE;
/*!40000 ALTER TABLE `uid_tb` DISABLE KEYS */;
INSERT INTO `uid_tb` VALUES (1,1,200,'2018-04-06 01:11:59'),(1,201,400,'2018-04-06 01:12:03'),(1,401,600,'2018-04-06 02:00:50'),(1,601,800,'2018-04-06 02:38:38'),(1,801,1000,'2018-04-06 02:53:25'),(1,1001,1200,'2018-04-06 03:11:21'),(1,1201,1400,'2018-04-06 04:54:57'),(1,1401,1600,'2018-04-06 04:55:01'),(1,1601,1800,'2018-04-06 05:13:58'),(1,1801,2000,'2018-04-06 05:56:20'),(1,2001,2200,'2018-04-06 06:32:41'),(1,2201,2400,'2018-04-06 07:00:30'),(1,2401,2600,'2018-04-06 07:43:23'),(1,2601,2800,'2018-04-06 08:09:28'),(1,2801,3000,'2018-04-06 08:27:39'),(1,3001,3200,'2018-04-06 08:37:26'),(1,3201,3400,'2018-04-06 08:43:53'),(1,3401,3600,'2018-04-06 08:43:57'),(1,3601,3800,'2018-04-06 08:57:04'),(1,3801,4000,'2018-04-06 09:12:07'),(1,4001,4200,'2018-04-06 09:26:31'),(1,4201,4400,'2018-04-06 10:28:56'),(1,4401,4600,'2018-04-06 12:13:09'),(1,4601,4800,'2018-04-06 14:35:33'),(1,4801,5000,'2018-04-07 15:27:07'),(1,5001,5200,'2018-04-09 00:46:25'),(1,5201,5400,'2018-04-09 05:39:17'),(1,5401,5600,'2018-04-09 08:50:47'),(1,5601,5800,'2018-04-10 05:52:48'),(1,5801,6000,'2018-04-10 08:42:50'),(1,6001,6200,'2018-04-11 01:35:16'),(1,6201,6400,'2018-04-11 09:28:59'),(1,6401,6600,'2018-04-11 09:29:03'),(1,6601,6800,'2018-04-12 05:01:57'),(1,6801,7000,'2018-04-12 05:02:01'),(1,7001,7200,'2018-04-12 05:40:08'),(1,7201,7400,'2018-04-12 06:02:16'),(1,7401,7600,'2018-04-12 06:23:09'),(1,7601,7800,'2018-04-12 06:25:16'),(1,7801,8000,'2018-04-12 06:39:05'),(1,8001,8200,'2018-04-12 06:58:43'),(1,8201,8400,'2018-04-12 07:20:11'),(1,8401,8600,'2018-04-12 07:39:42'),(1,8601,8800,'2018-04-12 07:56:34'),(1,8801,9000,'2018-04-12 08:09:14'),(1,9001,9200,'2018-04-12 08:22:16'),(1,9201,9400,'2018-04-12 08:34:50'),(1,9401,9600,'2018-04-12 08:45:14'),(1,9601,9800,'2018-04-12 08:59:34'),(1,9801,10000,'2018-04-12 09:17:11'),(1,10001,10200,'2018-04-12 09:40:12'),(1,10201,10400,'2018-04-12 11:33:26'),(1,10401,10600,'2018-04-12 12:33:59'),(1,10601,10800,'2018-04-12 14:02:07'),(1,10801,11000,'2018-04-12 15:17:54'),(1,11001,11200,'2018-04-13 00:25:30'),(1,11201,11400,'2018-04-13 01:28:13'),(1,11401,11600,'2018-04-13 02:01:18'),(1,11601,11800,'2018-04-13 02:31:15'),(1,11801,12000,'2018-04-13 03:23:42'),(1,12001,12200,'2018-04-13 04:33:58'),(1,12201,12400,'2018-04-13 05:10:46'),(1,12401,12600,'2018-04-13 05:35:30'),(1,12601,12800,'2018-04-13 05:59:56'),(1,12801,13000,'2018-04-13 06:32:23'),(1,13001,13200,'2018-04-13 06:35:02'),(1,13201,13400,'2018-04-13 06:51:04'),(1,13401,13600,'2018-04-13 07:11:36'),(1,13601,13800,'2018-04-13 07:11:40'),(1,13801,14000,'2018-04-13 07:48:49'),(1,14001,14200,'2018-04-13 08:13:20'),(1,14201,14400,'2018-04-13 08:30:03'),(1,14401,14600,'2018-04-13 08:45:52'),(1,14601,14800,'2018-04-13 09:01:35'),(1,14801,15000,'2018-04-13 09:22:41'),(1,15001,15200,'2018-04-13 13:40:50'),(1,15201,15400,'2018-04-14 15:11:19'),(1,15401,15600,'2018-04-16 05:49:28'),(1,15601,15800,'2018-04-16 23:53:05'),(1,15801,16000,'2018-04-17 04:22:12'),(1,16001,16200,'2018-04-17 07:48:40'),(1,16201,16400,'2018-04-18 03:30:39'),(1,16401,16600,'2018-04-18 05:50:21'),(1,16601,16800,'2018-04-18 07:13:57'),(1,16801,17000,'2018-04-19 03:03:42'),(1,17001,17200,'2018-04-19 05:02:05'),(1,17201,17400,'2018-04-21 13:49:47'),(1,17401,17600,'2018-04-24 02:08:02'),(1,17601,17800,'2018-04-25 08:46:55'),(1,17801,18000,'2018-05-04 01:02:21'),(1,18001,18200,'2018-05-08 05:25:44'),(1,18201,18400,'2018-05-09 01:00:40'),(1,18401,18600,'2018-05-09 01:00:44'),(1,18601,18800,'2018-05-09 02:47:57'),(1,18801,19000,'2018-05-09 02:48:01'),(1,19001,19200,'2018-05-09 04:44:17'),(1,19201,19400,'2018-05-09 04:44:21'),(1,19401,19600,'2018-05-09 05:36:36'),(1,19601,19800,'2018-05-09 05:36:40'),(1,19801,20000,'2018-05-09 08:24:41'),(1,20001,20200,'2018-05-09 08:24:45'),(1,20201,20400,'2018-05-09 09:26:17'),(1,20401,20600,'2018-05-09 09:26:21'),(1,20601,20800,'2018-05-09 09:59:17'),(1,20801,21000,'2018-05-09 09:59:21'),(1,21001,21200,'2018-05-10 01:58:14'),(1,21201,21400,'2018-05-10 01:58:18'),(1,21401,21600,'2018-05-10 02:56:50'),(1,21601,21800,'2018-05-10 02:56:54'),(1,21801,22000,'2018-05-10 05:06:42'),(1,22001,22200,'2018-05-10 05:06:46'),(1,22201,22400,'2018-05-10 06:51:21'),(1,22401,22600,'2018-05-10 06:51:25'),(1,22601,22800,'2018-05-10 07:09:45'),(1,22801,23000,'2018-05-10 07:09:48'),(1,23001,23200,'2018-05-10 07:54:20'),(1,23201,23400,'2018-05-10 07:54:24'),(1,23401,23600,'2018-05-10 10:15:12'),(1,23601,23800,'2018-05-10 10:15:16'),(1,23801,24000,'2018-05-11 01:45:38'),(1,24001,24200,'2018-05-11 01:45:41'),(1,24201,24400,'2018-05-11 04:40:58'),(1,24401,24600,'2018-05-11 04:41:02'),(1,24601,24800,'2018-05-11 04:59:14'),(1,24801,25000,'2018-05-11 04:59:18'),(1,25001,25200,'2018-05-11 05:34:22'),(1,25201,25400,'2018-05-11 05:34:26'),(1,25401,25600,'2018-05-11 06:16:00'),(1,25601,25800,'2018-05-11 06:16:04'),(1,25801,26000,'2018-05-11 07:10:49'),(1,26001,26200,'2018-05-11 07:10:53'),(1,26201,26400,'2018-05-11 07:30:18'),(1,26401,26600,'2018-05-11 07:30:22'),(1,26601,26800,'2018-05-11 07:40:21'),(1,26801,27000,'2018-05-11 07:40:25'),(1,27001,27200,'2018-05-11 08:47:28'),(1,27201,27400,'2018-05-11 08:47:32'),(1,27401,27600,'2018-05-13 08:36:13'),(1,27601,27800,'2018-05-14 05:51:19'),(1,27801,28000,'2018-05-14 05:51:23'),(1,28001,28200,'2018-05-15 02:51:29'),(1,28201,28400,'2018-05-18 06:28:42'),(1,28401,28600,'2018-05-18 06:28:46'),(1,28601,28800,'2018-05-18 08:41:06'),(1,28801,29000,'2018-05-18 08:41:10'),(1,29001,29200,'2018-05-23 02:18:43'),(1,29201,29400,'2018-05-23 02:18:47'),(1,29401,29600,'2018-05-23 06:54:37'),(1,29601,29800,'2018-05-23 06:54:41'),(1,29801,30000,'2018-05-23 07:48:49'),(1,30001,30200,'2018-05-23 07:48:53'),(1,30201,30400,'2018-05-23 08:55:25'),(1,30401,30600,'2018-05-23 08:55:29'),(1,30601,30800,'2018-05-23 09:14:27'),(1,30801,31000,'2018-05-23 09:14:31'),(1,31001,31200,'2018-05-24 01:12:19'),(1,31201,31400,'2018-05-24 01:12:23'),(1,31401,31600,'2018-05-24 01:20:43'),(1,31601,31800,'2018-05-24 01:20:46'),(1,31801,32000,'2018-05-24 05:16:19'),(1,32001,32200,'2018-05-31 06:40:11'),(1,32201,32400,'2018-07-06 10:34:36'),(1,32401,32600,'2018-07-06 10:34:37'),(1,32601,32800,'2018-07-06 10:35:24'),(1,32801,33000,'2018-07-06 10:35:25'),(1,33001,33200,'2018-07-06 10:47:19'),(1,33201,33400,'2018-07-06 10:47:20'),(1,33401,33600,'2018-07-06 11:10:55'),(1,33601,33800,'2018-07-06 11:10:57'),(1,33801,34000,'2018-07-06 11:11:37'),(1,34001,34200,'2018-07-06 11:11:39'),(1,34201,34400,'2018-07-09 02:24:34'),(1,34401,34600,'2018-07-09 02:24:48'),(1,34601,34800,'2018-07-09 05:16:26'),(1,34801,35000,'2018-07-09 07:34:44'),(1,35001,35200,'2018-07-09 12:32:05'),(1,35201,35400,'2018-07-10 01:08:37'),(1,35401,35600,'2018-07-10 05:07:25'),(1,35601,35800,'2018-07-10 07:40:53'),(1,35801,36000,'2018-07-10 09:40:18'),(1,36001,36200,'2018-07-11 06:35:26'),(1,36201,36400,'2018-07-11 07:25:12'),(1,36401,36600,'2018-07-12 01:34:24'),(1,36601,36800,'2018-07-13 07:25:41'),(1,36801,37000,'2018-07-13 09:37:11'),(1,37001,37200,'2018-07-13 09:37:13'),(1,37201,37400,'2018-07-13 11:26:07'),(1,37401,37600,'2018-07-13 11:26:09'),(1,37601,37800,'2018-07-16 01:05:21'),(1,37801,38000,'2018-07-16 01:05:23'),(1,38001,38200,'2018-07-16 03:49:02'),(1,38201,38400,'2018-07-17 05:45:09'),(1,38401,38600,'2018-07-17 05:45:11'),(1,38601,38800,'2018-07-17 06:59:33'),(1,38801,39000,'2018-07-17 07:30:48'),(1,39001,39200,'2018-07-17 07:59:53'),(1,39201,39400,'2018-07-17 08:52:11'),(1,39401,39600,'2018-07-17 13:19:51'),(1,39601,39800,'2018-07-18 01:05:32'),(1,39801,40000,'2018-07-18 01:05:34'),(1,40001,40200,'2018-07-18 01:20:02'),(1,40201,40400,'2018-07-18 01:20:05'),(1,40401,40600,'2018-07-18 01:26:32'),(1,40601,40800,'2018-07-18 01:26:34'),(1,40801,41000,'2018-07-18 02:07:21'),(1,41001,41200,'2018-07-18 02:08:00'),(1,41201,41400,'2018-07-18 02:27:52'),(1,41401,41600,'2018-07-18 02:43:49'),(1,41601,41800,'2018-07-18 03:00:39'),(1,41801,42000,'2018-07-18 03:10:51'),(1,42001,42200,'2018-07-18 04:09:05'),(1,42201,42400,'2018-07-18 04:41:57'),(1,42401,42600,'2018-07-18 05:03:45'),(1,42601,42800,'2018-07-18 05:14:41'),(1,42801,43000,'2018-07-18 05:26:51'),(1,43001,43200,'2018-07-18 05:41:18'),(1,43201,43400,'2018-07-18 05:57:50'),(1,43401,43600,'2018-07-18 06:09:31'),(1,43601,43800,'2018-07-18 06:25:37'),(1,43801,44000,'2018-07-18 06:44:32'),(1,44001,44200,'2018-07-18 06:58:03'),(1,44201,44400,'2018-07-18 07:17:48'),(1,44401,44600,'2018-07-18 07:36:54'),(1,44601,44800,'2018-07-18 07:58:05'),(1,44801,45000,'2018-07-18 08:13:30'),(1,45001,45200,'2018-07-18 08:31:15'),(1,45201,45400,'2018-07-18 08:49:59'),(1,45401,45600,'2018-07-18 09:11:39'),(1,45601,45800,'2018-07-18 09:26:38'),(1,45801,46000,'2018-07-18 10:04:24'),(1,46001,46200,'2018-07-18 10:15:23'),(1,46201,46400,'2018-07-18 10:48:28'),(1,46401,46600,'2018-07-18 11:08:13'),(1,46601,46800,'2018-07-18 11:28:40'),(1,46801,47000,'2018-07-18 11:50:28'),(1,47001,47200,'2018-07-18 12:22:54'),(1,47201,47400,'2018-07-18 12:22:56'),(1,47401,47600,'2018-07-18 12:41:28'),(1,47601,47800,'2018-07-18 15:15:09'),(1,47801,48000,'2018-07-19 00:58:25'),(1,48001,48200,'2018-07-19 01:07:51'),(1,48201,48400,'2018-07-19 01:07:53'),(1,48401,48600,'2018-07-19 01:25:14'),(1,48601,48800,'2018-07-19 01:40:46'),(1,48801,49000,'2018-07-19 01:48:47'),(1,49001,49200,'2018-07-19 01:58:48'),(1,49201,49400,'2018-07-19 02:06:12'),(1,49401,49600,'2018-07-19 02:11:44'),(1,49601,49800,'2018-07-19 02:20:18'),(1,49801,50000,'2018-07-19 02:29:18'),(1,50001,50200,'2018-07-19 02:36:43'),(1,50201,50400,'2018-07-19 02:45:38'),(1,50401,50600,'2018-07-19 02:53:31'),(1,50601,50800,'2018-07-19 03:01:24'),(1,50801,51000,'2018-07-19 03:09:04'),(1,51001,51200,'2018-07-19 03:14:29'),(1,51201,51400,'2018-07-19 03:19:48'),(1,51401,51600,'2018-07-19 03:31:40'),(1,51601,51800,'2018-07-19 04:04:35'),(1,51801,52000,'2018-07-19 04:20:34'),(1,52001,52200,'2018-07-19 04:38:11'),(1,52201,52400,'2018-07-19 04:54:05'),(1,52401,52600,'2018-07-19 05:05:33'),(1,52601,52800,'2018-07-19 05:13:27'),(1,52801,53000,'2018-07-19 05:20:46'),(1,53001,53200,'2018-07-19 05:29:58'),(1,53201,53400,'2018-07-19 05:41:37'),(1,53401,53600,'2018-07-19 05:55:17'),(1,53601,53800,'2018-07-19 06:06:00'),(1,53801,54000,'2018-07-19 06:21:31'),(1,54001,54200,'2018-07-19 06:21:33'),(1,54201,54400,'2018-07-19 06:31:58'),(1,54401,54600,'2018-07-19 06:38:17'),(1,54601,54800,'2018-07-19 06:38:19'),(1,54801,55000,'2018-07-19 06:53:18'),(1,55001,55200,'2018-07-19 07:57:39'),(1,55201,55400,'2018-07-19 07:57:41'),(1,55401,55600,'2018-07-19 08:19:03'),(1,55601,55800,'2018-07-19 08:32:01'),(1,55801,56000,'2018-07-19 08:50:11'),(1,56001,56200,'2018-07-19 09:12:35'),(1,56201,56400,'2018-07-19 09:43:11'),(1,56401,56600,'2018-07-19 12:06:32'),(1,56601,56800,'2018-07-19 12:56:00'),(1,56801,57000,'2018-07-19 12:56:01'),(1,57001,57200,'2018-07-20 01:28:06'),(1,57201,57400,'2018-07-20 01:54:45'),(1,57401,57600,'2018-07-20 02:04:21'),(1,57601,57800,'2018-07-20 02:14:18'),(1,57801,58000,'2018-07-20 02:26:08'),(1,58001,58200,'2018-07-20 02:26:10'),(1,58201,58400,'2018-07-20 02:54:23'),(1,58401,58600,'2018-07-20 04:07:21'),(1,58601,58800,'2018-07-20 05:07:55'),(1,58801,59000,'2018-07-20 05:11:53'),(1,59001,59200,'2018-07-20 05:11:55'),(1,59201,59400,'2018-07-20 05:36:24'),(1,59401,59600,'2018-07-20 06:46:08'),(1,59601,59800,'2018-07-20 07:59:15'),(1,59801,60000,'2018-07-20 09:03:01'),(1,60001,60200,'2018-07-20 09:53:36'),(1,60201,60400,'2018-07-21 06:56:53'),(1,60401,60600,'2018-07-23 00:48:07'),(1,60601,60800,'2018-07-23 00:48:09'),(1,60801,61000,'2018-07-23 01:21:15'),(1,61001,61200,'2018-07-23 01:21:16'),(1,61201,61400,'2018-07-23 01:46:07'),(1,61401,61600,'2018-07-23 02:16:11'),(1,61601,61800,'2018-07-23 02:48:45'),(1,61801,62000,'2018-07-23 03:36:27'),(1,62001,62200,'2018-07-23 04:52:36'),(1,62201,62400,'2018-07-23 05:44:10'),(1,62401,62600,'2018-07-23 06:37:13'),(1,62601,62800,'2018-07-23 07:13:58'),(1,62801,63000,'2018-07-23 07:44:40'),(1,63001,63200,'2018-07-23 08:29:08'),(1,63201,63400,'2018-07-23 09:21:31'),(1,63401,63600,'2018-07-24 01:56:12'),(1,63601,63800,'2018-07-24 02:58:19'),(1,63801,64000,'2018-07-24 03:16:11'),(1,64001,64200,'2018-07-24 04:41:11'),(1,64201,64400,'2018-07-24 05:13:12'),(1,64401,64600,'2018-07-24 05:37:14'),(1,64601,64800,'2018-07-24 06:05:41'),(1,64801,65000,'2018-07-24 06:29:56'),(1,65001,65200,'2018-07-24 07:03:19'),(1,65201,65400,'2018-07-24 07:39:02'),(1,65401,65600,'2018-07-24 08:08:53'),(1,65601,65800,'2018-07-24 08:24:48'),(1,65801,66000,'2018-07-24 08:43:47'),(1,66001,66200,'2018-07-24 09:08:35'),(1,66201,66400,'2018-07-24 09:22:39'),(1,66401,66600,'2018-07-24 10:29:21'),(1,66601,66800,'2018-07-24 12:04:29'),(1,66801,67000,'2018-07-25 01:00:41'),(1,67001,67200,'2018-07-25 01:17:29'),(1,67201,67400,'2018-07-25 01:17:30'),(1,67401,67600,'2018-07-25 01:41:19'),(1,67601,67800,'2018-07-25 01:41:21'),(1,67801,68000,'2018-07-25 02:06:32'),(1,68001,68200,'2018-07-25 02:06:33'),(1,68201,68400,'2018-07-25 02:07:40'),(1,68401,68600,'2018-07-25 02:07:41'),(1,68601,68800,'2018-07-25 03:00:46'),(1,68801,69000,'2018-07-25 03:02:28'),(1,69001,69200,'2018-07-25 03:02:32'),(1,69201,69400,'2018-07-25 03:15:38'),(1,69401,69600,'2018-07-25 03:15:40'),(1,69601,69800,'2018-07-25 03:25:45'),(1,69801,70000,'2018-07-25 03:25:48'),(1,70001,70200,'2018-07-25 04:02:53'),(1,70201,70400,'2018-07-25 04:39:40'),(1,70401,70600,'2018-07-25 05:04:24'),(1,70601,70800,'2018-07-25 05:21:29'),(1,70801,71000,'2018-07-25 05:40:15'),(1,71001,71200,'2018-07-25 05:57:31'),(1,71201,71400,'2018-07-25 06:09:37'),(1,71401,71600,'2018-07-25 06:25:39'),(1,71601,71800,'2018-07-25 06:41:15'),(1,71801,72000,'2018-07-25 06:54:44'),(1,72001,72200,'2018-07-25 07:04:51'),(1,72201,72400,'2018-07-25 07:15:44'),(1,72401,72600,'2018-07-25 07:26:47'),(1,72601,72800,'2018-07-25 07:38:44'),(1,72801,73000,'2018-07-25 07:52:45'),(1,73001,73200,'2018-07-25 08:09:15'),(1,73201,73400,'2018-07-25 08:25:16'),(1,73401,73600,'2018-07-25 08:38:06'),(1,73601,73800,'2018-07-25 08:51:52'),(1,73801,74000,'2018-07-25 09:03:52'),(1,74001,74200,'2018-07-25 09:18:32'),(1,74201,74400,'2018-07-25 09:34:02'),(1,74401,74600,'2018-07-25 10:00:26'),(1,74601,74800,'2018-07-25 10:36:36'),(1,74801,75000,'2018-07-25 11:14:58'),(1,75001,75200,'2018-07-25 11:55:28'),(1,75201,75400,'2018-07-25 12:41:57'),(1,75401,75600,'2018-07-25 14:25:32'),(1,75601,75800,'2018-07-26 00:58:32'),(1,75801,76000,'2018-07-26 01:33:19'),(1,76001,76200,'2018-07-26 02:14:38'),(1,76201,76400,'2018-07-26 03:00:40'),(1,76401,76600,'2018-07-26 03:50:11'),(1,76601,76800,'2018-07-26 04:25:07'),(1,76801,77000,'2018-07-26 04:25:09'),(1,77001,77200,'2018-07-26 05:36:53'),(1,77201,77400,'2018-07-26 06:50:33'),(1,77401,77600,'2018-07-26 07:36:58'),(1,77601,77800,'2018-07-26 08:15:16'),(1,77801,78000,'2018-07-26 08:55:38'),(1,78001,78200,'2018-07-26 09:21:40'),(1,78201,78400,'2018-07-26 11:05:47'),(1,78401,78600,'2018-07-27 01:09:07'),(1,78601,78800,'2018-07-27 01:09:09'),(1,78801,79000,'2018-07-27 01:14:38'),(1,79001,79200,'2018-07-27 01:14:39'),(1,79201,79400,'2018-07-27 01:38:42'),(1,79401,79600,'2018-07-27 02:21:26'),(1,79601,79800,'2018-07-27 02:58:04'),(1,79801,80000,'2018-07-27 03:34:45'),(1,80001,80200,'2018-07-27 04:33:03'),(1,80201,80400,'2018-07-27 05:08:43'),(1,80401,80600,'2018-07-27 05:41:13'),(1,80601,80800,'2018-07-27 05:56:58'),(1,80801,81000,'2018-07-27 06:19:01'),(1,81001,81200,'2018-07-27 06:49:23'),(1,81201,81400,'2018-07-27 07:17:22'),(1,81401,81600,'2018-07-27 07:56:23'),(1,81601,81800,'2018-07-27 08:56:04'),(1,81801,82000,'2018-07-27 08:56:06'),(1,82001,82200,'2018-07-27 10:04:58'),(1,82201,82400,'2018-07-28 08:10:42'),(1,82401,82600,'2018-07-30 00:58:54'),(1,82601,82800,'2018-07-30 01:34:20'),(1,82801,83000,'2018-07-30 02:34:36'),(1,83001,83200,'2018-07-30 05:36:38'),(1,83201,83400,'2018-07-30 05:57:43'),(1,83401,83600,'2018-07-30 05:57:44'),(1,83601,83800,'2018-07-30 06:15:53'),(1,83801,84000,'2018-07-30 06:15:55'),(1,84001,84200,'2018-07-30 07:39:30'),(1,84201,84400,'2018-07-30 08:30:58'),(1,84401,84600,'2018-07-30 12:17:40'),(1,84601,84800,'2018-07-31 02:47:13'),(1,84801,85000,'2018-07-31 04:27:43'),(1,85001,85200,'2018-07-31 06:19:12'),(1,85201,85400,'2018-07-31 08:57:55'),(1,85401,85600,'2018-08-01 01:56:02'),(1,85601,85800,'2018-08-01 03:41:19'),(1,85801,86000,'2018-08-01 05:42:29'),(1,86001,86200,'2018-08-01 06:39:38'),(1,86201,86400,'2018-08-01 08:49:51'),(1,86401,86600,'2018-08-02 00:47:41'),(1,86601,86800,'2018-08-02 00:47:43'),(1,86801,87000,'2018-08-02 03:24:42'),(1,87001,87200,'2018-08-02 07:15:42'),(1,87201,87400,'2018-08-02 09:11:01'),(1,87401,87600,'2018-08-03 02:14:05'),(1,87601,87800,'2018-08-06 02:36:30'),(1,87801,88000,'2018-08-10 03:29:46'),(1,88001,88200,'2018-08-10 03:29:47'),(1,88201,88400,'2018-08-13 06:26:03'),(1,88401,88600,'2018-08-13 06:26:04'),(1,88601,88800,'2018-08-14 05:36:06'),(1,88801,89000,'2018-08-14 09:16:59'),(1,89001,89200,'2018-08-17 01:16:11'),(1,89201,89400,'2018-08-17 02:58:33'),(1,89401,89600,'2018-08-17 02:58:34'),(1,89601,89800,'2018-08-17 07:48:29'),(1,89801,90000,'2018-08-21 01:21:54'),(1,90001,90200,'2018-08-21 07:55:49'),(1,90201,90400,'2018-08-22 02:42:18'),(1,90401,90600,'2018-08-22 04:19:11'),(1,90601,90800,'2018-08-22 04:19:13'),(1,90801,91000,'2018-08-22 08:36:15'),(1,91001,91200,'2018-08-23 07:08:08'),(1,91201,91400,'2018-08-29 05:14:55'),(1,91401,91600,'2018-08-30 02:17:58'),(1,91601,91800,'2018-08-30 02:18:03'),(1,91801,92000,'2018-08-30 02:42:38'),(1,92001,92200,'2018-08-30 02:42:40'),(1,92201,92400,'2018-08-30 08:05:47'),(1,92401,92600,'2018-08-30 08:05:48'),(1,92601,92800,'2018-08-30 08:09:05'),(1,92801,93000,'2018-08-30 08:09:07'),(1,93001,93200,'2018-09-05 05:01:44'),(1,93201,93400,'2018-09-18 05:12:10'),(1,93401,93600,'2018-09-18 05:12:12'),(1,93601,93800,'2018-09-28 01:59:21'),(1,93801,94000,'2018-10-02 07:30:18'),(1,94001,94200,'2018-10-11 07:40:42'),(1,94201,94400,'2018-10-15 09:13:59'),(1,94401,94600,'2018-11-02 11:49:10'),(1,94601,94800,'2018-11-02 12:19:39'),(1,94801,95000,'2018-11-02 12:23:14'),(1,95001,95200,'2018-11-02 12:29:29'),(1,95201,95400,'2018-11-02 12:29:31'),(1,95401,95600,'2018-11-05 07:03:28'),(1,95601,95800,'2018-11-05 07:03:30'),(1,95801,96000,'2018-11-06 02:19:43'),(1,96001,96200,'2018-11-06 02:19:44'),(1,96201,96400,'2018-11-06 02:26:21'),(1,96401,96600,'2018-11-06 02:26:23'),(1,96601,96800,'2018-11-06 03:18:50'),(1,96801,97000,'2018-11-06 03:18:52'),(1,97001,97200,'2018-11-06 03:21:27'),(1,97201,97400,'2018-11-06 03:21:29'),(1,97401,97600,'2018-11-06 08:11:00'),(1,97601,97800,'2018-11-06 08:11:02'),(1,97801,98000,'2018-11-07 01:11:57'),(1,98001,98200,'2018-11-07 01:11:58'),(1,98201,98400,'2018-11-07 01:25:15'),(1,98401,98600,'2018-11-07 01:25:17'),(1,98601,98800,'2018-11-09 01:08:44'),(1,98801,99000,'2018-11-09 01:08:45'),(1,99001,99200,'2018-11-09 01:14:57'),(1,99201,99400,'2018-11-09 01:14:58'),(1,99401,99600,'2018-11-09 02:54:04'),(1,99601,99800,'2018-11-09 07:08:08'),(1,99801,100000,'2018-11-12 06:31:41'),(1,100001,100200,'2018-11-13 05:54:13'),(1,100201,100400,'2018-11-13 06:10:08'),(1,100401,100600,'2018-11-14 00:36:30'),(1,100601,100800,'2018-11-15 08:07:44'),(1,100801,101000,'2024-06-02 14:35:00'),(1,101001,101200,'2024-06-02 14:40:51'),(1,101201,101400,'2024-06-02 14:41:14'),(1,101401,101600,'2024-06-02 14:41:59'),(1,101601,101800,'2024-06-02 14:43:59'),(1,101801,102000,'2024-06-02 14:44:47'),(1,102001,102200,'2024-06-02 14:47:08'),(1,102201,102400,'2024-06-02 14:51:14'),(1,102401,102600,'2024-06-02 14:52:35'),(1,102601,102800,'2024-06-02 15:00:01'),(1,102801,103000,'2024-06-02 15:03:01'),(1,103001,103200,'2024-06-02 15:05:54'),(1,103201,103400,'2024-06-02 15:16:41'),(1,103401,103600,'2024-06-02 15:16:54'),(1,103601,103800,'2024-06-02 15:19:45'),(1,103801,104000,'2024-06-02 15:22:46'),(1,104001,104200,'2024-06-02 15:23:04'),(1,104201,104400,'2024-06-02 15:23:14'),(1,104401,104600,'2024-06-02 15:23:23'),(1,104601,104800,'2024-06-02 15:25:18'),(1,104801,105000,'2024-06-02 15:26:01'),(1,105001,105200,'2024-06-02 15:55:02'),(1,105201,105400,'2024-06-02 15:55:16'),(1,105401,105600,'2024-06-02 15:59:53'),(1,105601,105800,'2024-06-02 16:00:38'),(1,105801,106000,'2024-06-02 16:01:41'),(1,106001,106200,'2024-06-02 16:03:06'),(1,106201,106400,'2024-06-02 16:09:55'),(1,106401,106600,'2024-06-02 16:10:12'),(1,106601,106800,'2024-06-02 16:16:55'),(1,106801,107000,'2024-06-02 16:21:25'),(1,107001,107200,'2024-06-02 16:21:52'),(1,107201,107400,'2024-06-02 16:48:39'),(1,107401,107600,'2024-06-02 17:52:37'),(1,107601,107800,'2024-06-02 17:53:45'),(1,107801,108000,'2024-06-02 17:54:05'),(1,108001,108200,'2024-06-02 17:54:37'),(1,108201,108400,'2024-06-02 17:56:01'),(1,108401,108600,'2024-06-02 17:56:52'),(1,108601,108800,'2024-06-02 17:57:16'),(1,108801,109000,'2024-06-02 18:19:27'),(1,109001,109200,'2024-06-02 18:19:34'),(1,109201,109400,'2024-06-02 18:48:12'),(1,109401,109600,'2024-06-02 18:48:21'),(1,109601,109800,'2024-06-03 16:48:03'),(1,109801,110000,'2024-06-03 16:48:19'),(1,110001,110200,'2024-06-03 16:48:22'),(1,110201,110400,'2024-06-03 16:53:04'),(1,110401,110600,'2024-06-03 16:53:11'),(1,110601,110800,'2024-06-03 17:02:23'),(1,110801,111000,'2024-06-03 17:02:24'),(1,111001,111200,'2024-06-03 17:11:48'),(1,111201,111400,'2024-06-03 17:11:49'),(1,111401,111600,'2024-06-03 17:16:20'),(1,111601,111800,'2024-06-03 17:16:21'),(1,111801,112000,'2024-06-03 17:29:05'),(1,112001,112200,'2024-06-03 17:30:24'),(1,112201,112400,'2024-06-03 17:30:25'),(1,112401,112600,'2024-06-03 17:35:22'),(1,112601,112800,'2024-06-03 17:35:24'),(1,112801,113000,'2024-06-03 17:59:11'),(1,113001,113200,'2024-06-03 17:59:29'),(1,113201,113400,'2024-06-03 22:34:33'),(1,113401,113600,'2024-06-03 22:53:17'),(1,113601,113800,'2024-06-04 00:24:06'),(1,113801,114000,'2024-06-04 00:24:12'),(1,114001,114200,'2024-06-04 09:13:33'),(1,114201,114400,'2024-06-04 09:13:39'),(1,114401,114600,'2024-06-04 09:28:23'),(1,114601,114800,'2024-06-04 09:28:28'),(1,114801,115000,'2024-06-04 09:37:23'),(1,115001,115200,'2024-06-04 09:37:47'),(1,115201,115400,'2024-06-04 11:01:49'),(1,115401,115600,'2024-06-04 11:01:50'),(1,115601,115800,'2024-06-04 11:01:50'),(1,115801,116000,'2024-06-04 19:25:00'),(1,116001,116200,'2024-06-04 19:25:10'),(1,116201,116400,'2024-06-04 23:46:26'),(1,116401,116600,'2024-06-04 23:46:33'),(1,116601,116800,'2024-06-05 10:53:07'),(1,116801,117000,'2024-06-05 10:53:14'),(1,117001,117200,'2024-06-05 16:23:10'),(1,117201,117400,'2024-06-05 16:23:18'),(1,117401,117600,'2024-06-05 17:14:37'),(1,117601,117800,'2024-06-05 17:14:42'),(1,117801,118000,'2024-06-05 17:25:29'),(1,118001,118200,'2024-06-05 20:18:50'),(1,118201,118400,'2024-06-05 20:19:03'),(1,118401,118600,'2024-06-05 20:21:35'),(1,118601,118800,'2024-06-05 20:21:43'),(1,118801,119000,'2024-06-06 01:32:58'),(1,119001,119200,'2024-06-06 01:32:58'),(1,119201,119400,'2024-06-06 01:35:08'),(1,119401,119600,'2024-06-06 01:35:16'),(1,119601,119800,'2024-06-06 10:31:01'),(1,119801,120000,'2024-06-06 10:31:10'),(1,120001,120200,'2024-06-06 10:44:26'),(1,120201,120400,'2024-06-06 10:56:11'),(1,120401,120600,'2024-06-06 11:50:16'),(1,120601,120800,'2024-06-06 11:57:48'),(1,120801,121000,'2024-06-06 11:59:20'),(1,121001,121200,'2024-06-06 12:02:34'),(1,121201,121400,'2024-06-06 12:03:57'),(1,121401,121600,'2024-06-06 12:08:24'),(1,121601,121800,'2024-06-06 12:10:29'),(1,121801,122000,'2024-06-06 12:10:42'),(1,122001,122200,'2024-06-06 12:11:09'),(1,122201,122400,'2024-06-06 12:11:16'),(1,122401,122600,'2024-06-06 12:33:47'),(1,122601,122800,'2024-06-06 12:34:50'),(1,122801,123000,'2024-06-06 12:34:56'),(1,123001,123200,'2024-06-06 16:32:12'),(1,123201,123400,'2024-06-06 16:32:21'),(1,123401,123600,'2024-06-06 16:49:49'),(1,123601,123800,'2024-06-06 16:50:01'),(1,123801,124000,'2024-06-06 17:16:22'),(1,124001,124200,'2024-06-06 17:16:29'),(1,124201,124400,'2024-06-06 17:23:47'),(1,124401,124600,'2024-06-06 17:23:55'),(1,124601,124800,'2024-06-06 17:28:52'),(1,124801,125000,'2024-06-06 17:28:59'),(1,125001,125200,'2024-06-06 17:35:37'),(1,125201,125400,'2024-06-06 17:35:44'),(1,125401,125600,'2024-06-06 17:58:17'),(1,125601,125800,'2024-06-06 17:58:24'),(1,125801,126000,'2024-06-06 18:01:04'),(1,126001,126200,'2024-06-06 18:01:11'),(1,126201,126400,'2024-06-06 18:21:12'),(1,126401,126600,'2024-06-06 18:21:19'),(1,126601,126800,'2024-06-06 18:27:23'),(1,126801,127000,'2024-06-06 18:29:07'),(1,127001,127200,'2024-06-06 18:34:08'),(1,127201,127400,'2024-06-06 19:06:25'),(1,127401,127600,'2024-06-06 19:07:28'),(1,127601,127800,'2024-06-06 19:07:37'),(1,127801,128000,'2024-06-06 19:12:40'),(1,128001,128200,'2024-06-06 19:13:09'),(1,128201,128400,'2024-06-06 20:12:17'),(1,128401,128600,'2024-06-06 20:12:51'),(1,128601,128800,'2024-06-07 11:40:42'),(1,128801,129000,'2024-06-07 11:40:53'),(1,129001,129200,'2024-06-07 11:48:02'),(1,129201,129400,'2024-06-07 11:48:12'),(1,129401,129600,'2024-06-07 12:15:59'),(1,129601,129800,'2024-06-07 12:16:32'),(1,129801,130000,'2024-06-07 18:18:42'),(1,130001,130200,'2024-06-07 18:18:59'),(1,130201,130400,'2024-06-07 18:22:49'),(1,130401,130600,'2024-06-07 18:22:58'),(1,130601,130800,'2024-06-07 18:52:23'),(1,130801,131000,'2024-06-07 18:53:36'),(1,131001,131200,'2024-06-07 19:26:20'),(1,131201,131400,'2024-06-07 19:26:38'),(1,131401,131600,'2024-06-07 20:14:55'),(1,131601,131800,'2024-06-07 20:15:04'),(1,131801,132000,'2024-06-08 08:50:53'),(1,132001,132200,'2024-06-08 08:51:06'),(1,132201,132400,'2024-06-08 09:12:40'),(1,132401,132600,'2024-06-08 09:13:35'),(1,132601,132800,'2024-06-08 09:16:14'),(1,132801,133000,'2024-06-08 09:16:33'),(1,133001,133200,'2024-06-08 09:24:01'),(1,133201,133400,'2024-06-08 09:24:05'),(1,133401,133600,'2024-06-08 09:29:17'),(1,133601,133800,'2024-06-08 09:29:25'),(1,133801,134000,'2024-06-08 09:49:51'),(1,134001,134200,'2024-06-08 09:53:32'),(1,134201,134400,'2024-06-08 10:17:13'),(1,134401,134600,'2024-06-08 10:17:37'),(1,134601,134800,'2024-06-08 17:40:54'),(1,134801,135000,'2024-06-08 17:41:20'),(1,135001,135200,'2024-06-08 17:44:14'),(1,135201,135400,'2024-06-08 17:44:19'),(1,135401,135600,'2024-06-08 18:08:38'),(1,135601,135800,'2024-06-08 18:08:47'),(1,135801,136000,'2024-06-08 18:12:02'),(1,136001,136200,'2024-06-08 18:12:47'),(1,136201,136400,'2024-06-08 18:18:01'),(1,136401,136600,'2024-06-08 18:18:09'),(1,136601,136800,'2024-06-08 18:34:49'),(1,136801,137000,'2024-06-08 18:34:58'),(1,137001,137200,'2024-06-08 18:51:39'),(1,137201,137400,'2024-06-08 18:51:48'),(1,137401,137600,'2024-06-08 19:11:34'),(1,137601,137800,'2024-06-08 19:13:23'),(1,137801,138000,'2024-06-08 19:13:54'),(1,138001,138200,'2024-06-08 19:15:48'),(1,138201,138400,'2024-06-08 19:15:55'),(1,138401,138600,'2024-06-08 19:30:11'),(1,138601,138800,'2024-06-08 19:30:19'),(1,138801,139000,'2024-06-09 15:20:05'),(1,139001,139200,'2024-06-09 15:20:05'),(1,139201,139400,'2024-06-09 15:21:52'),(1,139401,139600,'2024-06-09 15:21:53'),(1,139601,139800,'2024-06-09 16:19:26'),(1,139801,140000,'2024-06-09 16:19:27'),(1,140001,140200,'2024-06-09 17:29:16'),(1,140201,140400,'2024-06-09 17:29:16'),(1,140401,140600,'2024-06-09 21:26:23'),(1,140601,140800,'2024-06-09 21:26:24'),(1,140801,141000,'2024-06-21 18:06:08'),(1,141001,141200,'2024-06-21 18:06:09'),(1,141201,141400,'2024-06-22 17:50:37'),(1,141401,141600,'2024-06-22 17:50:38'),(1,141601,141800,'2024-06-22 17:55:07'),(1,141801,142000,'2024-06-22 17:55:08'),(1,142001,142200,'2024-06-23 09:11:23'),(1,142201,142400,'2024-06-23 09:32:04'),(1,142401,142600,'2024-06-23 09:32:05'),(1,142601,142800,'2024-06-23 09:41:29'),(1,142801,143000,'2024-06-23 09:41:30'),(1,143001,143200,'2024-06-25 16:09:27'),(1,143201,143400,'2024-06-25 16:09:28'),(1,143401,143600,'2024-06-25 16:18:56'),(1,143601,143800,'2024-06-25 16:18:57'),(1,143801,144000,'2024-06-29 18:40:38'),(1,144001,144200,'2024-06-29 18:40:39'),(1,144201,144400,'2024-06-29 18:50:19'),(1,144401,144600,'2024-06-29 18:50:20'),(1,144601,144800,'2024-07-01 14:58:27'),(1,144801,145000,'2024-07-01 14:58:28'),(1,145001,145200,'2024-07-01 15:11:57'),(1,145201,145400,'2024-07-01 15:11:58'),(1,145401,145600,'2024-07-01 15:57:49'),(1,145601,145800,'2024-07-01 15:57:51'),(1,145801,146000,'2024-07-01 16:02:20'),(1,146001,146200,'2024-07-01 16:02:21'),(1,146201,146400,'2024-07-01 16:02:34'),(1,146401,146600,'2024-07-01 16:02:35'),(1,146601,146800,'2024-07-02 17:05:25'),(1,146801,147000,'2024-07-02 17:05:26'),(1,147001,147200,'2024-07-02 17:29:21'),(1,147201,147400,'2024-07-02 17:30:43'),(1,147401,147600,'2024-07-02 17:30:44'),(1,147601,147800,'2024-07-02 17:50:37'),(1,147801,148000,'2024-07-02 18:22:01'),(1,148001,148200,'2024-07-02 18:22:02'),(1,148201,148400,'2024-07-03 13:54:12'),(1,148401,148600,'2024-07-03 13:54:13'),(1,148601,148800,'2024-07-03 14:34:47'),(1,148801,149000,'2024-07-03 14:34:48'),(1,149001,149200,'2024-07-03 14:38:13'),(1,149201,149400,'2024-07-03 14:38:15'),(1,149401,149600,'2024-07-03 19:50:18'),(1,149601,149800,'2024-07-03 19:50:19'),(1,149801,150000,'2024-07-05 14:17:14'),(1,150001,150200,'2024-07-05 14:17:15'),(1,150201,150400,'2024-07-07 14:47:44'),(1,150401,150600,'2024-07-07 14:47:45'),(1,150601,150800,'2024-07-07 17:45:43'),(1,150801,151000,'2024-07-07 17:45:44'),(1,151001,151200,'2024-07-07 21:04:47'),(1,151201,151400,'2024-07-07 21:04:48'),(1,151401,151600,'2024-07-07 21:09:51'),(1,151601,151800,'2024-07-07 21:09:52'),(1,151801,152000,'2024-07-07 21:14:48'),(1,152001,152200,'2024-07-07 21:14:49'),(1,152201,152400,'2024-07-07 21:24:47'),(1,152401,152600,'2024-07-07 21:24:48'),(1,152601,152800,'2024-07-07 21:46:30'),(1,152801,153000,'2024-07-07 21:46:31'),(1,153001,153200,'2024-07-07 21:57:34'),(1,153201,153400,'2024-07-07 21:57:35'),(1,153401,153600,'2024-07-09 14:21:56'),(1,153601,153800,'2024-07-09 14:21:57'),(1,153801,154000,'2024-07-09 14:24:49'),(1,154001,154200,'2024-07-09 14:24:50'),(1,154201,154400,'2024-07-09 14:25:53'),(1,154401,154600,'2024-07-09 14:25:54'),(1,154601,154800,'2024-07-09 14:26:26'),(1,154801,155000,'2024-07-09 14:26:27'),(1,155001,155200,'2024-07-09 14:29:07'),(1,155201,155400,'2024-07-09 14:29:08'),(1,155401,155600,'2024-07-09 14:31:54'),(1,155601,155800,'2024-07-09 14:31:55'),(1,155801,156000,'2024-07-12 18:33:34'),(1,156001,156200,'2024-07-12 18:33:35'),(1,156201,156400,'2024-07-12 18:38:13'),(1,156401,156600,'2024-07-12 18:38:14'),(1,156601,156800,'2024-07-12 18:48:07'),(1,156801,157000,'2024-07-12 18:48:08'),(1,157001,157200,'2024-07-13 18:56:46'),(1,157201,157400,'2024-07-13 18:56:47'),(1,157401,157600,'2024-07-13 20:01:45'),(1,157601,157800,'2024-07-13 20:01:46'),(1,157801,158000,'2024-07-13 20:02:28'),(1,158001,158200,'2024-07-13 20:02:29'),(1,158201,158400,'2024-07-13 20:09:24'),(1,158401,158600,'2024-07-13 20:09:25'),(1,158601,158800,'2024-07-13 20:17:51'),(1,158801,159000,'2024-07-13 20:17:52'),(1,159001,159200,'2024-07-14 10:34:07'),(1,159201,159400,'2024-07-14 10:34:08'),(1,159401,159600,'2024-07-14 15:09:02'),(1,159601,159800,'2024-07-14 15:09:03'),(1,159801,160000,'2024-07-15 17:53:40'),(1,160001,160200,'2024-07-15 17:53:41'),(1,160201,160400,'2024-07-15 18:19:35'),(1,160401,160600,'2024-07-15 18:19:36'),(1,160601,160800,'2024-07-23 15:27:58'),(1,160801,161000,'2024-07-23 15:27:59'),(1,161001,161200,'2024-07-26 19:38:54'),(1,161201,161400,'2024-07-26 19:38:55'),(1,161401,161600,'2024-07-27 09:34:36'),(1,161601,161800,'2024-07-27 09:37:31'),(1,161801,162000,'2024-07-27 09:39:09'),(1,162001,162200,'2024-07-27 09:44:29'),(1,162201,162400,'2024-07-27 12:41:16'),(1,162401,162600,'2024-07-27 12:42:20'),(1,162601,162800,'2024-07-27 12:42:21'),(1,162801,163000,'2024-07-27 19:58:48'),(1,163001,163200,'2024-07-27 19:58:49'),(1,163201,163400,'2024-07-27 21:19:52'),(1,163401,163600,'2024-07-27 21:19:53'),(1,163601,163800,'2024-07-27 21:27:25'),(1,163801,164000,'2024-07-27 21:27:26'),(1,164001,164200,'2024-07-27 21:30:03'),(1,164201,164400,'2024-07-27 21:31:52'),(1,164401,164600,'2024-07-27 21:32:18'),(1,164601,164800,'2024-07-27 21:32:19'),(1,164801,165000,'2024-07-27 21:39:14'),(1,165001,165200,'2024-07-27 21:39:15'),(1,165201,165400,'2024-07-27 21:43:42'),(1,165401,165600,'2024-07-27 21:43:44'),(1,165601,165800,'2024-07-27 21:45:23'),(1,165801,166000,'2024-07-27 21:45:24'),(1,166001,166200,'2024-07-27 21:56:54'),(1,166201,166400,'2024-07-27 21:56:55'),(1,166401,166600,'2024-07-27 22:15:30'),(1,166601,166800,'2024-07-27 22:15:31'),(1,166801,167000,'2024-07-30 01:19:06'),(1,167001,167200,'2024-07-30 01:19:07'),(1,167201,167400,'2024-07-30 01:23:55'),(1,167401,167600,'2024-07-30 01:23:56'),(1,167601,167800,'2024-07-30 20:11:22'),(1,167801,168000,'2024-07-30 20:11:23'),(1,168001,168200,'2024-07-31 18:53:05'),(1,168201,168400,'2024-07-31 18:53:06'),(1,168401,168600,'2024-07-31 18:59:07'),(1,168601,168800,'2024-07-31 18:59:08'),(1,168801,169000,'2024-07-31 19:02:01'),(1,169001,169200,'2024-07-31 19:02:02'),(1,169201,169400,'2024-07-31 19:03:36'),(1,169401,169600,'2024-07-31 19:03:37'),(1,169601,169800,'2024-08-01 19:39:21'),(1,169801,170000,'2024-08-01 19:39:22'),(1,170001,170200,'2024-08-01 19:44:01'),(1,170201,170400,'2024-08-01 19:44:02'),(1,170401,170600,'2024-08-01 19:48:57'),(1,170601,170800,'2024-08-01 19:48:58'),(1,170801,171000,'2024-08-01 19:50:06'),(1,171001,171200,'2024-08-01 19:50:07'),(1,171201,171400,'2024-08-01 19:51:20'),(1,171401,171600,'2024-08-01 19:51:21'),(1,171601,171800,'2024-08-04 14:10:07'),(1,171801,172000,'2024-08-04 14:10:08'),(1,172001,172200,'2024-08-04 14:13:59'),(1,172201,172400,'2024-08-04 14:14:00'),(1,172401,172600,'2024-08-04 14:36:30'),(1,172601,172800,'2024-08-04 14:36:31'),(1,172801,173000,'2024-08-04 14:57:33'),(1,173001,173200,'2024-08-04 14:57:33'),(1,173201,173400,'2024-08-04 17:13:49'),(1,173401,173600,'2024-08-04 17:13:50'),(1,173601,173800,'2024-08-05 12:48:39'),(1,173801,174000,'2024-08-05 12:48:40'),(1,174001,174200,'2024-08-05 13:01:18'),(1,174201,174400,'2024-08-05 13:01:20'),(1,174401,174600,'2024-08-05 15:40:15'),(1,174601,174800,'2024-08-05 15:40:15'),(1,174801,175000,'2024-08-05 18:40:30'),(1,175001,175200,'2024-08-05 18:40:31'),(1,175201,175400,'2024-08-06 13:57:18'),(1,175401,175600,'2024-08-06 13:57:19'),(1,175601,175800,'2024-08-06 13:57:51'),(1,175801,176000,'2024-08-06 13:57:52'),(1,176001,176200,'2024-08-06 14:12:48'),(1,176201,176400,'2024-08-06 14:12:50'),(1,176401,176600,'2024-08-06 14:13:04'),(1,176601,176800,'2024-08-06 14:13:06'),(1,176801,177000,'2024-08-06 17:54:49'),(1,177001,177200,'2024-08-06 17:54:50'),(1,177201,177400,'2024-08-06 18:05:57'),(1,177401,177600,'2024-08-06 18:05:58'),(1,177601,177800,'2024-08-06 18:13:17'),(1,177801,178000,'2024-08-06 18:13:19'),(1,178001,178200,'2024-08-06 18:21:14'),(1,178201,178400,'2024-08-06 18:21:15'),(1,178401,178600,'2024-08-06 18:25:16'),(1,178601,178800,'2024-08-06 18:25:17'),(1,178801,179000,'2024-08-06 19:20:48'),(1,179001,179200,'2024-08-06 19:20:50'),(1,179201,179400,'2024-08-06 19:36:11'),(1,179401,179600,'2024-08-06 19:36:12'),(1,179601,179800,'2024-08-06 19:52:47'),(1,179801,180000,'2024-08-06 19:52:48'),(1,180001,180200,'2024-08-06 21:33:00'),(1,180201,180400,'2024-08-06 21:33:02'),(1,180401,180600,'2024-08-07 17:44:24'),(1,180601,180800,'2024-08-07 17:44:25'),(1,180801,181000,'2024-08-07 17:49:23'),(1,181001,181200,'2024-08-07 17:49:25'),(1,181201,181400,'2024-08-07 18:14:14'),(1,181401,181600,'2024-08-07 18:14:16'),(1,181601,181800,'2024-08-07 19:12:38'),(1,181801,182000,'2024-08-07 19:12:40'),(1,182001,182200,'2024-08-09 20:34:59'),(1,182201,182400,'2024-08-09 20:35:00'),(1,182401,182600,'2024-08-09 20:43:46'),(1,182601,182800,'2024-08-09 20:43:47'),(1,182801,183000,'2024-08-09 21:10:10'),(1,183001,183200,'2024-08-09 21:10:11'),(1,183201,183400,'2024-08-09 21:27:06'),(1,183401,183600,'2024-08-09 21:27:08'),(1,183601,183800,'2024-08-09 21:43:51'),(1,183801,184000,'2024-08-09 21:43:53'),(1,184001,184200,'2024-08-09 21:51:48'),(1,184201,184400,'2024-08-09 21:51:50'),(1,184401,184600,'2024-08-09 22:11:24'),(1,184601,184800,'2024-08-09 22:11:26'),(1,184801,185000,'2024-08-10 11:51:00'),(1,185001,185200,'2024-08-10 11:51:01'),(1,185201,185400,'2024-08-10 12:12:08'),(1,185401,185600,'2024-08-10 12:37:25'),(1,185601,185800,'2024-08-10 12:39:15'),(1,185801,186000,'2024-08-10 12:41:51'),(1,186001,186200,'2024-08-10 12:41:51'),(1,186201,186400,'2024-08-10 12:42:04'),(1,186401,186600,'2024-08-10 12:42:05'),(1,186601,186800,'2024-08-10 12:50:45'),(1,186801,187000,'2024-08-10 12:50:46'),(1,187001,187200,'2024-08-10 12:56:46'),(1,187201,187400,'2024-08-10 12:56:48'),(1,187401,187600,'2024-08-10 13:00:07'),(1,187601,187800,'2024-08-10 13:00:08'),(1,187801,188000,'2024-08-10 13:13:22'),(1,188001,188200,'2024-08-10 13:13:23'),(1,188201,188400,'2024-08-10 13:20:17'),(1,188401,188600,'2024-08-10 13:20:19'),(1,188601,188800,'2024-08-10 13:48:18'),(1,188801,189000,'2024-08-10 13:48:20'),(1,189001,189200,'2024-08-10 13:52:15'),(1,189201,189400,'2024-08-10 13:52:16'),(1,189401,189600,'2024-08-10 14:16:02'),(1,189601,189800,'2024-08-10 14:16:03'),(1,189801,190000,'2024-08-10 14:21:20'),(1,190001,190200,'2024-08-10 14:21:21'),(1,190201,190400,'2024-08-10 16:32:37'),(1,190401,190600,'2024-08-10 16:32:38'),(1,190601,190800,'2024-08-10 16:33:09'),(1,190801,191000,'2024-08-10 16:33:10'),(1,191001,191200,'2024-08-10 16:34:33'),(1,191201,191400,'2024-08-10 16:34:34'),(1,191401,191600,'2024-08-10 18:23:38'),(1,191601,191800,'2024-08-10 18:26:31'),(1,191801,192000,'2024-08-10 18:27:32'),(1,192001,192200,'2024-08-10 18:31:33'),(1,192201,192400,'2024-08-10 18:31:35'),(1,192401,192600,'2024-08-10 18:36:37'),(1,192601,192800,'2024-08-10 18:38:55'),(1,192801,193000,'2024-08-10 18:40:42'),(1,193001,193200,'2024-08-10 18:40:44'),(1,193201,193400,'2024-08-10 19:14:02'),(1,193401,193600,'2024-08-10 19:14:03'),(1,193601,193800,'2024-08-10 19:17:20'),(1,193801,194000,'2024-08-10 19:17:22'),(1,194001,194200,'2024-08-10 19:28:23'),(1,194201,194400,'2024-08-10 19:28:25'),(1,194401,194600,'2024-08-10 20:13:01'),(1,194601,194800,'2024-08-10 20:16:27'),(1,194801,195000,'2024-08-10 20:21:41'),(1,195001,195200,'2024-08-10 20:32:55'),(1,195201,195400,'2024-08-10 20:32:57'),(1,195401,195600,'2024-08-11 00:14:11'),(1,195601,195800,'2024-08-11 13:09:20'),(1,195801,196000,'2024-08-11 13:09:21'),(1,196001,196200,'2024-08-11 13:32:53'),(1,196201,196400,'2024-08-11 13:32:54'),(1,196401,196600,'2024-08-11 15:52:00'),(1,196601,196800,'2024-08-11 15:52:01'),(1,196801,197000,'2024-08-12 01:52:02'),(1,197001,197200,'2024-08-12 01:52:03'),(1,197201,197400,'2024-08-12 03:06:54'),(1,197401,197600,'2024-08-12 03:06:56'),(1,197601,197800,'2024-08-13 14:01:34'),(1,197801,198000,'2024-08-13 14:01:34'),(1,198001,198200,'2024-08-13 17:08:50'),(1,198201,198400,'2024-08-13 17:08:51'),(1,198401,198600,'2024-08-13 17:10:03'),(1,198601,198800,'2024-08-13 17:10:04'),(1,198801,199000,'2024-08-13 19:16:38'),(1,199001,199200,'2024-08-13 19:16:39'),(1,199201,199400,'2024-08-13 19:32:02'),(1,199401,199600,'2024-08-13 19:32:03'),(1,199601,199800,'2024-08-13 21:42:00'),(1,199801,200000,'2024-08-13 21:42:01'),(1,200001,200200,'2024-08-14 00:37:46'),(1,200201,200400,'2024-08-16 01:55:23'),(1,200401,200600,'2024-08-16 14:07:33'),(1,200601,200800,'2024-08-16 14:07:36'),(1,200801,201000,'2024-08-16 14:07:47'),(1,201001,201200,'2024-08-16 14:17:01'),(1,201201,201400,'2024-08-16 14:17:01'),(1,201401,201600,'2024-08-16 23:33:09'),(1,201601,201800,'2024-08-16 23:33:10'),(1,201801,202000,'2024-08-18 14:50:51'),(1,202001,202200,'2024-08-18 14:50:52'),(1,202201,202400,'2024-08-18 14:59:36'),(1,202401,202600,'2024-08-18 14:59:37'),(1,202601,202800,'2024-08-18 15:16:02'),(1,202801,203000,'2024-08-18 15:16:03'),(1,203001,203200,'2024-08-19 13:01:48'),(1,203201,203400,'2024-08-19 13:01:48'),(1,203401,203600,'2024-08-19 15:26:04'),(1,203601,203800,'2024-08-19 15:26:05'),(1,203801,204000,'2024-08-19 15:29:50'),(1,204001,204200,'2024-08-19 15:29:51'),(1,204201,204400,'2024-08-19 15:32:44'),(1,204401,204600,'2024-08-19 15:32:45'),(1,204601,204800,'2024-08-19 15:55:31'),(1,204801,205000,'2024-08-19 15:55:32'),(1,205001,205200,'2024-08-21 08:42:15'),(1,205201,205400,'2024-08-21 08:42:15'),(1,205401,205600,'2024-08-21 19:47:53'),(1,205601,205800,'2024-08-21 19:47:53'),(1,205801,206000,'2024-08-21 19:49:02'),(1,206001,206200,'2024-08-21 19:49:03'),(1,206201,206400,'2024-08-21 23:40:13'),(1,206401,206600,'2024-08-21 23:40:14'),(1,206601,206800,'2024-08-22 18:39:47'),(1,206801,207000,'2024-08-22 18:39:48'),(1,207001,207200,'2024-08-22 18:42:27'),(1,207201,207400,'2024-08-22 18:42:28'),(1,207401,207600,'2024-08-22 19:05:45'),(1,207601,207800,'2024-08-22 19:05:46'),(1,207801,208000,'2024-08-23 11:01:03'),(1,208001,208200,'2024-08-23 11:01:03'),(1,208201,208400,'2024-08-23 11:02:23'),(1,208401,208600,'2024-08-23 11:02:24'),(1,208601,208800,'2024-08-23 13:05:07'),(1,208801,209000,'2024-08-23 13:05:08'),(1,209001,209200,'2024-08-23 13:15:58'),(1,209201,209400,'2024-08-23 13:15:59'),(1,209401,209600,'2024-08-23 13:20:40'),(1,209601,209800,'2024-08-23 13:20:41'),(1,209801,210000,'2024-08-23 13:33:22'),(1,210001,210200,'2024-08-23 13:33:23'),(1,210201,210400,'2024-08-23 13:35:24'),(1,210401,210600,'2024-08-23 13:35:25'),(1,210601,210800,'2024-08-23 13:52:08'),(1,210801,211000,'2024-08-23 13:52:09'),(1,211001,211200,'2024-08-23 13:58:28'),(1,211201,211400,'2024-08-23 13:58:29'),(1,211401,211600,'2024-08-23 14:27:40'),(1,211601,211800,'2024-08-23 14:28:11'),(1,211801,212000,'2024-08-23 14:28:12'),(1,212001,212200,'2024-08-23 14:28:51'),(1,212201,212400,'2024-08-23 14:28:52'),(1,212401,212600,'2024-08-23 14:34:48'),(1,212601,212800,'2024-08-23 14:34:49'),(1,212801,213000,'2024-08-23 14:40:45'),(1,213001,213200,'2024-08-23 14:40:46'),(1,213201,213400,'2024-08-24 12:25:44'),(1,213401,213600,'2024-08-24 12:26:18'),(1,213601,213800,'2024-08-24 12:26:19'),(1,213801,214000,'2024-08-24 12:28:14'),(1,214001,214200,'2024-08-24 12:28:15'),(1,214201,214400,'2024-08-25 15:57:49'),(1,214401,214600,'2024-08-25 15:57:49'),(1,214601,214800,'2024-08-26 18:23:18'),(1,214801,215000,'2024-08-26 18:23:19'),(1,215001,215200,'2024-08-26 18:48:11'),(1,215201,215400,'2024-08-26 18:48:15'),(1,215401,215600,'2024-08-26 19:29:55'),(1,215601,215800,'2024-08-26 19:29:59'),(1,215801,216000,'2024-08-26 21:20:22'),(1,216001,216200,'2024-08-26 21:31:56'),(1,216201,216400,'2024-08-26 21:37:15'),(1,216401,216600,'2024-08-26 21:37:57'),(1,216601,216800,'2024-08-26 21:37:57'),(1,216801,217000,'2024-08-26 21:45:37'),(1,217001,217200,'2024-08-26 21:45:40'),(1,217201,217400,'2024-08-26 21:48:10'),(1,217401,217600,'2024-08-26 21:48:12'),(1,217601,217800,'2024-08-27 13:21:17'),(1,217801,218000,'2024-08-27 13:21:20'),(1,218001,218200,'2024-08-27 15:57:51'),(1,218201,218400,'2024-08-27 15:57:54'),(1,218401,218600,'2024-08-27 16:00:52'),(1,218601,218800,'2024-08-27 16:00:55'),(1,218801,219000,'2024-08-27 16:03:55'),(1,219001,219200,'2024-08-27 16:03:58'),(1,219201,219400,'2024-08-29 12:22:13'),(1,219401,219600,'2024-08-29 12:22:13'),(1,219601,219800,'2024-08-30 14:52:14'),(1,219801,220000,'2024-08-30 14:52:15'),(1,220001,220200,'2024-08-30 17:57:10'),(1,220201,220400,'2024-08-30 17:57:12'),(1,220401,220600,'2024-08-31 12:24:10'),(1,220601,220800,'2024-08-31 12:24:10'),(1,220801,221000,'2024-08-31 12:25:11'),(1,221001,221200,'2024-08-31 12:25:14'),(1,221201,221400,'2024-08-31 12:39:56'),(1,221401,221600,'2024-08-31 12:39:59'),(1,221601,221800,'2024-09-01 16:12:19'),(1,221801,222000,'2024-09-01 16:12:20'),(1,222001,222200,'2024-09-01 16:16:51'),(1,222201,222400,'2024-09-01 16:16:54'),(1,222401,222600,'2024-09-01 20:12:01'),(1,222601,222800,'2024-09-01 20:12:02'),(1,222801,223000,'2024-09-01 20:15:30'),(1,223001,223200,'2024-09-01 20:15:32'),(1,223201,223400,'2024-09-02 18:14:02'),(1,223401,223600,'2024-09-02 18:14:03'),(1,223601,223800,'2024-09-02 18:23:52'),(1,223801,224000,'2024-09-02 18:23:56'),(1,224001,224200,'2024-09-02 19:12:01'),(1,224201,224400,'2024-09-02 19:12:01'),(1,224401,224600,'2024-09-02 19:15:03'),(1,224601,224800,'2024-09-02 19:15:06'),(1,224801,225000,'2024-09-02 19:16:48'),(1,225001,225200,'2024-09-02 19:16:51'),(1,225201,225400,'2024-09-02 19:18:59'),(1,225401,225600,'2024-09-02 19:19:01'),(1,225601,225800,'2024-09-02 19:24:15'),(1,225801,226000,'2024-09-02 19:24:17'),(1,226001,226200,'2024-09-04 14:59:23'),(1,226201,226400,'2024-09-04 15:07:43'),(1,226401,226600,'2024-09-04 15:07:43'),(1,226601,226800,'2024-09-04 15:14:46'),(1,226801,227000,'2024-09-04 15:14:49'),(1,227001,227200,'2024-09-04 15:34:58'),(1,227201,227400,'2024-09-04 15:35:00'),(1,227401,227600,'2024-09-04 15:38:28'),(1,227601,227800,'2024-09-04 15:38:31'),(1,227801,228000,'2024-09-04 15:58:24'),(1,228001,228200,'2024-09-04 16:08:56'),(1,228201,228400,'2024-09-04 16:08:58'),(1,228401,228600,'2024-09-04 15:14:22'),(1,228601,228800,'2024-09-04 15:14:24'),(1,228801,229000,'2024-09-04 16:20:13'),(1,229001,229200,'2024-09-04 16:20:15'),(1,229201,229400,'2024-09-04 16:35:08'),(1,229401,229600,'2024-09-04 16:35:10'),(1,229601,229800,'2024-09-04 16:41:13'),(1,229801,230000,'2024-09-04 16:41:15'),(1,230001,230200,'2024-09-04 17:59:16'),(1,230201,230400,'2024-09-04 17:59:19'),(1,230401,230600,'2024-09-04 21:22:29'),(1,230601,230800,'2024-09-04 21:22:31'),(1,230801,231000,'2024-09-07 15:46:23'),(1,231001,231200,'2024-09-07 15:46:23'),(1,231201,231400,'2024-09-07 15:52:41'),(1,231401,231600,'2024-09-07 15:52:43'),(1,231601,231800,'2024-09-08 15:18:28'),(1,231801,232000,'2024-09-08 15:18:29'),(1,232001,232200,'2024-09-08 20:50:28'),(1,232201,232400,'2024-09-08 20:50:29'),(1,232401,232600,'2024-09-10 17:18:04'),(1,232601,232800,'2024-09-10 17:18:05'),(1,232801,233000,'2024-09-10 19:50:06'),(1,233001,233200,'2024-09-10 19:50:07'),(1,233201,233400,'2024-09-11 19:07:32'),(1,233401,233600,'2024-09-11 19:07:33'),(1,233601,233800,'2024-09-11 20:55:00'),(1,233801,234000,'2024-09-11 20:55:01'),(1,234001,234200,'2024-09-13 17:32:32'),(1,234201,234400,'2024-09-13 17:32:33'),(1,234401,234600,'2024-09-13 17:34:21'),(1,234601,234800,'2024-09-13 17:34:23'),(1,234801,235000,'2024-09-13 17:45:20'),(1,235001,235200,'2024-09-13 17:45:21'),(1,235201,235400,'2024-09-13 23:00:30'),(1,235401,235600,'2024-09-13 23:00:31'),(1,235601,235800,'2024-09-13 23:39:18'),(1,235801,236000,'2024-09-13 23:39:18'),(1,236001,236200,'2024-09-13 23:46:17'),(1,236201,236400,'2024-09-13 23:46:19'),(1,236401,236600,'2024-09-14 13:25:05'),(1,236601,236800,'2024-09-14 13:25:05'),(1,236801,237000,'2024-09-14 18:45:44'),(1,237001,237200,'2024-09-14 18:45:45'),(1,237201,237400,'2024-09-14 19:51:21'),(1,237401,237600,'2024-09-14 19:51:22'),(1,237601,237800,'2024-09-15 23:58:19'),(1,237801,238000,'2024-09-15 23:58:20'),(1,238001,238200,'2024-09-16 20:34:37'),(1,238201,238400,'2024-09-16 20:34:37'),(1,238401,238600,'2024-09-21 14:23:48'),(1,238601,238800,'2024-09-21 14:23:48'),(1,238801,239000,'2024-09-21 15:12:22'),(1,239001,239200,'2024-09-21 15:12:23'),(1,239201,239400,'2024-09-21 15:15:20'),(1,239401,239600,'2024-09-21 15:15:21'),(1,239601,239800,'2024-09-21 15:23:50'),(1,239801,240000,'2024-09-21 15:23:51'),(1,240001,240200,'2024-09-21 15:35:53'),(1,240201,240400,'2024-09-21 15:35:54'),(1,240401,240600,'2024-09-21 15:42:37'),(1,240601,240800,'2024-09-21 15:42:38'),(1,240801,241000,'2024-09-21 16:52:25'),(1,241001,241200,'2024-09-21 16:52:26'),(1,241201,241400,'2024-09-21 17:13:59'),(1,241401,241600,'2024-09-21 17:14:00'),(1,241601,241800,'2024-09-21 19:18:13'),(1,241801,242000,'2024-09-21 19:24:43'),(1,242001,242200,'2024-09-21 19:24:44'),(1,242201,242400,'2024-09-23 10:27:29'),(1,242401,242600,'2024-09-23 10:27:29'),(1,242601,242800,'2024-09-23 10:47:47'),(1,242801,243000,'2024-09-23 10:47:48'),(1,243001,243200,'2024-09-23 11:06:55'),(1,243201,243400,'2024-09-23 11:06:56'),(1,243401,243600,'2024-09-23 11:21:11'),(1,243601,243800,'2024-09-23 11:21:12'),(1,243801,244000,'2024-09-23 11:33:24'),(1,244001,244200,'2024-09-23 11:33:25'),(1,244201,244400,'2024-09-23 11:43:33'),(1,244401,244600,'2024-09-23 11:43:35'),(1,244601,244800,'2024-09-23 11:49:51'),(1,244801,245000,'2024-09-23 11:49:52'),(1,245001,245200,'2024-09-25 17:01:07'),(1,245201,245400,'2024-09-25 17:02:16'),(1,245401,245600,'2024-09-25 17:02:17'),(1,245601,245800,'2024-09-25 17:02:41'),(1,245801,246000,'2024-09-25 17:02:42'),(1,246001,246200,'2024-09-28 16:22:40'),(1,246201,246400,'2024-10-01 13:55:34'),(1,246401,246600,'2024-10-01 13:55:34'),(1,246601,246800,'2024-10-01 14:03:03'),(1,246801,247000,'2024-10-01 14:03:04'),(1,247001,247200,'2024-10-01 15:19:08'),(1,247201,247400,'2024-10-01 15:19:09'),(1,247401,247600,'2024-10-03 02:05:28'),(1,247601,247800,'2024-10-05 19:44:48'),(1,247801,248000,'2024-10-05 19:44:49'),(1,248001,248200,'2024-10-08 16:33:15'),(1,248201,248400,'2024-10-10 12:30:36'),(1,248401,248600,'2024-10-10 12:30:37'),(1,248601,248800,'2024-10-10 12:34:01'),(1,248801,249000,'2024-10-10 12:34:02'),(1,249001,249200,'2024-10-10 12:37:50'),(1,249201,249400,'2024-10-10 12:37:51'),(1,249401,249600,'2024-10-10 12:43:18'),(1,249601,249800,'2024-10-10 12:43:19'),(1,249801,250000,'2024-10-10 12:45:50'),(1,250001,250200,'2024-10-10 12:45:51'),(1,250201,250400,'2024-10-10 12:57:07'),(1,250401,250600,'2024-10-10 12:57:08'),(1,250601,250800,'2024-10-10 13:00:42'),(1,250801,251000,'2024-10-10 13:00:43'),(1,251001,251200,'2024-10-10 13:13:41'),(1,251201,251400,'2024-10-10 13:13:42'),(1,251401,251600,'2024-10-16 00:52:46'),(1,251601,251800,'2024-10-16 00:52:47'),(1,251801,252000,'2024-10-17 18:48:40'),(1,252001,252200,'2024-10-17 18:48:40'),(1,252201,252400,'2024-10-17 20:42:59'),(1,252401,252600,'2024-10-17 20:43:01'),(1,252601,252800,'2024-10-19 17:39:10'),(1,252801,253000,'2024-10-19 17:39:11'),(1,253001,253200,'2024-10-21 19:27:56'),(1,253201,253400,'2024-10-21 19:27:57'),(1,253401,253600,'2024-10-22 15:28:25'),(1,253601,253800,'2024-10-22 15:28:26'),(1,253801,254000,'2024-10-22 15:28:49'),(1,254001,254200,'2024-10-22 15:28:50'),(1,254201,254400,'2024-10-28 14:57:53'),(1,254401,254600,'2024-10-28 14:57:53'),(1,254601,254800,'2024-10-28 15:07:10'),(1,254801,255000,'2024-10-28 15:07:11'),(1,255001,255200,'2024-11-03 21:28:56'),(1,255201,255400,'2024-11-03 21:28:57'),(1,255401,255600,'2024-11-08 17:32:53'),(1,255601,255800,'2024-11-08 17:32:54'),(1,255801,256000,'2024-11-09 14:45:55'),(1,256001,256200,'2024-11-09 14:45:58'),(1,256201,256400,'2024-11-09 14:54:04'),(1,256401,256600,'2024-11-09 14:54:05'),(1,256601,256800,'2024-11-09 16:34:13'),(1,256801,257000,'2024-11-09 16:34:14'),(1,257001,257200,'2024-11-09 16:50:20'),(1,257201,257400,'2024-11-09 16:50:21'),(1,257401,257600,'2024-11-09 16:52:44'),(1,257601,257800,'2024-11-09 16:52:45'),(1,257801,258000,'2024-11-09 16:56:23'),(1,258001,258200,'2024-11-09 16:56:24'),(1,258201,258400,'2024-11-09 17:01:20'),(1,258401,258600,'2024-11-09 17:01:21'),(1,258601,258800,'2024-11-09 17:06:22'),(1,258801,259000,'2024-11-09 17:06:23'),(1,259001,259200,'2024-11-09 17:08:19'),(1,259201,259400,'2024-11-09 17:08:20'),(1,259401,259600,'2024-11-09 17:14:39'),(1,259601,259800,'2024-11-09 17:14:40'),(1,259801,260000,'2024-11-09 17:15:23'),(1,260001,260200,'2024-11-09 17:15:24'),(1,260201,260400,'2024-11-09 17:23:28'),(1,260401,260600,'2024-11-09 17:23:29'),(1,260601,260800,'2024-11-09 17:31:42'),(1,260801,261000,'2024-11-09 17:31:43'),(1,261001,261200,'2024-11-09 17:35:55'),(1,261201,261400,'2024-11-09 17:35:56'),(1,261401,261600,'2024-11-09 17:41:02'),(1,261601,261800,'2024-11-09 17:41:03'),(1,261801,262000,'2024-11-09 17:42:02'),(1,262001,262200,'2024-11-09 17:42:03'),(1,262201,262400,'2024-11-09 17:42:46'),(1,262401,262600,'2024-11-09 17:42:47'),(1,262601,262800,'2024-11-09 17:43:32'),(1,262801,263000,'2024-11-09 17:43:33'),(1,263001,263200,'2024-11-09 17:44:55'),(1,263201,263400,'2024-11-09 17:44:56'),(1,263401,263600,'2024-11-09 17:45:41'),(1,263601,263800,'2024-11-09 17:45:42'),(1,263801,264000,'2024-11-09 17:48:03'),(1,264001,264200,'2024-11-09 17:48:04'),(1,264201,264400,'2024-11-09 17:49:10'),(1,264401,264600,'2024-11-09 17:49:11'),(1,264601,264800,'2024-11-09 17:55:03'),(1,264801,265000,'2024-11-09 17:55:04'),(1,265001,265200,'2024-11-09 17:57:22'),(1,265201,265400,'2024-11-09 17:57:23'),(1,265401,265600,'2024-11-09 17:58:30'),(1,265601,265800,'2024-11-09 17:58:31'),(1,265801,266000,'2024-11-09 18:03:14'),(1,266001,266200,'2024-11-09 18:03:15'),(1,266201,266400,'2024-11-09 18:06:30'),(1,266401,266600,'2024-11-09 18:06:31'),(1,266601,266800,'2024-11-09 18:17:56'),(1,266801,267000,'2024-11-09 18:17:57'),(1,267001,267200,'2024-11-09 18:20:21'),(1,267201,267400,'2024-11-09 18:20:22'),(1,267401,267600,'2024-11-09 18:28:45'),(1,267601,267800,'2024-11-09 18:28:46'),(1,267801,268000,'2024-11-09 18:46:43'),(1,268001,268200,'2024-11-09 18:46:44'),(1,268201,268400,'2024-11-09 19:54:25'),(1,268401,268600,'2024-11-09 19:54:26'),(1,268601,268800,'2024-11-10 13:15:05'),(1,268801,269000,'2024-11-10 13:15:06'),(1,269001,269200,'2024-11-10 13:38:00'),(1,269201,269400,'2024-11-10 13:38:01'),(1,269401,269600,'2024-11-10 13:50:40'),(1,269601,269800,'2024-11-10 13:50:41'),(1,269801,270000,'2024-11-11 15:32:22'),(1,270001,270200,'2024-11-11 15:32:23'),(1,270201,270400,'2024-11-11 18:10:04'),(1,270401,270600,'2024-11-11 18:10:04'),(1,270601,270800,'2024-11-11 18:37:41'),(1,270801,271000,'2024-11-11 18:37:42'),(1,271001,271200,'2024-11-11 18:46:33'),(1,271201,271400,'2024-11-11 18:46:34'),(1,271401,271600,'2024-11-11 19:09:39'),(1,271601,271800,'2024-11-11 19:09:40'),(1,271801,272000,'2024-11-12 15:42:19'),(1,272001,272200,'2024-11-12 15:42:19'),(1,272201,272400,'2024-11-12 15:53:33'),(1,272401,272600,'2024-11-12 15:53:34'),(1,272601,272800,'2024-11-12 15:59:56'),(1,272801,273000,'2024-11-12 15:59:57'),(1,273001,273200,'2024-11-12 16:10:45'),(1,273201,273400,'2024-11-12 16:10:46'),(1,273401,273600,'2024-11-12 16:12:18'),(1,273601,273800,'2024-11-12 16:12:19'),(1,273801,274000,'2024-11-12 16:18:25'),(1,274001,274200,'2024-11-12 16:18:26'),(1,274201,274400,'2024-11-12 16:20:51'),(1,274401,274600,'2024-11-12 16:20:52'),(1,274601,274800,'2024-11-12 16:23:42'),(1,274801,275000,'2024-11-12 16:23:43'),(1,275001,275200,'2024-11-12 16:25:23'),(1,275201,275400,'2024-11-12 16:25:24'),(1,275401,275600,'2024-11-12 16:26:06'),(1,275601,275800,'2024-11-12 16:26:07'),(1,275801,276000,'2024-11-12 16:27:38'),(1,276001,276200,'2024-11-12 16:27:39'),(1,276201,276400,'2024-11-12 16:29:17'),(1,276401,276600,'2024-11-12 16:29:18'),(1,276601,276800,'2024-11-12 16:30:21'),(1,276801,277000,'2024-11-12 16:30:22'),(1,277001,277200,'2024-11-12 16:32:10'),(1,277201,277400,'2024-11-12 16:32:11'),(1,277401,277600,'2024-11-12 16:33:26'),(1,277601,277800,'2024-11-12 16:33:27'),(1,277801,278000,'2024-11-12 16:35:05'),(1,278001,278200,'2024-11-12 16:35:06'),(1,278201,278400,'2024-11-12 16:36:45'),(1,278401,278600,'2024-11-12 16:36:46'),(1,278601,278800,'2024-11-12 16:40:50'),(1,278801,279000,'2024-11-12 16:40:51'),(1,279001,279200,'2024-11-12 16:44:13'),(1,279201,279400,'2024-11-12 16:44:14'),(1,279401,279600,'2024-11-12 16:45:08'),(1,279601,279800,'2024-11-12 16:45:09'),(1,279801,280000,'2024-11-12 16:48:44'),(1,280001,280200,'2024-11-12 16:48:45'),(1,280201,280400,'2024-11-12 16:51:08'),(1,280401,280600,'2024-11-12 16:51:09'),(1,280601,280800,'2024-11-12 16:55:32'),(1,280801,281000,'2024-11-12 16:55:33'),(1,281001,281200,'2024-11-12 17:00:21'),(1,281201,281400,'2024-11-12 17:00:22'),(1,281401,281600,'2024-11-12 17:01:15'),(1,281601,281800,'2024-11-12 17:01:16'),(1,281801,282000,'2024-11-12 17:05:55'),(1,282001,282200,'2024-11-12 17:05:57'),(1,282201,282400,'2024-11-12 17:07:45'),(1,282401,282600,'2024-11-12 17:07:46'),(1,282601,282800,'2024-11-12 17:14:46'),(1,282801,283000,'2024-11-12 17:14:47'),(1,283001,283200,'2024-11-12 17:16:29'),(1,283201,283400,'2024-11-12 17:16:30'),(1,283401,283600,'2024-11-12 17:29:19'),(1,283601,283800,'2024-11-12 17:29:20'),(1,283801,284000,'2024-11-12 17:35:06'),(1,284001,284200,'2024-11-12 17:35:07'),(1,284201,284400,'2024-11-12 17:36:43'),(1,284401,284600,'2024-11-12 17:36:44'),(1,284601,284800,'2024-11-12 17:37:18'),(1,284801,285000,'2024-11-12 17:37:19'),(1,285001,285200,'2024-11-12 17:38:13'),(1,285201,285400,'2024-11-12 17:38:14'),(1,285401,285600,'2024-11-12 17:40:13'),(1,285601,285800,'2024-11-12 17:40:14'),(1,285801,286000,'2024-11-12 17:40:42'),(1,286001,286200,'2024-11-12 17:40:43'),(1,286201,286400,'2024-11-12 17:43:00'),(1,286401,286600,'2024-11-12 17:43:01'),(1,286601,286800,'2024-11-12 17:46:00'),(1,286801,287000,'2024-11-12 17:46:01'),(1,287001,287200,'2024-11-12 17:50:16'),(1,287201,287400,'2024-11-12 17:50:17'),(1,287401,287600,'2024-11-12 17:58:23'),(1,287601,287800,'2024-11-12 17:58:24'),(1,287801,288000,'2024-11-12 18:00:23'),(1,288001,288200,'2024-11-12 18:00:24'),(1,288201,288400,'2024-11-12 18:10:18'),(1,288401,288600,'2024-11-12 18:10:20'),(1,288601,288800,'2024-11-12 18:20:56'),(1,288801,289000,'2024-11-12 18:20:57'),(1,289001,289200,'2024-11-12 18:22:54'),(1,289201,289400,'2024-11-12 18:22:55'),(1,289401,289600,'2024-11-12 18:25:49'),(1,289601,289800,'2024-11-12 18:25:50'),(1,289801,290000,'2024-11-12 18:28:55'),(1,290001,290200,'2024-11-12 18:28:56'),(1,290201,290400,'2024-11-12 19:05:48'),(1,290401,290600,'2024-11-12 19:05:49'),(1,290601,290800,'2024-11-12 19:08:25'),(1,290801,291000,'2024-11-12 19:08:26'),(1,291001,291200,'2024-11-12 19:14:11'),(1,291201,291400,'2024-11-12 19:14:12'),(1,291401,291600,'2024-11-12 19:15:23'),(1,291601,291800,'2024-11-12 19:15:24'),(1,291801,292000,'2024-11-12 19:17:17'),(1,292001,292200,'2024-11-12 19:17:18'),(1,292201,292400,'2024-11-12 19:19:25'),(1,292401,292600,'2024-11-12 19:19:26'),(1,292601,292800,'2024-11-12 19:21:32'),(1,292801,293000,'2024-11-12 19:21:33'),(1,293001,293200,'2024-11-12 19:23:01'),(1,293201,293400,'2024-11-12 19:23:02'),(1,293401,293600,'2024-11-13 18:51:33'),(1,293601,293800,'2024-11-13 18:51:33'),(1,293801,294000,'2024-11-14 15:45:30'),(1,294001,294200,'2024-11-14 15:45:31'),(1,294201,294400,'2024-11-14 15:46:05'),(1,294401,294600,'2024-11-14 15:46:05'),(1,294601,294800,'2024-11-14 15:54:30'),(1,294801,295000,'2024-11-14 15:54:31'),(1,295001,295200,'2024-11-15 18:25:44'),(1,295201,295400,'2024-11-15 18:25:45'),(1,295401,295600,'2024-11-16 16:52:10'),(1,295601,295800,'2024-11-16 16:52:10'),(1,295801,296000,'2024-11-16 17:19:49'),(1,296001,296200,'2024-11-16 17:19:50'),(1,296201,296400,'2024-11-16 17:21:04'),(1,296401,296600,'2024-11-16 17:21:05'),(1,296601,296800,'2024-11-16 17:34:26'),(1,296801,297000,'2024-11-16 17:34:27'),(1,297001,297200,'2024-11-16 17:46:10'),(1,297201,297400,'2024-11-16 17:46:11'),(1,297401,297600,'2024-11-18 15:35:40'),(1,297601,297800,'2024-11-18 15:35:41'),(1,297801,298000,'2024-11-18 15:50:13'),(1,298001,298200,'2024-11-18 15:50:14'),(1,298201,298400,'2024-11-18 16:37:55'),(1,298401,298600,'2024-11-18 16:37:56'),(1,298601,298800,'2024-11-18 16:38:59'),(1,298801,299000,'2024-11-18 16:39:00'),(1,299001,299200,'2024-11-18 16:48:30'),(1,299201,299400,'2024-11-18 16:48:31'),(1,299401,299600,'2024-11-18 16:57:24'),(1,299601,299800,'2024-11-18 16:57:25'),(1,299801,300000,'2024-11-18 17:05:59'),(1,300001,300200,'2024-11-18 17:06:01'),(1,300201,300400,'2024-11-18 17:25:11'),(1,300401,300600,'2024-11-18 17:25:12'),(1,300601,300800,'2024-11-18 17:32:22'),(1,300801,301000,'2024-11-18 17:32:23'),(1,301001,301200,'2024-11-18 17:40:34'),(1,301201,301400,'2024-11-18 17:40:35'),(1,301401,301600,'2024-11-18 17:46:02'),(1,301601,301800,'2024-11-18 17:46:03'),(1,301801,302000,'2024-11-18 17:54:05'),(1,302001,302200,'2024-11-18 17:54:06'),(1,302201,302400,'2024-11-18 18:01:48'),(1,302401,302600,'2024-11-18 18:01:49'),(1,302601,302800,'2024-11-18 18:09:24'),(1,302801,303000,'2024-11-18 18:09:25'),(1,303001,303200,'2024-11-18 18:21:18'),(1,303201,303400,'2024-11-18 18:21:19'),(1,303401,303600,'2024-11-18 18:22:01'),(1,303601,303800,'2024-11-18 18:22:02'),(1,303801,304000,'2024-11-18 18:24:23'),(1,304001,304200,'2024-11-18 18:24:24'),(1,304201,304400,'2024-11-18 18:25:30'),(1,304401,304600,'2024-11-18 18:25:31'),(1,304601,304800,'2024-11-18 21:20:28'),(1,304801,305000,'2024-11-18 21:20:29'),(1,305001,305200,'2024-11-18 21:29:33'),(1,305201,305400,'2024-11-18 21:29:34'),(1,305401,305600,'2024-11-18 23:35:44'),(1,305601,305800,'2024-11-18 23:35:45'),(1,305801,306000,'2024-11-18 23:53:31'),(1,306001,306200,'2024-11-18 23:53:32'),(1,306201,306400,'2024-11-19 00:01:13'),(1,306401,306600,'2024-11-19 00:01:15'),(1,306601,306800,'2024-11-19 00:01:48'),(1,306801,307000,'2024-11-19 00:01:49'),(1,307001,307200,'2024-11-19 00:02:21'),(1,307201,307400,'2024-11-19 00:02:22'),(1,307401,307600,'2024-11-19 00:02:48'),(1,307601,307800,'2024-11-19 00:02:49'),(1,307801,308000,'2024-11-19 00:04:16'),(1,308001,308200,'2024-11-19 00:04:17'),(1,308201,308400,'2024-11-19 00:30:31'),(1,308401,308600,'2024-11-19 00:30:32'),(1,308601,308800,'2024-11-19 03:40:16'),(1,308801,309000,'2024-11-19 14:18:24'),(1,309001,309200,'2024-11-19 14:18:26'),(1,309201,309400,'2024-11-19 16:21:48'),(1,309401,309600,'2024-11-19 16:21:49'),(1,309601,309800,'2024-11-19 16:25:20'),(1,309801,310000,'2024-11-19 16:25:21'),(1,310001,310200,'2024-11-19 23:25:05'),(1,310201,310400,'2024-11-19 23:25:06'),(1,310401,310600,'2024-11-19 23:27:11'),(1,310601,310800,'2024-11-19 23:27:12'),(1,310801,311000,'2024-11-20 13:33:38'),(1,311001,311200,'2024-11-20 13:33:39'),(1,311201,311400,'2024-11-20 13:51:35'),(1,311401,311600,'2024-11-20 13:51:36'),(1,311601,311800,'2024-11-21 12:56:46'),(1,311801,312000,'2024-11-21 12:56:46'),(1,312001,312200,'2024-11-21 12:58:00'),(1,312201,312400,'2024-11-21 12:58:01'),(1,312401,312600,'2024-11-21 17:27:12'),(1,312601,312800,'2024-11-21 17:27:13'),(1,312801,313000,'2024-11-21 17:29:08'),(1,313001,313200,'2024-11-21 17:29:09'),(1,313201,313400,'2024-11-21 18:10:11'),(1,313401,313600,'2024-11-21 18:10:12'),(1,313601,313800,'2024-11-21 18:23:44'),(1,313801,314000,'2024-11-21 18:23:45'),(1,314001,314200,'2024-11-22 15:50:57'),(1,314201,314400,'2024-11-22 15:50:57'),(1,314401,314600,'2024-11-22 16:31:43'),(1,314601,314800,'2024-11-22 16:31:44'),(1,314801,315000,'2024-11-22 16:34:12'),(1,315001,315200,'2024-11-22 16:34:13'),(1,315201,315400,'2024-11-22 16:36:18'),(1,315401,315600,'2024-11-22 16:36:19'),(1,315601,315800,'2024-11-22 16:36:58'),(1,315801,316000,'2024-11-22 16:37:00'),(1,316001,316200,'2024-11-22 16:45:00'),(1,316201,316400,'2024-11-22 16:45:02'),(1,316401,316600,'2024-11-22 16:49:25'),(1,316601,316800,'2024-11-22 16:49:26'),(1,316801,317000,'2024-11-22 16:50:47'),(1,317001,317200,'2024-11-22 16:50:48'),(1,317201,317400,'2024-11-22 16:52:21'),(1,317401,317600,'2024-11-22 16:52:22'),(1,317601,317800,'2024-11-22 16:53:21'),(1,317801,318000,'2024-11-22 16:53:22'),(1,318001,318200,'2024-11-22 16:53:56'),(1,318201,318400,'2024-11-22 16:53:57'),(1,318401,318600,'2024-11-22 16:55:33'),(1,318601,318800,'2024-11-22 16:55:35'),(1,318801,319000,'2024-11-22 16:57:20'),(1,319001,319200,'2024-11-22 16:57:21'),(1,319201,319400,'2024-11-22 18:11:58'),(1,319401,319600,'2024-11-22 18:11:58'),(1,319601,319800,'2024-11-22 18:18:23'),(1,319801,320000,'2024-11-22 18:18:25'),(1,320001,320200,'2024-11-22 18:34:30'),(1,320201,320400,'2024-11-22 18:34:31'),(1,320401,320600,'2024-11-23 15:11:23'),(1,320601,320800,'2024-11-23 15:11:24'),(1,320801,321000,'2024-11-23 15:49:40'),(1,321001,321200,'2024-11-23 15:49:41'),(1,321201,321400,'2024-11-23 15:50:16'),(1,321401,321600,'2024-11-23 15:50:17'),(1,321601,321800,'2024-11-23 15:52:11'),(1,321801,322000,'2024-11-23 15:52:12'),(1,322001,322200,'2024-11-23 15:52:54'),(1,322201,322400,'2024-11-23 15:52:55'),(1,322401,322600,'2024-11-23 16:27:52'),(1,322601,322800,'2024-11-23 16:27:53'),(1,322801,323000,'2024-11-23 16:32:13'),(1,323001,323200,'2024-11-23 16:32:14'),(1,323201,323400,'2024-11-23 16:36:44'),(1,323401,323600,'2024-11-23 16:36:45'),(1,323601,323800,'2024-11-23 17:00:48'),(1,323801,324000,'2024-11-23 17:00:49'),(1,324001,324200,'2024-11-23 17:08:25'),(1,324201,324400,'2024-11-23 17:08:25'),(1,324401,324600,'2024-11-23 17:14:21'),(1,324601,324800,'2024-11-23 17:14:22'),(1,324801,325000,'2024-11-23 17:15:32'),(1,325001,325200,'2024-11-23 17:15:33'),(1,325201,325400,'2024-11-23 17:18:31'),(1,325401,325600,'2024-11-23 17:18:32'),(1,325601,325800,'2024-11-23 17:22:45'),(1,325801,326000,'2024-11-23 17:22:46'),(1,326001,326200,'2024-11-23 17:23:32'),(1,326201,326400,'2024-11-23 17:23:33'),(1,326401,326600,'2024-11-23 17:30:29'),(1,326601,326800,'2024-11-23 17:30:30'),(1,326801,327000,'2024-11-23 17:35:41'),(1,327001,327200,'2024-11-23 17:35:42'),(1,327201,327400,'2024-11-23 17:54:28'),(1,327401,327600,'2024-11-23 17:54:29'),(1,327601,327800,'2024-11-23 17:56:26'),(1,327801,328000,'2024-11-23 17:56:27'),(1,328001,328200,'2024-11-23 17:57:44'),(1,328201,328400,'2024-11-23 17:57:45'),(1,328401,328600,'2024-11-23 18:36:15'),(1,328601,328800,'2024-11-23 18:36:16'),(1,328801,329000,'2024-11-23 18:36:35'),(1,329001,329200,'2024-11-23 18:36:36'),(1,329201,329400,'2024-11-23 18:54:34'),(1,329401,329600,'2024-11-23 18:54:35'),(1,329601,329800,'2024-11-23 19:00:02'),(1,329801,330000,'2024-11-23 19:00:03'),(1,330001,330200,'2024-11-23 19:08:06'),(1,330201,330400,'2024-11-23 19:08:07'),(1,330401,330600,'2024-11-23 19:32:52'),(1,330601,330800,'2024-11-23 19:32:53'),(1,330801,331000,'2024-11-23 19:38:08'),(1,331001,331200,'2024-11-23 19:38:09'),(1,331201,331400,'2024-11-23 19:43:42'),(1,331401,331600,'2024-11-23 19:43:43'),(1,331601,331800,'2024-11-23 19:44:22'),(1,331801,332000,'2024-11-23 19:44:23'),(1,332001,332200,'2024-11-23 19:58:50'),(1,332201,332400,'2024-11-23 19:58:51'),(1,332401,332600,'2024-11-23 20:00:03'),(1,332601,332800,'2024-11-23 20:00:04'),(1,332801,333000,'2024-11-23 20:05:37'),(1,333001,333200,'2024-11-23 20:05:38'),(1,333201,333400,'2024-11-23 20:11:20'),(1,333401,333600,'2024-11-23 20:11:22'),(1,333601,333800,'2024-11-23 20:19:31'),(1,333801,334000,'2024-11-23 20:19:32'),(1,334001,334200,'2024-11-23 20:20:29'),(1,334201,334400,'2024-11-23 20:20:31'),(1,334401,334600,'2024-11-23 20:21:25'),(1,334601,334800,'2024-11-23 20:21:27'),(1,334801,335000,'2024-11-23 20:23:46'),(1,335001,335200,'2024-11-23 20:23:47'),(1,335201,335400,'2024-11-23 20:31:10'),(1,335401,335600,'2024-11-23 20:31:11'),(1,335601,335800,'2024-11-23 20:42:24'),(1,335801,336000,'2024-11-23 20:42:26'),(1,336001,336200,'2024-11-23 20:45:58'),(1,336201,336400,'2024-11-23 20:45:59'),(1,336401,336600,'2024-11-23 20:46:59'),(1,336601,336800,'2024-11-23 20:47:01'),(1,336801,337000,'2024-11-23 20:48:28'),(1,337001,337200,'2024-11-23 20:48:29'),(1,337201,337400,'2024-11-23 20:53:27'),(1,337401,337600,'2024-11-23 20:53:28'),(1,337601,337800,'2024-11-23 20:55:02'),(1,337801,338000,'2024-11-23 20:55:03'),(1,338001,338200,'2024-11-23 21:04:31'),(1,338201,338400,'2024-11-23 21:04:32'),(1,338401,338600,'2024-11-23 21:06:23'),(1,338601,338800,'2024-11-23 21:06:24'),(1,338801,339000,'2024-11-23 21:15:58'),(1,339001,339200,'2024-11-23 21:15:59'),(1,339201,339400,'2024-11-24 10:48:05'),(1,339401,339600,'2024-11-24 10:48:06'),(1,339601,339800,'2024-11-24 11:01:34'),(1,339801,340000,'2024-11-24 11:01:36'),(1,340001,340200,'2024-11-24 11:02:56'),(1,340201,340400,'2024-11-24 11:02:58'),(1,340401,340600,'2024-11-24 11:10:07'),(1,340601,340800,'2024-11-24 11:10:09'),(1,340801,341000,'2024-11-24 11:11:35'),(1,341001,341200,'2024-11-24 11:11:36'),(1,341201,341400,'2024-11-24 11:28:27'),(1,341401,341600,'2024-11-24 11:28:28'),(1,341601,341800,'2024-11-24 11:33:06'),(1,341801,342000,'2024-11-24 11:33:08'),(1,342001,342200,'2024-11-24 11:34:31'),(1,342201,342400,'2024-11-24 11:34:32'),(1,342401,342600,'2024-11-24 16:19:56'),(1,342601,342800,'2024-11-24 16:19:57'),(1,342801,343000,'2024-11-24 16:23:12'),(1,343001,343200,'2024-11-24 16:23:14'),(1,343201,343400,'2024-11-24 16:38:16'),(1,343401,343600,'2024-11-24 16:38:18'),(1,343601,343800,'2024-11-24 16:39:06'),(1,343801,344000,'2024-11-24 16:39:07'),(1,344001,344200,'2024-11-24 16:46:15'),(1,344201,344400,'2024-11-24 16:46:17'),(1,344401,344600,'2024-11-24 17:22:48'),(1,344601,344800,'2024-11-24 17:22:49'),(1,344801,345000,'2024-11-24 17:41:38'),(1,345001,345200,'2024-11-24 17:41:40'),(1,345201,345400,'2024-11-24 18:16:23'),(1,345401,345600,'2024-11-24 18:16:25'),(1,345601,345800,'2024-11-24 18:17:40'),(1,345801,346000,'2024-11-24 18:17:42'),(1,346001,346200,'2024-11-24 18:18:28'),(1,346201,346400,'2024-11-24 18:18:30'),(1,346401,346600,'2024-11-24 18:20:22'),(1,346601,346800,'2024-11-24 18:20:24'),(1,346801,347000,'2024-11-24 18:20:57'),(1,347001,347200,'2024-11-24 18:20:58'),(1,347201,347400,'2024-11-24 18:30:10'),(1,347401,347600,'2024-11-24 18:30:11'),(1,347601,347800,'2024-11-24 18:31:25'),(1,347801,348000,'2024-11-24 18:31:26'),(1,348001,348200,'2024-11-24 18:35:24'),(1,348201,348400,'2024-11-24 18:35:25'),(1,348401,348600,'2024-11-24 18:40:56'),(1,348601,348800,'2024-11-24 18:40:57'),(1,348801,349000,'2024-11-24 18:41:59'),(1,349001,349200,'2024-11-24 18:42:00'),(1,349201,349400,'2024-11-24 18:46:05'),(1,349401,349600,'2024-11-24 18:46:06'),(1,349601,349800,'2024-11-24 18:48:27'),(1,349801,350000,'2024-11-24 18:48:28'),(1,350001,350200,'2024-11-24 18:53:08'),(1,350201,350400,'2024-11-24 18:53:09'),(1,350401,350600,'2024-11-24 18:53:28'),(1,350601,350800,'2024-11-24 18:53:29'),(1,350801,351000,'2024-11-24 18:54:49'),(1,351001,351200,'2024-11-24 18:54:50'),(1,351201,351400,'2024-11-24 18:58:05'),(1,351401,351600,'2024-11-24 18:58:07'),(1,351601,351800,'2024-11-24 19:08:10'),(1,351801,352000,'2024-11-24 19:08:11'),(1,352001,352200,'2024-11-24 19:15:34'),(1,352201,352400,'2024-11-24 19:15:36'),(1,352401,352600,'2024-11-24 19:19:11'),(1,352601,352800,'2024-11-24 19:19:13'),(1,352801,353000,'2024-11-24 19:20:16'),(1,353001,353200,'2024-11-24 19:20:18'),(1,353201,353400,'2024-11-24 19:28:18'),(1,353401,353600,'2024-11-24 19:28:20'),(1,353601,353800,'2024-11-24 19:37:33'),(1,353801,354000,'2024-11-24 19:37:34'),(1,354001,354200,'2024-11-24 19:58:51'),(1,354201,354400,'2024-11-24 19:58:53'),(1,354401,354600,'2024-11-24 20:02:10'),(1,354601,354800,'2024-11-24 20:02:11'),(1,354801,355000,'2024-11-24 20:07:03'),(1,355001,355200,'2024-11-24 20:07:04'),(1,355201,355400,'2024-11-24 20:11:16'),(1,355401,355600,'2024-11-24 20:11:17'),(1,355601,355800,'2024-11-24 20:12:43'),(1,355801,356000,'2024-11-24 20:12:44'),(1,356001,356200,'2024-11-24 20:17:25'),(1,356201,356400,'2024-11-24 20:17:26'),(1,356401,356600,'2024-11-24 20:19:48'),(1,356601,356800,'2024-11-24 20:19:49'),(1,356801,357000,'2024-11-24 20:25:34'),(1,357001,357200,'2024-11-24 20:25:35'),(1,357201,357400,'2024-11-24 20:35:06'),(1,357401,357600,'2024-11-24 20:35:07'),(1,357601,357800,'2024-11-24 20:57:00'),(1,357801,358000,'2024-11-24 20:57:01'),(1,358001,358200,'2024-11-24 21:02:46'),(1,358201,358400,'2024-11-24 21:02:47'),(1,358401,358600,'2024-11-24 21:04:29'),(1,358601,358800,'2024-11-24 21:04:30'),(1,358801,359000,'2024-11-24 21:07:49'),(1,359001,359200,'2024-11-24 21:07:50'),(1,359201,359400,'2024-11-24 21:20:32'),(1,359401,359600,'2024-11-24 21:20:33'),(1,359601,359800,'2024-11-24 21:39:50'),(1,359801,360000,'2024-11-24 21:39:51'),(1,360001,360200,'2024-11-24 22:08:50'),(1,360201,360400,'2024-11-24 22:08:51'),(1,360401,360600,'2024-11-25 13:25:37'),(1,360601,360800,'2024-11-25 13:25:38'),(1,360801,361000,'2024-11-25 19:23:11'),(1,361001,361200,'2024-11-25 19:23:11'),(1,361201,361400,'2024-11-26 15:40:42'),(1,361401,361600,'2024-11-26 15:40:43'),(1,361601,361800,'2024-11-26 16:06:52'),(1,361801,362000,'2024-11-26 16:06:53'),(1,362001,362200,'2024-11-26 16:10:42'),(1,362201,362400,'2024-11-26 16:10:43'),(1,362401,362600,'2024-11-26 16:22:23'),(1,362601,362800,'2024-11-26 16:22:25'),(1,362801,363000,'2024-11-26 16:53:01'),(1,363001,363200,'2024-11-26 16:53:03'),(1,363201,363400,'2024-11-26 16:55:29'),(1,363401,363600,'2024-11-26 16:55:31'),(1,363601,363800,'2024-11-26 16:56:01'),(1,363801,364000,'2024-11-26 16:56:02'),(1,364001,364200,'2024-11-26 17:00:10'),(1,364201,364400,'2024-11-26 17:00:10'),(1,364401,364600,'2024-11-27 13:46:54'),(1,364601,364800,'2024-11-27 13:46:54'),(1,364801,365000,'2024-11-27 13:48:05'),(1,365001,365200,'2024-11-27 13:48:06'),(1,365201,365400,'2024-11-27 16:30:23'),(1,365401,365600,'2024-11-27 16:30:24'),(1,365601,365800,'2024-11-27 16:35:35'),(1,365801,366000,'2024-11-27 16:35:36'),(1,366001,366200,'2024-11-27 16:39:29'),(1,366201,366400,'2024-11-27 16:39:30'),(1,366401,366600,'2024-11-27 19:49:26'),(1,366601,366800,'2024-11-27 19:49:27'),(1,366801,367000,'2024-11-27 19:54:38'),(1,367001,367200,'2024-11-27 19:54:39'),(1,367201,367400,'2024-11-29 18:02:54'),(1,367401,367600,'2024-11-29 18:02:55'),(1,367601,367800,'2024-11-30 10:14:45'),(1,367801,368000,'2024-11-30 10:14:47'),(1,368001,368200,'2024-11-30 10:34:42'),(1,368201,368400,'2024-11-30 10:34:44'),(1,368401,368600,'2024-11-30 21:25:56'),(1,368601,368800,'2024-11-30 21:25:56'),(1,368801,369000,'2024-12-01 18:38:40'),(1,369001,369200,'2024-12-01 18:38:40'),(1,369201,369400,'2024-12-02 14:20:43'),(1,369401,369600,'2024-12-02 14:20:45'),(1,369601,369800,'2024-12-02 14:26:23'),(1,369801,370000,'2024-12-02 14:26:25'),(1,370001,370200,'2024-12-02 14:27:52'),(1,370201,370400,'2024-12-02 14:27:54'),(1,370401,370600,'2024-12-03 00:57:08'),(1,370601,370800,'2024-12-03 18:39:25'),(1,370801,371000,'2024-12-03 18:39:25'),(1,371001,371200,'2024-12-04 13:11:19'),(1,371201,371400,'2024-12-04 13:11:21'),(1,371401,371600,'2024-12-04 17:20:57'),(1,371601,371800,'2024-12-04 17:20:58'),(1,371801,372000,'2024-12-04 19:41:02'),(1,372001,372200,'2024-12-04 19:41:03'),(1,372201,372400,'2024-12-05 17:48:35'),(1,372401,372600,'2024-12-05 17:48:36'),(1,372601,372800,'2024-12-05 18:31:09'),(1,372801,373000,'2024-12-05 18:31:10'),(1,373001,373200,'2024-12-05 18:35:16'),(1,373201,373400,'2024-12-05 18:49:50'),(1,373401,373600,'2024-12-05 18:49:51'),(1,373601,373800,'2024-12-05 20:20:53'),(1,373801,374000,'2024-12-05 20:20:54'),(1,374001,374200,'2024-12-05 22:35:56'),(1,374201,374400,'2024-12-05 22:35:57'),(1,374401,374600,'2024-12-05 22:44:50'),(1,374601,374800,'2024-12-05 22:44:51'),(1,374801,375000,'2024-12-05 22:50:52'),(1,375001,375200,'2024-12-05 22:50:53'),(1,375201,375400,'2024-12-05 22:58:24'),(1,375401,375600,'2024-12-05 22:58:25'),(1,375601,375800,'2024-12-06 01:30:25'),(1,375801,376000,'2024-12-06 01:31:59'),(1,376001,376200,'2024-12-06 01:37:44'),(1,376201,376400,'2024-12-06 01:56:57'),(1,376401,376600,'2024-12-06 12:16:54'),(1,376601,376800,'2024-12-06 12:16:56'),(1,376801,377000,'2024-12-06 23:48:26'),(1,377001,377200,'2024-12-06 23:48:26'),(1,377201,377400,'2024-12-07 00:02:44'),(1,377401,377600,'2024-12-07 10:23:27'),(1,377601,377800,'2024-12-07 10:33:55'),(1,377801,378000,'2024-12-07 16:34:15'),(1,378001,378200,'2024-12-07 16:34:16'),(1,378201,378400,'2024-12-07 16:45:17'),(1,378401,378600,'2024-12-07 16:45:18'),(1,378601,378800,'2024-12-07 23:45:01'),(1,378801,379000,'2024-12-07 23:45:02'),(1,379001,379200,'2024-12-08 08:06:18'),(1,379201,379400,'2024-12-08 13:08:14'),(1,379401,379600,'2024-12-08 13:08:16'),(1,379601,379800,'2024-12-08 16:02:18'),(1,379801,380000,'2024-12-08 16:02:18'),(1,380001,380200,'2024-12-08 16:47:57'),(1,380201,380400,'2024-12-08 21:28:12'),(1,380401,380600,'2024-12-08 21:28:13'),(1,380601,380800,'2024-12-08 21:29:13'),(1,380801,381000,'2024-12-08 21:29:15'),(1,381001,381200,'2024-12-08 21:30:45'),(1,381201,381400,'2024-12-08 21:30:47'),(1,381401,381600,'2024-12-09 04:17:28'),(1,381601,381800,'2024-12-09 13:01:32'),(1,381801,382000,'2024-12-09 13:34:08'),(1,382001,382200,'2024-12-09 13:34:09'),(1,382201,382400,'2024-12-09 13:35:37'),(1,382401,382600,'2024-12-09 13:35:38'),(1,382601,382800,'2024-12-09 13:38:36'),(1,382801,383000,'2024-12-09 13:38:37'),(1,383001,383200,'2024-12-09 14:02:28'),(1,383201,383400,'2024-12-09 14:02:29'),(1,383401,383600,'2024-12-09 16:56:58'),(1,383601,383800,'2024-12-09 16:56:58'),(1,383801,384000,'2024-12-09 19:30:21'),(1,384001,384200,'2024-12-10 16:50:36'),(1,384201,384400,'2024-12-10 16:50:36'),(1,384401,384600,'2024-12-10 17:15:13'),(1,384601,384800,'2024-12-10 17:15:13'),(1,384801,385000,'2024-12-10 18:48:13'),(1,385001,385200,'2024-12-10 18:48:14'),(1,385201,385400,'2024-12-10 18:49:47'),(1,385401,385600,'2024-12-10 18:49:48'),(1,385601,385800,'2024-12-10 18:51:00'),(1,385801,386000,'2024-12-10 18:51:01'),(1,386001,386200,'2024-12-10 18:52:25'),(1,386201,386400,'2024-12-10 18:52:26'),(1,386401,386600,'2024-12-10 18:54:10'),(1,386601,386800,'2024-12-10 18:54:11'),(1,386801,387000,'2024-12-10 18:55:55'),(1,387001,387200,'2024-12-10 18:55:56'),(1,387201,387400,'2024-12-10 18:56:55'),(1,387401,387600,'2024-12-10 18:56:56'),(1,387601,387800,'2024-12-10 19:10:32'),(1,387801,388000,'2024-12-10 19:10:33'),(1,388001,388200,'2024-12-10 19:11:40'),(1,388201,388400,'2024-12-10 19:11:41'),(1,388401,388600,'2024-12-10 20:53:59'),(1,388601,388800,'2024-12-10 20:54:01'),(1,388801,389000,'2024-12-11 02:39:42'),(1,389001,389200,'2024-12-11 02:50:06'),(1,389201,389400,'2024-12-11 02:50:44'),(1,389401,389600,'2024-12-11 02:51:17'),(1,389601,389800,'2024-12-11 10:15:13'),(1,389801,390000,'2024-12-11 10:15:14'),(1,390001,390200,'2024-12-11 18:30:18'),(1,390201,390400,'2024-12-11 18:30:18'),(1,390401,390600,'2024-12-11 18:30:48'),(1,390601,390800,'2024-12-11 18:30:50'),(1,390801,391000,'2024-12-11 18:47:01'),(1,391001,391200,'2024-12-11 18:47:03'),(1,391201,391400,'2024-12-11 18:51:44'),(1,391401,391600,'2024-12-11 18:51:45'),(1,391601,391800,'2024-12-11 19:40:10'),(1,391801,392000,'2024-12-11 19:40:12'),(1,392001,392200,'2024-12-11 20:53:44'),(1,392201,392400,'2024-12-11 20:53:45'),(1,392401,392600,'2024-12-11 22:01:34'),(1,392601,392800,'2024-12-11 22:01:35'),(1,392801,393000,'2024-12-11 22:04:44'),(1,393001,393200,'2024-12-11 22:04:45'),(1,393201,393400,'2024-12-11 22:06:57'),(1,393401,393600,'2024-12-11 22:06:59'),(1,393601,393800,'2024-12-11 22:08:01'),(1,393801,394000,'2024-12-11 22:08:02'),(1,394001,394200,'2024-12-11 22:10:49'),(1,394201,394400,'2024-12-11 22:10:50'),(1,394401,394600,'2024-12-11 22:23:59'),(1,394601,394800,'2024-12-11 22:24:01'),(1,394801,395000,'2024-12-11 22:42:07'),(1,395001,395200,'2024-12-11 22:42:08'),(1,395201,395400,'2024-12-11 23:28:51'),(1,395401,395600,'2024-12-12 13:38:09'),(1,395601,395800,'2024-12-12 13:38:10'),(1,395801,396000,'2024-12-12 15:17:28'),(1,396001,396200,'2024-12-12 15:17:30'),(1,396201,396400,'2024-12-12 17:18:30'),(1,396401,396600,'2024-12-12 17:18:31'),(1,396601,396800,'2024-12-12 18:52:16'),(1,396801,397000,'2024-12-12 18:52:17'),(1,397001,397200,'2024-12-12 19:32:07'),(1,397201,397400,'2024-12-12 19:32:08'),(1,397401,397600,'2024-12-12 19:37:02'),(1,397601,397800,'2024-12-12 19:37:03'),(1,397801,398000,'2024-12-12 19:51:57'),(1,398001,398200,'2024-12-12 19:51:58'),(1,398201,398400,'2024-12-12 22:05:03'),(1,398401,398600,'2024-12-13 10:32:37'),(1,398601,398800,'2024-12-13 10:32:38'),(1,398801,399000,'2024-12-13 12:04:01'),(1,399001,399200,'2024-12-13 12:04:02'),(1,399201,399400,'2024-12-13 12:53:54'),(1,399401,399600,'2024-12-13 15:48:35'),(1,399601,399800,'2024-12-13 15:48:36'),(1,399801,400000,'2024-12-13 17:56:24'),(1,400001,400200,'2024-12-13 17:56:25'),(1,400201,400400,'2024-12-13 20:51:39'),(1,400401,400600,'2024-12-13 20:52:25'),(1,400601,400800,'2024-12-13 20:52:26'),(1,400801,401000,'2024-12-14 13:34:08'),(1,401001,401200,'2024-12-14 15:18:33'),(1,401201,401400,'2024-12-14 15:18:34'),(1,401401,401600,'2024-12-14 16:18:59'),(1,401601,401800,'2024-12-14 16:19:00'),(1,401801,402000,'2024-12-14 17:44:50'),(1,402001,402200,'2024-12-14 17:44:51'),(1,402201,402400,'2024-12-14 19:31:42'),(1,402401,402600,'2024-12-14 19:31:43'),(1,402601,402800,'2024-12-14 19:32:11'),(1,402801,403000,'2024-12-14 19:32:12'),(1,403001,403200,'2024-12-14 19:35:49'),(1,403201,403400,'2024-12-14 19:35:50'),(1,403401,403600,'2024-12-14 19:38:23'),(1,403601,403800,'2024-12-14 19:38:24'),(1,403801,404000,'2024-12-14 19:43:10'),(1,404001,404200,'2024-12-14 19:43:11'),(1,404201,404400,'2024-12-14 20:07:32'),(1,404401,404600,'2024-12-14 20:07:33'),(1,404601,404800,'2024-12-14 20:10:56'),(1,404801,405000,'2024-12-14 20:10:57'),(1,405001,405200,'2024-12-14 20:28:10'),(1,405201,405400,'2024-12-14 20:32:07'),(1,405401,405600,'2024-12-14 21:19:58'),(1,405601,405800,'2024-12-14 21:19:59'),(1,405801,406000,'2024-12-15 10:58:42'),(1,406001,406200,'2024-12-15 14:39:08'),(1,406201,406400,'2024-12-15 19:04:30'),(1,406401,406600,'2024-12-15 19:04:31'),(1,406601,406800,'2024-12-15 20:11:54'),(1,406801,407000,'2024-12-15 20:26:38'),(1,407001,407200,'2024-12-15 20:26:56'),(1,407201,407400,'2024-12-15 20:41:17'),(1,407401,407600,'2024-12-15 20:41:18'),(1,407601,407800,'2024-12-16 02:29:38'),(1,407801,408000,'2024-12-16 12:12:09'),(1,408001,408200,'2024-12-16 12:12:10'),(1,408201,408400,'2024-12-16 13:09:21'),(1,408401,408600,'2024-12-16 18:17:59'),(1,408601,408800,'2024-12-16 18:18:00'),(1,408801,409000,'2024-12-17 13:06:49'),(1,409001,409200,'2024-12-17 13:06:51'),(1,409201,409400,'2024-12-17 18:30:05'),(1,409401,409600,'2024-12-17 18:30:05'),(1,409601,409800,'2024-12-18 10:59:26'),(1,409801,410000,'2024-12-18 11:00:50'),(1,410001,410200,'2024-12-18 14:47:12'),(1,410201,410400,'2024-12-18 14:47:13'),(1,410401,410600,'2024-12-18 14:54:41'),(1,410601,410800,'2024-12-18 14:54:43'),(1,410801,411000,'2024-12-18 18:26:07'),(1,411001,411200,'2024-12-18 18:26:08'),(1,411201,411400,'2024-12-18 18:50:30'),(1,411401,411600,'2024-12-18 18:50:32'),(1,411601,411800,'2024-12-18 18:52:06'),(1,411801,412000,'2024-12-18 18:52:07'),(1,412001,412200,'2024-12-18 19:19:34'),(1,412201,412400,'2024-12-18 19:19:36'),(1,412401,412600,'2024-12-18 19:25:02'),(1,412601,412800,'2024-12-18 19:25:03'),(1,412801,413000,'2024-12-18 19:40:21'),(1,413001,413200,'2024-12-18 19:40:22'),(1,413201,413400,'2024-12-19 13:41:51'),(1,413401,413600,'2024-12-19 14:49:21'),(1,413601,413800,'2024-12-19 14:49:22'),(1,413801,414000,'2024-12-19 18:08:11'),(1,414001,414200,'2024-12-19 18:08:11'),(1,414201,414400,'2024-12-19 19:00:28'),(1,414401,414600,'2024-12-19 19:00:29'),(1,414601,414800,'2024-12-19 23:57:33'),(1,414801,415000,'2024-12-19 23:57:34'),(1,415001,415200,'2024-12-21 16:05:21'),(1,415201,415400,'2024-12-21 16:05:22'),(1,415401,415600,'2024-12-21 16:13:18'),(1,415601,415800,'2024-12-21 16:13:19'),(1,415801,416000,'2024-12-21 16:19:32'),(1,416001,416200,'2024-12-21 16:19:34'),(1,416201,416400,'2024-12-22 19:40:25'),(1,416401,416600,'2024-12-22 19:40:26'),(1,416601,416800,'2024-12-23 01:04:46'),(1,416801,417000,'2024-12-23 14:01:50'),(1,417001,417200,'2024-12-23 14:02:47'),(1,417201,417400,'2024-12-23 14:02:48'),(1,417401,417600,'2024-12-23 14:08:19'),(1,417601,417800,'2024-12-23 14:08:19'),(1,417801,418000,'2024-12-23 14:12:29'),(1,418001,418200,'2024-12-23 14:12:29'),(1,418201,418400,'2024-12-23 14:15:34'),(1,418401,418600,'2024-12-23 14:15:34'),(1,418601,418800,'2024-12-23 14:16:37'),(1,418801,419000,'2024-12-23 14:16:37'),(1,419001,419200,'2024-12-23 14:41:14'),(1,419201,419400,'2024-12-23 14:41:14'),(1,419401,419600,'2024-12-23 14:58:45'),(1,419601,419800,'2024-12-23 14:58:45'),(1,419801,420000,'2024-12-23 15:14:54'),(1,420001,420200,'2024-12-23 15:14:55'),(1,420201,420400,'2024-12-23 15:25:28'),(1,420401,420600,'2024-12-23 15:25:28'),(1,420601,420800,'2024-12-23 15:37:26'),(1,420801,421000,'2024-12-23 15:37:27'),(1,421001,421200,'2024-12-23 15:43:34'),(1,421201,421400,'2024-12-23 15:43:34'),(1,421401,421600,'2024-12-23 15:47:51'),(1,421601,421800,'2024-12-23 15:47:52'),(1,421801,422000,'2024-12-24 01:35:00'),(1,422001,422200,'2024-12-24 01:35:30'),(1,422201,422400,'2024-12-24 01:35:30'),(1,422401,422600,'2024-12-24 13:39:47'),(1,422601,422800,'2024-12-24 13:39:48'),(1,422801,423000,'2024-12-24 14:05:16'),(1,423001,423200,'2024-12-24 14:05:17'),(1,423201,423400,'2024-12-24 18:00:33'),(1,423401,423600,'2024-12-24 18:00:34'),(1,423601,423800,'2024-12-25 23:09:17'),(1,423801,424000,'2024-12-25 23:09:17'),(1,424001,424200,'2024-12-26 16:49:03'),(1,424201,424400,'2024-12-26 16:49:04'),(1,424401,424600,'2024-12-26 23:47:16'),(1,424601,424800,'2024-12-26 23:47:17'),(1,424801,425000,'2024-12-26 23:48:10'),(1,425001,425200,'2024-12-26 23:48:10'),(1,425201,425400,'2024-12-27 16:15:00'),(1,425401,425600,'2024-12-27 16:15:00'),(1,425601,425800,'2024-12-28 01:11:41'),(1,425801,426000,'2024-12-28 01:11:41'),(1,426001,426200,'2024-12-28 15:38:41'),(1,426201,426400,'2024-12-28 15:38:41'),(1,426401,426600,'2024-12-28 23:28:06'),(1,426601,426800,'2024-12-28 23:28:07'),(1,426801,427000,'2024-12-29 16:55:38'),(1,427001,427200,'2024-12-29 16:55:38'),(1,427201,427400,'2024-12-29 17:37:47'),(1,427401,427600,'2024-12-29 17:37:48'),(1,427601,427800,'2024-12-31 02:34:26'),(1,427801,428000,'2024-12-31 02:34:27'),(1,428001,428200,'2024-12-31 14:25:07'),(1,428201,428400,'2024-12-31 14:25:08'),(1,428401,428600,'2024-12-31 17:31:27'),(1,428601,428800,'2024-12-31 17:31:28'),(1,428801,429000,'2024-12-31 17:32:39'),(1,429001,429200,'2024-12-31 17:32:39'),(1,429201,429400,'2024-12-31 17:47:18'),(1,429401,429600,'2024-12-31 17:47:18'),(1,429601,429800,'2024-12-31 17:48:46'),(1,429801,430000,'2024-12-31 17:48:47'),(1,430001,430200,'2024-12-31 17:49:47'),(1,430201,430400,'2024-12-31 17:49:47'),(1,430401,430600,'2024-12-31 17:53:37'),(1,430601,430800,'2024-12-31 17:53:37'),(1,430801,431000,'2024-12-31 17:55:48'),(1,431001,431200,'2024-12-31 17:55:48'),(1,431201,431400,'2024-12-31 17:57:40'),(1,431401,431600,'2024-12-31 17:57:41'),(1,431601,431800,'2024-12-31 18:42:05'),(1,431801,432000,'2024-12-31 18:42:05'),(1,432001,432200,'2024-12-31 19:08:40'),(1,432201,432400,'2024-12-31 19:08:40'),(1,432401,432600,'2024-12-31 21:44:28'),(1,432601,432800,'2024-12-31 22:34:22'),(1,432801,433000,'2024-12-31 22:34:23'),(1,433001,433200,'2025-01-01 05:55:45'),(1,433201,433400,'2025-01-01 17:38:26'),(1,433401,433600,'2025-01-01 17:38:27'),(1,433601,433800,'2025-01-01 17:58:50'),(1,433801,434000,'2025-01-01 17:58:50'),(1,434001,434200,'2025-01-01 18:40:10'),(1,434201,434400,'2025-01-01 18:40:10'),(1,434401,434600,'2025-01-01 19:29:43'),(1,434601,434800,'2025-01-01 19:29:44'),(1,434801,435000,'2025-01-01 19:54:45'),(1,435001,435200,'2025-01-01 19:54:46'),(1,435201,435400,'2025-01-01 19:57:28'),(1,435401,435600,'2025-01-01 19:57:28'),(1,435601,435800,'2025-01-01 20:46:37'),(1,435801,436000,'2025-01-01 21:36:13'),(1,436001,436200,'2025-01-01 21:36:13'),(1,436201,436400,'2025-01-01 21:54:00'),(1,436401,436600,'2025-01-01 22:18:28'),(1,436601,436800,'2025-01-01 22:18:28'),(1,436801,437000,'2025-01-01 22:32:10'),(1,437001,437200,'2025-01-01 22:32:11'),(1,437201,437400,'2025-01-01 22:32:58'),(1,437401,437600,'2025-01-01 22:32:58'),(1,437601,437800,'2025-01-01 22:33:45'),(1,437801,438000,'2025-01-01 22:33:45'),(1,438001,438200,'2025-01-01 22:36:15'),(1,438201,438400,'2025-01-01 22:36:16'),(1,438401,438600,'2025-01-01 22:41:24'),(1,438601,438800,'2025-01-01 22:41:24'),(1,438801,439000,'2025-01-01 22:46:22'),(1,439001,439200,'2025-01-01 22:46:23'),(1,439201,439400,'2025-01-01 23:05:13'),(1,439401,439600,'2025-01-01 23:05:13'),(1,439601,439800,'2025-01-01 23:18:07'),(1,439801,440000,'2025-01-01 23:41:32'),(1,440001,440200,'2025-01-01 23:41:32'),(1,440201,440400,'2025-01-01 23:53:55'),(1,440401,440600,'2025-01-01 23:55:35'),(1,440601,440800,'2025-01-01 23:55:35'),(1,440801,441000,'2025-01-02 00:05:37'),(1,441001,441200,'2025-01-02 00:24:42'),(1,441201,441400,'2025-01-02 00:24:42'),(1,441401,441600,'2025-01-02 00:26:33'),(1,441601,441800,'2025-01-02 00:26:33'),(1,441801,442000,'2025-01-02 00:37:15'),(1,442001,442200,'2025-01-02 00:37:16'),(1,442201,442400,'2025-01-02 00:41:05'),(1,442401,442600,'2025-01-02 00:41:05'),(1,442601,442800,'2025-01-02 00:49:37'),(1,442801,443000,'2025-01-02 00:49:38'),(1,443001,443200,'2025-01-02 00:50:40'),(1,443201,443400,'2025-01-02 00:50:40'),(1,443401,443600,'2025-01-02 00:57:32'),(1,443601,443800,'2025-01-02 00:57:32'),(1,443801,444000,'2025-01-02 01:01:50'),(1,444001,444200,'2025-01-02 01:01:51'),(1,444201,444400,'2025-01-02 01:21:25'),(1,444401,444600,'2025-01-02 01:21:26'),(1,444601,444800,'2025-01-02 01:23:19'),(1,444801,445000,'2025-01-02 01:23:20'),(1,445001,445200,'2025-01-02 01:31:27'),(1,445201,445400,'2025-01-02 01:31:27'),(1,445401,445600,'2025-01-02 01:32:02'),(1,445601,445800,'2025-01-02 01:32:02'),(1,445801,446000,'2025-01-02 01:32:45'),(1,446001,446200,'2025-01-02 01:32:46'),(1,446201,446400,'2025-01-02 01:35:40'),(1,446401,446600,'2025-01-02 01:35:40'),(1,446601,446800,'2025-01-02 01:42:25'),(1,446801,447000,'2025-01-02 01:42:25'),(1,447001,447200,'2025-01-02 01:55:48'),(1,447201,447400,'2025-01-02 01:55:48'),(1,447401,447600,'2025-01-02 02:07:00'),(1,447601,447800,'2025-01-02 02:07:00'),(1,447801,448000,'2025-01-02 02:14:01'),(1,448001,448200,'2025-01-02 02:14:01'),(1,448201,448400,'2025-01-02 02:14:45'),(1,448401,448600,'2025-01-02 02:14:45'),(1,448601,448800,'2025-01-02 02:15:26'),(1,448801,449000,'2025-01-02 02:15:26'),(1,449001,449200,'2025-01-02 02:19:47'),(1,449201,449400,'2025-01-02 02:19:47'),(1,449401,449600,'2025-01-02 02:21:38'),(1,449601,449800,'2025-01-02 02:22:05'),(1,449801,450000,'2025-01-02 02:22:09'),(1,450001,450200,'2025-01-02 02:28:33'),(1,450201,450400,'2025-01-02 02:34:15'),(1,450401,450600,'2025-01-02 02:34:16'),(1,450601,450800,'2025-01-02 02:40:54'),(1,450801,451000,'2025-01-02 02:43:32'),(1,451001,451200,'2025-01-02 02:47:19'),(1,451201,451400,'2025-01-02 02:52:09'),(1,451401,451600,'2025-01-02 02:52:55'),(1,451601,451800,'2025-01-02 02:53:34'),(1,451801,452000,'2025-01-02 02:54:09'),(1,452001,452200,'2025-01-02 02:54:19'),(1,452201,452400,'2025-01-02 02:55:58'),(1,452401,452600,'2025-01-02 02:55:59'),(1,452601,452800,'2025-01-02 02:57:20'),(1,452801,453000,'2025-01-02 02:57:20'),(1,453001,453200,'2025-01-02 02:58:50'),(1,453201,453400,'2025-01-02 02:58:50'),(1,453401,453600,'2025-01-02 03:03:30'),(1,453601,453800,'2025-01-02 03:06:35'),(1,453801,454000,'2025-01-02 03:09:35'),(1,454001,454200,'2025-01-02 03:09:36'),(1,454201,454400,'2025-01-02 03:14:52'),(1,454401,454600,'2025-01-02 03:14:52'),(1,454601,454800,'2025-01-02 03:20:10'),(1,454801,455000,'2025-01-02 03:22:30'),(1,455001,455200,'2025-01-02 03:29:20'),(1,455201,455400,'2025-01-02 03:38:26'),(1,455401,455600,'2025-01-02 03:38:26'),(1,455601,455800,'2025-01-02 03:47:47'),(1,455801,456000,'2025-01-02 03:47:48'),(1,456001,456200,'2025-01-02 04:00:51'),(1,456201,456400,'2025-01-02 04:02:44'),(1,456401,456600,'2025-01-02 04:02:45'),(1,456601,456800,'2025-01-02 04:49:41'),(1,456801,457000,'2025-01-02 04:49:42'),(1,457001,457200,'2025-01-02 04:59:45'),(1,457201,457400,'2025-01-02 05:22:52'),(1,457401,457600,'2025-01-02 11:03:31'),(1,457601,457800,'2025-01-02 11:03:31'),(1,457801,458000,'2025-01-02 11:09:41'),(1,458001,458200,'2025-01-02 11:34:25'),(1,458201,458400,'2025-01-02 12:00:01'),(1,458401,458600,'2025-01-02 12:00:02'),(1,458601,458800,'2025-01-02 12:11:50'),(1,458801,459000,'2025-01-02 12:15:24'),(1,459001,459200,'2025-01-02 12:18:25'),(1,459201,459400,'2025-01-02 13:05:32'),(1,459401,459600,'2025-01-02 13:05:32'),(1,459601,459800,'2025-01-02 13:13:20'),(1,459801,460000,'2025-01-02 13:20:42'),(1,460001,460200,'2025-01-02 13:35:12'),(1,460201,460400,'2025-01-02 13:38:27'),(1,460401,460600,'2025-01-02 13:43:12'),(1,460601,460800,'2025-01-02 13:46:20'),(1,460801,461000,'2025-01-02 13:46:20'),(1,461001,461200,'2025-01-02 13:55:50'),(1,461201,461400,'2025-01-02 14:08:24'),(1,461401,461600,'2025-01-02 14:08:44'),(1,461601,461800,'2025-01-02 14:12:46'),(1,461801,462000,'2025-01-02 14:19:53'),(1,462001,462200,'2025-01-02 14:22:57'),(1,462201,462400,'2025-01-02 14:23:40'),(1,462401,462600,'2025-01-02 15:04:38'),(1,462601,462800,'2025-01-02 15:04:39'),(1,462801,463000,'2025-01-02 15:23:18'),(1,463001,463200,'2025-01-02 15:23:18'),(1,463201,463400,'2025-01-02 15:37:09'),(1,463401,463600,'2025-01-02 15:37:09'),(1,463601,463800,'2025-01-02 15:40:51'),(1,463801,464000,'2025-01-02 15:40:51'),(1,464001,464200,'2025-01-02 15:48:40'),(1,464201,464400,'2025-01-02 15:50:59'),(1,464401,464600,'2025-01-02 15:50:59'),(1,464601,464800,'2025-01-02 15:56:34'),(1,464801,465000,'2025-01-02 15:56:59'),(1,465001,465200,'2025-01-02 15:57:08'),(1,465201,465400,'2025-01-02 15:57:59'),(1,465401,465600,'2025-01-02 16:00:59'),(1,465601,465800,'2025-01-02 16:06:19'),(1,465801,466000,'2025-01-02 16:12:43'),(1,466001,466200,'2025-01-02 16:12:43'),(1,466201,466400,'2025-01-02 16:13:45'),(1,466401,466600,'2025-01-02 16:13:46'),(1,466601,466800,'2025-01-02 16:17:58'),(1,466801,467000,'2025-01-02 16:17:58'),(1,467001,467200,'2025-01-02 16:34:28'),(1,467201,467400,'2025-01-02 16:34:28'),(1,467401,467600,'2025-01-02 16:43:25'),(1,467601,467800,'2025-01-02 16:51:23'),(1,467801,468000,'2025-01-02 16:51:23'),(1,468001,468200,'2025-01-02 16:52:43'),(1,468201,468400,'2025-01-02 16:52:44'),(1,468401,468600,'2025-01-02 16:55:36'),(1,468601,468800,'2025-01-02 16:55:36'),(1,468801,469000,'2025-01-02 17:01:58'),(1,469001,469200,'2025-01-02 17:11:16'),(1,469201,469400,'2025-01-02 17:13:50'),(1,469401,469600,'2025-01-02 17:13:50'),(1,469601,469800,'2025-01-02 17:26:31'),(1,469801,470000,'2025-01-02 17:44:45'),(1,470001,470200,'2025-01-02 17:49:43'),(1,470201,470400,'2025-01-02 17:59:08'),(1,470401,470600,'2025-01-02 18:53:45'),(1,470601,470800,'2025-01-02 18:53:45'),(1,470801,471000,'2025-01-02 19:01:40'),(1,471001,471200,'2025-01-02 19:06:02'),(1,471201,471400,'2025-01-02 19:08:16'),(1,471401,471600,'2025-01-02 19:20:01'),(1,471601,471800,'2025-01-02 19:20:54'),(1,471801,472000,'2025-01-02 19:21:42'),(1,472001,472200,'2025-01-02 19:23:08'),(1,472201,472400,'2025-01-02 19:23:15'),(1,472401,472600,'2025-01-02 20:01:01'),(1,472601,472800,'2025-01-02 20:01:02'),(1,472801,473000,'2025-01-02 20:22:35'),(1,473001,473200,'2025-01-02 20:34:26'),(1,473201,473400,'2025-01-02 20:35:19'),(1,473401,473600,'2025-01-02 20:56:02'),(1,473601,473800,'2025-01-02 21:02:58'),(1,473801,474000,'2025-01-02 21:02:58'),(1,474001,474200,'2025-01-02 21:09:18'),(1,474201,474400,'2025-01-02 21:17:03'),(1,474401,474600,'2025-01-02 21:17:04'),(1,474601,474800,'2025-01-02 21:17:59'),(1,474801,475000,'2025-01-02 21:18:48'),(1,475001,475200,'2025-01-02 21:19:02'),(1,475201,475400,'2025-01-02 21:24:19'),(1,475401,475600,'2025-01-02 21:48:31'),(1,475601,475800,'2025-01-02 21:48:31'),(1,475801,476000,'2025-01-02 22:02:37'),(1,476001,476200,'2025-01-02 22:02:53'),(1,476201,476400,'2025-01-02 22:06:17'),(1,476401,476600,'2025-01-02 22:12:23'),(1,476601,476800,'2025-01-02 22:39:50'),(1,476801,477000,'2025-01-02 22:41:48'),(1,477001,477200,'2025-01-02 22:41:52'),(1,477201,477400,'2025-01-02 22:42:15'),(1,477401,477600,'2025-01-02 22:52:17'),(1,477601,477800,'2025-01-02 22:54:12'),(1,477801,478000,'2025-01-02 23:00:07'),(1,478001,478200,'2025-01-02 23:00:14'),(1,478201,478400,'2025-01-02 23:00:32'),(1,478401,478600,'2025-01-02 23:28:39'),(1,478601,478800,'2025-01-02 23:28:40'),(1,478801,479000,'2025-01-02 23:36:05'),(1,479001,479200,'2025-01-02 23:44:53'),(1,479201,479400,'2025-01-03 00:07:22'),(1,479401,479600,'2025-01-03 00:08:45'),(1,479601,479800,'2025-01-03 00:09:20'),(1,479801,480000,'2025-01-03 00:09:58'),(1,480001,480200,'2025-01-03 00:10:07'),(1,480201,480400,'2025-01-03 00:10:34'),(1,480401,480600,'2025-01-03 00:10:39'),(1,480601,480800,'2025-01-03 01:04:25'),(1,480801,481000,'2025-01-03 01:59:54'),(1,481001,481200,'2025-01-03 02:00:12'),(1,481201,481400,'2025-01-03 02:37:15'),(1,481401,481600,'2025-01-03 04:06:23'),(1,481601,481800,'2025-01-03 04:07:23'),(1,481801,482000,'2025-01-03 04:07:23'),(1,482001,482200,'2025-01-03 09:01:23'),(1,482201,482400,'2025-01-03 09:01:24'),(1,482401,482600,'2025-01-03 09:34:26'),(1,482601,482800,'2025-01-03 09:45:00'),(1,482801,483000,'2025-01-03 10:37:10'),(1,483001,483200,'2025-01-03 10:37:10'),(1,483201,483400,'2025-01-03 14:26:06'),(1,483401,483600,'2025-01-03 14:26:06'),(1,483601,483800,'2025-01-03 14:27:34'),(1,483801,484000,'2025-01-03 14:27:35'),(1,484001,484200,'2025-01-03 14:44:39'),(1,484201,484400,'2025-01-03 14:44:39'),(1,484401,484600,'2025-01-03 15:04:20'),(1,484601,484800,'2025-01-03 15:04:20'),(1,484801,485000,'2025-01-03 15:50:32'),(1,485001,485200,'2025-01-03 15:50:33'),(1,485201,485400,'2025-01-03 16:00:20'),(1,485401,485600,'2025-01-03 16:05:55'),(1,485601,485800,'2025-01-03 16:07:09'),(1,485801,486000,'2025-01-03 16:50:26'),(1,486001,486200,'2025-01-03 16:50:27'),(1,486201,486400,'2025-01-03 16:56:02'),(1,486401,486600,'2025-01-03 16:56:02'),(1,486601,486800,'2025-01-03 16:59:13'),(1,486801,487000,'2025-01-03 17:15:17'),(1,487001,487200,'2025-01-03 17:27:25'),(1,487201,487400,'2025-01-03 17:27:25'),(1,487401,487600,'2025-01-03 17:28:52'),(1,487601,487800,'2025-01-03 17:28:52'),(1,487801,488000,'2025-01-03 17:46:35'),(1,488001,488200,'2025-01-03 17:56:51'),(1,488201,488400,'2025-01-03 17:56:51'),(1,488401,488600,'2025-01-03 18:00:51'),(1,488601,488800,'2025-01-03 18:00:51'),(1,488801,489000,'2025-01-03 18:02:29'),(1,489001,489200,'2025-01-03 18:02:30'),(1,489201,489400,'2025-01-03 18:06:18'),(1,489401,489600,'2025-01-03 18:06:19'),(1,489601,489800,'2025-01-03 18:06:41'),(1,489801,490000,'2025-01-03 18:06:41'),(1,490001,490200,'2025-01-03 18:09:18'),(1,490201,490400,'2025-01-03 18:09:18'),(1,490401,490600,'2025-01-03 18:20:59'),(1,490601,490800,'2025-01-03 18:22:28'),(1,490801,491000,'2025-01-03 18:22:28'),(1,491001,491200,'2025-01-03 18:23:20'),(1,491201,491400,'2025-01-03 18:23:20'),(1,491401,491600,'2025-01-03 18:28:24'),(1,491601,491800,'2025-01-03 18:28:25'),(1,491801,492000,'2025-01-03 18:29:36'),(1,492001,492200,'2025-01-03 18:29:36'),(1,492201,492400,'2025-01-03 18:30:23'),(1,492401,492600,'2025-01-03 18:30:23'),(1,492601,492800,'2025-01-03 18:42:54'),(1,492801,493000,'2025-01-03 18:44:27'),(1,493001,493200,'2025-01-03 18:54:51'),(1,493201,493400,'2025-01-03 18:55:01'),(1,493401,493600,'2025-01-03 19:18:33'),(1,493601,493800,'2025-01-03 19:18:34'),(1,493801,494000,'2025-01-03 19:19:25'),(1,494001,494200,'2025-01-03 19:19:25'),(1,494201,494400,'2025-01-03 19:20:15'),(1,494401,494600,'2025-01-03 19:22:33'),(1,494601,494800,'2025-01-03 19:22:33'),(1,494801,495000,'2025-01-03 19:42:00'),(1,495001,495200,'2025-01-03 19:42:00'),(1,495201,495400,'2025-01-03 19:54:32'),(1,495401,495600,'2025-01-03 19:56:42'),(1,495601,495800,'2025-01-03 19:56:43'),(1,495801,496000,'2025-01-03 20:00:58'),(1,496001,496200,'2025-01-03 20:00:59'),(1,496201,496400,'2025-01-03 20:08:20'),(1,496401,496600,'2025-01-03 20:13:47'),(1,496601,496800,'2025-01-03 20:13:47'),(1,496801,497000,'2025-01-03 20:18:49'),(1,497001,497200,'2025-01-03 20:20:43'),(1,497201,497400,'2025-01-03 20:29:38'),(1,497401,497600,'2025-01-03 20:29:39'),(1,497601,497800,'2025-01-03 20:36:44'),(1,497801,498000,'2025-01-03 20:36:45'),(1,498001,498200,'2025-01-03 20:40:37'),(1,498201,498400,'2025-01-03 20:40:37'),(1,498401,498600,'2025-01-03 20:46:54'),(1,498601,498800,'2025-01-03 20:46:54'),(1,498801,499000,'2025-01-03 20:50:51'),(1,499001,499200,'2025-01-03 21:06:25'),(1,499201,499400,'2025-01-03 21:18:02'),(1,499401,499600,'2025-01-03 21:21:21'),(1,499601,499800,'2025-01-03 21:21:48'),(1,499801,500000,'2025-01-03 21:22:00'),(1,500001,500200,'2025-01-03 21:22:40'),(1,500201,500400,'2025-01-03 21:22:59'),(1,500401,500600,'2025-01-03 21:23:05'),(1,500601,500800,'2025-01-03 21:23:15'),(1,500801,501000,'2025-01-03 21:23:19'),(1,501001,501200,'2025-01-03 21:25:30'),(1,501201,501400,'2025-01-03 21:25:30'),(1,501401,501600,'2025-01-03 21:29:47'),(1,501601,501800,'2025-01-03 21:30:27'),(1,501801,502000,'2025-01-03 21:30:27'),(1,502001,502200,'2025-01-03 21:31:50'),(1,502201,502400,'2025-01-03 21:31:50'),(1,502401,502600,'2025-01-03 21:37:53'),(1,502601,502800,'2025-01-03 21:37:53'),(1,502801,503000,'2025-01-03 21:46:07'),(1,503001,503200,'2025-01-03 21:46:07'),(1,503201,503400,'2025-01-03 21:47:55'),(1,503401,503600,'2025-01-03 21:47:55'),(1,503601,503800,'2025-01-03 21:59:57'),(1,503801,504000,'2025-01-03 21:59:58'),(1,504001,504200,'2025-01-03 22:01:25'),(1,504201,504400,'2025-01-03 22:01:25'),(1,504401,504600,'2025-01-03 22:02:39'),(1,504601,504800,'2025-01-03 22:02:39'),(1,504801,505000,'2025-01-03 22:03:42'),(1,505001,505200,'2025-01-03 22:03:43'),(1,505201,505400,'2025-01-03 22:12:01'),(1,505401,505600,'2025-01-03 22:14:15'),(1,505601,505800,'2025-01-03 22:30:25'),(1,505801,506000,'2025-01-03 22:31:04'),(1,506001,506200,'2025-01-03 22:33:17'),(1,506201,506400,'2025-01-03 22:33:18'),(1,506401,506600,'2025-01-03 23:15:57'),(1,506601,506800,'2025-01-03 23:15:57'),(1,506801,507000,'2025-01-03 23:29:41'),(1,507001,507200,'2025-01-03 23:29:42'),(1,507201,507400,'2025-01-03 23:30:18'),(1,507401,507600,'2025-01-03 23:30:18'),(1,507601,507800,'2025-01-03 23:31:49'),(1,507801,508000,'2025-01-03 23:35:14'),(1,508001,508200,'2025-01-03 23:39:31'),(1,508201,508400,'2025-01-03 23:39:31'),(1,508401,508600,'2025-01-03 23:40:59'),(1,508601,508800,'2025-01-03 23:41:00'),(1,508801,509000,'2025-01-03 23:46:37'),(1,509001,509200,'2025-01-03 23:56:16'),(1,509201,509400,'2025-01-03 23:56:40'),(1,509401,509600,'2025-01-03 23:56:41'),(1,509601,509800,'2025-01-03 23:59:59'),(1,509801,510000,'2025-01-04 00:01:23'),(1,510001,510200,'2025-01-04 00:01:32'),(1,510201,510400,'2025-01-04 00:02:03'),(1,510401,510600,'2025-01-04 00:02:12'),(1,510601,510800,'2025-01-04 00:02:32'),(1,510801,511000,'2025-01-04 00:02:35'),(1,511001,511200,'2025-01-04 00:02:43'),(1,511201,511400,'2025-01-04 00:02:45'),(1,511401,511600,'2025-01-04 00:07:05'),(1,511601,511800,'2025-01-04 00:08:29'),(1,511801,512000,'2025-01-04 00:16:43'),(1,512001,512200,'2025-01-04 00:20:54'),(1,512201,512400,'2025-01-04 01:15:26'),(1,512401,512600,'2025-01-04 01:15:26'),(1,512601,512800,'2025-01-04 01:50:59'),(1,512801,513000,'2025-01-04 01:51:00'),(1,513001,513200,'2025-01-04 02:12:02'),(1,513201,513400,'2025-01-04 02:13:41'),(1,513401,513600,'2025-01-04 02:13:59'),(1,513601,513800,'2025-01-04 02:14:13'),(1,513801,514000,'2025-01-04 02:14:40'),(1,514001,514200,'2025-01-04 02:14:58'),(1,514201,514400,'2025-01-04 02:15:02'),(1,514401,514600,'2025-01-04 02:15:08'),(1,514601,514800,'2025-01-04 02:15:16'),(1,514801,515000,'2025-01-04 02:15:18'),(1,515001,515200,'2025-01-04 02:35:39'),(1,515201,515400,'2025-01-04 03:01:57'),(1,515401,515600,'2025-01-04 03:02:31'),(1,515601,515800,'2025-01-04 03:02:31'),(1,515801,516000,'2025-01-04 03:05:24'),(1,516001,516200,'2025-01-04 03:05:25'),(1,516201,516400,'2025-01-04 04:13:11'),(1,516401,516600,'2025-01-04 04:13:12'),(1,516601,516800,'2025-01-04 04:38:56'),(1,516801,517000,'2025-01-04 04:50:57'),(1,517001,517200,'2025-01-04 04:50:57'),(1,517201,517400,'2025-01-04 04:53:29'),(1,517401,517600,'2025-01-04 04:53:30'),(1,517601,517800,'2025-01-04 05:53:41'),(1,517801,518000,'2025-01-04 05:55:03'),(1,518001,518200,'2025-01-04 05:55:13'),(1,518201,518400,'2025-01-04 06:07:35'),(1,518401,518600,'2025-01-04 06:29:42'),(1,518601,518800,'2025-01-04 06:29:42'),(1,518801,519000,'2025-01-04 06:31:49'),(1,519001,519200,'2025-01-04 06:31:49'),(1,519201,519400,'2025-01-04 07:12:50'),(1,519401,519600,'2025-01-04 07:54:31'),(1,519601,519800,'2025-01-04 07:54:31'),(1,519801,520000,'2025-01-04 07:59:02'),(1,520001,520200,'2025-01-04 07:59:02'),(1,520201,520400,'2025-01-04 08:07:59'),(1,520401,520600,'2025-01-04 08:08:00'),(1,520601,520800,'2025-01-04 08:31:46'),(1,520801,521000,'2025-01-04 08:31:47'),(1,521001,521200,'2025-01-04 09:22:58'),(1,521201,521400,'2025-01-04 09:29:04'),(1,521401,521600,'2025-01-04 09:35:35'),(1,521601,521800,'2025-01-04 09:35:53'),(1,521801,522000,'2025-01-04 09:36:54'),(1,522001,522200,'2025-01-04 09:36:54'),(1,522201,522400,'2025-01-04 09:42:11'),(1,522401,522600,'2025-01-04 09:46:27'),(1,522601,522800,'2025-01-04 09:46:27'),(1,522801,523000,'2025-01-04 09:46:57'),(1,523001,523200,'2025-01-04 09:46:57'),(1,523201,523400,'2025-01-04 10:10:46'),(1,523401,523600,'2025-01-04 10:35:10'),(1,523601,523800,'2025-01-04 14:21:13'),(1,523801,524000,'2025-01-04 14:21:14'),(1,524001,524200,'2025-01-04 14:30:08'),(1,524201,524400,'2025-01-04 14:30:46'),(1,524401,524600,'2025-01-04 14:37:01'),(1,524601,524800,'2025-01-04 14:44:50'),(1,524801,525000,'2025-01-04 14:45:18'),(1,525001,525200,'2025-01-04 14:45:20'),(1,525201,525400,'2025-01-04 14:45:34'),(1,525401,525600,'2025-01-04 14:48:42'),(1,525601,525800,'2025-01-04 14:52:32'),(1,525801,526000,'2025-01-04 14:52:33'),(1,526001,526200,'2025-01-04 15:02:50'),(1,526201,526400,'2025-01-04 15:02:51'),(1,526401,526600,'2025-01-04 15:16:23'),(1,526601,526800,'2025-01-04 15:18:36'),(1,526801,527000,'2025-01-04 15:22:10'),(1,527001,527200,'2025-01-04 15:23:05'),(1,527201,527400,'2025-01-04 15:24:42'),(1,527401,527600,'2025-01-04 15:26:18'),(1,527601,527800,'2025-01-04 15:44:57'),(1,527801,528000,'2025-01-04 15:44:58'),(1,528001,528200,'2025-01-04 15:48:20'),(1,528201,528400,'2025-01-04 15:48:20'),(1,528401,528600,'2025-01-04 15:49:41'),(1,528601,528800,'2025-01-04 15:49:46'),(1,528801,529000,'2025-01-04 15:50:51'),(1,529001,529200,'2025-01-04 15:51:45'),(1,529201,529400,'2025-01-04 15:52:01'),(1,529401,529600,'2025-01-04 15:52:49'),(1,529601,529800,'2025-01-04 15:52:50'),(1,529801,530000,'2025-01-04 15:52:51'),(1,530001,530200,'2025-01-04 15:52:51'),(1,530201,530400,'2025-01-04 16:03:52'),(1,530401,530600,'2025-01-04 16:03:53'),(1,530601,530800,'2025-01-04 16:08:35'),(1,530801,531000,'2025-01-04 16:08:36'),(1,531001,531200,'2025-01-04 16:35:02'),(1,531201,531400,'2025-01-04 16:35:44'),(1,531401,531600,'2025-01-04 16:36:25'),(1,531601,531800,'2025-01-04 16:37:31'),(1,531801,532000,'2025-01-04 16:37:39'),(1,532001,532200,'2025-01-04 16:37:57'),(1,532201,532400,'2025-01-04 16:56:09'),(1,532401,532600,'2025-01-04 17:00:16'),(1,532601,532800,'2025-01-04 17:00:16'),(1,532801,533000,'2025-01-04 17:13:30'),(1,533001,533200,'2025-01-04 17:13:32'),(1,533201,533400,'2025-01-04 17:13:39'),(1,533401,533600,'2025-01-04 17:13:43'),(1,533601,533800,'2025-01-04 17:13:57'),(1,533801,534000,'2025-01-04 17:13:59'),(1,534001,534200,'2025-01-04 17:14:20'),(1,534201,534400,'2025-01-04 17:14:39'),(1,534401,534600,'2025-01-04 17:14:41'),(1,534601,534800,'2025-01-04 17:15:37'),(1,534801,535000,'2025-01-04 17:16:00'),(1,535001,535200,'2025-01-04 17:26:03'),(1,535201,535400,'2025-01-04 17:26:39'),(1,535401,535600,'2025-01-04 17:26:53'),(1,535601,535800,'2025-01-04 17:43:18'),(1,535801,536000,'2025-01-04 17:44:49'),(1,536001,536200,'2025-01-04 17:45:40'),(1,536201,536400,'2025-01-04 17:45:44'),(1,536401,536600,'2025-01-04 17:46:08'),(1,536601,536800,'2025-01-04 17:46:48'),(1,536801,537000,'2025-01-04 17:47:08'),(1,537001,537200,'2025-01-04 17:51:37'),(1,537201,537400,'2025-01-04 17:54:19'),(1,537401,537600,'2025-01-04 17:54:33'),(1,537601,537800,'2025-01-04 17:54:36'),(1,537801,538000,'2025-01-04 17:54:44'),(1,538001,538200,'2025-01-04 17:55:06'),(1,538201,538400,'2025-01-04 18:03:51'),(1,538401,538600,'2025-01-04 18:37:47'),(1,538601,538800,'2025-01-04 18:38:58'),(1,538801,539000,'2025-01-04 18:38:58'),(1,539001,539200,'2025-01-04 18:48:10'),(1,539201,539400,'2025-01-04 18:48:10'),(1,539401,539600,'2025-01-04 19:28:31'),(1,539601,539800,'2025-01-04 19:28:31'),(1,539801,540000,'2025-01-04 20:02:00'),(1,540001,540200,'2025-01-04 20:02:00'),(1,540201,540400,'2025-01-04 20:06:10'),(1,540401,540600,'2025-01-04 20:36:07'),(1,540601,540800,'2025-01-04 20:36:07'),(1,540801,541000,'2025-01-04 20:42:50'),(1,541001,541200,'2025-01-04 20:43:22'),(1,541201,541400,'2025-01-04 20:44:39'),(1,541401,541600,'2025-01-04 20:44:48'),(1,541601,541800,'2025-01-04 20:55:26'),(1,541801,542000,'2025-01-04 20:55:32'),(1,542001,542200,'2025-01-04 22:14:33'),(1,542201,542400,'2025-01-04 22:14:57'),(1,542401,542600,'2025-01-04 22:15:26'),(1,542601,542800,'2025-01-04 22:15:28'),(1,542801,543000,'2025-01-04 22:20:36'),(1,543001,543200,'2025-01-04 22:20:37'),(1,543201,543400,'2025-01-04 23:10:51'),(1,543401,543600,'2025-01-04 23:10:51'),(1,543601,543800,'2025-01-04 23:37:40'),(1,543801,544000,'2025-01-04 23:37:41'),(1,544001,544200,'2025-01-04 23:39:42'),(1,544201,544400,'2025-01-04 23:39:43'),(1,544401,544600,'2025-01-04 23:41:48'),(1,544601,544800,'2025-01-04 23:45:27'),(1,544801,545000,'2025-01-04 23:45:49'),(1,545001,545200,'2025-01-04 23:45:51'),(1,545201,545400,'2025-01-04 23:51:40'),(1,545401,545600,'2025-01-04 23:59:33'),(1,545601,545800,'2025-01-05 00:30:25'),(1,545801,546000,'2025-01-05 00:30:26'),(1,546001,546200,'2025-01-05 00:45:37'),(1,546201,546400,'2025-01-05 00:53:32'),(1,546401,546600,'2025-01-05 00:55:16'),(1,546601,546800,'2025-01-05 00:55:49'),(1,546801,547000,'2025-01-05 01:01:45'),(1,547001,547200,'2025-01-05 01:33:18'),(1,547201,547400,'2025-01-05 02:35:14'),(1,547401,547600,'2025-01-05 02:48:42'),(1,547601,547800,'2025-01-05 03:56:28'),(1,547801,548000,'2025-01-05 03:56:29'),(1,548001,548200,'2025-01-05 05:11:48'),(1,548201,548400,'2025-01-05 05:13:16'),(1,548401,548600,'2025-01-05 05:13:17'),(1,548601,548800,'2025-01-05 05:25:20'),(1,548801,549000,'2025-01-05 07:32:23'),(1,549001,549200,'2025-01-05 15:13:07'),(1,549201,549400,'2025-01-05 15:13:07'),(1,549401,549600,'2025-01-05 15:22:22'),(1,549601,549800,'2025-01-05 15:22:22'),(1,549801,550000,'2025-01-05 15:22:51'),(1,550001,550200,'2025-01-05 15:22:51'),(1,550201,550400,'2025-01-05 15:25:51'),(1,550401,550600,'2025-01-05 15:26:03'),(1,550601,550800,'2025-01-05 15:27:59'),(1,550801,551000,'2025-01-05 15:28:55'),(1,551001,551200,'2025-01-05 15:52:11'),(1,551201,551400,'2025-01-05 15:52:15'),(1,551401,551600,'2025-01-05 15:52:31'),(1,551601,551800,'2025-01-05 15:52:34'),(1,551801,552000,'2025-01-05 15:53:58'),(1,552001,552200,'2025-01-05 15:53:58'),(1,552201,552400,'2025-01-05 16:08:56'),(1,552401,552600,'2025-01-05 17:39:01'),(1,552601,552800,'2025-01-05 17:39:01'),(1,552801,553000,'2025-01-05 17:41:33'),(1,553001,553200,'2025-01-05 17:41:33'),(1,553201,553400,'2025-01-05 17:41:42'),(1,553401,553600,'2025-01-05 17:41:43'),(1,553601,553800,'2025-01-05 17:58:37'),(1,553801,554000,'2025-01-05 17:58:37'),(1,554001,554200,'2025-01-05 18:12:26'),(1,554201,554400,'2025-01-05 18:12:26'),(1,554401,554600,'2025-01-05 18:19:42'),(1,554601,554800,'2025-01-05 18:21:25'),(1,554801,555000,'2025-01-05 18:22:30'),(1,555001,555200,'2025-01-05 18:22:41'),(1,555201,555400,'2025-01-05 18:22:58'),(1,555401,555600,'2025-01-05 18:23:05'),(1,555601,555800,'2025-01-05 18:30:38'),(1,555801,556000,'2025-01-05 18:34:02'),(1,556001,556200,'2025-01-05 18:36:08'),(1,556201,556400,'2025-01-05 18:36:43'),(1,556401,556600,'2025-01-05 18:37:06'),(1,556601,556800,'2025-01-05 18:37:32'),(1,556801,557000,'2025-01-05 18:37:39'),(1,557001,557200,'2025-01-05 18:39:18'),(1,557201,557400,'2025-01-05 18:42:13'),(1,557401,557600,'2025-01-05 18:57:35'),(1,557601,557800,'2025-01-05 19:27:28'),(1,557801,558000,'2025-01-05 19:52:34'),(1,558001,558200,'2025-01-05 20:13:27'),(1,558201,558400,'2025-01-05 20:13:28'),(1,558401,558600,'2025-01-05 20:59:25'),(1,558601,558800,'2025-01-05 21:02:20'),(1,558801,559000,'2025-01-05 21:02:26'),(1,559001,559200,'2025-01-05 21:16:15'),(1,559201,559400,'2025-01-05 21:18:41'),(1,559401,559600,'2025-01-05 21:18:56'),(1,559601,559800,'2025-01-05 22:37:55'),(1,559801,560000,'2025-01-05 23:24:56'),(1,560001,560200,'2025-01-05 23:24:57'),(1,560201,560400,'2025-01-05 23:37:57'),(1,560401,560600,'2025-01-05 23:37:58'),(1,560601,560800,'2025-01-06 00:54:36'),(1,560801,561000,'2025-01-06 00:56:13'),(1,561001,561200,'2025-01-06 09:27:39'),(1,561201,561400,'2025-01-06 09:27:40'),(1,561401,561600,'2025-01-06 10:55:50'),(1,561601,561800,'2025-01-06 11:24:42'),(1,561801,562000,'2025-01-06 12:10:51'),(1,562001,562200,'2025-01-06 13:06:50'),(1,562201,562400,'2025-01-06 13:06:50'),(1,562401,562600,'2025-01-06 13:56:29'),(1,562601,562800,'2025-01-06 13:56:58'),(1,562801,563000,'2025-01-06 14:02:49'),(1,563001,563200,'2025-01-06 14:02:49'),(1,563201,563400,'2025-01-06 14:25:00'),(1,563401,563600,'2025-01-06 14:25:01'),(1,563601,563800,'2025-01-06 15:50:14'),(1,563801,564000,'2025-01-06 15:50:15'),(1,564001,564200,'2025-01-06 16:04:51'),(1,564201,564400,'2025-01-06 17:09:04'),(1,564401,564600,'2025-01-06 17:31:58'),(1,564601,564800,'2025-01-06 18:06:49'),(1,564801,565000,'2025-01-06 18:06:49'),(1,565001,565200,'2025-01-06 18:58:40'),(1,565201,565400,'2025-01-06 18:58:41'),(1,565401,565600,'2025-01-06 20:51:54'),(1,565601,565800,'2025-01-06 21:00:35'),(1,565801,566000,'2025-01-06 21:34:10'),(1,566001,566200,'2025-01-06 21:37:03'),(1,566201,566400,'2025-01-06 21:37:27'),(1,566401,566600,'2025-01-06 21:37:27'),(1,566601,566800,'2025-01-06 21:43:07'),(1,566801,567000,'2025-01-06 21:43:08'),(1,567001,567200,'2025-01-06 21:54:42'),(1,567201,567400,'2025-01-06 22:05:41'),(1,567401,567600,'2025-01-06 23:11:58'),(1,567601,567800,'2025-01-06 23:11:58'),(1,567801,568000,'2025-01-06 23:43:40'),(1,568001,568200,'2025-01-07 00:42:57'),(1,568201,568400,'2025-01-07 01:40:46'),(1,568401,568600,'2025-01-07 01:46:54'),(1,568601,568800,'2025-01-07 09:02:02'),(1,568801,569000,'2025-01-07 09:02:02'),(1,569001,569200,'2025-01-07 10:00:07'),(1,569201,569400,'2025-01-07 10:00:08'),(1,569401,569600,'2025-01-07 12:41:35'),(1,569601,569800,'2025-01-07 12:41:36'),(1,569801,570000,'2025-01-07 16:51:10'),(1,570001,570200,'2025-01-07 16:51:11'),(1,570201,570400,'2025-01-07 18:42:17'),(1,570401,570600,'2025-01-07 18:42:17'),(1,570601,570800,'2025-01-07 19:57:26'),(1,570801,571000,'2025-01-07 19:57:27'),(1,571001,571200,'2025-01-07 20:25:48'),(1,571201,571400,'2025-01-07 20:28:52'),(1,571401,571600,'2025-01-07 20:28:53'),(1,571601,571800,'2025-01-07 20:38:26'),(1,571801,572000,'2025-01-07 20:39:08'),(1,572001,572200,'2025-01-07 20:39:52'),(1,572201,572400,'2025-01-07 20:40:14'),(1,572401,572600,'2025-01-07 20:49:34'),(1,572601,572800,'2025-01-07 20:49:35'),(1,572801,573000,'2025-01-07 20:54:17'),(1,573001,573200,'2025-01-07 21:08:01'),(1,573201,573400,'2025-01-07 21:08:30'),(1,573401,573600,'2025-01-07 21:08:32'),(1,573601,573800,'2025-01-07 21:15:19'),(1,573801,574000,'2025-01-07 21:46:01'),(1,574001,574200,'2025-01-08 00:14:33'),(1,574201,574400,'2025-01-08 03:27:19'),(1,574401,574600,'2025-01-08 05:14:37'),(1,574601,574800,'2025-01-08 05:14:38'),(1,574801,575000,'2025-01-08 08:16:30'),(1,575001,575200,'2025-01-08 08:16:31'),(1,575201,575400,'2025-01-08 11:32:58'),(1,575401,575600,'2025-01-08 11:32:59'),(1,575601,575800,'2025-01-08 12:23:14'),(1,575801,576000,'2025-01-08 12:23:15'),(1,576001,576200,'2025-01-08 12:43:52'),(1,576201,576400,'2025-01-08 15:59:27'),(1,576401,576600,'2025-01-08 15:59:27'),(1,576601,576800,'2025-01-08 16:44:04'),(1,576801,577000,'2025-01-08 16:44:05'),(1,577001,577200,'2025-01-08 17:23:44'),(1,577201,577400,'2025-01-08 18:35:14'),(1,577401,577600,'2025-01-08 18:35:15'),(1,577601,577800,'2025-01-09 06:27:41'),(1,577801,578000,'2025-01-09 06:27:42'),(1,578001,578200,'2025-01-09 12:59:39'),(1,578201,578400,'2025-01-09 12:59:39'),(1,578401,578600,'2025-01-09 17:10:53'),(1,578601,578800,'2025-01-10 00:00:28'),(1,578801,579000,'2025-01-10 00:00:29'),(1,579001,579200,'2025-01-10 06:48:35'),(1,579201,579400,'2025-01-10 06:48:36'),(1,579401,579600,'2025-01-11 14:50:18'),(1,579601,579800,'2025-01-11 14:50:18'),(1,579801,580000,'2025-01-11 15:02:48'),(1,580001,580200,'2025-01-11 15:02:48'),(1,580201,580400,'2025-01-11 20:12:31'),(1,580401,580600,'2025-01-11 20:12:31'),(1,580601,580800,'2025-01-11 23:05:29'),(1,580801,581000,'2025-01-11 23:05:30'),(1,581001,581200,'2025-01-11 23:05:55'),(1,581201,581400,'2025-01-11 23:05:56'),(1,581401,581600,'2025-01-12 14:00:49'),(1,581601,581800,'2025-01-12 14:00:49'),(1,581801,582000,'2025-01-12 14:15:33'),(1,582001,582200,'2025-01-12 14:15:34'),(1,582201,582400,'2025-01-12 14:30:19'),(1,582401,582600,'2025-01-12 14:30:20'),(1,582601,582800,'2025-01-13 14:29:29'),(1,582801,583000,'2025-01-13 14:29:30'),(1,583001,583200,'2025-01-15 17:18:31'),(1,583201,583400,'2025-01-15 17:18:31'),(1,583401,583600,'2025-01-18 13:23:03'),(1,583601,583800,'2025-01-18 13:23:04'),(1,583801,584000,'2025-01-18 13:49:40'),(1,584001,584200,'2025-01-18 13:49:40'),(1,584201,584400,'2025-01-18 13:53:23'),(1,584401,584600,'2025-01-18 13:53:23'),(1,584601,584800,'2025-01-18 21:45:12'),(1,584801,585000,'2025-01-18 21:45:13'),(1,585001,585200,'2025-01-25 17:17:50'),(1,585201,585400,'2025-01-25 17:18:06'),(1,585401,585600,'2025-01-25 17:18:23'),(1,585601,585800,'2025-01-25 17:18:39'),(1,585801,586000,'2025-01-25 17:18:57'),(1,586001,586200,'2025-01-25 17:19:14'),(1,586201,586400,'2025-01-25 17:19:31'),(1,586401,586600,'2025-01-25 17:19:47'),(1,586601,586800,'2025-01-25 17:20:04'),(1,586801,587000,'2025-01-25 17:20:21'),(1,587001,587200,'2025-01-25 17:20:49'),(1,587201,587400,'2025-01-25 17:21:07'),(1,587401,587600,'2025-01-25 17:21:24'),(1,587601,587800,'2025-01-25 17:21:41'),(1,587801,588000,'2025-01-25 17:21:58'),(1,588001,588200,'2025-01-25 17:22:14'),(1,588201,588400,'2025-01-25 17:22:32'),(1,588401,588600,'2025-01-25 17:22:50'),(1,588601,588800,'2025-01-25 17:23:17'),(1,588801,589000,'2025-01-25 17:23:33'),(1,589001,589200,'2025-01-25 17:23:50'),(1,589201,589400,'2025-01-25 17:24:06'),(1,589401,589600,'2025-01-25 17:24:25'),(1,589601,589800,'2025-01-25 17:24:42'),(1,589801,590000,'2025-01-25 17:25:00'),(1,590001,590200,'2025-01-25 17:25:17'),(1,590201,590400,'2025-01-25 17:25:35'),(1,590401,590600,'2025-01-25 17:25:52'),(1,590601,590800,'2025-01-25 17:26:08'),(1,590801,591000,'2025-01-25 17:26:25'),(1,591001,591200,'2025-01-25 17:26:41'),(1,591201,591400,'2025-01-25 17:26:59'),(1,591401,591600,'2025-01-25 17:27:15'),(1,591601,591800,'2025-01-25 17:27:34'),(1,591801,592000,'2025-01-25 17:28:10'),(1,592001,592200,'2025-01-25 17:28:30'),(1,592201,592400,'2025-01-25 17:28:46'),(1,592401,592600,'2025-01-25 17:29:04'),(1,592601,592800,'2025-01-25 17:29:21'),(1,592801,593000,'2025-01-25 17:29:38'),(1,593001,593200,'2025-01-25 17:29:55'),(1,593201,593400,'2025-01-25 17:30:13'),(1,593401,593600,'2025-01-25 17:30:31'),(1,593601,593800,'2025-01-25 17:30:47'),(1,593801,594000,'2025-01-25 17:31:04'),(1,594001,594200,'2025-01-25 17:31:21'),(1,594201,594400,'2025-01-25 17:31:39'),(1,594401,594600,'2025-01-25 17:31:56'),(1,594601,594800,'2025-01-25 17:32:12'),(1,594801,595000,'2025-01-25 17:32:30'),(1,595001,595200,'2025-01-25 17:32:47'),(1,595201,595400,'2025-01-25 17:33:04'),(1,595401,595600,'2025-01-25 17:33:32'),(1,595601,595800,'2025-01-25 17:33:48'),(1,595801,596000,'2025-01-25 17:34:04'),(1,596001,596200,'2025-01-25 17:34:20'),(1,596201,596400,'2025-01-25 17:34:36'),(1,596401,596600,'2025-01-25 17:34:52'),(1,596601,596800,'2025-01-25 17:35:11'),(1,596801,597000,'2025-01-25 17:35:29'),(1,597001,597200,'2025-01-25 17:35:48'),(1,597201,597400,'2025-01-25 17:36:06'),(1,597401,597600,'2025-01-25 17:36:22'),(1,597601,597800,'2025-01-25 17:36:38'),(1,597801,598000,'2025-01-25 17:36:56'),(1,598001,598200,'2025-01-25 17:37:14'),(1,598201,598400,'2025-01-25 17:37:31'),(1,598401,598600,'2025-01-25 17:37:48'),(1,598601,598800,'2025-01-25 17:38:06'),(1,598801,599000,'2025-01-25 17:38:33'),(1,599001,599200,'2025-01-25 17:38:53'),(1,599201,599400,'2025-01-25 17:39:08'),(1,599401,599600,'2025-01-25 17:39:25'),(1,599601,599800,'2025-01-25 17:39:42'),(1,599801,600000,'2025-01-25 17:39:58'),(1,600001,600200,'2025-01-25 17:40:17'),(1,600201,600400,'2025-01-25 17:40:34'),(1,600401,600600,'2025-01-25 17:40:50'),(1,600601,600800,'2025-01-25 17:41:09'),(1,600801,601000,'2025-01-25 17:41:29'),(1,601001,601200,'2025-01-25 17:42:00'),(1,601201,601400,'2025-01-25 17:44:25'),(1,601401,601600,'2025-01-25 17:44:46'),(1,601601,601800,'2025-01-25 17:45:18'),(1,601801,602000,'2025-01-25 17:45:18'),(1,602001,602200,'2025-01-26 14:22:22'),(1,602201,602400,'2025-01-26 14:22:23'),(1,602401,602600,'2025-02-01 14:08:14'),(1,602601,602800,'2025-02-01 14:08:15'),(1,602801,603000,'2025-02-01 15:17:02'),(1,603001,603200,'2025-02-01 15:21:31'),(1,603201,603400,'2025-02-01 15:25:13'),(1,603401,603600,'2025-02-01 15:25:14'),(1,603601,603800,'2025-02-03 20:25:50'),(1,603801,604000,'2025-02-03 20:25:51'),(1,604001,604200,'2025-02-03 20:27:54'),(1,604201,604400,'2025-02-03 20:27:54'),(1,604401,604600,'2025-02-03 20:37:56'),(1,604601,604800,'2025-02-03 20:37:56'),(1,604801,605000,'2025-02-03 20:39:45'),(1,605001,605200,'2025-02-03 20:39:46'),(1,605201,605400,'2025-02-03 20:41:08'),(1,605401,605600,'2025-02-03 20:41:08'),(1,605601,605800,'2025-02-05 19:37:09'),(1,605801,606000,'2025-02-05 19:37:09'),(1,606001,606200,'2025-02-07 22:42:58'),(1,606201,606400,'2025-02-07 22:42:59'),(1,606401,606600,'2025-02-12 12:31:37'),(1,606601,606800,'2025-02-12 12:31:38'),(1,606801,607000,'2025-02-22 16:59:03'),(1,607001,607200,'2025-02-22 16:59:04'),(1,607201,607400,'2025-02-22 17:18:01'),(1,607401,607600,'2025-02-22 17:18:01'),(1,607601,607800,'2025-02-22 17:20:29'),(1,607801,608000,'2025-02-22 17:20:30'),(1,608001,608200,'2025-02-22 17:38:27'),(1,608201,608400,'2025-02-22 17:38:27'),(1,608401,608600,'2025-02-22 17:43:46'),(1,608601,608800,'2025-02-22 17:43:46'),(1,608801,609000,'2025-02-22 17:46:37'),(1,609001,609200,'2025-02-22 17:47:50'),(1,609201,609400,'2025-02-22 17:47:50'),(1,609401,609600,'2025-02-22 17:51:50'),(1,609601,609800,'2025-02-22 17:51:50'),(1,609801,610000,'2025-02-22 17:59:14'),(1,610001,610200,'2025-02-22 17:59:15'),(1,610201,610400,'2025-02-22 18:02:49'),(1,610401,610600,'2025-02-22 18:02:50'),(1,610601,610800,'2025-02-22 18:04:30'),(1,610801,611000,'2025-02-22 18:04:31'),(1,611001,611200,'2025-02-22 18:05:32'),(1,611201,611400,'2025-02-22 18:05:32'),(1,611401,611600,'2025-02-22 18:11:23'),(1,611601,611800,'2025-02-22 18:11:23'),(1,611801,612000,'2025-02-22 18:13:06'),(1,612001,612200,'2025-02-22 18:13:06'),(1,612201,612400,'2025-02-22 18:55:45'),(1,612401,612600,'2025-02-22 18:55:45'),(1,612601,612800,'2025-02-22 19:11:55'),(1,612801,613000,'2025-02-22 19:11:55'),(1,613001,613200,'2025-02-22 19:18:58'),(1,613201,613400,'2025-02-22 19:18:59'),(1,613401,613600,'2025-02-22 19:24:30'),(1,613601,613800,'2025-02-22 19:24:30'),(1,613801,614000,'2025-02-22 19:28:19'),(1,614001,614200,'2025-02-22 19:28:20'),(1,614201,614400,'2025-02-22 19:33:19'),(1,614401,614600,'2025-02-22 19:33:20'),(1,614601,614800,'2025-02-22 19:37:17'),(1,614801,615000,'2025-02-22 19:37:18'),(1,615001,615200,'2025-02-22 19:43:07'),(1,615201,615400,'2025-02-22 19:43:07'),(1,615401,615600,'2025-02-22 19:47:20'),(1,615601,615800,'2025-02-22 19:47:21'),(1,615801,616000,'2025-02-23 15:28:07'),(1,616001,616200,'2025-02-23 15:28:08'),(1,616201,616400,'2025-03-23 19:43:57'),(1,616401,616600,'2025-03-23 19:44:35'),(1,616601,616800,'2025-03-23 19:45:21'),(1,616801,617000,'2025-03-23 19:45:55'),(1,617001,617200,'2025-03-23 19:47:19'),(1,617201,617400,'2025-03-23 19:48:34'),(1,617401,617600,'2025-03-23 19:49:04'),(1,617601,617800,'2025-03-23 19:49:21'),(1,617801,618000,'2025-03-23 19:50:30'),(1,618001,618200,'2025-03-23 19:50:44'),(1,618201,618400,'2025-03-23 19:53:26'),(1,618401,618600,'2025-03-23 19:54:51'),(1,618601,618800,'2025-03-23 19:54:52'),(1,618801,619000,'2025-03-23 19:59:51'),(1,619001,619200,'2025-03-23 19:59:52'),(1,619201,619400,'2025-03-23 20:00:45'),(1,619401,619600,'2025-03-23 20:00:46'),(1,619601,619800,'2025-03-23 20:04:40'),(1,619801,620000,'2025-03-23 20:04:40'),(1,620001,620200,'2025-03-23 20:05:56'),(1,620201,620400,'2025-03-23 20:05:56'),(1,620401,620600,'2025-03-23 20:08:30'),(1,620601,620800,'2025-03-23 20:08:31'),(1,620801,621000,'2025-03-23 20:14:26'),(1,621001,621200,'2025-03-23 20:14:26'),(1,621201,621400,'2025-03-23 20:20:35'),(1,621401,621600,'2025-03-23 20:20:36'),(1,621601,621800,'2025-03-23 20:29:01'),(1,621801,622000,'2025-03-23 20:29:01'),(1,622001,622200,'2025-03-23 20:31:15'),(1,622201,622400,'2025-03-23 20:31:16'),(1,622401,622600,'2025-03-23 20:32:03'),(1,622601,622800,'2025-03-23 20:32:03'),(1,622801,623000,'2025-03-23 20:32:58'),(1,623001,623200,'2025-03-23 20:32:59'),(1,623201,623400,'2025-03-23 20:33:41'),(1,623401,623600,'2025-03-23 20:33:41'),(1,623601,623800,'2025-03-23 20:34:31'),(1,623801,624000,'2025-03-23 20:34:32'),(1,624001,624200,'2025-03-23 20:35:14'),(1,624201,624400,'2025-03-23 20:35:15'),(1,624401,624600,'2025-03-23 21:05:47'),(1,624601,624800,'2025-03-23 21:05:47');
/*!40000 ALTER TABLE `uid_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `vehicle_tb`
--

DROP TABLE IF EXISTS `vehicle_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `vehicle_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `VehicleGroupId` smallint(5) unsigned NOT NULL,
  `VehicleIdx` smallint(5) unsigned NOT NULL,
  `VehicleLev` tinyint(3) unsigned NOT NULL DEFAULT '1',
  `VehicleExp` int(10) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`CharacterUID`,`VehicleGroupId`),
  KEY `FK_vehicle_tb_character_tb_idx` (`CharacterUID`),
  CONSTRAINT `FK_vehicle_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `vehicle_tb`
--

LOCK TABLES `vehicle_tb` WRITE;
/*!40000 ALTER TABLE `vehicle_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `vehicle_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `vw_character`
--

DROP TABLE IF EXISTS `vw_character`;
/*!50001 DROP VIEW IF EXISTS `vw_character`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `vw_character` AS SELECT 
 1 AS `CharacterUID`,
 1 AS `CharacterName`,
 1 AS `AccountUID`,
 1 AS `AccountName`,
 1 AS `Class`,
 1 AS `Lev`,
 1 AS `Exp`,
 1 AS `GuildUID`,
 1 AS `GuildName`,
 1 AS `MemberGrade`,
 1 AS `StageIdx`,
 1 AS `PositionX`,
 1 AS `PositionY`,
 1 AS `PositionZ`,
 1 AS `Wonbo`,
 1 AS `Gold`,
 1 AS `CreateTime`,
 1 AS `LoginTime`,
 1 AS `LogoutTime`,
 1 AS `DeleteTime`,
 1 AS `PlaytimeSec`,
 1 AS `CombatPoint`,
 1 AS `EnergyPoint`,
 1 AS `BlackIron`,
 1 AS `ActionPoint`,
 1 AS `AwakenGrade`,
 1 AS `InvenExtendCnt`,
 1 AS `CostumeIdx`,
 1 AS `PKPoint`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary view structure for view `vw_item`
--

DROP TABLE IF EXISTS `vw_item`;
/*!50001 DROP VIEW IF EXISTS `vw_item`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `vw_item` AS SELECT 
 1 AS `CharacterUID`,
 1 AS `CharacterName`,
 1 AS `ItemUID`,
 1 AS `ItemIdx`,
 1 AS `DeleteTime`,
 1 AS `ReinforceLev`,
 1 AS `ReinforceExp`,
 1 AS `SmeltingLev`,
 1 AS `StackCnt`,
 1 AS `OptionIdx01`,
 1 AS `OptionValue01`,
 1 AS `OptionIdx02`,
 1 AS `OptionValue02`,
 1 AS `OptionIdx03`,
 1 AS `OptionValue03`,
 1 AS `OptionIdx04`,
 1 AS `OptionValue04`,
 1 AS `PolishingCnt01`,
 1 AS `PolishingCnt02`,
 1 AS `PolishingCnt03`,
 1 AS `PolishingCnt04`,
 1 AS `JewelItemIdx01`,
 1 AS `JewelItemIdx02`,
 1 AS `JewelItemIdx03`,
 1 AS `JewelItemIdx04`,
 1 AS `JewelItemIdx05`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `waypoint_tb`
--

DROP TABLE IF EXISTS `waypoint_tb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `waypoint_tb` (
  `CharacterUID` bigint(20) unsigned NOT NULL,
  `WayPointIdx` int(10) NOT NULL,
  PRIMARY KEY (`CharacterUID`,`WayPointIdx`),
  CONSTRAINT `FK_waypoint_tb_character_tb` FOREIGN KEY (`CharacterUID`) REFERENCES `character_tb` (`CharacterUID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `waypoint_tb`
--

LOCK TABLES `waypoint_tb` WRITE;
/*!40000 ALTER TABLE `waypoint_tb` DISABLE KEYS */;
/*!40000 ALTER TABLE `waypoint_tb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'mm_game_db_release'
--

--
-- Dumping routines for database 'mm_game_db_release'
--
/*!50003 DROP FUNCTION IF EXISTS `UIDCnt_fn` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` FUNCTION `UIDCnt_fn`(
	_UIDType	TINYINT	UNSIGNED 
) RETURNS bigint(20) unsigned
BEGIN
	SET @UIDCnt = 
		CASE _UIDType
			WHEN 1	THEN 200
			ELSE 0
		END;
RETURN @UIDCnt;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP FUNCTION IF EXISTS `UIDRecallPercent_fn` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` FUNCTION `UIDRecallPercent_fn`() RETURNS tinyint(3) unsigned
BEGIN

RETURN 50;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Account_Get_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Account_Get_Game`(
	IN	_AccountUID		BIGINT	UNSIGNED
,	IN	_AccountName	VARCHAR(50)
,	IN	_AuthKey	VARCHAR(38)

,	OUT	_Cash	INT	UNSIGNED
,	OUT	_Result	INT
)
BEGIN
    DECLARE _validAuthKey VARCHAR(38);
    DECLARE EXIT HANDLER FOR SQLEXCEPTION
    BEGIN
                GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT;
        SET _Result = @Errno;
-- 		SELECT @Sqlstate, @Errno, @Text; 
    END;
    SET	_Cash = 0, _Result = -1;
    SET	_AccountName = LTRIM( RTRIM(_AccountName) );


    MAIN_ROUTINE:
    BEGIN
        IF	_AccountUID = 0 OR _AccountName = ''	THEN
            SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
    END IF;

    SELECT AuthKey INTO _validAuthKey FROM account_auth_tb WHERE AccountUID = _AccountUID AND AuthKey = _AuthKey AND Expires > NOW();
    IF _validAuthKey != _AuthKey THEN
        SET _Result = 4;	LEAVE MAIN_ROUTINE;
END IF;

-- 계정 데이터
SELECT Cash	INTO _Cash	FROM account_tb	WHERE AccountUID = _AccountUID AND AccountName = _AccountName;
IF	FOUND_ROWS() <= 0	THEN	-- 계정 데이터가 없을 경우 생성
    SET	_Cash = 0;

INSERT IGNORE INTO account_tb ( AccountUID, AccountName, Cash )	VALUES ( _AccountUID, _AccountName, _Cash );
IF ROW_COUNT() <= 0	THEN SET _Result = 101;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 계정
END IF;

SET	_Result = 0;
END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `AchievementRewardReceive_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `AchievementRewardReceive_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_AchievementGroupIdx	SMALLINT	UNSIGNED
,	IN	_AchievementGroupGrade	TINYINT		UNSIGNED

,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED

,	IN	_CreateItemUID01		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01		INT			UNSIGNED	
,	IN	_ReinforceLev01			TINYINT		UNSIGNED	
,	IN	_ReinforceExp01			INT			UNSIGNED
,	IN	_SmeltingLev01			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01	MEDIUMINT					
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx01A			SMALLINT	UNSIGNED		
,	IN	_OptionValue01A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B			SMALLINT	UNSIGNED		
,	IN	_OptionValue01B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C			SMALLINT	UNSIGNED		
,	IN	_OptionValue01C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D			SMALLINT	UNSIGNED		
,	IN	_OptionValue01D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID02		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx02		INT			UNSIGNED	
,	IN	_ReinforceLev02			TINYINT		UNSIGNED	
,	IN	_ReinforceExp02			INT			UNSIGNED
,	IN	_SmeltingLev02			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount02	MEDIUMINT					
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx02A			SMALLINT	UNSIGNED		
,	IN	_OptionValue02A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02B			SMALLINT	UNSIGNED		
,	IN	_OptionValue02B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02C			SMALLINT	UNSIGNED		
,	IN	_OptionValue02C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02D			SMALLINT	UNSIGNED		
,	IN	_OptionValue02D			SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT

,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB01 = 0, _MoneyResultDB02 = 0, _StackResultDB01 = 0, _StackResultDB02 = 0, _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _AchievementGroupIdx = 0 OR _AchievementGroupGrade = 0 OR ( _MoneyIncreaseAmount01 = 0 AND _CreateItemUID01 = 0 )	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
		ELSEIF	_MoneyIncreaseAmount01 < 0 OR _MoneyIncreaseAmount02 < 0 OR	_StackIncreaseAmount01 < 0 OR _StackIncreaseAmount02 < 0	THEN	
			SET	_Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
		END IF;
        
		START TRANSACTION;
        	-- 업적 보상 수령으로 변경
            UPDATE 	achievement_tb 
            SET 	AchievementGroupGrade = _AchievementGroupGrade 
            WHERE 	CharacterUID = _CharacterUID AND AchievementGroupIdx = _AchievementGroupIdx AND AchievementGroupGrade < _AchievementGroupGrade;
            IF ROW_COUNT() <= 0	THEN 
				INSERT IGNORE INTO	achievement_tb
						( CharacterUID	, AchievementGroupIdx	, AchievementGroupGrade	)
				VALUES	( _CharacterUID	, _AchievementGroupIdx	, AchievementGroupGrade	);
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 703;	LEAVE MAIN_ROUTINE;	END IF;	-- 수령할 수 없는 업적 보상
            END IF;
            
			-- 재화 변경
			IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			IF	_MoneyIncreaseAmount02 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyIncreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;

			-- 아이템 생성
			IF	_CreateItemUID01	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01		, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01	, _SmeltingLev01					
									, _StackIncreaseAmount01	, _StackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B		, _OptionValue01B			
									, _OptionIdx01C				, _OptionValue01C		, _OptionIdx01D		, _OptionValue01D	, _StackResultDB01	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID02	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID02		, _CreateItemIdx02	, _ReinforceLev02	, _ReinforceExp02	, _SmeltingLev02					
									, _StackIncreaseAmount02	, _StackResultServer02	, _OptionIdx02A		, _OptionValue02A	, _OptionIdx02B		, _OptionValue02B			
									, _OptionIdx02C				, _OptionValue02C		, _OptionIdx02D		, _OptionValue02D	, _StackResultDB02	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;		
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
            SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Alarm_Get_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Alarm_Get_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED

,	OUT	_UnreadMailCnt	SMALLINT	UNSIGNED
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _UnreadMailCnt = 0, _Result = -1;
        
	MAIN_ROUTINE:
	BEGIN
		IF _CharacterUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
		-- 안읽은 우편 갯수
		SELECT	COUNT(*)
		INTO	_UnreadMailCnt
		FROM	mail_tb
		WHERE	ReceiveCharacterUID = _CharacterUID AND ExpiryTime > NOW() AND Deleted = 0 AND MailRead = 0;
		
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Awaken_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Awaken_Update_Game`(
	IN 	_CharacterUID	BIGINT	UNSIGNED
,	IN	_AwakenGrade 	TINYINT	UNSIGNED

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
-- 	DECLARE EXIT HANDLER FOR NOT FOUND, SQLEXCEPTION	BEGIN SET _Result = -1;	END;	-- 알수없는 DB 오류
    
    SET _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _AwakenGrade = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함

        -- 각성
		UPDATE character_tb	SET	AwakenGrade = _AwakenGrade	WHERE CharacterUID = _CharacterUID;
		IF ROW_COUNT() <= 0	THEN SET _Result = 201;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 캐릭터

		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `CharacterCopy_Insert_DBA` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `CharacterCopy_Insert_DBA`(
	IN	_TargetCharName	VARCHAR(50)
,	IN	_CreateAccID	VARCHAR(50)
,	IN	_NewCharName	VARCHAR(50)

,	OUT	_CharacterUID	BIGINT	UNSIGNED
,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_CharacterUID = 0, _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_TargetCharName = '' OR _CreateAccID = '' OR _NewCharName = ''	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함

		-- 계정 확인
        SELECT AccountUID	INTO @AccountUID	FROM mm_front_db.account_tb	WHERE AccountName = _CreateAccID;
        IF FOUND_ROWS() <= 0 THEN ROLLBACK;	SET _Result = 101;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 계정
        
        -- 캐릭터 기본 데이터
		SELECT	CH.CharacterUID				, CH.Class			, CH.Lev		, CH.Exp			, CH.CurrentHP	, CH.CurrentMP	, CH.StageIdx	, CH.PositionX	, CH.PositionY	
			, 	CH.PositionZ				, CH.Wonbo			, CH.Gold		, CH.PlaytimeSec	, CH.CombatPoint, CH.AwakenGrade, CH.EnergyPoint, CH.BlackIron	, CH.ActionPoint
            , 	CH.LastActionPointUpdateTime, CH.InvenExtendCnt	, CH.CostumeIdx	, CH.PKPoint
		INTO	@TargetCharacterUID			, @Class			, @Lev			, @Exp				, @CurrentHP	, @CurrentMP	, @StageIdx		, @PositionX	, @PositionY	
			, 	@PositionZ					, @Wonbo			, @Gold			, @PlaytimeSec		, @CombatPoint	, @AwakenGrade	, @EnergyPoint	, @BlackIron	, @ActionPoint	
            , 	@LastActionPointUpdateTime	, @InvenExtendCnt	, @CostumeIdx	, @PKPoint
		FROM			mm_game_db_release.character_tb			AS CH
        LEFT OUTER JOIN	mm_game_db_release.character_delete_tb	AS CD	ON CD.CharacterUID = CH.CharacterUID
		WHERE	CH.CharacterName = _TargetCharName AND ( CD.DeleteTime > NOW() OR CD.DeleteTime IS NULL );
		IF FOUND_ROWS() <= 0 THEN ROLLBACK;	SET _Result = 201;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 캐릭터
        
		START TRANSACTION;
			INSERT IGNORE INTO account_tb ( AccountUID, AccountName, Cash )	VALUES ( @AccountUID, _CreateAccID, 0 );
            
            CALL Character_Insert_DB	( @AccountUID, @Class, _NewCharName	, @CurrentHP, @CurrentMP, @StageIdx	, @PositionX, @PositionY, @PositionZ, @CombatPoint
										, 0	, 0	, 0	, 0	, 0	
                                        , 0	, 0	, 0	, 0	, 0	, 0	, 0	
                                        , 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0 , 0 , 0 , 0 , 0	
                                        , 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0	, 0 , 0 , 0 , 0	
                                        , @NewCharacterUID	, @StackResultDB01	, @StackResultDB02	, _Result	);
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            
            UPDATE	character_tb
            SET		Lev = @Lev	, Exp = @Exp	, Wonbo = @Wonbo, Gold = @Gold	, PlaytimeSec = @PlaytimeSec, EnergyPoint = @EnergyPoint, BlackIron = @BlackIron
				, 	ActionPoint = @ActionPoint	, LastActionPointUpdateTime = @LastActionPointUpdateTime	, AwakenGrade = @AwakenGrade, InvenExtendCnt = @InvenExtendCnt
                , 	CostumeIdx = @CostumeIdx	, PKPoint = @PKPoint
            WHERE	CharacterUID = @NewCharacterUID;
            
            INSERT INTO achievement_tb
				( 	CharacterUID	, ActionType	, ActionValueIdx, ActionValue	)
            SELECT	@NewCharacterUID, ActionType	, ActionValueIdx, ActionValue
            FROM	achievement_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	achievement_clear_tb
				( 	CharacterUID	, AchievementIdx, ClearTime	, RewardReceiveTime	)
            SELECT	@NewCharacterUID, AchievementIdx, ClearTime	, RewardReceiveTime
            FROM	achievement_clear_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	costume_tb
				( 	CharacterUID	, CostumeIdx, CostumeGrade	, HairColorIdx	, ClothesColorIdx	)
            SELECT	@NewCharacterUID, CostumeIdx, CostumeGrade	, HairColorIdx	, ClothesColorIdx
            FROM	costume_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	escape_position_tb
				( 	CharacterUID	, EscapeStageIdx, EscapePositionX	, EscapePositionY	, EscapePositionZ	)
            SELECT	@NewCharacterUID, EscapeStageIdx, EscapePositionX	, EscapePositionY	, EscapePositionZ
            FROM	escape_position_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO holystuff_tb
				( 	CharacterUID	, HolyStuffIdx	, HolyStuffLev	, HolyStuffExp	)
            SELECT	@NewCharacterUID, HolyStuffIdx	, HolyStuffLev	, HolyStuffExp
            FROM	holystuff_tb
            WHERE	CharacterUID = @TargetCharacterUID;

            INSERT INTO	mastery_tb
				( 	CharacterUID	, MasterySlot	, MasteryCnt	)
            SELECT	@NewCharacterUID, MasterySlot	, MasteryCnt
            FROM	mastery_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	pulse_tb
				( 	CharacterUID	, PulseIdx	)
            SELECT	@NewCharacterUID, PulseIdx
            FROM	pulse_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	pulse_blood_tb
				( 	CharacterUID	, PulseIdx	, BloodIdx	, AttributeType	, AttributeValue, ResetCnt	)
            SELECT	@NewCharacterUID, PulseIdx	, BloodIdx	, AttributeType	, AttributeValue, ResetCnt
            FROM	pulse_blood_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	quest_daily_tb
				( 	CharacterUID	, ListReceiveTime	, PlusRewardReceiveCnt	, FreeResetCnt	)
            SELECT	@NewCharacterUID, ListReceiveTime	, PlusRewardReceiveCnt	, FreeResetCnt
            FROM	quest_daily_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	quest_daily_list_tb
				( 	CharacterUID	, QuestUID	, QuestIdx	, QuestGrade, AcceptTime, QuestValue, QuestClear, RewardReceiveTime	)
            SELECT	@NewCharacterUID, QuestUID	, QuestIdx	, QuestGrade, AcceptTime, QuestValue, QuestClear, RewardReceiveTime
            FROM	quest_daily_list_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	quest_main_tb
				( 	CharacterUID	, QuestIdx	, State	, QuestValue	)
            SELECT	@NewCharacterUID, QuestIdx	, State	, QuestValue
            FROM	quest_main_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	quest_sub_tb
				( 	CharacterUID	, QuestIdx	, State	, QuestValue	)
            SELECT	@NewCharacterUID, QuestIdx	, State	, QuestValue
            FROM	quest_sub_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	quest_weekly_tb
				( 	CharacterUID	, ListReceiveTime	, ClearCnt_Week	, ClearCnt_Day	, ClearCnt_Day_RewardReceive, ClearCnt_Day_ResetTime, PlusRewardReceiveCnt	)
            SELECT	@NewCharacterUID, ListReceiveTime	, ClearCnt_Week	, ClearCnt_Day	, ClearCnt_Day_RewardReceive, ClearCnt_Day_ResetTime, PlusRewardReceiveCnt
            FROM	quest_weekly_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	quest_weekly_list_tb
				( 	CharacterUID	, QuestUID	, QuestIdx	, AcceptTime, QuestValue, QuestClear, RewardReceive	)
            SELECT	@NewCharacterUID, QuestUID	, QuestIdx	, AcceptTime, QuestValue, QuestClear, RewardReceive
            FROM	quest_weekly_list_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	skill_active_tb
				( 	CharacterUID	, ActiveIdx	, ActiveLev	)
            SELECT	@NewCharacterUID, ActiveIdx	, ActiveLev
            FROM	skill_active_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	skill_deck_tb
				( 	CharacterUID	, DeckNum	, SkillSlot	, ActiveIdx	)
            SELECT	@NewCharacterUID, DeckNum	, SkillSlot	, ActiveIdx
            FROM	skill_deck_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	skill_passivegroup_tb
				( 	CharacterUID	, PassiveGroupIdx	, PassiveGroupLev	, PassiveGroupExp	)
            SELECT	@NewCharacterUID, PassiveGroupIdx	, PassiveGroupLev	, PassiveGroupExp
            FROM	skill_passivegroup_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	skill_passive_tb
				( 	CharacterUID	, PassiveGroupIdx	, PassiveIdx, PassiveLev	)
            SELECT	@NewCharacterUID, PassiveGroupIdx	, PassiveIdx, PassiveLev
            FROM	skill_passive_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	treasure_tb
				( 	CharacterUID	, TreasureIdx	)
            SELECT	@NewCharacterUID, TreasureIdx
            FROM	treasure_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
			INSERT INTO	vehicle_tb
				( 	CharacterUID	, VehicleGroupId, VehicleIdx, VehicleLev, VehicleExp	)
            SELECT	@NewCharacterUID, VehicleGroupId, VehicleIdx, VehicleLev, VehicleExp
            FROM	vehicle_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	equip_vehicle_tb
				( 	CharacterUID	, VehicleGroupId	)
            SELECT	@NewCharacterUID, VehicleGroupId
            FROM	equip_vehicle_tb
            WHERE	CharacterUID = @TargetCharacterUID;
            
            INSERT INTO	waypoint_tb
				( 	CharacterUID	, WayPointIdx	)
            SELECT	@NewCharacterUID, WayPointIdx
            FROM	waypoint_tb
            WHERE	CharacterUID = @TargetCharacterUID;

            
            SELECT	MAX( ItemUID )
            INTO	@LastDBItemUID
			FROM	item_tb
			WHERE	ItemUID > 9000000000000000000;
            IF	@LastDBItemUID IS NULL THEN SET @LastDBItemUID = 9000000000000000000;	END IF;

            CREATE TEMPORARY TABLE	item_tmp
			SELECT	IT.ItemUID AS TargetItemUID, @LastDBItemUID := @LastDBItemUID + 1 AS NewItemUID
			FROM			item_character_tb	AS IC
			INNER JOIN		item_tb				AS IT ON IT.ItemUID = IC.ItemUID
			LEFT OUTER JOIN	item_delete_tb		AS ID ON ID.ItemUID = IT.ItemUID
			WHERE	IC.CharacterUID = @TargetCharacterUID AND ID.ItemUID IS NULL;
            
            INSERT INTO	item_tb
				(	ItemUID		, ItemIdx	, IsLock	)
			SELECT	T.NewItemUID, I.ItemIdx	, I.IsLock
			FROM	item_tb		AS I	INNER JOIN
					item_tmp	AS T	ON T.TargetItemUID = I.ItemUID;
			
            INSERT INTO	item_binding_tb
				(	ItemUID		, EquipBinding	)
			SELECT	T.NewItemUID, I.EquipBinding
			FROM	item_binding_tb	AS I	INNER JOIN
					item_tmp		AS T	ON T.TargetItemUID = I.ItemUID;
			
            INSERT INTO	item_character_tb
				(	ItemUID		, CharacterUID		)
			SELECT	T.NewItemUID, @NewCharacterUID
			FROM	item_character_tb	AS I	INNER JOIN
					item_tmp			AS T	ON T.TargetItemUID = I.ItemUID;

            INSERT INTO	equip_item_tb
				(	CharacterUID	, EquipSlot		, ItemUID		)
			SELECT	@NewCharacterUID, I.EquipSlot	, T.NewItemUID
			FROM	equip_item_tb	AS I	INNER JOIN
					item_tmp			AS T	ON T.TargetItemUID = I.ItemUID;
            
            INSERT INTO	item_jewel_tb
				(	ItemUID		, JewelSlot		, JewelItemIdx	)
			SELECT	T.NewItemUID, I.JewelSlot	, I.JewelItemIdx
			FROM	item_jewel_tb	AS I	INNER JOIN
					item_tmp		AS T	ON T.TargetItemUID = I.ItemUID;
                    
            INSERT INTO	item_option_tb
				(	ItemUID		, OptionSlot	, OptionIdx		, OptionValue	)
			SELECT	T.NewItemUID, I.OptionSlot	, I.OptionIdx	, I.OptionValue
			FROM	item_option_tb	AS I	INNER JOIN
					item_tmp		AS T	ON T.TargetItemUID = I.ItemUID;        
            
            INSERT INTO	item_polishing_tb
				(	ItemUID		, PolishingSlot		, PolishingCnt	)
			SELECT	T.NewItemUID, I.PolishingSlot	, I.PolishingCnt
			FROM	item_polishing_tb	AS I	INNER JOIN
					item_tmp			AS T	ON T.TargetItemUID = I.ItemUID;
                    
            INSERT INTO	item_reinforce_tb
				(	ItemUID		, ReinforceLev	, ReinforceExp	)
			SELECT	T.NewItemUID, I.ReinforceLev, I.ReinforceExp
			FROM	item_reinforce_tb	AS I	INNER JOIN
					item_tmp			AS T	ON T.TargetItemUID = I.ItemUID;
                    
            INSERT INTO	item_smelting_tb
				(	ItemUID		, SmeltingLev	)
			SELECT	T.NewItemUID, I.SmeltingLev	
			FROM	item_smelting_tb	AS I	INNER JOIN
					item_tmp			AS T	ON T.TargetItemUID = I.ItemUID;        
            
            INSERT INTO	item_stack_tb
				(	ItemUID		, StackCnt	)
			SELECT	T.NewItemUID, I.StackCnt
			FROM	item_stack_tb	AS I	INNER JOIN
					item_tmp		AS T	ON T.TargetItemUID = I.ItemUID;
                    
			DROP TEMPORARY TABLE item_tmp;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `CharacterInfo_Get_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `CharacterInfo_Get_Game`(
 	IN	_CharacterUID	BIGINT	UNSIGNED

,	OUT _Class			TINYINT	UNSIGNED
,	OUT	_Lev			TINYINT	UNSIGNED
,	OUT	_LogoutTime		INT		UNSIGNED
,	OUT	_AwakenGrade	TINYINT	UNSIGNED
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
            
	SET	_Class = 0, _Lev = 0, _LogoutTime = 0, _Result = -1;
   
	MAIN_ROUTINE:
    BEGIN
 		IF	_CharacterUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함

		-- 캐릭터 기본 데이터
		SELECT	CH.Class, CH.Lev, UNIX_TIMESTAMP(CH.LogoutTime)	, AwakenGrade
		INTO	_Class	, _Lev	, _LogoutTime					, _AwakenGrade
		FROM			character_tb		AS CH
        LEFT OUTER JOIN	character_delete_tb	AS CD	ON CD.CharacterUID = CH.CharacterUID
		WHERE	CH.CharacterUID = _CharacterUID AND ( CD.DeleteTime > NOW() OR CD.DeleteTime IS NULL );
		IF FOUND_ROWS() <= 0 THEN ROLLBACK;	SET _Result = 201;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 캐릭터
        
		-- 도감
        SELECT CollectionStageIdx, CollectionMonsterIdx, CollectionLev, CollectionCnt	FROM collectionbook_tb	WHERE CharacterUID = _CharacterUID;

        -- 보유 코스츔
        SELECT CostumeIdx, CostumeGrade	FROM costume_tb	WHERE CharacterUID = _CharacterUID;
        
        -- 내공
        SELECT ForceIdx, BloodIdx, BloodLev					FROM force_blood_tb	WHERE CharacterUID = _CharacterUID;
        SELECT ForceIdx, UNIX_TIMESTAMP(SlumpExpireTime)	FROM force_tb		WHERE CharacterUID = _CharacterUID;
        
        -- 성물
        SELECT HolyStuffIdx, HolyStuffLev	FROM holystuff_tb	WHERE CharacterUID = _CharacterUID;
        
        
        -- 착용 아이템
        CREATE TEMPORARY TABLE	equip_item_tmp
        SELECT	EI.EquipSlot, IT.ItemUID, IT.ItemIdx	
        FROM			equip_item_tb	AS EI
        INNER JOIN		item_tb			AS IT ON IT.ItemUID = EI.ItemUID
        LEFT OUTER JOIN	item_delete_tb	AS ID ON ID.ItemUID = IT.ItemUID
        WHERE	EI.CharacterUID = _CharacterUID AND ID.ItemUID IS NULL;
		
		SELECT	EI.EquipSlot	, EI.ItemUID	, EI.ItemIdx
            , 	IFNULL( IR.ReinforceLev, 1 ) AS ReinforceLev	
			, 	IFNULL( SM.SmeltingLev, 0 ) AS SmeltingLev	
        FROM			equip_item_tmp		AS EI
        LEFT OUTER JOIN	item_reinforce_tb	AS IR ON IR.ItemUID = EI.ItemUID
        LEFT OUTER JOIN	item_smelting_tb	AS SM ON SM.ItemUID = EI.ItemUID;
        
        -- 아이템 착용 보석
		SELECT	EI.ItemUID, IJ.JewelSlot, IJ.JewelItemIdx
        FROM		equip_item_tmp	AS EI 
        INNER JOIN	item_jewel_tb	AS IJ ON IJ.ItemUID = EI.ItemUID;

        -- 아이템 랜덤 옵션
		SELECT	EI.ItemUID, OP.OptionSlot, OP.OptionIdx, OP.OptionValue
        FROM		equip_item_tmp	AS EI 
        INNER JOIN	item_option_tb	AS OP ON OP.ItemUID = EI.ItemUID;

        -- 아이템 연마 단계
        SELECT	EI.ItemUID, IP.PolishingSlot, IP.PolishingCnt
        FROM		equip_item_tmp		AS EI 
        INNER JOIN	item_polishing_tb	AS IP ON IP.ItemUID = EI.ItemUID;
        
        DROP TEMPORARY TABLE equip_item_tmp;
        
        
        -- 숙련
        SELECT MasterySlot, MasteryCnt	FROM mastery_tb	WHERE CharacterUID = _CharacterUID;        
        
        -- 보물
		SELECT TreasureIdx	FROM treasure_tb	WHERE CharacterUID = _CharacterUID;
        
        -- 탈것 
        SELECT VehicleGroupId, VehicleIdx, VehicleLev	FROM vehicle_tb	WHERE CharacterUID = _CharacterUID;
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `CharacterList_Get_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `CharacterList_Get_World`(
	IN	_AccountUID	BIGINT	UNSIGNED
 
,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_AccountUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
        -- 계정의 캐릭터 리스트
        SELECT	CH.CharacterUID, CH.CharacterName
			, CH.Class, CH.Lev, CH.Exp, UNIX_TIMESTAMP(CH.LoginTime) AS LoginTime, CH.StageIdx, CH.PlaytimeSec, CH.CombatPoint
			-- ,	MAX( CASE WHEN EI.EquipSlot = 1 THEN IT.ItemIdx		ELSE 0 END ) AS ItemIdx01
            -- ,	MAX( IFNULL( CASE WHEN EI.EquipSlot = 1 THEN SM.SmeltingLev	ELSE 0 END, 0 ) ) AS SmeltingLev01
            -- ,	IFNULL( CO.CostumeIdx, 0 ) AS CostumeIdx
            -- ,   IFNULL( CO.HairColorIdx, 0 ) AS HairColorIdx
            -- ,   IFNULL( CO.ClothesColorIdx, 0 ) AS ClothesColorIdx
        FROM			character_tb		AS CH
        LEFT OUTER JOIN character_delete_tb	AS CD ON CD.CharacterUID = CH.CharacterUID
		-- LEFT OUTER JOIN	costume_tb			AS CO ON CO.CharacterUID = CH.CharacterUID AND CO.CostumeIdx = CH.CostumeIdx
       --  LEFT OUTER JOIN	item_character_tb	AS IC ON IC.CharacterUID = CH.CharacterUID
        -- LEFT OUTER JOIN	item_tb				AS IT ON IT.ItemUID = IC.ItemUID
        -- LEFT OUTER JOIN	equip_item_tb		AS EI ON EI.ItemUID = IT.ItemUID 
        -- LEFT OUTER JOIN	item_smelting_tb	AS SM ON SM.ItemUID = IT.ItemUID 
        WHERE	CH.AccountUID = _AccountUID AND ( CD.DeleteTime > NOW() OR CD.DeleteTime IS NULL );

		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `CharacterLogin_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `CharacterLogin_Update_Game`( 
	IN	_CharacterUID	BIGINT	UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
	SET _Result = -1;
   
	MAIN_ROUTINE:
    BEGIN
 		IF	_CharacterUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
        START TRANSACTION;
			-- 로그인 시간 기록
			UPDATE character_tb	SET LoginTime = NOW()	WHERE CharacterUID = _CharacterUID;
			IF ROW_COUNT() <= 0 THEN ROLLBACK;	SET _Result = 201;	LEAVE MAIN_ROUTINE;	END IF;	
        
			-- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
        COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `CharacterLogout_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `CharacterLogout_Update_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
        
	MAIN_ROUTINE:
	BEGIN
		IF _CharacterUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
        UPDATE character_tb	SET LogoutTime = NOW()	WHERE CharacterUID = _CharacterUID;
        IF ROW_COUNT() <= 0 THEN ROLLBACK;	SET _Result = 201;	LEAVE MAIN_ROUTINE;	END IF;	
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `CharacterSetting_Insert_DBA` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `CharacterSetting_Insert_DBA`(
	IN	_CharacterName		VARCHAR(50)
,	IN	_CharacterLev		TINYINT	UNSIGNED
,	IN	_Gold				BIGINT

,	IN	_MainQuestIdx	INT		UNSIGNED
,	IN	_MainQuestState	TINYINT	UNSIGNED
 
,	IN	_NonStackItemIdx01	INT	UNSIGNED
,	IN	_NonStackItemIdx02	INT	UNSIGNED
,	IN	_NonStackItemIdx03	INT	UNSIGNED
,	IN	_NonStackItemIdx04	INT	UNSIGNED
,	IN	_NonStackItemIdx05	INT	UNSIGNED
,	IN	_NonStackItemIdx06	INT	UNSIGNED
,	IN	_NonStackItemIdx07	INT	UNSIGNED
,	IN	_NonStackItemIdx08	INT	UNSIGNED
,	IN	_NonStackItemIdx09	INT	UNSIGNED
,	IN	_NonStackItemIdx10	INT	UNSIGNED
,	IN	_NonStackItemIdx11	INT	UNSIGNED
,	IN	_NonStackItemIdx12	INT	UNSIGNED

,	IN	_StackItemIdx01	INT	UNSIGNED
,	IN	_StackCnt01		MEDIUMINT
,	IN	_StackItemIdx02	INT	UNSIGNED
,	IN	_StackCnt02		MEDIUMINT
,	IN	_StackItemIdx03	INT	UNSIGNED
,	IN	_StackCnt03		MEDIUMINT
,	IN	_StackItemIdx04	INT	UNSIGNED
,	IN	_StackCnt04		MEDIUMINT
,	IN	_StackItemIdx05	INT	UNSIGNED
,	IN	_StackCnt05		MEDIUMINT
,	IN	_StackItemIdx06	INT	UNSIGNED
,	IN	_StackCnt06		MEDIUMINT
,	IN	_StackItemIdx07	INT	UNSIGNED
,	IN	_StackCnt07		MEDIUMINT
,	IN	_StackItemIdx08	INT	UNSIGNED
,	IN	_StackCnt08		MEDIUMINT
,	IN	_StackItemIdx09	INT	UNSIGNED
,	IN	_StackCnt09		MEDIUMINT
,	IN	_StackItemIdx10	INT	UNSIGNED
,	IN	_StackCnt10		MEDIUMINT
,	IN	_StackItemIdx11	INT	UNSIGNED
,	IN	_StackCnt11		MEDIUMINT
,	IN	_StackItemIdx12	INT	UNSIGNED
,	IN	_StackCnt12		MEDIUMINT
,	IN	_StackItemIdx13	INT	UNSIGNED
,	IN	_StackCnt13		MEDIUMINT
,	IN	_StackItemIdx14	INT	UNSIGNED
,	IN	_StackCnt14		MEDIUMINT
,	IN	_StackItemIdx15	INT	UNSIGNED
,	IN	_StackCnt15		MEDIUMINT
,	IN	_StackItemIdx16	INT	UNSIGNED
,	IN	_StackCnt16		MEDIUMINT
,	IN	_StackItemIdx17	INT	UNSIGNED
,	IN	_StackCnt17		MEDIUMINT
,	IN	_StackItemIdx18	INT	UNSIGNED
,	IN	_StackCnt18		MEDIUMINT
,	IN	_StackItemIdx19	INT	UNSIGNED
,	IN	_StackCnt19		MEDIUMINT
,	IN	_StackItemIdx20	INT	UNSIGNED
,	IN	_StackCnt20		MEDIUMINT
,	IN	_StackItemIdx21	INT	UNSIGNED
,	IN	_StackCnt21		MEDIUMINT
,	IN	_StackItemIdx22	INT	UNSIGNED
,	IN	_StackCnt22		MEDIUMINT
,	IN	_StackItemIdx23	INT	UNSIGNED
,	IN	_StackCnt23		MEDIUMINT
,	IN	_StackItemIdx24	INT	UNSIGNED
,	IN	_StackCnt24		MEDIUMINT
,	IN	_StackItemIdx25	INT	UNSIGNED
,	IN	_StackCnt25		MEDIUMINT
,	IN	_StackItemIdx26	INT	UNSIGNED
,	IN	_StackCnt26		MEDIUMINT
,	IN	_StackItemIdx27	INT	UNSIGNED
,	IN	_StackCnt27		MEDIUMINT
,	IN	_StackItemIdx28	INT	UNSIGNED
,	IN	_StackCnt28		MEDIUMINT
,	IN	_StackItemIdx29	INT	UNSIGNED
,	IN	_StackCnt29		MEDIUMINT
,	IN	_StackItemIdx30	INT	UNSIGNED
,	IN	_StackCnt30		MEDIUMINT
,	IN	_StackItemIdx31	INT	UNSIGNED
,	IN	_StackCnt31		MEDIUMINT
,	IN	_StackItemIdx32	INT	UNSIGNED
,	IN	_StackCnt32		MEDIUMINT
,	IN	_StackItemIdx33	INT	UNSIGNED
,	IN	_StackCnt33		MEDIUMINT
,	IN	_StackItemIdx34	INT	UNSIGNED
,	IN	_StackCnt34		MEDIUMINT
,	IN	_StackItemIdx35	INT	UNSIGNED
,	IN	_StackCnt35		MEDIUMINT
,	IN	_StackItemIdx36	INT	UNSIGNED
,	IN	_StackCnt36		MEDIUMINT
,	IN	_StackItemIdx37	INT	UNSIGNED
,	IN	_StackCnt37		MEDIUMINT
,	IN	_StackItemIdx38	INT	UNSIGNED
,	IN	_StackCnt38		MEDIUMINT
,	IN	_StackItemIdx39	INT	UNSIGNED
,	IN	_StackCnt39		MEDIUMINT
,	IN	_StackItemIdx40	INT	UNSIGNED
,	IN	_StackCnt40		MEDIUMINT

,	IN	_CostumeIdx01		INT			UNSIGNED
,	IN	_CostumeGrade01		TINYINT		UNSIGNED	
,	IN	_HairColorIdx01		MEDIUMINT	UNSIGNED		
,	IN	_ClothesColorIdx01	MEDIUMINT	UNSIGNED			
,	IN	_CostumeIdx02		INT			UNSIGNED
,	IN	_CostumeGrade02		TINYINT		UNSIGNED	
,	IN	_HairColorIdx02		MEDIUMINT	UNSIGNED		
,	IN	_ClothesColorIdx02	MEDIUMINT	UNSIGNED			
,	IN	_CostumeIdx03		INT			UNSIGNED
,	IN	_CostumeGrade03		TINYINT		UNSIGNED	
,	IN	_HairColorIdx03		MEDIUMINT	UNSIGNED		
,	IN	_ClothesColorIdx03	MEDIUMINT	UNSIGNED			
,	IN	_CostumeIdx04		INT			UNSIGNED
,	IN	_CostumeGrade04		TINYINT		UNSIGNED	
,	IN	_HairColorIdx04		MEDIUMINT	UNSIGNED		
,	IN	_ClothesColorIdx04	MEDIUMINT	UNSIGNED			
,	IN	_CostumeIdx05		INT			UNSIGNED
,	IN	_CostumeGrade05		TINYINT		UNSIGNED	
,	IN	_HairColorIdx05		MEDIUMINT	UNSIGNED		
,	IN	_ClothesColorIdx05	MEDIUMINT	UNSIGNED			
,	IN	_CostumeIdx06		INT			UNSIGNED
,	IN	_CostumeGrade06		TINYINT		UNSIGNED	
,	IN	_HairColorIdx06		MEDIUMINT	UNSIGNED		
,	IN	_ClothesColorIdx06	MEDIUMINT	UNSIGNED			

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _Result = -1;
    
	MAIN_ROUTINE: 
    BEGIN
		IF	_CharacterName = '' OR _CharacterLev = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값이 없음
        END IF;	
        
        START TRANSACTION;
			SELECT 	CH.CharacterUID
            INTO	@CharacterUID 
			FROM 			character_tb		AS CH	
            LEFT OUTER JOIN	character_delete_tb	AS CD	ON CD.CharacterUID = CH.CharacterUID
            WHERE 	CH.CharacterName = _CharacterName AND ( CD.DeleteTime > NOW() OR CD.DeleteTime IS NULL );
			IF	FOUND_ROWS() != 1	THEN ROLLBACK;	SET _Result = 201;	LEAVE MAIN_ROUTINE;	END IF; -- 존재하지 않는 캐릭터
			
            UPDATE character_tb	SET Lev = _CharacterLev, Gold = _Gold	WHERE CharacterUID = @CharacterUID;
			
            
            -- 코스튬 개방
            IF	_CostumeIdx01	> 0	THEN											
				INSERT IGNORE INTO	costume_tb 									
						( CharacterUID	, CostumeIdx	, CostumeGrade		, HairColorIdx		, ClothesColorIdx		) 
				VALUES	( @CharacterUID	, _CostumeIdx01	, _CostumeGrade01	, _HairColorIdx01	, _ClothesColorIdx01	);				
            END IF;														
            														
            IF	_CostumeIdx02	> 0	THEN											
				INSERT IGNORE INTO	costume_tb 									
						( CharacterUID	, CostumeIdx	, CostumeGrade		, HairColorIdx		, ClothesColorIdx		) 
				VALUES	( @CharacterUID	, _CostumeIdx02	, _CostumeGrade02	, _HairColorIdx02	, _ClothesColorIdx02	);				
            END IF;														
            														
            IF	_CostumeIdx03	> 0	THEN											
				INSERT IGNORE INTO	costume_tb 									
						( CharacterUID	, CostumeIdx	, CostumeGrade		, HairColorIdx		, ClothesColorIdx		) 
				VALUES	( @CharacterUID	, _CostumeIdx03	, _CostumeGrade03	, _HairColorIdx03	, _ClothesColorIdx03	);				
            END IF;														
            														
            IF	_CostumeIdx04	> 0	THEN											
				INSERT IGNORE INTO	costume_tb 									
						( CharacterUID	, CostumeIdx	, CostumeGrade		, HairColorIdx		, ClothesColorIdx		) 
				VALUES	( @CharacterUID	, _CostumeIdx04	, _CostumeGrade04	, _HairColorIdx04	, _ClothesColorIdx04	);				
            END IF;														
            														
            IF	_CostumeIdx05	> 0	THEN											
				INSERT IGNORE INTO	costume_tb 									
						( CharacterUID	, CostumeIdx	, CostumeGrade		, HairColorIdx		, ClothesColorIdx		) 
				VALUES	( @CharacterUID	, _CostumeIdx05	, _CostumeGrade05	, _HairColorIdx05	, _ClothesColorIdx05	);				
            END IF;														
            														
            IF	_CostumeIdx06	> 0	THEN											
				INSERT IGNORE INTO	costume_tb 									
						( CharacterUID	, CostumeIdx	, CostumeGrade		, HairColorIdx		, ClothesColorIdx		) 
				VALUES	( @CharacterUID	, _CostumeIdx06	, _CostumeGrade06	, _HairColorIdx06	, _ClothesColorIdx06	);				
            END IF;														
            														
            
            -- 장비 아이템 생성
            SELECT	ItemUID	
            INTO	@ItemUID 
            FROM 	item_tb	
            WHERE 	ItemUID > 18000000000000000000	ORDER BY ItemUID DESC	LIMIT 1;
            IF	FOUND_ROWS() = 0	THEN SET @ItemUID = 18000000000000000000;	END IF;

            IF	_NonStackItemIdx01	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx01	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
            IF	_NonStackItemIdx02	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx02	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
            IF	_NonStackItemIdx03	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx03	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
            IF	_NonStackItemIdx04	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx04	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
            IF	_NonStackItemIdx05	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx05	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
            IF	_NonStackItemIdx06	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx06	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
            IF	_NonStackItemIdx07	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx07	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
            IF	_NonStackItemIdx08	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx08	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
            IF	_NonStackItemIdx09	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx09	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
            IF	_NonStackItemIdx10	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx10	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
            IF	_NonStackItemIdx11	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx11	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
            IF	_NonStackItemIdx12	> 0 THEN					
				SET @ItemUID = @ItemUID + 1;			
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _NonStackItemIdx12	, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );		
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;							
            							
    
			-- 스택 아이템 생성
            SELECT	ItemUID	
            INTO	@ItemUID 
            FROM 	item_tb	
            WHERE 	ItemUID > 18000000000000000000	ORDER BY ItemUID DESC	LIMIT 1;
            IF	FOUND_ROWS() = 0	THEN SET @ItemUID = 18000000000000000000;	END IF;
            
            IF	_StackItemIdx01	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx01	, 0, 0, 0, 0, _StackCnt01	, _StackCnt01	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx02	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx02	, 0, 0, 0, 0, _StackCnt02	, _StackCnt02	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx03	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx03	, 0, 0, 0, 0, _StackCnt03	, _StackCnt03	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx04	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx04	, 0, 0, 0, 0, _StackCnt04	, _StackCnt04	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx05	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx05	, 0, 0, 0, 0, _StackCnt05	, _StackCnt05	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx06	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx06	, 0, 0, 0, 0, _StackCnt06	, _StackCnt06	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx07	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx07	, 0, 0, 0, 0, _StackCnt07	, _StackCnt07	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx08	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx08	, 0, 0, 0, 0, _StackCnt08	, _StackCnt08	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx09	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx09	, 0, 0, 0, 0, _StackCnt09	, _StackCnt09	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx10	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx10	, 0, 0, 0, 0, _StackCnt10	, _StackCnt10	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx11	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx11	, 0, 0, 0, 0, _StackCnt11	, _StackCnt11	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx12	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx12	, 0, 0, 0, 0, _StackCnt12	, _StackCnt12	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx13	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx13	, 0, 0, 0, 0, _StackCnt13	, _StackCnt13	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx14	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx14	, 0, 0, 0, 0, _StackCnt14	, _StackCnt14	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx15	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx15	, 0, 0, 0, 0, _StackCnt15	, _StackCnt15	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx16	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx16	, 0, 0, 0, 0, _StackCnt16	, _StackCnt16	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx17	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx17	, 0, 0, 0, 0, _StackCnt17	, _StackCnt17	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx18	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx18	, 0, 0, 0, 0, _StackCnt18	, _StackCnt18	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx19	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx19	, 0, 0, 0, 0, _StackCnt19	, _StackCnt19	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx20	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx20	, 0, 0, 0, 0, _StackCnt20	, _StackCnt20	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx21	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx21	, 0, 0, 0, 0, _StackCnt21	, _StackCnt21	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx22	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx22	, 0, 0, 0, 0, _StackCnt22	, _StackCnt22	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx23	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx23	, 0, 0, 0, 0, _StackCnt23	, _StackCnt23	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx24	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx24	, 0, 0, 0, 0, _StackCnt24	, _StackCnt24	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx25	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx25	, 0, 0, 0, 0, _StackCnt25	, _StackCnt25	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx26	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx26	, 0, 0, 0, 0, _StackCnt26	, _StackCnt26	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx27	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx27	, 0, 0, 0, 0, _StackCnt27	, _StackCnt27	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx28	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx28	, 0, 0, 0, 0, _StackCnt28	, _StackCnt28	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx29	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx29	, 0, 0, 0, 0, _StackCnt29	, _StackCnt29	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx30	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx30	, 0, 0, 0, 0, _StackCnt30	, _StackCnt30	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx31	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx31	, 0, 0, 0, 0, _StackCnt31	, _StackCnt31	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx32	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx32	, 0, 0, 0, 0, _StackCnt32	, _StackCnt32	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx33	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx33	, 0, 0, 0, 0, _StackCnt33	, _StackCnt33	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx34	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx34	, 0, 0, 0, 0, _StackCnt34	, _StackCnt34	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx35	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx35	, 0, 0, 0, 0, _StackCnt35	, _StackCnt35	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx36	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx36	, 0, 0, 0, 0, _StackCnt36	, _StackCnt36	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx37	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx37	, 0, 0, 0, 0, _StackCnt37	, _StackCnt37	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx38	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx38	, 0, 0, 0, 0, _StackCnt38	, _StackCnt38	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx39	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx39	, 0, 0, 0, 0, _StackCnt39	, _StackCnt39	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
            								
            IF	_StackItemIdx40	> 0 THEN						
				SET @ItemUID = @ItemUID + 1;				
				CALL Item_Insert_DB ( @CharacterUID, @ItemUID, _StackItemIdx40	, 0, 0, 0, 0, _StackCnt40	, _StackCnt40	, 0, 0, 0, 0, 0, 0, 0, 0, 0, @StackResultDB, _Result );	
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;								
			
            
            -- 퀘스트
            IF	_MainQuestIdx	> 0 THEN			
				INSERT IGNORE INTO quest_main_tb ( CharacterUID, QuestIdx, State, QuestValue )	VALUES ( @CharacterUID, _MainQuestIdx, _MainQuestState, 0 );
            END IF;					


			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Character_Delete_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`localhost` PROCEDURE `Character_Delete_Game`(
	IN 	_CharacterUID	BIGINT	UNSIGNED
,	IN	_DeleteTime		INT		UNSIGNED

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR NOT FOUND, SQLEXCEPTION	BEGIN SET _Result = -1;		END;	-- 알수없는 DB 오류
    DECLARE EXIT HANDLER FOR 1452						BEGIN SET _Result = 201;	END;	-- (외래키 제약조건 위반) 존재하지 않는 캐릭터
    
    SET _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
		INSERT IGNORE INTO character_delete_tb ( CharacterUID, DeleteTime )	VALUES ( _CharacterUID, FROM_UNIXTIME(_DeleteTime) );
		IF ROW_COUNT() <= 0	THEN SET _Result = 201;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 캐릭터
    
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Character_Get_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Character_Get_Game`(
	IN	_AccountUID		BIGINT	UNSIGNED
, 	IN	_CharacterUID	BIGINT	UNSIGNED

,	OUT _CharacterName				VARCHAR(50)
,	OUT	_CustomTitle				VARCHAR(12)
,	OUT _Class						TINYINT		UNSIGNED
,	OUT	_Lev						TINYINT		UNSIGNED
,	OUT	_Exp						INT			UNSIGNED
,	OUT	_CurrentHP					INT			UNSIGNED
,	OUT	_CurrentMP					INT			UNSIGNED
,	OUT	_StageIdx					INT			UNSIGNED 
,	OUT	_PositionX					FLOAT	
,	OUT	_PositionY					FLOAT	
,	OUT	_PositionZ					FLOAT
,	OUT	_EscapeStageIdx				INT			UNSIGNED
,	OUT	_EscapePositionX			FLOAT
,	OUT	_EscapePositionY			FLOAT
,	OUT	_EscapePositionZ			FLOAT
,	OUT	_Wonbo						INT			UNSIGNED
,	OUT	_Gold						BIGINT		UNSIGNED
,	OUT	_AncientCoin				BIGINT		UNSIGNED
,	OUT	_PlaytimeSec				INT			UNSIGNED
,	OUT	_EnergyPoint				BIGINT	UNSIGNED
,	OUT	_BlackIron					INT			UNSIGNED
,	OUT	_ActionPoint				SMALLINT	UNSIGNED
,	OUT	_LastActionPointUpdateTime	INT			UNSIGNED
,	OUT	_LootingCnt					TINYINT		UNSIGNED
,	OUT	_LastLootingTime			INT			UNSIGNED
,	OUT	_AwakenGrade				TINYINT		UNSIGNED
,	OUT	_InvenExtendCnt				TINYINT		UNSIGNED
,	OUT	_VehicleGroupId				SMALLINT	UNSIGNED
,	OUT	_PKPoint					SMALLINT
,	OUT	_GuildUID					INT			UNSIGNED
,	OUT	_Result						INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
 		SELECT @Sqlstate, @Errno, @Text; 
	END;
            
	SET	_CharacterName = ''	,   _CustomTitle = ''	, _Class = 0	, _Lev = 0				, _Exp = 0				, _CurrentHP = 0		, _CurrentMP = 0		, _StageIdx = 0		
    ,	_PositionX = 0		, 	_PositionY = 0	    , _PositionZ = 0, _EscapeStageIdx = 0	, _EscapePositionX = 0	, _EscapePositionY = 0	, _EscapePositionZ = 0	, _Wonbo = 0		
    , 	_Gold = 0			, 	_PlaytimeSec = 0	, _EnergyPoint = 0, _BlackIron = 0,     _LootingCnt = 0		, _LastLootingTime = 0	, _AwakenGrade = 0		, _InvenExtendCnt = 0
    ,   _VehicleGroupId = 0	, _PKPoint = 0	, _GuildUID = 0	, _Result = -1;
   
	MAIN_ROUTINE:
    BEGIN
    
		DECLARE _CostumeIdx INT UNSIGNED DEFAULT 0;
        
 		IF	_AccountUID = 0 OR _CharacterUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
        -- 업적
		SELECT AchievementGroupIdx, AchievementGroupGrade	FROM achievement_tb	WHERE CharacterUID = _CharacterUID;
        
		-- 길드
        SELECT GuildUID	INTO _GuildUID	FROM character_guild_tb	WHERE CharacterUID = _CharacterUID;
        
		-- 캐릭터 기본 데이터
		SELECT	CH.CharacterName	, CH.Class		, CH.Lev			, CH.Exp		, CH.CurrentHP	, CH.CurrentMP	, CH.StageIdx	, CH.PositionX	, CH.PositionY	
			, 	CH.PositionZ		, CH.Wonbo		, CH.Gold			, CH.AncientCoin , CH.PlaytimeSec, CH.AwakenGrade, CH.EnergyPoint, CH.BlackIron	, CH.ActionPoint, UNIX_TIMESTAMP(CH.LastActionPointUpdateTime)	
            , 	CH.InvenExtendCnt	, CH.CostumeIdx , CH.PKPoint        
		INTO	_CharacterName		, _Class		, _Lev				, _Exp			, _CurrentHP	, _CurrentMP	, _StageIdx		, _PositionX	, _PositionY		
			, 	_PositionZ			, _Wonbo		, _Gold				, _AncientCoin  , _PlaytimeSec	, _AwakenGrade	, _EnergyPoint	, _BlackIron	, _ActionPoint	, _LastActionPointUpdateTime	
            , 	_InvenExtendCnt		, _CostumeIdx	, _PKPoint          
		FROM			character_tb		AS CH
        LEFT OUTER JOIN	character_delete_tb	AS CD	ON CD.CharacterUID = CH.CharacterUID
		WHERE	CH.CharacterUID = _CharacterUID AND ( CD.DeleteTime > NOW() OR CD.DeleteTime IS NULL );
		IF FOUND_ROWS() <= 0 THEN ROLLBACK;	SET _Result = 201;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 캐릭터

		-- 도감
		SELECT CollectionStageIdx														FROM collectionbook_stagereward_tb	WHERE CharacterUID = _CharacterUID;
        SELECT CollectionStageIdx, CollectionMonsterIdx, CollectionLev, CollectionCnt	FROM collectionbook_tb				WHERE CharacterUID = _CharacterUID;
        
        -- 보유 코스츔
        SELECT CostumeIdx, CostumeGrade, HairColorIdx, ClothesColorIdx	FROM costume_tb	WHERE CharacterUID = _CharacterUID AND CostumeIdx = _CostumeIdx;
        
        -- customize_tb
        SELECT ElementType, ElementValue	FROM customize_tb	WHERE CharacterUID = _CharacterUID;
        
        -- equip_costume_tb
        SELECT CostumeEquipSlot, CostumeIdx	FROM equip_costume_tb	WHERE CharacterUID = _CharacterUID;
        
        -- equip_costume_hide_tb
        SELECT CostumeEquipSlot, IsHidden	FROM equip_costume_hide_tb	WHERE CharacterUID = _CharacterUID;
        
        -- 호칭
		SELECT CustomTitle	INTO _CustomTitle	FROM customtitle_tb	WHERE CharacterUID = _CharacterUID;
        
        -- 착용 슬롯
--        SELECT EquipSlot, ItemUID					FROM equip_item_tb		WHERE CharacterUID = _CharacterUID;
--        SELECT EquipSlot, JewelSlot, JewelItemIdx	FROM equip_jewel_tb		WHERE CharacterUID = _CharacterUID;
        
        -- 착용 탈것
        SELECT VehicleGroupId	INTO _VehicleGroupId	FROM equip_vehicle_tb	WHERE CharacterUID = _CharacterUID;
        
        -- 탈출 위치
        SELECT	EscapeStageIdx	, EscapePositionX	, EscapePositionY	, EscapePositionZ
		INTO	_EscapeStageIdx	, _EscapePositionX	, _EscapePositionY	, _EscapePositionZ
		FROM	escape_position_tb
		WHERE	CharacterUID = _CharacterUID;
        
        -- 내공
        SELECT ForceIdx, BloodIdx, BloodLev					FROM force_blood_tb	WHERE CharacterUID = _CharacterUID;
        SELECT ForceIdx, UNIX_TIMESTAMP(SlumpExpireTime)	FROM force_tb		WHERE CharacterUID = _CharacterUID;
        
        -- 성물
        SELECT HolyStuffIdx, HolyStuffLev, HolyStuffExp	FROM holystuff_tb	WHERE CharacterUID = _CharacterUID;

        
        -- 보유 아이템
        CREATE TEMPORARY TABLE	item_tmp
        SELECT	IT.ItemUID, IT.ItemIdx	
        FROM			item_character_tb	AS IC
        INNER JOIN		item_tb				AS IT ON IT.ItemUID = IC.ItemUID
        LEFT OUTER JOIN	item_delete_tb		AS ID ON ID.ItemUID = IT.ItemUID
        WHERE	IC.CharacterUID = _CharacterUID AND ID.ItemUID IS NULL;
        
		SELECT	IT.ItemUID	, IT.ItemIdx
			, 	IFNULL( IB.EquipBinding, 0 ) AS EquipBinding
            , 	IFNULL( IR.ReinforceLev, 1 ) AS ReinforceLev	
            , 	IFNULL( IR.ReinforceExp, 0 ) AS ReinforceExp
			, 	IFNULL( SM.SmeltingLev, 0 ) AS SmeltingLev
            , 	IFNULL( ST.StackCnt, 0 ) AS StackCnt	-- 장비템일경우 0으로 처리하도록 수정
        FROM			item_tmp			AS IT
        LEFT OUTER JOIN	item_binding_tb		AS IB ON IB.ItemUID = IT.ItemUID
        -- LEFT OUTER JOIN	item_delete_tb		AS ID ON ID.ItemUID = IT.ItemUID
        LEFT OUTER JOIN	item_reinforce_tb	AS IR ON IR.ItemUID = IT.ItemUID
        LEFT OUTER JOIN	item_smelting_tb	AS SM ON SM.ItemUID = IT.ItemUID
        LEFT OUTER JOIN	item_stack_tb		AS ST ON ST.ItemUID = IT.ItemUID;
        
        -- 착용 슬롯
        SELECT ItemUID, EquipSlot				FROM equip_item_tb		WHERE CharacterUID = _CharacterUID;
		
        -- 아이템 보류 옵션
        -- SELECT ItemUID, OptionSlot, OptionIdx, OptionValue	FROM item_holdoption_tb	WHERE CharacterUID = _CharacterUID;
        SELECT	IT.ItemUID, IHO.OptionSlot, IHO.OptionIdx, IHO.OptionValue
        FROM		item_tmp		AS IT 
        INNER JOIN	item_holdoption_tb	AS IHO ON IHO.ItemUID = IT.ItemUID;
        
        -- 아이템 착용 보석
		SELECT	IT.ItemUID, IJ.JewelSlot, IJ.JewelItemIdx
        FROM		item_tmp		AS IT 
        INNER JOIN	item_jewel_tb	AS IJ ON IJ.ItemUID = IT.ItemUID;

        -- 아이템 랜덤 옵션
        -- SELECT ItemUID, OptionSlot, OptionIdx, OptionValue	FROM item_option_tb	WHERE ItemUID = IT.ItemUID;
		SELECT	IT.ItemUID, OP.OptionSlot, OP.OptionIdx, OP.OptionValue
        FROM		item_tmp		AS IT 
        INNER JOIN	item_option_tb	AS OP ON OP.ItemUID = IT.ItemUID;

        -- 아이템 연마 단계
        SELECT	IT.ItemUID, IP.PolishingSlot, IP.PolishingCnt
        FROM		item_tmp			AS IT 
        INNER JOIN	item_polishing_tb	AS IP ON IP.ItemUID = IT.ItemUID;
        
        DROP TEMPORARY TABLE item_tmp;
		
        
        -- 숙련
        SELECT MasterySlot, MasteryCnt	FROM mastery_tb	WHERE CharacterUID = _CharacterUID;        
        
        -- 플레이 데이터
        SELECT PlayDataIdx, PlayDataValue	FROM playdata_tb	WHERE CharacterUID = _CharacterUID;
        
        -- product_buy_cnt
        SELECT ProductIdx, BuyCount, LastBuyTime									FROM product_buy_cnt_account_tb			WHERE AccountUID = _AccountUID;
        SELECT ProductIdx, BuyCount, LastBuyTime									FROM product_buy_cnt_character_tb			WHERE CharacterUID = _CharacterUID;
        
        -- 퀘스트
        SELECT QuestIdx, State, QuestValue									FROM quest_main_tb			WHERE CharacterUID = _CharacterUID;
        SELECT QuestIdx, State, QuestValue									FROM quest_sub_tb			WHERE CharacterUID = _CharacterUID;
        SELECT QuestIdx, ClearCnt, UNIX_TIMESTAMP(ClearTime) AS ClearTime	FROM quest_sub_clearcnt_tb	WHERE CharacterUID = _CharacterUID;
        
        -- 스킬
        SELECT ActiveIdx, ActiveLev									FROM skill_active_tb		WHERE CharacterUID = _CharacterUID;
        SELECT DeckNum, SkillSlot, ActiveIdx						FROM skill_deck_tb			WHERE CharacterUID = _CharacterUID;
        SELECT PassiveGroupIdx, PassiveIdx, PassiveLev				FROM skill_passive_tb		WHERE CharacterUID = _CharacterUID;
        SELECT PassiveGroupIdx, PassiveGroupLev, PassiveGroupExp	FROM skill_passivegroup_tb	WHERE CharacterUID = _CharacterUID;

		-- 보물
        SELECT TreasureIdx, TreasureLev		FROM treasure_lev_tb				WHERE CharacterUID = _CharacterUID;
		SELECT TreasureIdx, MeterialSlot	FROM treasure_meterial_tb			WHERE CharacterUID = _CharacterUID;
		
        -- 튜토리얼
        SELECT TutorialGroupIdx	FROM tutorial_clear_tb	WHERE AccountUID = _AccountUID;
        
        -- 탈것 
        SELECT VehicleGroupId, VehicleIdx, VehicleLev, VehicleExp	FROM vehicle_tb	WHERE CharacterUID = _CharacterUID;
        
        -- 표지석
        SELECT WayPointIdx	FROM waypoint_tb	WHERE CharacterUID = _CharacterUID;
       
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Character_Get_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Character_Get_World`(
 	IN	_CharacterUID	BIGINT	UNSIGNED

,	OUT _CharacterName		VARCHAR(50)
,	OUT _Class				TINYINT	UNSIGNED
,	OUT	_Lev				TINYINT	UNSIGNED
,	OUT	_Exp				INT		UNSIGNED
,	OUT	_StageIdx			INT		UNSIGNED 
,	OUT	_PositionX			FLOAT	
,	OUT	_PositionY			FLOAT	
,	OUT	_PositionZ			FLOAT	
,	OUT	_EscapeStageIdx		INT		UNSIGNED
,	OUT	_EscapePositionX	FLOAT
,	OUT	_EscapePositionY	FLOAT
,	OUT	_EscapePositionZ	FLOAT
,	OUT	_GuildUID			INT		UNSIGNED
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
            
	SET	_CharacterName = ''	, _Class = 0			, _Lev = 0				, _Exp = 0				, _StageIdx = 0	, _PositionX = 0, _PositionY = 0, _PositionZ = 0
    , 	_EscapeStageIdx = 0	, _EscapePositionX = 0	, _EscapePositionY = 0	, _EscapePositionZ = 0	, _GuildUID = 0	, _Result = -1;
   
	MAIN_ROUTINE:
    BEGIN
 		IF	_CharacterUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함

		-- 길드
        SELECT GuildUID	INTO _GuildUID	FROM character_guild_tb	WHERE CharacterUID = _CharacterUID;
        
		-- 캐릭터 기본 데이터
		SELECT	CH.CharacterName, CH.Class	, CH.Lev, CH.Exp, CH.StageIdx	, CH.PositionX	, CH.PositionY	, CH.PositionZ
		INTO	_CharacterName	, _Class	, _Lev	, _Exp	, _StageIdx		, _PositionX	, _PositionY	, _PositionZ
		FROM			character_tb		AS CH
        LEFT OUTER JOIN	character_delete_tb	AS CD	ON CD.CharacterUID = CH.CharacterUID
		WHERE	CH.CharacterUID = _CharacterUID AND ( CD.DeleteTime > NOW() OR CD.DeleteTime IS NULL );
		IF FOUND_ROWS() <= 0 THEN ROLLBACK;	SET _Result = 201;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 캐릭터
        
		-- 탈출 위치
        SELECT	EscapeStageIdx	, EscapePositionX	, EscapePositionY	, EscapePositionZ
		INTO	_EscapeStageIdx	, _EscapePositionX	, _EscapePositionY	, _EscapePositionZ
		FROM	escape_position_tb
		WHERE	CharacterUID = _CharacterUID;
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Character_Insert_DB` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Character_Insert_DB`(
	IN	_AccountUID			BIGINT		UNSIGNED 
,	IN	_Class				TINYINT		UNSIGNED
,	IN	_CharacterName		VARCHAR(50)
,	IN	_CurrentHP			INT			UNSIGNED
,	IN	_CurrentMP			INT			UNSIGNED
,	IN	_StageIdx			INT			UNSIGNED
,	IN	_PositionX			FLOAT
,	IN	_PositionY			FLOAT
,	IN	_PositionZ			FLOAT
,	IN	_CombatPoint		INT			UNSIGNED 
,	IN	_MainQuestIdx		INT			UNSIGNED 
,	IN	_CostumeIdx			INT			UNSIGNED
,	IN	_CostumeGrade		TINYINT		UNSIGNED
,	IN	_HairColorIdx		MEDIUMINT	UNSIGNED	
,	IN	_ClothesColorIdx	MEDIUMINT	UNSIGNED	

,	IN	_ActiveIdx01	MEDIUMINT	UNSIGNED
,	IN	_ActiveIdx02	MEDIUMINT	UNSIGNED
,	IN	_ActiveIdx03	MEDIUMINT	UNSIGNED
,	IN	_ActiveIdx04	MEDIUMINT	UNSIGNED
,	IN	_ActiveIdx05	MEDIUMINT	UNSIGNED
,	IN	_ActiveIdx06	MEDIUMINT	UNSIGNED
,	IN	_ActiveIdx07	MEDIUMINT	UNSIGNED

,	IN	_ItemEquipSlot01		TINYINT		UNSIGNED		
,	IN	_CreateItemUID01		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01		INT			UNSIGNED	
,	IN	_ReinforceLev01			TINYINT		UNSIGNED	
,	IN	_ReinforceExp01			INT			UNSIGNED
,	IN	_SmeltingLev01			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01	MEDIUMINT					
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx01A			SMALLINT	UNSIGNED		
,	IN	_OptionValue01A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B			SMALLINT	UNSIGNED		
,	IN	_OptionValue01B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C			SMALLINT	UNSIGNED		
,	IN	_OptionValue01C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D			SMALLINT	UNSIGNED		
,	IN	_OptionValue01D			SMALLINT	UNSIGNED		
,	IN	_ItemEquipSlot02		TINYINT		UNSIGNED		
,	IN	_CreateItemUID02		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx02		INT			UNSIGNED	
,	IN	_ReinforceLev02			TINYINT		UNSIGNED	
,	IN	_ReinforceExp02			INT			UNSIGNED
,	IN	_SmeltingLev02			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount02	MEDIUMINT					
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx02A			SMALLINT	UNSIGNED		
,	IN	_OptionValue02A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02B			SMALLINT	UNSIGNED		
,	IN	_OptionValue02B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02C			SMALLINT	UNSIGNED		
,	IN	_OptionValue02C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02D			SMALLINT	UNSIGNED		
,	IN	_OptionValue02D			SMALLINT	UNSIGNED		

,	OUT	_CharacterUID	BIGINT	UNSIGNED

,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET	_CharacterUID = 0, _StackResultDB01 = 0, _StackResultDB02 = 0, _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_Class = 0 OR _CharacterName = '' OR _StageIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
			-- 캐릭터 생성시 확인사항
			IF EXISTS	
            ( 	SELECT 	1	
				FROM 			character_tb		AS CH	
                LEFT OUTER JOIN	character_delete_tb	AS CD	ON CD.CharacterUID = CH.CharacterUID
                WHERE 	CH.AccountUID = _AccountUID AND CH.Class = _Class AND ( CD.DeleteTime > NOW() OR CD.DeleteTime IS NULL ) )	
			THEN 	SET _Result = 203;	LEAVE MAIN_ROUTINE;	-- 이미 존재하는 직업
			ELSEIF EXISTS	
            ( 	SELECT 	1	
				FROM 			character_tb		AS CH	
                LEFT OUTER JOIN	character_delete_tb	AS CD	ON CD.CharacterUID = CH.CharacterUID
                WHERE 	CH.CharacterName = _CharacterName AND ( CD.DeleteTime > NOW() OR CD.DeleteTime IS NULL )	)	
			THEN 	SET _Result = 204;	LEAVE MAIN_ROUTINE; -- 이미 존재하는 이름
            END IF;
            
            -- 캐릭터 기본데이터 저장
            INSERT INTO	character_tb
					( CharacterName			, AccountUID			, Class				, Lev			, Exp			, CurrentHP	, CurrentMP	
                    , StageIdx				, PositionX				, PositionY			, PositionZ		, Wonbo			, Gold		, CreateTime			
                    , LoginTime				, LogoutTime			, PlaytimeSec		, CombatPoint	, EnergyPoint	, BlackIron	, AwakenGrade	
                    , InvenExtendCnt		, CostumeIdx			, PKPoint		)
            VALUES 	( _CharacterName		, _AccountUID			, _Class			, 1				, 0				, _CurrentHP, _CurrentMP
					, _StageIdx				, _PositionX			, _PositionY		, _PositionZ	, 1000			, 0			, NOW()					 
                    , '00:00:00 00-00-00'	, '00:00:00 00-00-00'	, 0					, _CombatPoint	, 5				, 0			, 0				
                    , 0						, _CostumeIdx			, 0				);
            SET	_CharacterUID = LAST_INSERT_ID();
            
            -- 코스츔 저장
            IF	_CostumeIdx > 0	THEN
				INSERT INTO	costume_tb 
						( CharacterUID	, CostumeIdx	, CostumeGrade	, HairColorIdx	, ClothesColorIdx 	)	
				VALUES 	( _CharacterUID	, _CostumeIdx	, _CostumeGrade	, _HairColorIdx	, _ClothesColorIdx 	);
            END IF;

            -- 아이템 생성, 장착
            IF	_CreateItemUID01	> 0	THEN															
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01		, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01	, _SmeltingLev01	
									, _StackIncreaseAmount01	, _StackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B		, _OptionValue01B			
                                    , _OptionIdx01C				, _OptionValue01C		, _OptionIdx01D		, _OptionValue01D	, _StackResultDB01	, _Result 			);
				IF _Result != 0 THEN 	LEAVE MAIN_ROUTINE;	END IF;	
                IF _ItemEquipSlot01	> 0 THEN 	
					INSERT INTO equip_item_tb ( CharacterUID, EquipSlot, ItemUID )	VALUES ( _CharacterUID, _ItemEquipSlot01	, _CreateItemUID01	);	
				END IF;
            END IF;																		
            IF	_CreateItemUID02	> 0	THEN															
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID02		, _CreateItemIdx02	, _ReinforceLev02	, _ReinforceExp02	, _SmeltingLev02			
									, _StackIncreaseAmount02	, _StackResultServer02	, _OptionIdx02A		, _OptionValue02A	, _OptionIdx02B		, _OptionValue02B			
                                    , _OptionIdx02C				, _OptionValue02C		, _OptionIdx02D		, _OptionValue02D	, _StackResultDB02	, _Result 			);
				IF _Result != 0 THEN 	LEAVE MAIN_ROUTINE;	END IF;	
                IF _ItemEquipSlot02	> 0 THEN 	
					INSERT INTO equip_item_tb ( CharacterUID, EquipSlot, ItemUID )	VALUES ( _CharacterUID, _ItemEquipSlot02	, _CreateItemUID02	);	
				END IF;
            END IF;																	

            -- 퀘스트 저장
            IF	_MainQuestIdx > 0	THEN
				INSERT INTO	quest_main_tb ( CharacterUID, QuestIdx, State, QuestValue )	VALUES ( _CharacterUID, _MainQuestIdx, 1, 0 );
            END IF;
                       
            -- 스킬 저장
            IF	_ActiveIdx01	> 0	THEN
				INSERT INTO skill_active_tb ( CharacterUID, ActiveIdx, ActiveLev )	VALUES ( _CharacterUID, _ActiveIdx01, 1 );
            END IF;
            IF	_ActiveIdx02	> 0	THEN			
				INSERT IGNORE INTO skill_active_tb ( CharacterUID, ActiveIdx, ActiveLev )	VALUES ( _CharacterUID, _ActiveIdx02	, 1 );
                IF ROW_COUNT() <= 0 THEN		SET _Result = 802;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;						
            IF	_ActiveIdx03	> 0	THEN			
				INSERT IGNORE INTO skill_active_tb ( CharacterUID, ActiveIdx, ActiveLev )	VALUES ( _CharacterUID, _ActiveIdx03	, 1 );
                IF ROW_COUNT() <= 0 THEN 		SET _Result = 802;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;						
            IF	_ActiveIdx04	> 0	THEN			
				INSERT IGNORE INTO skill_active_tb ( CharacterUID, ActiveIdx, ActiveLev )	VALUES ( _CharacterUID, _ActiveIdx04	, 1 );
                IF ROW_COUNT() <= 0 THEN 		SET _Result = 802;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;						
			IF	_ActiveIdx05	> 0	THEN			
				INSERT IGNORE INTO skill_active_tb ( CharacterUID, ActiveIdx, ActiveLev )	VALUES ( _CharacterUID, _ActiveIdx05	, 1 );
                IF ROW_COUNT() <= 0 THEN 		SET _Result = 802;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;						
            IF	_ActiveIdx06	> 0	THEN			
				INSERT IGNORE INTO skill_active_tb ( CharacterUID, ActiveIdx, ActiveLev )	VALUES ( _CharacterUID, _ActiveIdx06	, 1 );
                IF ROW_COUNT() <= 0 THEN 		SET _Result = 802;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;						
            IF	_ActiveIdx07	> 0	THEN			
				INSERT IGNORE INTO skill_active_tb ( CharacterUID, ActiveIdx, ActiveLev )	VALUES ( _CharacterUID, _ActiveIdx07	, 1 );
                IF ROW_COUNT() <= 0 THEN 		SET _Result = 802;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;						
            
            IF	_ActiveIdx01	> 0	THEN
				INSERT INTO skill_deck_tb ( CharacterUID, DeckNum, SkillSlot, ActiveIdx )	VALUES ( _CharacterUID, 1, 1	, _ActiveIdx01 );
            END IF;
            IF	_ActiveIdx02	> 0	THEN		
				INSERT IGNORE INTO skill_deck_tb ( CharacterUID, DeckNum, SkillSlot, ActiveIdx )	VALUES ( _CharacterUID, 1, 2	, _ActiveIdx02 );
            END IF;					
            IF	_ActiveIdx03	> 0	THEN		
				INSERT IGNORE INTO skill_deck_tb ( CharacterUID, DeckNum, SkillSlot, ActiveIdx )	VALUES ( _CharacterUID, 1, 3	, _ActiveIdx03 );
            END IF;					
            IF	_ActiveIdx04	> 0	THEN		
				INSERT IGNORE INTO skill_deck_tb ( CharacterUID, DeckNum, SkillSlot, ActiveIdx )	VALUES ( _CharacterUID, 1, 4	, _ActiveIdx04 );
            END IF;					
            IF	_ActiveIdx05	> 0	THEN		
				INSERT IGNORE INTO skill_deck_tb ( CharacterUID, DeckNum, SkillSlot, ActiveIdx )	VALUES ( _CharacterUID, 1, 5	, _ActiveIdx05 );
            END IF;					
            IF	_ActiveIdx06	> 0	THEN		
				INSERT IGNORE INTO skill_deck_tb ( CharacterUID, DeckNum, SkillSlot, ActiveIdx )	VALUES ( _CharacterUID, 1, 6	, _ActiveIdx06 );
            END IF;					
            IF	_ActiveIdx07	> 0	THEN		
				INSERT IGNORE INTO skill_deck_tb ( CharacterUID, DeckNum, SkillSlot, ActiveIdx )	VALUES ( _CharacterUID, 1, 7	, _ActiveIdx07 );
            END IF;					
            
			SET	_Result = 0;

    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Character_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Character_Insert_Game`(
	IN	_AccountUID			BIGINT		UNSIGNED 
,	IN	_Class				TINYINT		UNSIGNED
,	IN	_CharacterName		VARCHAR(50)
,	IN	_CurrentHP			INT			UNSIGNED
,	IN	_CurrentMP			INT			UNSIGNED
,	IN	_StageIdx			INT			UNSIGNED
,	IN	_PositionX			FLOAT
,	IN	_PositionY			FLOAT
,	IN	_PositionZ			FLOAT
,	IN	_CombatPoint		BIGINT			UNSIGNED 
,	IN	_MainQuestIdx		INT			UNSIGNED
-- ,	IN	_CostumeIdx			INT			UNSIGNED
-- ,	IN	_CostumeGrade		TINYINT		UNSIGNED
-- ,	IN	_HairColorIdx		MEDIUMINT	UNSIGNED
-- ,	IN	_ClothesColorIdx	MEDIUMINT	UNSIGNED

-- Customize
,	IN	_ElementType01		TINYINT		UNSIGNED
,	IN	_ElementValue01		INT
,	IN	_ElementType02		TINYINT		UNSIGNED
,	IN	_ElementValue02		INT
,	IN	_ElementType03		TINYINT		UNSIGNED
,	IN	_ElementValue03		INT
,	IN	_ElementType04		TINYINT		UNSIGNED
,	IN	_ElementValue04		INT
,	IN	_ElementType05		TINYINT		UNSIGNED
,	IN	_ElementValue05		INT
,	IN	_ElementType06		TINYINT		UNSIGNED
,	IN	_ElementValue06		INT
,	IN	_ElementType07		TINYINT		UNSIGNED
,	IN	_ElementValue07		INT
,	IN	_ElementType08		TINYINT		UNSIGNED
,	IN	_ElementValue08		INT
,	IN	_ElementType09		TINYINT		UNSIGNED
,	IN	_ElementValue09		INT
,	IN	_ElementType10		TINYINT		UNSIGNED
,	IN	_ElementValue10		INT
,	IN	_ElementType11		TINYINT		UNSIGNED
,	IN	_ElementValue11		INT
,	IN	_ElementType12		TINYINT		UNSIGNED
,	IN	_ElementValue12		INT
,	IN	_ElementType13		TINYINT		UNSIGNED
,	IN	_ElementValue13		INT
,	IN	_ElementType14		TINYINT		UNSIGNED
,	IN	_ElementValue14		INT
,	IN	_ElementType15		TINYINT		UNSIGNED
,	IN	_ElementValue15		INT
,	IN	_ElementType16		TINYINT		UNSIGNED
,	IN	_ElementValue16		INT
,	IN	_ElementType17		TINYINT		UNSIGNED
,	IN	_ElementValue17		INT
,	IN	_ElementType18		TINYINT		UNSIGNED
,	IN	_ElementValue18		INT
,	IN	_ElementType19		TINYINT		UNSIGNED
,	IN	_ElementValue19		INT
,	IN	_ElementType20		TINYINT		UNSIGNED
,	IN	_ElementValue20		INT
,	IN	_ElementType21		TINYINT		UNSIGNED
,	IN	_ElementValue21		INT
,	IN	_ElementType22		TINYINT		UNSIGNED
,	IN	_ElementValue22		INT
,	IN	_ElementType23		TINYINT		UNSIGNED
,	IN	_ElementValue23		INT
,	IN	_ElementType24		TINYINT		UNSIGNED
,	IN	_ElementValue24		INT
,	IN	_ElementType25		TINYINT		UNSIGNED
,	IN	_ElementValue25		INT
,	IN	_ElementType26		TINYINT		UNSIGNED
,	IN	_ElementValue26		INT
,	IN	_ElementType27		TINYINT		UNSIGNED
,	IN	_ElementValue27		INT
,	IN	_ElementType28		TINYINT		UNSIGNED
,	IN	_ElementValue28		INT
,	IN	_ElementType29		TINYINT		UNSIGNED
,	IN	_ElementValue29		INT
,	IN	_ElementType30		TINYINT		UNSIGNED
,	IN	_ElementValue30		INT

-- Weapon
,	IN	_WeaponEquipSlot			TINYINT		UNSIGNED
,	IN	_WeaponItemUID				BIGINT		UNSIGNED
,	IN	_WeaponItemIdx				INT			UNSIGNED
,	IN	_WeaponReinforceLev			TINYINT		UNSIGNED
,	IN	_WeaponReinforceExp			INT			UNSIGNED
,	IN	_WeaponSmeltingLev			TINYINT		UNSIGNED
,	IN	_WeaponStackIncreaseAmount	MEDIUMINT
,	IN	_WeaponCurrentStack			INT
,	IN	_WeaponOptionIdxA			SMALLINT	UNSIGNED
,	IN	_WeaponOptionValueA			SMALLINT	UNSIGNED
,	IN	_WeaponOptionIdxB			SMALLINT	UNSIGNED
,	IN	_WeaponOptionValueB			SMALLINT	UNSIGNED
,	IN	_WeaponOptionIdxC			SMALLINT	UNSIGNED
,	IN	_WeaponOptionValueC			SMALLINT	UNSIGNED
,	IN	_WeaponOptionIdxD			SMALLINT	UNSIGNED
,	IN	_WeaponOptionValueD			SMALLINT	UNSIGNED

-- Armour
,	IN	_ArmourEquipSlot			TINYINT		UNSIGNED
,	IN	_ArmourItemUID				BIGINT		UNSIGNED
,	IN	_ArmourItemIdx				INT			UNSIGNED
,	IN	_ArmourReinforceLev			TINYINT		UNSIGNED
,	IN	_ArmourReinforceExp			INT			UNSIGNED
,	IN	_ArmourSmeltingLev			TINYINT		UNSIGNED
,	IN	_ArmourStackIncreaseAmount	MEDIUMINT
,	IN	_ArmourCurrentStack			INT
,	IN	_ArmourOptionIdxA			SMALLINT	UNSIGNED
,	IN	_ArmourOptionValueA			SMALLINT	UNSIGNED
,	IN	_ArmourOptionIdxB			SMALLINT	UNSIGNED
,	IN	_ArmourOptionValueB			SMALLINT	UNSIGNED
,	IN	_ArmourOptionIdxC			SMALLINT	UNSIGNED
,	IN	_ArmourOptionValueC			SMALLINT	UNSIGNED
,	IN	_ArmourOptionIdxD			SMALLINT	UNSIGNED
,	IN	_ArmourOptionValueD			SMALLINT	UNSIGNED

,	OUT	_CharacterUID	BIGINT	UNSIGNED

,	OUT	_StackResultDB01	INT
,	OUT	_StackResultDB02	INT

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_CharacterUID = 0, _StackResultDB01 = 0, _StackResultDB02 = 0, _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_Class = 0 OR _CharacterName = '' OR 
			_StageIdx = 0	THEN SET _Result = 3;	
			LEAVE MAIN_ROUTINE;	
		END IF;	-- The value required for processing was not received.
        
		START TRANSACTION;
			-- Things to check when creating a character
			IF EXISTS	
            ( 	SELECT 	1	
				FROM 			character_tb		AS CH	
                LEFT OUTER JOIN	character_delete_tb	AS CD	ON CD.CharacterUID = CH.CharacterUID
                WHERE 	CH.AccountUID = _AccountUID AND CH.Class = _Class AND ( CD.DeleteTime > NOW() OR CD.DeleteTime IS NULL ) )	
			THEN ROLLBACK;	SET _Result = 203;	LEAVE MAIN_ROUTINE;	-- 이미 존재하는 직업
			ELSEIF EXISTS	
            ( 	SELECT 	1	
				FROM 			character_tb		AS CH	
                LEFT OUTER JOIN	character_delete_tb	AS CD	ON CD.CharacterUID = CH.CharacterUID
                WHERE 	CH.CharacterName = _CharacterName AND ( CD.DeleteTime > NOW() OR CD.DeleteTime IS NULL )	)	
			THEN ROLLBACK;	SET _Result = 204;	LEAVE MAIN_ROUTINE; -- 이미 존재하는 이름
            END IF;
            
            -- 캐릭터 기본데이터 저장
            INSERT INTO character_tb
    (CharacterName, AccountUID, Class, Lev, Exp, CurrentHP, CurrentMP,
     StageIdx, PositionX, PositionY, PositionZ, Wonbo, Gold, CreateTime,
     LoginTime, LogoutTime, PlaytimeSec, CombatPoint, EnergyPoint, BlackIron,
     AncientCoin, AwakenGrade, InvenExtendCnt, PKPoint)
VALUES 
    (_CharacterName, _AccountUID, _Class, 1, 0, _CurrentHP, _CurrentMP,
     _StageIdx, _PositionX, _PositionY, _PositionZ, 1000, 0, NOW(),
     NOW(), NOW(), 1, 2602, 0, 0,
     1, -- Default value for AncientCoin
     0, 0, 0);
            SET	_CharacterUID = LAST_INSERT_ID();
            
            -- 코스츔 저장
--            IF	_CostumeIdx > 0	THEN
--				INSERT INTO	costume_tb 
--						( CharacterUID	, CostumeIdx	, CostumeGrade	, HairColorIdx	, ClothesColorIdx 	)	
--				VALUES 	( _CharacterUID	, _CostumeIdx	, _CostumeGrade	, _HairColorIdx	, _ClothesColorIdx 	);
--            END IF;

			IF	_ElementType01 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType01	, _ElementValue01 );
			END IF;
            
            IF	_ElementType02 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType02	, _ElementValue02 );
			END IF;
            
            IF	_ElementType03 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType03	, _ElementValue03 );
			END IF;
            
            IF	_ElementType04 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType04	, _ElementValue04 );
			END IF;
            
            IF	_ElementType05 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType05	, _ElementValue05 );
			END IF;
            
            IF	_ElementType06 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType06	, _ElementValue06 );
			END IF;
            
            IF	_ElementType07 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType07	, _ElementValue07 );
			END IF;
            
            IF	_ElementType08 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType08	, _ElementValue08 );
			END IF;
            
            IF	_ElementType09 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType09	, _ElementValue09 );
			END IF;
            
            IF	_ElementType10 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType10	, _ElementValue10 );
			END IF;
            
            IF	_ElementType11 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType11	, _ElementValue11 );
			END IF;
            
            IF	_ElementType12 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType12	, _ElementValue12 );
			END IF;
            
            IF	_ElementType13 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType13	, _ElementValue13 );
			END IF;
            
            IF	_ElementType14 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType14	, _ElementValue14 );
			END IF;
            
            IF	_ElementType15 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType15	, _ElementValue15 );
			END IF;
            
            IF	_ElementType16 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType16	, _ElementValue16 );
			END IF;
            
            IF	_ElementType17 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType17	, _ElementValue17 );
			END IF;
            
            IF	_ElementType18 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType18	, _ElementValue18 );
			END IF;
            
            IF	_ElementType19 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType19	, _ElementValue19 );
			END IF;
            
            IF	_ElementType20 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType20	, _ElementValue20 );
			END IF;
            
            IF	_ElementType21 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType21	, _ElementValue21 );
			END IF;
            
            IF	_ElementType22 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType22	, _ElementValue22 );
			END IF;
            
            IF	_ElementType23 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType23	, _ElementValue23 );
			END IF;
            
            IF	_ElementType24 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType24	, _ElementValue24 );
			END IF;
            
            IF	_ElementType25 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType25	, _ElementValue25 );
			END IF;
            
            IF	_ElementType26 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType26	, _ElementValue26 );
			END IF;
            
            IF	_ElementType27 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType27	, _ElementValue27 );
			END IF;
            
            IF	_ElementType28 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType28	, _ElementValue28 );
			END IF;
            
            IF	_ElementType29 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType29	, _ElementValue29 );
			END IF;
            
            IF	_ElementType30 > 0	THEN
				INSERT INTO	customize_tb 
						( CharacterUID	, ElementType	, ElementValue )	
				VALUES 	( _CharacterUID	, _ElementType30	, _ElementValue30 );
			END IF;

            -- Create and equip items
            IF	_WeaponItemUID	> 0	THEN															
				CALL Item_Insert_DB	( _CharacterUID					, _WeaponItemUID		, _WeaponItemIdx		, _WeaponReinforceLev	, _WeaponReinforceExp	, _WeaponSmeltingLev	
									, _WeaponStackIncreaseAmount	, _WeaponCurrentStack	, _WeaponOptionIdxA		, _WeaponOptionValueA	, _WeaponOptionIdxB		, _WeaponOptionValueB			
                                    , _WeaponOptionIdxC				, _WeaponOptionValueC	, _WeaponOptionIdxD		, _WeaponOptionValueD	, _StackResultDB01		, _Result 			);
				IF _Result != 0 THEN 	LEAVE MAIN_ROUTINE;	END IF;	
                IF _WeaponEquipSlot	> 0 THEN 	
					INSERT INTO equip_item_tb ( CharacterUID, EquipSlot, ItemUID )	VALUES ( _CharacterUID, _WeaponEquipSlot	, _WeaponItemUID	);	
				END IF;
            END IF;																		
            IF	_ArmourItemUID	> 0	THEN															
				CALL Item_Insert_DB	( _CharacterUID					, _ArmourItemUID		, _ArmourItemIdx		, _ArmourReinforceLev	, _ArmourReinforceExp	, _ArmourSmeltingLev			
									, _ArmourStackIncreaseAmount	, _ArmourCurrentStack	, _ArmourOptionIdxA		, _ArmourOptionValueA	, _ArmourOptionIdxB		, _ArmourOptionValueB			
                                    , _ArmourOptionIdxC				, _ArmourOptionValueC	, _ArmourOptionIdxD		, _ArmourOptionValueD	, _StackResultDB02		, _Result 			);
				IF _Result != 0 THEN 	LEAVE MAIN_ROUTINE;	END IF;	
                IF _ArmourEquipSlot	> 0 THEN 	
					INSERT INTO equip_item_tb ( CharacterUID, EquipSlot, ItemUID )	VALUES ( _CharacterUID, _ArmourEquipSlot	, _ArmourItemUID	);	
				END IF;
            END IF;																	

            
			-- Save quest
            IF	_MainQuestIdx > 0	THEN
				INSERT INTO	quest_main_tb ( CharacterUID, QuestIdx, State, QuestValue )	VALUES ( _CharacterUID, _MainQuestIdx, 1, 0 );
            END IF;			
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Character_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Character_Update_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_CurrentHP		INT		UNSIGNED
,	IN	_CurrentMP		INT		UNSIGNED
,	IN	_StageIdx		INT		UNSIGNED
,	IN	_PositionX		FLOAT
,	IN	_PositionY		FLOAT
,	IN	_PositionZ		FLOAT
,	IN	_PlaytimeSec	INT		UNSIGNED 
,	IN	_CombatPoint	INT		UNSIGNED 

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF _CharacterUID = 0 OR _StageIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
		-- 캐릭터 정보 변경
		UPDATE 	character_tb	
		SET		CurrentHP = _CurrentHP		, CurrentMP = _CurrentMP, StageIdx = _StageIdx	, PositionX = _PositionX, PositionY = _PositionY, PositionZ= _PositionZ, 
				PlaytimeSec = _PlaytimeSec	, CombatPoint = _CombatPoint
		WHERE 	CharacterUID = _CharacterUID;
-- 		IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Cheat_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Cheat_Update_Game`(
-- 	IN	_AccountUID		BIGINT	UNSIGNED
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_CharacterLev	TINYINT	UNSIGNED
,	IN	_CharacterExp	INT		UNSIGNED

,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED
,	IN	_MoneyType03			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount03	BIGINT
,	IN	_MoneyResultServer03	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime03		INT		UNSIGNED

,	IN	_CreateItemUID01		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01		INT			UNSIGNED	
,	IN	_ReinforceLev01			TINYINT		UNSIGNED	
,	IN	_ReinforceExp01			INT			UNSIGNED
,	IN	_SmeltingLev01			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01	MEDIUMINT					
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx01A			SMALLINT	UNSIGNED		
,	IN	_OptionValue01A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B			SMALLINT	UNSIGNED		
,	IN	_OptionValue01B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C			SMALLINT	UNSIGNED		
,	IN	_OptionValue01C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D			SMALLINT	UNSIGNED		
,	IN	_OptionValue01D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID02		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx02		INT			UNSIGNED	
,	IN	_ReinforceLev02			TINYINT		UNSIGNED	
,	IN	_ReinforceExp02			INT			UNSIGNED
,	IN	_SmeltingLev02			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount02	MEDIUMINT					
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx02A			SMALLINT	UNSIGNED		
,	IN	_OptionValue02A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02B			SMALLINT	UNSIGNED		
,	IN	_OptionValue02B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02C			SMALLINT	UNSIGNED		
,	IN	_OptionValue02C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02D			SMALLINT	UNSIGNED		
,	IN	_OptionValue02D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID03		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx03		INT			UNSIGNED	
,	IN	_ReinforceLev03			TINYINT		UNSIGNED	
,	IN	_ReinforceExp03			INT			UNSIGNED
,	IN	_SmeltingLev03			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount03	MEDIUMINT					
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx03A			SMALLINT	UNSIGNED		
,	IN	_OptionValue03A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx03B			SMALLINT	UNSIGNED		
,	IN	_OptionValue03B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx03C			SMALLINT	UNSIGNED		
,	IN	_OptionValue03C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx03D			SMALLINT	UNSIGNED		
,	IN	_OptionValue03D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID04		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx04		INT			UNSIGNED	
,	IN	_ReinforceLev04			TINYINT		UNSIGNED	
,	IN	_ReinforceExp04			INT			UNSIGNED
,	IN	_SmeltingLev04			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount04	MEDIUMINT					
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx04A			SMALLINT	UNSIGNED		
,	IN	_OptionValue04A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx04B			SMALLINT	UNSIGNED		
,	IN	_OptionValue04B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx04C			SMALLINT	UNSIGNED		
,	IN	_OptionValue04C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx04D			SMALLINT	UNSIGNED		
,	IN	_OptionValue04D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID05		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx05		INT			UNSIGNED	
,	IN	_ReinforceLev05			TINYINT		UNSIGNED	
,	IN	_ReinforceExp05			INT			UNSIGNED
,	IN	_SmeltingLev05			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount05	MEDIUMINT					
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx05A			SMALLINT	UNSIGNED		
,	IN	_OptionValue05A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx05B			SMALLINT	UNSIGNED		
,	IN	_OptionValue05B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx05C			SMALLINT	UNSIGNED		
,	IN	_OptionValue05C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx05D			SMALLINT	UNSIGNED		
,	IN	_OptionValue05D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID06		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx06		INT			UNSIGNED	
,	IN	_ReinforceLev06			TINYINT		UNSIGNED	
,	IN	_ReinforceExp06			INT			UNSIGNED
,	IN	_SmeltingLev06			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount06	MEDIUMINT					
,	IN	_StackResultServer06	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx06A			SMALLINT	UNSIGNED		
,	IN	_OptionValue06A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx06B			SMALLINT	UNSIGNED		
,	IN	_OptionValue06B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx06C			SMALLINT	UNSIGNED		
,	IN	_OptionValue06C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx06D			SMALLINT	UNSIGNED		
,	IN	_OptionValue06D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID07		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx07		INT			UNSIGNED	
,	IN	_ReinforceLev07			TINYINT		UNSIGNED	
,	IN	_ReinforceExp07			INT			UNSIGNED
,	IN	_SmeltingLev07			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount07	MEDIUMINT					
,	IN	_StackResultServer07	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx07A			SMALLINT	UNSIGNED		
,	IN	_OptionValue07A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx07B			SMALLINT	UNSIGNED		
,	IN	_OptionValue07B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx07C			SMALLINT	UNSIGNED		
,	IN	_OptionValue07C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx07D			SMALLINT	UNSIGNED		
,	IN	_OptionValue07D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID08		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx08		INT			UNSIGNED	
,	IN	_ReinforceLev08			TINYINT		UNSIGNED	
,	IN	_ReinforceExp08			INT			UNSIGNED
,	IN	_SmeltingLev08			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount08	MEDIUMINT					
,	IN	_StackResultServer08	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx08A			SMALLINT	UNSIGNED		
,	IN	_OptionValue08A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx08B			SMALLINT	UNSIGNED		
,	IN	_OptionValue08B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx08C			SMALLINT	UNSIGNED		
,	IN	_OptionValue08C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx08D			SMALLINT	UNSIGNED		
,	IN	_OptionValue08D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID09		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx09		INT			UNSIGNED	
,	IN	_ReinforceLev09			TINYINT		UNSIGNED	
,	IN	_ReinforceExp09			INT			UNSIGNED
,	IN	_SmeltingLev09			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount09	MEDIUMINT					
,	IN	_StackResultServer09	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx09A			SMALLINT	UNSIGNED		
,	IN	_OptionValue09A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx09B			SMALLINT	UNSIGNED		
,	IN	_OptionValue09B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx09C			SMALLINT	UNSIGNED		
,	IN	_OptionValue09C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx09D			SMALLINT	UNSIGNED		
,	IN	_OptionValue09D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID10		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx10		INT			UNSIGNED	
,	IN	_ReinforceLev10			TINYINT		UNSIGNED	
,	IN	_ReinforceExp10			INT			UNSIGNED
,	IN	_SmeltingLev10			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount10	MEDIUMINT					
,	IN	_StackResultServer10	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx10A			SMALLINT	UNSIGNED		
,	IN	_OptionValue10A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx10B			SMALLINT	UNSIGNED		
,	IN	_OptionValue10B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx10C			SMALLINT	UNSIGNED		
,	IN	_OptionValue10C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx10D			SMALLINT	UNSIGNED		
,	IN	_OptionValue10D			SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT
,	OUT _MoneyResultDB03	BIGINT

,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT
,	OUT	_StackResultDB03	MEDIUMINT
,	OUT	_StackResultDB04	MEDIUMINT
,	OUT	_StackResultDB05	MEDIUMINT
,	OUT	_StackResultDB06	MEDIUMINT
,	OUT	_StackResultDB07	MEDIUMINT
,	OUT	_StackResultDB08	MEDIUMINT
,	OUT	_StackResultDB09	MEDIUMINT
,	OUT	_StackResultDB10	MEDIUMINT

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _MoneyResultDB01 = 0, _MoneyResultDB02 = 0, _MoneyResultDB03 = 0, 
		_StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0, 
        _StackResultDB06 = 0, _StackResultDB07 = 0, _StackResultDB08 = 0, _StackResultDB09 = 0, _StackResultDB10 = 0, 
        _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
		ELSEIF 	_MoneyIncreaseAmount01 < 0 OR _MoneyIncreaseAmount02 < 0 OR	_MoneyIncreaseAmount03 < 0 
			OR 	_StackIncreaseAmount01 < 0 OR _StackIncreaseAmount02 < 0 OR _StackIncreaseAmount03 < 0 OR _StackIncreaseAmount04 < 0 OR _StackIncreaseAmount05 < 0 
			OR 	_StackIncreaseAmount06 < 0 OR _StackIncreaseAmount07 < 0 OR _StackIncreaseAmount08 < 0 OR _StackIncreaseAmount09 < 0 OR _StackIncreaseAmount10 < 0	THEN	
			SET	_Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
		END IF;	

		START TRANSACTION;
	        -- 재화 변경
			IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount02 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyIncreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount03 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType03, _MoneyIncreaseAmount03, _MoneyResultServer03, _MoneyUpdateTime03, _MoneyResultDB03, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
            -- 레벨, 경험치 변경
			IF	_CharacterLev > 0	THEN
				UPDATE character_tb	SET Lev = _CharacterLev, Exp = _CharacterExp	WHERE CharacterUID = _CharacterUID;
				IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			END IF;
			
            -- 아이템 생성
			IF	_CreateItemUID01	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01		, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01	, _SmeltingLev01					
									, _StackIncreaseAmount01	, _StackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B		, _OptionValue01B			
									, _OptionIdx01C				, _OptionValue01C		, _OptionIdx01D		, _OptionValue01D	, _StackResultDB01	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID02	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID02		, _CreateItemIdx02	, _ReinforceLev02	, _ReinforceExp02	, _SmeltingLev02					
									, _StackIncreaseAmount02	, _StackResultServer02	, _OptionIdx02A		, _OptionValue02A	, _OptionIdx02B		, _OptionValue02B			
									, _OptionIdx02C				, _OptionValue02C		, _OptionIdx02D		, _OptionValue02D	, _StackResultDB02	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID03	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID03		, _CreateItemIdx03	, _ReinforceLev03	, _ReinforceExp03	, _SmeltingLev03					
									, _StackIncreaseAmount03	, _StackResultServer03	, _OptionIdx03A		, _OptionValue03A	, _OptionIdx03B		, _OptionValue03B			
									, _OptionIdx03C				, _OptionValue03C		, _OptionIdx03D		, _OptionValue03D	, _StackResultDB03	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID04	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID04		, _CreateItemIdx04	, _ReinforceLev04	, _ReinforceExp04	, _SmeltingLev04					
									, _StackIncreaseAmount04	, _StackResultServer04	, _OptionIdx04A		, _OptionValue04A	, _OptionIdx04B		, _OptionValue04B			
									, _OptionIdx04C				, _OptionValue04C		, _OptionIdx04D		, _OptionValue04D	, _StackResultDB04	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID05	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID05		, _CreateItemIdx05	, _ReinforceLev05	, _ReinforceExp05	, _SmeltingLev05					
									, _StackIncreaseAmount05	, _StackResultServer05	, _OptionIdx05A		, _OptionValue05A	, _OptionIdx05B		, _OptionValue05B			
									, _OptionIdx05C				, _OptionValue05C		, _OptionIdx05D		, _OptionValue05D	, _StackResultDB05	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID06	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID06		, _CreateItemIdx06	, _ReinforceLev06	, _ReinforceExp06	, _SmeltingLev06					
									, _StackIncreaseAmount06	, _StackResultServer06	, _OptionIdx06A		, _OptionValue06A	, _OptionIdx06B		, _OptionValue06B			
									, _OptionIdx06C				, _OptionValue06C		, _OptionIdx06D		, _OptionValue06D	, _StackResultDB06	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID07	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID07		, _CreateItemIdx07	, _ReinforceLev07	, _ReinforceExp07	, _SmeltingLev07					
									, _StackIncreaseAmount07	, _StackResultServer07	, _OptionIdx07A		, _OptionValue07A	, _OptionIdx07B		, _OptionValue07B			
									, _OptionIdx07C				, _OptionValue07C		, _OptionIdx07D		, _OptionValue07D	, _StackResultDB07	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID08	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID08		, _CreateItemIdx08	, _ReinforceLev08	, _ReinforceExp08	, _SmeltingLev08					
									, _StackIncreaseAmount08	, _StackResultServer08	, _OptionIdx08A		, _OptionValue08A	, _OptionIdx08B		, _OptionValue08B			
									, _OptionIdx08C				, _OptionValue08C		, _OptionIdx08D		, _OptionValue08D	, _StackResultDB08	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID09	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID09		, _CreateItemIdx09	, _ReinforceLev09	, _ReinforceExp09	, _SmeltingLev09					
									, _StackIncreaseAmount09	, _StackResultServer09	, _OptionIdx09A		, _OptionValue09A	, _OptionIdx09B		, _OptionValue09B			
									, _OptionIdx09C				, _OptionValue09C		, _OptionIdx09D		, _OptionValue09D	, _StackResultDB09	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID10	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID10		, _CreateItemIdx10	, _ReinforceLev10	, _ReinforceExp10	, _SmeltingLev10					
									, _StackIncreaseAmount10	, _StackResultServer10	, _OptionIdx10A		, _OptionValue10A	, _OptionIdx10B		, _OptionValue10B			
									, _OptionIdx10C				, _OptionValue10C		, _OptionIdx10D		, _OptionValue10D	, _StackResultDB10	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `CollectionBook_StageReward_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `CollectionBook_StageReward_Insert_Game`( 
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_CollectionStageIdx		INT		UNSIGNED 
,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED

,	IN	_CreateItemUID01			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01			INT			UNSIGNED	
,	IN	_ReinforceLev01				TINYINT		UNSIGNED	
,	IN	_ReinforceExp01				INT			UNSIGNED
,	IN	_SmeltingLev01				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01		MEDIUMINT					
,	IN	_CreateStackResultServer01	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx01A				SMALLINT	UNSIGNED		
,	IN	_OptionValue01A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B				SMALLINT	UNSIGNED		
,	IN	_OptionValue01B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C				SMALLINT	UNSIGNED		
,	IN	_OptionValue01C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D				SMALLINT	UNSIGNED		
,	IN	_OptionValue01D				SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01		BIGINT
,	OUT	_CreateStackResultDB01	MEDIUMINT
,	OUT	_Result					INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _MoneyResultDB01 = 0, _CreateStackResultDB01 = 0, _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _CollectionStageIdx = 0 OR ( _MoneyIncreaseAmount01 = 0 AND _CreateItemUID01 = 0 )	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
		ELSEIF 	_MoneyIncreaseAmount01 < 0	THEN	
			SET	_Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
		END IF;	

		START TRANSACTION;
			-- 재화 획득
            IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            			
            -- 도감 스태이지 보상
			INSERT IGNORE INTO collectionbook_stagereward_tb ( CharacterUID, CollectionStageIdx )	VALUES ( _CharacterUID, _CollectionStageIdx );
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;	-- 중복된 데이터 존재
            
			-- 아이템 획득
            IF	_CreateItemUID01	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01				, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01			, _SmeltingLev01					
									, _StackIncreaseAmount01	, _CreateStackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B				, _OptionValue01B			
									, _OptionIdx01C				, _OptionValue01C				, _OptionIdx01D		, _OptionValue01D	, _CreateStackResultDB01	, _Result 			);					
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
			END IF;																
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `CollectionBook_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `CollectionBook_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_CollectionStageIdx		INT			UNSIGNED 
,	IN	_CollectionMonsterIdx	INT			UNSIGNED
,	IN	_CollectionLev 			TINYINT		UNSIGNED 
,	IN	_CollectionCnt 			SMALLINT	UNSIGNED 
,	IN	_DeleteItemUID			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount	MEDIUMINT			
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED		

,	OUT	_StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
	SET	_StackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _CollectionStageIdx = 0 OR _CollectionMonsterIdx = 0 OR ( _CollectionLev = 0 AND _CollectionCnt = 0 ) OR _DeleteItemUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        ELSEIF	_StackDecreaseAmount > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
            -- 도감
            UPDATE 	collectionbook_tb	
            SET 	CollectionLev = _CollectionLev, CollectionCnt = _CollectionCnt	
            WHERE 	CharacterUID = _CharacterUID AND CollectionStageIdx = _CollectionStageIdx AND CollectionMonsterIdx = _CollectionMonsterIdx;
            IF ROW_COUNT() <= 0	THEN 
				INSERT IGNORE INTO collectionbook_tb 
						( CharacterUID	, CollectionStageIdx	, CollectionMonsterIdx	, CollectionLev	, CollectionCnt		)	
                VALUES 	( _CharacterUID	, _CollectionStageIdx	, _CollectionMonsterIdx	, _CollectionLev, _CollectionCnt 	)	;
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
            
			-- 아이템 삭제
			CALL Item_Delete_DB ( _DeleteItemUID, _StackDecreaseAmount, _StackResultServer, _StackResultDB, _Result );
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;					
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `CostumeColor_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `CostumeColor_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_MoneyType				TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime		INT			UNSIGNED
,	IN	_CostumeIdx				INT			UNSIGNED
,	IN	_HairColorIdx			MEDIUMINT	UNSIGNED
,	IN	_ClothesColorIdx		MEDIUMINT	UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB	BIGINT
,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
		ROLLBACK;
	END;
        
    SET _MoneyResultDB = 0, _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CostumeIdx = 0					THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값이 없음
        ELSEIF	_MoneyDecreaseAmount > 0	THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 Amount
        END IF;	
        
		START TRANSACTION;
            -- 재화 차감
			IF	_MoneyDecreaseAmount < 0	THEN	
				CALL Money_Update_DB( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;

            -- 코스튬 색상 변경
            UPDATE 	costume_tb	
            SET 	HairColorIdx = _HairColorIdx, ClothesColorIdx = _ClothesColorIdx	
            WHERE 	CharacterUID = _CharacterUID AND CostumeIdx = _CostumeIdx;
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `CostumeEquip_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `CostumeEquip_Update_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_CostumeIdx		INT		UNSIGNED

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _CostumeIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값이 없음
		
		-- 착용 코스츔 변경
        UPDATE character_tb	SET CostumeIdx = _CostumeIdx	WHERE CharacterUID = _CharacterUID;
        IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음

		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Costume_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Costume_Insert_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
-- ,	IN	_MoneyType				TINYINT		UNSIGNED
-- ,	IN	_MoneyDecreaseAmount	BIGINT

,	IN	_DeleteItemUID01		BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount01	MEDIUMINT				
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID02		BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount02	MEDIUMINT				
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID03		BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount03	MEDIUMINT				
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID04		BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount04	MEDIUMINT				
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID05		BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount05	MEDIUMINT				
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID06		BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount06	MEDIUMINT				
,	IN	_StackResultServer06	MEDIUMINT	UNSIGNED			

,	IN	_CostumeIdx				INT			UNSIGNED
,	IN	_CostumeGrade			TINYINT		UNSIGNED
,	IN	_HairColorIdx			MEDIUMINT	UNSIGNED
,	IN	_ClothesColorIdx		MEDIUMINT	UNSIGNED

-- ,	OUT _MoneyResult	BIGINT
,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT
,	OUT	_StackResultDB03	MEDIUMINT
,	OUT	_StackResultDB04	MEDIUMINT
,	OUT	_StackResultDB05	MEDIUMINT
,	OUT	_StackResultDB06	MEDIUMINT
,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET /*_MoneyResult = 0,*/ _StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0, _StackResultDB06 = 0,  _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _CostumeIdx = 0
			/*OR ( _DeleteItemUID01 = 0 AND _DeleteItemUID02 = 0 AND _DeleteItemUID03 = 0 AND _DeleteItemUID04 = 0 AND _DeleteItemUID05 = 0 AND _DeleteItemUID06 = 0 )*/	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값이 없음
        ELSEIF	/*_MoneyDecreaseAmount > 0*/ _StackDecreaseAmount01 > 0 OR _StackDecreaseAmount02 > 0 OR _StackDecreaseAmount03 > 0 
			OR 	_StackDecreaseAmount04 > 0 OR _StackDecreaseAmount05 > 0 OR _StackDecreaseAmount06 > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 Amount
        END IF;	
        
		START TRANSACTION;
/*            
            -- 재화 차감
			IF	_MoneyDecreaseAmount < 0	THEN	
				CALL Money_Update_DB( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResult, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;
*/
            -- 코스튬 등급 변경 및 추가
            UPDATE	costume_tb 
            SET		CostumeGrade = _CostumeGrade
            WHERE	CharacterUID = _CharacterUID AND CostumeIdx = _CostumeIdx;
            IF ROW_COUNT() <= 0	THEN 
				INSERT IGNORE INTO	costume_tb 
						( CharacterUID	, CostumeIdx	, CostumeGrade	, HairColorIdx	, ClothesColorIdx	) 
				VALUES	( _CharacterUID	, _CostumeIdx	, _CostumeGrade	, _HairColorIdx	, _ClothesColorIdx	);
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 502;	LEAVE MAIN_ROUTINE;	END IF;	-- 이미 존재하는 코스츔
            END IF;
            
            -- 아이템 스택 변경
            IF	_DeleteItemUID01	> 0	THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID01	, 0, _StackDecreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );		
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;									
            IF	_DeleteItemUID02	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID02	, 0, _StackDecreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );		
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;									
            IF	_DeleteItemUID03	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID03	, 0, _StackDecreaseAmount03	, _StackResultServer03	, _StackResultDB03	, _Result );		
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;									
            IF	_DeleteItemUID04	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID04	, 0, _StackDecreaseAmount04	, _StackResultServer04	, _StackResultDB04	, _Result );		
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;									
            IF	_DeleteItemUID05	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID05	, 0, _StackDecreaseAmount05	, _StackResultServer05	, _StackResultDB05	, _Result );		
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;									
            IF	_DeleteItemUID06	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID06	, 0, _StackDecreaseAmount06	, _StackResultServer06	, _StackResultDB06	, _Result );		
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
            END IF;									
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `CustomTitle_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `CustomTitle_Update_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_CustomTitle	VARCHAR(12)

,	IN	_DeleteItemUID			BIGINT		UNSIGNED		
,	IN	_StackDecreaseAmount	MEDIUMINT					
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED				

,	OUT	_StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _StackResultDB = 0, _Result = -1;
        
	MAIN_ROUTINE:
	BEGIN
		IF _CharacterUID = 0 OR _DeleteItemUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
   		ELSEIF	_StackDecreaseAmount >= 0			THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
		
        START TRANSACTION;
			-- 호칭 변경
			UPDATE customtitle_tb	SET CustomTitle = _CustomTitle	WHERE CharacterUID = _CharacterUID ;
			IF ROW_COUNT() <= 0	THEN 
				INSERT IGNORE INTO customtitle_tb ( CharacterUID , CustomTitle )	VALUE ( _CharacterUID , _CustomTitle );
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			END IF;
			
            -- 아이템 사용
            CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID, 0, _StackDecreaseAmount, _StackResultServer, _StackResultDB, _Result );										
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
                
			SET	_Result = 0;
		COMMIT;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ForceBlood_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ForceBlood_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_MoneyType01			TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime01		INT			UNSIGNED
,	IN	_ForceIdx				SMALLINT	UNSIGNED
,	IN	_BloodIdx				INT			UNSIGNED
,	IN	_BloodLev				TINYINT		UNSIGNED
,	IN	_SlumpExpireTime		INT			UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01	BIGINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB01 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_CharacterUID = 0				THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        ELSEIF	_MoneyDecreaseAmount01 >= 0	THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyDecreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
			IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;

			IF	_SlumpExpireTime > 0	THEN	-- 주화입마
				UPDATE force_tb	SET SlumpExpireTime = FROM_UNIXTIME(_SlumpExpireTime)	WHERE CharacterUID = _CharacterUID AND ForceIdx = _ForceIdx;
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            ELSEIF	_ForceIdx > 0	THEN	-- 혈맥 변경
				UPDATE force_blood_tb	SET BloodLev = _BloodLev	WHERE CharacterUID = _CharacterUID AND ForceIdx = _ForceIdx AND BloodIdx = _BloodIdx;
				IF ROW_COUNT() <= 0	THEN
					INSERT IGNORE INTO force_blood_tb ( CharacterUID, ForceIdx, BloodIdx, BloodLev )	VALUES ( _CharacterUID, _ForceIdx, _BloodIdx, _BloodLev );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ForceSlump_Delete_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ForceSlump_Delete_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_DeleteItemUID01		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount01	MEDIUMINT			
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED		
,	IN	_ForceIdx				SMALLINT	UNSIGNED

,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_StackResultDB01 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_CharacterUID = 0 OR _DeleteItemUID01 = 0 OR _ForceIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        ELSEIF	_StackDecreaseAmount01 >= 0								THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 주화입마 삭제
			UPDATE force_tb	SET SlumpExpireTime = '0000-00-00 00:00:00'	WHERE CharacterUID = _CharacterUID AND ForceIdx = _ForceIdx;
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            
            -- 아이템 삭제
            CALL Item_Delete_DB ( _DeleteItemUID01	, _StackDecreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );
            IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;					
			            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Force_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Force_Insert_Game`(
	IN	_CharacterUID	BIGINT		UNSIGNED
,	IN	_ForceIdx		SMALLINT	UNSIGNED

,	IN	_DeleteItemUID01			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount01		MEDIUMINT			
,	IN	_DeleteStackResultServer01	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID02			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount02		MEDIUMINT			
,	IN	_DeleteStackResultServer02	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID03			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount03		MEDIUMINT			
,	IN	_DeleteStackResultServer03	MEDIUMINT	UNSIGNED			

,	OUT	_DeleteStackResultDB01	MEDIUMINT
,	OUT	_DeleteStackResultDB02	MEDIUMINT
,	OUT	_DeleteStackResultDB03	MEDIUMINT
,	OUT	_Result					INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_DeleteStackResultDB01 = 0, _DeleteStackResultDB02 = 0, _DeleteStackResultDB03 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_CharacterUID = 0 OR _ForceIdx = 0 OR _DeleteItemUID01 = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함

        ELSEIF	_StackDecreaseAmount01 > 0 OR _StackDecreaseAmount02 > 0 OR _StackDecreaseAmount03 > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
            -- 내공 추가
            INSERT IGNORE INTO force_tb ( CharacterUID, ForceIdx, SlumpExpireTime )	VALUES ( _CharacterUID, _ForceIdx, '0000-00-00 00:00:00' );
            IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;	-- 중복된 데이터 존재
		
            -- 아이템 삭제
				CALL Item_Delete_DB ( _DeleteItemUID01	, _StackDecreaseAmount01	, _DeleteStackResultServer01	, _DeleteStackResultDB01	, _Result );	
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
            IF _DeleteItemUID02	> 0	THEN 						
				CALL Item_Delete_DB ( _DeleteItemUID02	, _StackDecreaseAmount02	, _DeleteStackResultServer02	, _DeleteStackResultDB02	, _Result );	
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF _DeleteItemUID03	> 0	THEN 						
				CALL Item_Delete_DB ( _DeleteItemUID03	, _StackDecreaseAmount03	, _DeleteStackResultServer03	, _DeleteStackResultDB03	, _Result );	
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            
			SET	_Result = 0;
		COMMIT;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildCreate_Cancel_Delete_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildCreate_Cancel_Delete_Game`(
	IN	_GuildUID	INT	UNSIGNED

,	OUT	_Result		INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
		ROLLBACK;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_GuildUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	
        
        DELETE FROM guild_tb	WHERE GuildUID = _GuildUID;
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildCreate_Check_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildCreate_Check_Insert_Game`(
	IN	_GuildName	VARCHAR(16)

,	OUT	_GuildUID	INT	UNSIGNED
,	OUT	_Result		INT
)
BEGIN
	DECLARE	_LockName	VARCHAR(100);
    DECLARE	_LockResult	INT;
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
		ROLLBACK;
	END;
    
    SET	_GuildUID = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	TRIM(_GuildName) = ''	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	
        
        SET	_LockName = CONCAT( 'GuildCreate_Check_Insert_', _GuildName );
		SET _LockResult = GET_LOCK( _LockName, 10 );
			-- 길드 생성시 확인사항				
            IF EXISTS	
			( 	SELECT 	1	
				FROM 			guild_tb		AS GU	
				LEFT OUTER JOIN	guild_delete_tb	AS GD	ON GD.GuildUID = GU.GuildUID
				WHERE 	GU.GuildName = _GuildName AND ( GD.DeleteTime > NOW() OR GD.DeleteTime IS NULL )	)	
			THEN ROLLBACK;	SET _Result = 204;	LEAVE MAIN_ROUTINE; -- 이미 존재하는 이름
			END IF;
                
			-- 길드 기본 데이터
 			INSERT INTO guild_tb ( GuildName, GuildNotice, GuildPR )	VALUES ( _GuildName, '', '' );
 			SET	_GuildUID = LAST_INSERT_ID();
			SET	_Result = 0;
        
        SET _LockResult = RELEASE_LOCK(_LockName);
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildCreate_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildCreate_Insert_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_MoneyType				TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime		INT		UNSIGNED
,	IN	_GuildUID				INT		UNSIGNED
,	IN	_MarkType01				TINYINT	UNSIGNED
,	IN	_MarkIdx01				TINYINT	UNSIGNED
,	IN	_MarkType02				TINYINT	UNSIGNED
,	IN	_MarkIdx02				TINYINT	UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB	BIGINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_CharacterUID = 0 OR _GuildUID = 0 OR _MarkIdx01 = 0 OR _MarkIdx02 = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함

        ELSEIF	_MoneyDecreaseAmount >= 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
                
		START TRANSACTION;
        	-- 재화 변경
			CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
			IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			
            -- 길드원 정보
			INSERT IGNORE INTO character_guild_tb ( CharacterUID, GuildUID, MemberGrade )	VALUES ( _CharacterUID, _GuildUID, 0 );
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;	-- 중복된 데이터 존재
            
			-- 길드 문장
			INSERT INTO guild_mark_tb ( GuildUID, MarkType, MarkIdx )	VALUES ( _GuildUID, _MarkType01, _MarkIdx01 );
			INSERT INTO guild_mark_tb ( GuildUID, MarkType, MarkIdx )	VALUES ( _GuildUID, _MarkType02, _MarkIdx02 );
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildList_Get_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildList_Get_World`(
	IN	_LastGuildUID	INT		UNSIGNED
,	IN	_CntPerPage		TINYINT	UNSIGNED

,	OUT	_Result		INT 
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
    
	MAIN_ROUTINE:
	BEGIN
		IF	_CntPerPage = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
        -- 요청 GuildUID 이후 문파 리스트 
        CREATE TEMPORARY TABLE guild_tmp
        SELECT	GU.GuildUID, GU.GuildName, GU.GuildPR
        FROM			guild_tb		AS GU
        LEFT OUTER JOIN	guild_delete_tb	AS GD	ON GD.GuildUID = GU.GuildUID
        WHERE 	GU.GuildUID > CASE WHEN _LastGuildUID = 0 THEN 0 ELSE _LastGuildUID END AND ( GD.DeleteTime > NOW() OR GD.DeleteTime IS NULL )
        ORDER BY	GU.GuildUID
        LIMIT	_CntPerPage;
		
        -- 문파 리스트
        SELECT	GU.GuildUID, GU.GuildName, GU.GuildPR, count(CG.CharacterUID) AS MemberCnt
        FROM		guild_tmp			AS GU
        INNER JOIN	character_guild_tb	AS CG ON CG.GuildUID = GU.GuildUID
        GROUP BY	GU.GuildUID;
        
        -- 문파 문장
        SELECT	GU.GuildUID, GM.MarkIdx, GM.MarkType
        FROM		guild_tmp		AS GU
        INNER JOIN	guild_mark_tb	AS GM ON GM.GuildUID = GU.GuildUID;
        
        DROP TEMPORARY TABLE guild_tmp;

		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildMemberGradeName_Update_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildMemberGradeName_Update_World`(
	IN	_GuildUID			INT		UNSIGNED
,	IN	_MemberGrade		TINYINT	UNSIGNED
,	IN	_MemberGradeName	VARCHAR(20)

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_GuildUID = 0 OR _MemberGradeName = ''	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	
		
        UPDATE guild_membergradename_tb	SET MemberGradeName = _MemberGradeName	WHERE GuildUID = _GuildUID AND MemberGrade = _MemberGrade;
		IF ROW_COUNT() <= 0	THEN 
			INSERT IGNORE INTO guild_membergradename_tb ( GuildUID, MemberGrade, MemberGradeName )	VALUES ( _GuildUID, _MemberGrade, _MemberGradeName );
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
		END IF;
            
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildMemberGrade_Update_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildMemberGrade_Update_World`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_GuildUID		INT		UNSIGNED
,	IN	_MemberGrade	TINYINT	UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_CharacterUID = 0 OR _GuildUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	
		
        UPDATE character_guild_tb	SET MemberGrade = _MemberGrade	WHERE CharacterUID = _CharacterUID AND GuildUID = _GuildUID;
		IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildMember_Delete_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildMember_Delete_World`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_GuildUID		INT		UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_CharacterUID = 0 OR _GuildUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	

		DELETE FROM character_guild_tb	WHERE CharacterUID = _CharacterUID AND GuildUID = _GuildUID;
		IF ROW_COUNT() <= 0	THEN SET _Result = 201;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 캐릭터
            
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildMember_Insert_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildMember_Insert_World`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_GuildUID		INT		UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_CharacterUID = 0 OR _GuildUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	

		INSERT IGNORE INTO character_guild_tb ( CharacterUID, GuildUID, MemberGrade )	VALUES ( _CharacterUID, _GuildUID, 1 );
		IF ROW_COUNT() <= 0	THEN SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;	-- 중복된 데이터 존재
            
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildNotice_Update_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildNotice_Update_World`(
	IN	_GuildUID		INT	UNSIGNED
,	IN	_GuildNotice	VARCHAR(150)

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_GuildUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	

		UPDATE guild_tb	SET GuildNotice = _GuildNotice	WHERE GuildUID = _GuildUID;
		IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildPR_Update_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildPR_Update_World`(
	IN	_GuildUID	INT	UNSIGNED
,	IN	_GuildPR	VARCHAR(150)

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_GuildUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	

		UPDATE guild_tb	SET GuildPR = _GuildPR	WHERE GuildUID = _GuildUID;
		IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildWar_Delete_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildWar_Delete_World`(
	IN	_DeclareGuildUID	INT	UNSIGNED
,	IN	_TargetGuildUID		INT	UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_DeclareGuildUID = 0 OR _TargetGuildUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	

		DELETE FROM guild_war_tb	WHERE DeclareGuildUID = _DeclareGuildUID AND TargetGuildUID = _TargetGuildUID;
		IF ROW_COUNT() <= 0	THEN SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
            
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GuildWar_Insert_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `GuildWar_Insert_World`(
	IN	_DeclareGuildUID	INT	UNSIGNED
,	IN	_TargetGuildUID		INT	UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_DeclareGuildUID = 0 OR _TargetGuildUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	

		INSERT IGNORE INTO guild_war_tb ( DeclareGuildUID, TargetGuildUID )	VALUES ( _DeclareGuildUID, _TargetGuildUID );
		IF ROW_COUNT() <= 0	THEN SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;	-- 중복된 데이터 존재
            
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Guild_Delete_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Guild_Delete_World`(
	IN	_GuildUID	INT	UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
		ROLLBACK;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_GuildUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	
		
        START TRANSACTION;
			DELETE FROM character_guild_tb	WHERE GuildUID = _GuildUID;
			IF ROW_COUNT() > 1	THEN ROLLBACK;	SET _Result = 9;	LEAVE MAIN_ROUTINE;	END IF;	-- 삭제 할 수 없는 데이터
            
            INSERT IGNORE INTO guild_delete_tb ( GuildUID, DeleteTime )	VALUES ( _GuildUID, NOW() );
            IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
        
			SET	_Result = 0;
		COMMIT;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Guild_Get_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Guild_Get_World`(
	IN	_GuildUID		INT	UNSIGNED

,	OUT	_GuildName		VARCHAR(16)
,	OUT	_GuildNotice	VARCHAR(150)
,	OUT	_GuildPR		VARCHAR(150)
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_GuildUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	
		
        -- 길드원 리스트
        SELECT	CH.CharacterUID, CH.CharacterName, CH.Class, CH.Lev, UNIX_TIMESTAMP(CH.LogoutTime) AS LogoutTime, CG.MemberGrade
        FROM 		character_guild_tb	AS CG
        INNER JOIN	character_tb		AS CH	ON CH.CharacterUID = CG.CharacterUID
        WHERE 	CG.GuildUID = _GuildUID;
        
        -- 길드 문장
        SELECT MarkType, MarkIdx	FROM guild_mark_tb	WHERE GuildUID = _GuildUID;
        
        -- 직책 이름
        SELECT MemberGrade, MemberGradeName	FROM guild_membergradename_tb	WHERE GuildUID = _GuildUID;
        
        -- 길드 정보
        SELECT	GuildName	, GuildNotice	, GuildPR
        INTO	_GuildName	, _GuildNotice	, _GuildPR
        FROM	guild_tb
        WHERE	GuildUID = _GuildUID;
		IF ROW_COUNT() <= 0	THEN SET _Result = 1001;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 길드
		
        -- 전쟁건 길드
        SELECT TargetGuildUID	FROM guild_war_tb	WHERE DeclareGuildUID = _GuildUID;
        
        -- 전쟁 당한 길드
        SELECT DeclareGuildUID	FROM guild_war_tb	WHERE TargetGuildUID = _GuildUID;
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `HolyStuffExp_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `HolyStuffExp_Update_Game`(
	IN	_CharacterUID	BIGINT		UNSIGNED
,	IN	_HolyStuffIdx	SMALLINT	UNSIGNED
,	IN	_HolyStuffLev	TINYINT		UNSIGNED
,	IN	_HolyStuffExp	INT			UNSIGNED

,	IN	_DeleteItemUID01		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount01	MEDIUMINT			
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID02		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount02	MEDIUMINT			
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID03		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount03	MEDIUMINT			
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID04		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount04	MEDIUMINT			
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID05		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount05	MEDIUMINT			
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID06		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount06	MEDIUMINT			
,	IN	_StackResultServer06	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID07		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount07	MEDIUMINT			
,	IN	_StackResultServer07	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID08		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount08	MEDIUMINT			
,	IN	_StackResultServer08	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID09		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount09	MEDIUMINT			
,	IN	_StackResultServer09	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID10		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount10	MEDIUMINT			
,	IN	_StackResultServer10	MEDIUMINT	UNSIGNED		

,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT
,	OUT	_StackResultDB03	MEDIUMINT
,	OUT	_StackResultDB04	MEDIUMINT
,	OUT	_StackResultDB05	MEDIUMINT
,	OUT	_StackResultDB06	MEDIUMINT
,	OUT	_StackResultDB07	MEDIUMINT
,	OUT	_StackResultDB08	MEDIUMINT
,	OUT	_StackResultDB09	MEDIUMINT
,	OUT	_StackResultDB10	MEDIUMINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0, 
        _StackResultDB06 = 0, _StackResultDB07 = 0, _StackResultDB08 = 0, _StackResultDB09 = 0, _StackResultDB10 = 0,  
        _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _HolyStuffIdx = 0 OR _HolyStuffLev = 0	OR _DeleteItemUID01 = 0	THEN
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        ELSEIF	_StackDecreaseAmount01 > 0 OR _StackDecreaseAmount02 > 0 OR _StackDecreaseAmount03 > 0 OR _StackDecreaseAmount04 > 0 OR _StackDecreaseAmount05 > 0
			OR	_StackDecreaseAmount06 > 0 OR _StackDecreaseAmount07 > 0 OR _StackDecreaseAmount08 > 0 OR _StackDecreaseAmount09 > 0 OR _StackDecreaseAmount10 > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
            -- 성물 레벨, 경험치 변경
            UPDATE holystuff_tb	SET HolyStuffLev = _HolyStuffLev, HolyStuffExp = _HolyStuffExp	WHERE CharacterUID = _CharacterUID AND HolyStuffIdx = _HolyStuffIdx;
            IF ROW_COUNT() <= 0	THEN 
				INSERT IGNORE INTO holystuff_tb ( CharacterUID, HolyStuffIdx, HolyStuffLev, HolyStuffExp )	VALUES ( _CharacterUID, _HolyStuffIdx, _HolyStuffLev, _HolyStuffExp );
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
            
            -- 아이템 삭제
				CALL Item_Delete_DB ( _DeleteItemUID01	, _StackDecreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
            IF	_DeleteItemUID02	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID02	, _StackDecreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID03	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID03	, _StackDecreaseAmount03	, _StackResultServer03	, _StackResultDB03	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID04	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID04	, _StackDecreaseAmount04	, _StackResultServer04	, _StackResultDB04	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID05	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID05	, _StackDecreaseAmount05	, _StackResultServer05	, _StackResultDB05	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID06	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID06	, _StackDecreaseAmount06	, _StackResultServer06	, _StackResultDB06	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID07	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID07	, _StackDecreaseAmount07	, _StackResultServer07	, _StackResultDB07	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID08	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID08	, _StackDecreaseAmount08	, _StackResultServer08	, _StackResultDB08	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID09	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID09	, _StackDecreaseAmount09	, _StackResultServer09	, _StackResultDB09	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID10	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID10	, _StackDecreaseAmount10	, _StackResultServer10	, _StackResultDB10	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `InvenExtend_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `InvenExtend_Update_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_MoneyType				TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime		INT		UNSIGNED
,	IN	_InvenExtendCnt			TINYINT	UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB	BIGINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _MoneyResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _InvenExtendCnt = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        ELSEIF	_MoneyDecreaseAmount >= 0				THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
            -- 인벤 확장 횟수 변경
			UPDATE character_tb	SET InvenExtendCnt = _InvenExtendCnt	WHERE CharacterUID = _CharacterUID;
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 201;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 캐릭터
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemBreak_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemBreak_Update_Game`(
	IN	_CharacterUID		BIGINT	UNSIGNED

,	IN	_BreakItemUID01		BIGINT	UNSIGNED
,	IN	_BreakItemUID02		BIGINT	UNSIGNED
,	IN	_BreakItemUID03		BIGINT	UNSIGNED
,	IN	_BreakItemUID04		BIGINT	UNSIGNED
,	IN	_BreakItemUID05		BIGINT	UNSIGNED
,	IN	_BreakItemUID06		BIGINT	UNSIGNED
,	IN	_BreakItemUID07		BIGINT	UNSIGNED
,	IN	_BreakItemUID08		BIGINT	UNSIGNED
,	IN	_BreakItemUID09		BIGINT	UNSIGNED
,	IN	_BreakItemUID10		BIGINT	UNSIGNED

,	IN	_CreateItemUID01		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx01		INT			UNSIGNED
,	IN	_StackIncreaseAmount01	MEDIUMINT				
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID02		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx02		INT			UNSIGNED
,	IN	_StackIncreaseAmount02	MEDIUMINT				
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID03		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx03		INT			UNSIGNED
,	IN	_StackIncreaseAmount03	MEDIUMINT				
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID04		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx04		INT			UNSIGNED
,	IN	_StackIncreaseAmount04	MEDIUMINT				
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID05		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx05		INT			UNSIGNED
,	IN	_StackIncreaseAmount05	MEDIUMINT				
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID06		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx06		INT			UNSIGNED
,	IN	_StackIncreaseAmount06	MEDIUMINT				
,	IN	_StackResultServer06	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID07		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx07		INT			UNSIGNED
,	IN	_StackIncreaseAmount07	MEDIUMINT				
,	IN	_StackResultServer07	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID08		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx08		INT			UNSIGNED
,	IN	_StackIncreaseAmount08	MEDIUMINT				
,	IN	_StackResultServer08	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID09		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx09		INT			UNSIGNED
,	IN	_StackIncreaseAmount09	MEDIUMINT				
,	IN	_StackResultServer09	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID10		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx10		INT			UNSIGNED
,	IN	_StackIncreaseAmount10	MEDIUMINT				
,	IN	_StackResultServer10	MEDIUMINT	UNSIGNED			

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT
,	OUT	_StackResultDB03	MEDIUMINT
,	OUT	_StackResultDB04	MEDIUMINT
,	OUT	_StackResultDB05	MEDIUMINT
,	OUT	_StackResultDB06	MEDIUMINT
,	OUT	_StackResultDB07	MEDIUMINT
,	OUT	_StackResultDB08	MEDIUMINT
,	OUT	_StackResultDB09	MEDIUMINT
,	OUT	_StackResultDB10	MEDIUMINT
,	OUT _Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
	SET _StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0, 
        _StackResultDB06 = 0, _StackResultDB07 = 0, _StackResultDB08 = 0, _StackResultDB09 = 0, _StackResultDB10 = 0, 
        _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF( _BreakItemUID01 = 0 AND _BreakItemUID02 = 0 AND _BreakItemUID03 = 0 AND _BreakItemUID04 = 0 AND _BreakItemUID05 = 0 
        AND _BreakItemUID06 = 0 AND _BreakItemUID07 = 0 AND _BreakItemUID08 = 0 AND _BreakItemUID09 = 0 AND _BreakItemUID10 = 0 )
        OR(	_CreateItemUID01 = 0 AND _CreateItemUID02 = 0 AND _CreateItemUID03 = 0 AND _CreateItemUID04 = 0 AND _CreateItemUID05 = 0 
        AND _CreateItemUID06 = 0 AND _CreateItemUID07 = 0 AND _CreateItemUID08 = 0 AND _CreateItemUID09 = 0 AND _CreateItemUID10 = 0 )	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        
		ELSEIF	_StackIncreaseAmount01 < 0 OR _StackIncreaseAmount02 < 0 OR _StackIncreaseAmount03 < 0 OR _StackIncreaseAmount04 < 0 OR _StackIncreaseAmount05 < 0
			OR	_StackIncreaseAmount06 < 0 OR _StackIncreaseAmount07 < 0 OR	_StackIncreaseAmount08 < 0 OR _StackIncreaseAmount09 < 0 OR	_StackIncreaseAmount10 < 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 Amount
		END IF;	
        
		START TRANSACTION;
            -- 아이템 삭제
            IF _BreakItemUID01	> 0	THEN CALL Item_Delete_DB ( _BreakItemUID01	, 0, 0, @StackResultDB, _Result );	IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	END IF;
            IF _BreakItemUID02	> 0 THEN CALL Item_Delete_DB ( _BreakItemUID02	, 0, 0, @StackResultDB, _Result );	IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	END IF;
            IF _BreakItemUID03	> 0 THEN CALL Item_Delete_DB ( _BreakItemUID03	, 0, 0, @StackResultDB, _Result );	IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	END IF;
            IF _BreakItemUID04	> 0 THEN CALL Item_Delete_DB ( _BreakItemUID04	, 0, 0, @StackResultDB, _Result );	IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	END IF;
            IF _BreakItemUID05	> 0 THEN CALL Item_Delete_DB ( _BreakItemUID05	, 0, 0, @StackResultDB, _Result );	IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	END IF;
            IF _BreakItemUID06	> 0 THEN CALL Item_Delete_DB ( _BreakItemUID06	, 0, 0, @StackResultDB, _Result );	IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	END IF;
            IF _BreakItemUID07	> 0 THEN CALL Item_Delete_DB ( _BreakItemUID07	, 0, 0, @StackResultDB, _Result );	IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	END IF;
            IF _BreakItemUID08	> 0 THEN CALL Item_Delete_DB ( _BreakItemUID08	, 0, 0, @StackResultDB, _Result );	IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	END IF;
            IF _BreakItemUID09	> 0 THEN CALL Item_Delete_DB ( _BreakItemUID09	, 0, 0, @StackResultDB, _Result );	IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	END IF;
            IF _BreakItemUID10	> 0 THEN CALL Item_Delete_DB ( _BreakItemUID10	, 0, 0, @StackResultDB, _Result );	IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	END IF;

            -- 아이템 스택 변경
            IF	_CreateItemUID01	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID01	, _CreateItemIdx01	, _StackIncreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;									
            IF	_CreateItemUID02	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID02	, _CreateItemIdx02	, _StackIncreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;									
            IF	_CreateItemUID03	> 0 THEN
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID03	, _CreateItemIdx03	, _StackIncreaseAmount03	, _StackResultServer03	, _StackResultDB03	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;									
            IF	_CreateItemUID04	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID04	, _CreateItemIdx04	, _StackIncreaseAmount04	, _StackResultServer04	, _StackResultDB04	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;									
            IF	_CreateItemUID05	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID05	, _CreateItemIdx05	, _StackIncreaseAmount05	, _StackResultServer05	, _StackResultDB05	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;									
            IF	_CreateItemUID06	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID06	, _CreateItemIdx06	, _StackIncreaseAmount06	, _StackResultServer06	, _StackResultDB06	, _Result );	
				IF	_Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;									
            IF	_CreateItemUID07	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID07	, _CreateItemIdx07	, _StackIncreaseAmount07	, _StackResultServer07	, _StackResultDB07	, _Result );	
				IF	_Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;									
            IF	_CreateItemUID08	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID08	, _CreateItemIdx08	, _StackIncreaseAmount08	, _StackResultServer08	, _StackResultDB08	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;									
            IF	_CreateItemUID09	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID09	, _CreateItemIdx09	, _StackIncreaseAmount09	, _StackResultServer09	, _StackResultDB09	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;									
            IF	_CreateItemUID10	> 0	THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID10	, _CreateItemIdx10	, _StackIncreaseAmount10	, _StackResultServer10	, _StackResultDB10	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;									
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemBuy_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemBuy_Insert_Game`(
	IN	_CharacterUID		BIGINT	UNSIGNED

,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED

,	IN	_CreateItemUID				BIGINT		UNSIGNED		
,	IN	_CreateItemIdx				INT			UNSIGNED	
,	IN	_ReinforceLev				TINYINT		UNSIGNED	
,	IN	_ReinforceExp				INT			UNSIGNED
,	IN	_SmeltingLev				TINYINT		UNSIGNED		
,	IN	_StackIncreaseAmount		MEDIUMINT					
,	IN	_CreateStackResultServer	MEDIUMINT	UNSIGNED
,	IN	_OptionIdx01				SMALLINT	UNSIGNED		
,	IN	_OptionValue01				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02				SMALLINT	UNSIGNED		
,	IN	_OptionValue02				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03				SMALLINT	UNSIGNED		
,	IN	_OptionValue03				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04				SMALLINT	UNSIGNED		
,	IN	_OptionValue04				SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT

,	OUT	_CreateStackResultDB	MEDIUMINT

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
	SET _MoneyResultDB01 = 0, _MoneyResultDB02 = 0, _CreateStackResultDB = 0, _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF		_CharacterUID = 0																		THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		ELSEIF	_StackIncreaseAmount < 0 OR _MoneyDecreaseAmount01 > 0 OR _MoneyDecreaseAmount02 > 0	THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 Amount
		END IF;	
        
		START TRANSACTION;
			-- 재화 변경
            IF	_MoneyDecreaseAmount01 < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyDecreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
            IF	_MoneyDecreaseAmount02 < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyDecreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;

			-- 아이템 생성
			IF	_CreateItemUID	> 0	THEN												
				CALL Item_Insert_DB	( _CharacterUID			, _CreateItemUID			, _CreateItemIdx	, _ReinforceLev		, _ReinforceExp			, _SmeltingLev			
									, _StackIncreaseAmount	, _CreateStackResultServer	, _OptionIdx01		, _OptionValue01	, _OptionIdx02			, _OptionValue02			
                                    , _OptionIdx03			, _OptionValue03			, _OptionIdx04		, _OptionValue04	, _CreateStackResultDB	, _Result 			);												
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;												
			END IF;															
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemEquip_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemEquip_Update_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_EquipSlot 		TINYINT	UNSIGNED
,	IN	_ItemUID		BIGINT	UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
        
	MAIN_ROUTINE:
	BEGIN
		IF _CharacterUID = 0 OR _EquipSlot = 0 OR _ItemUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
		-- 아이템 착용
        UPDATE equip_item_tb	SET ItemUID = _ItemUID	WHERE CharacterUID = _CharacterUID AND EquipSlot = _EquipSlot;
        IF ROW_COUNT() <= 0	THEN 
			INSERT IGNORE INTO equip_item_tb ( CharacterUID, EquipSlot, ItemUID )	VALUE ( _CharacterUID, _EquipSlot, _ItemUID );
            IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
        END IF;
/*        
		INSERT INTO equip_item_tb ( CharacterUID, EquipSlot, ItemUID )	VALUE ( _CharacterUID, _EquipSlot, _ItemUID )	ON DUPLICATE KEY UPDATE ItemUID = _ItemUID;
		IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
*/		
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemMake_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemMake_Update_Game`(
	IN	_CharacterUID		BIGINT	UNSIGNED

,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED

,	IN	_DeleteItemUID01			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount01		MEDIUMINT			
,	IN	_DeleteStackResultServer01	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID02			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount02		MEDIUMINT			
,	IN	_DeleteStackResultServer02	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID03			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount03		MEDIUMINT			
,	IN	_DeleteStackResultServer03	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID04			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount04		MEDIUMINT			
,	IN	_DeleteStackResultServer04	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID05			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount05		MEDIUMINT			
,	IN	_DeleteStackResultServer05	MEDIUMINT	UNSIGNED			

,	IN	_CreateItemUID01			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01			INT			UNSIGNED	
,	IN	_ReinforceLev01				TINYINT		UNSIGNED	
,	IN	_ReinforceExp01				INT			UNSIGNED
,	IN	_SmeltingLev01				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01		MEDIUMINT					
,	IN	_CreateStackResultServer01	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx01A				SMALLINT	UNSIGNED		
,	IN	_OptionValue01A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B				SMALLINT	UNSIGNED		
,	IN	_OptionValue01B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C				SMALLINT	UNSIGNED		
,	IN	_OptionValue01C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D				SMALLINT	UNSIGNED		
,	IN	_OptionValue01D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID02			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx02			INT			UNSIGNED	
,	IN	_ReinforceLev02				TINYINT		UNSIGNED	
,	IN	_ReinforceExp02				INT			UNSIGNED
,	IN	_SmeltingLev02				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount02		MEDIUMINT					
,	IN	_CreateStackResultServer02	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx02A				SMALLINT	UNSIGNED		
,	IN	_OptionValue02A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02B				SMALLINT	UNSIGNED		
,	IN	_OptionValue02B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02C				SMALLINT	UNSIGNED		
,	IN	_OptionValue02C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02D				SMALLINT	UNSIGNED		
,	IN	_OptionValue02D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID03			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx03			INT			UNSIGNED	
,	IN	_ReinforceLev03				TINYINT		UNSIGNED	
,	IN	_ReinforceExp03				INT			UNSIGNED
,	IN	_SmeltingLev03				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount03		MEDIUMINT					
,	IN	_CreateStackResultServer03	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx03A				SMALLINT	UNSIGNED		
,	IN	_OptionValue03A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03B				SMALLINT	UNSIGNED		
,	IN	_OptionValue03B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03C				SMALLINT	UNSIGNED		
,	IN	_OptionValue03C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03D				SMALLINT	UNSIGNED		
,	IN	_OptionValue03D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID04			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx04			INT			UNSIGNED	
,	IN	_ReinforceLev04				TINYINT		UNSIGNED	
,	IN	_ReinforceExp04				INT			UNSIGNED
,	IN	_SmeltingLev04				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount04		MEDIUMINT					
,	IN	_CreateStackResultServer04	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx04A				SMALLINT	UNSIGNED		
,	IN	_OptionValue04A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04B				SMALLINT	UNSIGNED		
,	IN	_OptionValue04B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04C				SMALLINT	UNSIGNED		
,	IN	_OptionValue04C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04D				SMALLINT	UNSIGNED		
,	IN	_OptionValue04D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID05			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx05			INT			UNSIGNED	
,	IN	_ReinforceLev05				TINYINT		UNSIGNED	
,	IN	_ReinforceExp05				INT			UNSIGNED
,	IN	_SmeltingLev05				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount05		MEDIUMINT					
,	IN	_CreateStackResultServer05	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx05A				SMALLINT	UNSIGNED		
,	IN	_OptionValue05A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05B				SMALLINT	UNSIGNED		
,	IN	_OptionValue05B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05C				SMALLINT	UNSIGNED		
,	IN	_OptionValue05C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05D				SMALLINT	UNSIGNED		
,	IN	_OptionValue05D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID06			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx06			INT			UNSIGNED	
,	IN	_ReinforceLev06				TINYINT		UNSIGNED	
,	IN	_ReinforceExp06				INT			UNSIGNED
,	IN	_SmeltingLev06				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount06		MEDIUMINT					
,	IN	_CreateStackResultServer06	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx06A				SMALLINT	UNSIGNED		
,	IN	_OptionValue06A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06B				SMALLINT	UNSIGNED		
,	IN	_OptionValue06B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06C				SMALLINT	UNSIGNED		
,	IN	_OptionValue06C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06D				SMALLINT	UNSIGNED		
,	IN	_OptionValue06D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID07			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx07			INT			UNSIGNED	
,	IN	_ReinforceLev07				TINYINT		UNSIGNED	
,	IN	_ReinforceExp07				INT			UNSIGNED
,	IN	_SmeltingLev07				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount07		MEDIUMINT					
,	IN	_CreateStackResultServer07	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx07A				SMALLINT	UNSIGNED		
,	IN	_OptionValue07A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07B				SMALLINT	UNSIGNED		
,	IN	_OptionValue07B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07C				SMALLINT	UNSIGNED		
,	IN	_OptionValue07C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07D				SMALLINT	UNSIGNED		
,	IN	_OptionValue07D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID08			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx08			INT			UNSIGNED	
,	IN	_ReinforceLev08				TINYINT		UNSIGNED	
,	IN	_ReinforceExp08				INT			UNSIGNED
,	IN	_SmeltingLev08				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount08		MEDIUMINT					
,	IN	_CreateStackResultServer08	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx08A				SMALLINT	UNSIGNED		
,	IN	_OptionValue08A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08B				SMALLINT	UNSIGNED		
,	IN	_OptionValue08B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08C				SMALLINT	UNSIGNED		
,	IN	_OptionValue08C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08D				SMALLINT	UNSIGNED		
,	IN	_OptionValue08D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID09			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx09			INT			UNSIGNED	
,	IN	_ReinforceLev09				TINYINT		UNSIGNED	
,	IN	_ReinforceExp09				INT			UNSIGNED
,	IN	_SmeltingLev09				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount09		MEDIUMINT					
,	IN	_CreateStackResultServer09	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx09A				SMALLINT	UNSIGNED		
,	IN	_OptionValue09A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09B				SMALLINT	UNSIGNED		
,	IN	_OptionValue09B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09C				SMALLINT	UNSIGNED		
,	IN	_OptionValue09C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09D				SMALLINT	UNSIGNED		
,	IN	_OptionValue09D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID10			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx10			INT			UNSIGNED	
,	IN	_ReinforceLev10				TINYINT		UNSIGNED	
,	IN	_ReinforceExp10				INT			UNSIGNED
,	IN	_SmeltingLev10				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount10		MEDIUMINT					
,	IN	_CreateStackResultServer10	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx10A				SMALLINT	UNSIGNED		
,	IN	_OptionValue10A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10B				SMALLINT	UNSIGNED		
,	IN	_OptionValue10B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10C				SMALLINT	UNSIGNED		
,	IN	_OptionValue10C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10D				SMALLINT	UNSIGNED		
,	IN	_OptionValue10D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID11			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx11			INT			UNSIGNED	
,	IN	_ReinforceLev11				TINYINT		UNSIGNED	
,	IN	_ReinforceExp11				INT			UNSIGNED
,	IN	_SmeltingLev11				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount11		MEDIUMINT					
,	IN	_CreateStackResultServer11	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx11A				SMALLINT	UNSIGNED		
,	IN	_OptionValue11A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx11B				SMALLINT	UNSIGNED		
,	IN	_OptionValue11B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx11C				SMALLINT	UNSIGNED		
,	IN	_OptionValue11C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx11D				SMALLINT	UNSIGNED		
,	IN	_OptionValue11D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID12			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx12			INT			UNSIGNED	
,	IN	_ReinforceLev12				TINYINT		UNSIGNED	
,	IN	_ReinforceExp12				INT			UNSIGNED
,	IN	_SmeltingLev12				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount12		MEDIUMINT					
,	IN	_CreateStackResultServer12	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx12A				SMALLINT	UNSIGNED		
,	IN	_OptionValue12A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx12B				SMALLINT	UNSIGNED		
,	IN	_OptionValue12B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx12C				SMALLINT	UNSIGNED		
,	IN	_OptionValue12C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx12D				SMALLINT	UNSIGNED		
,	IN	_OptionValue12D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID13			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx13			INT			UNSIGNED	
,	IN	_ReinforceLev13				TINYINT		UNSIGNED	
,	IN	_ReinforceExp13				INT			UNSIGNED
,	IN	_SmeltingLev13				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount13		MEDIUMINT					
,	IN	_CreateStackResultServer13	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx13A				SMALLINT	UNSIGNED		
,	IN	_OptionValue13A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx13B				SMALLINT	UNSIGNED		
,	IN	_OptionValue13B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx13C				SMALLINT	UNSIGNED		
,	IN	_OptionValue13C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx13D				SMALLINT	UNSIGNED		
,	IN	_OptionValue13D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID14			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx14			INT			UNSIGNED	
,	IN	_ReinforceLev14				TINYINT		UNSIGNED	
,	IN	_ReinforceExp14				INT			UNSIGNED
,	IN	_SmeltingLev14				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount14		MEDIUMINT					
,	IN	_CreateStackResultServer14	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx14A				SMALLINT	UNSIGNED		
,	IN	_OptionValue14A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx14B				SMALLINT	UNSIGNED		
,	IN	_OptionValue14B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx14C				SMALLINT	UNSIGNED		
,	IN	_OptionValue14C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx14D				SMALLINT	UNSIGNED		
,	IN	_OptionValue14D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID15			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx15			INT			UNSIGNED	
,	IN	_ReinforceLev15				TINYINT		UNSIGNED	
,	IN	_ReinforceExp15				INT			UNSIGNED
,	IN	_SmeltingLev15				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount15		MEDIUMINT					
,	IN	_CreateStackResultServer15	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx15A				SMALLINT	UNSIGNED		
,	IN	_OptionValue15A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx15B				SMALLINT	UNSIGNED		
,	IN	_OptionValue15B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx15C				SMALLINT	UNSIGNED		
,	IN	_OptionValue15C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx15D				SMALLINT	UNSIGNED		
,	IN	_OptionValue15D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID16			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx16			INT			UNSIGNED	
,	IN	_ReinforceLev16				TINYINT		UNSIGNED	
,	IN	_ReinforceExp16				INT			UNSIGNED
,	IN	_SmeltingLev16				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount16		MEDIUMINT					
,	IN	_CreateStackResultServer16	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx16A				SMALLINT	UNSIGNED		
,	IN	_OptionValue16A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx16B				SMALLINT	UNSIGNED		
,	IN	_OptionValue16B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx16C				SMALLINT	UNSIGNED		
,	IN	_OptionValue16C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx16D				SMALLINT	UNSIGNED		
,	IN	_OptionValue16D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID17			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx17			INT			UNSIGNED	
,	IN	_ReinforceLev17				TINYINT		UNSIGNED	
,	IN	_ReinforceExp17				INT			UNSIGNED
,	IN	_SmeltingLev17				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount17		MEDIUMINT					
,	IN	_CreateStackResultServer17	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx17A				SMALLINT	UNSIGNED		
,	IN	_OptionValue17A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx17B				SMALLINT	UNSIGNED		
,	IN	_OptionValue17B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx17C				SMALLINT	UNSIGNED		
,	IN	_OptionValue17C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx17D				SMALLINT	UNSIGNED		
,	IN	_OptionValue17D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID18			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx18			INT			UNSIGNED	
,	IN	_ReinforceLev18				TINYINT		UNSIGNED	
,	IN	_ReinforceExp18				INT			UNSIGNED
,	IN	_SmeltingLev18				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount18		MEDIUMINT					
,	IN	_CreateStackResultServer18	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx18A				SMALLINT	UNSIGNED		
,	IN	_OptionValue18A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx18B				SMALLINT	UNSIGNED		
,	IN	_OptionValue18B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx18C				SMALLINT	UNSIGNED		
,	IN	_OptionValue18C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx18D				SMALLINT	UNSIGNED		
,	IN	_OptionValue18D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID19			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx19			INT			UNSIGNED	
,	IN	_ReinforceLev19				TINYINT		UNSIGNED	
,	IN	_ReinforceExp19				INT			UNSIGNED
,	IN	_SmeltingLev19				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount19		MEDIUMINT					
,	IN	_CreateStackResultServer19	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx19A				SMALLINT	UNSIGNED		
,	IN	_OptionValue19A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx19B				SMALLINT	UNSIGNED		
,	IN	_OptionValue19B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx19C				SMALLINT	UNSIGNED		
,	IN	_OptionValue19C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx19D				SMALLINT	UNSIGNED		
,	IN	_OptionValue19D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID20			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx20			INT			UNSIGNED	
,	IN	_ReinforceLev20				TINYINT		UNSIGNED	
,	IN	_ReinforceExp20				INT			UNSIGNED
,	IN	_SmeltingLev20				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount20		MEDIUMINT					
,	IN	_CreateStackResultServer20	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx20A				SMALLINT	UNSIGNED		
,	IN	_OptionValue20A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx20B				SMALLINT	UNSIGNED		
,	IN	_OptionValue20B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx20C				SMALLINT	UNSIGNED		
,	IN	_OptionValue20C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx20D				SMALLINT	UNSIGNED		
,	IN	_OptionValue20D				SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT

,	OUT	_DeleteStackResultDB01	MEDIUMINT
,	OUT	_DeleteStackResultDB02	MEDIUMINT
,	OUT	_DeleteStackResultDB03	MEDIUMINT
,	OUT	_DeleteStackResultDB04	MEDIUMINT
,	OUT	_DeleteStackResultDB05	MEDIUMINT

,	OUT	_CreateStackResultDB01	MEDIUMINT
,	OUT	_CreateStackResultDB02	MEDIUMINT
,	OUT	_CreateStackResultDB03	MEDIUMINT
,	OUT	_CreateStackResultDB04	MEDIUMINT
,	OUT	_CreateStackResultDB05	MEDIUMINT
,	OUT	_CreateStackResultDB06	MEDIUMINT
,	OUT	_CreateStackResultDB07	MEDIUMINT
,	OUT	_CreateStackResultDB08	MEDIUMINT
,	OUT	_CreateStackResultDB09	MEDIUMINT
,	OUT	_CreateStackResultDB10	MEDIUMINT
,	OUT	_CreateStackResultDB11	MEDIUMINT
,	OUT	_CreateStackResultDB12	MEDIUMINT
,	OUT	_CreateStackResultDB13	MEDIUMINT
,	OUT	_CreateStackResultDB14	MEDIUMINT
,	OUT	_CreateStackResultDB15	MEDIUMINT
,	OUT	_CreateStackResultDB16	MEDIUMINT
,	OUT	_CreateStackResultDB17	MEDIUMINT
,	OUT	_CreateStackResultDB18	MEDIUMINT
,	OUT	_CreateStackResultDB19	MEDIUMINT
,	OUT	_CreateStackResultDB20	MEDIUMINT

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
	SET _MoneyResultDB01 = 0, _MoneyResultDB02 = 0
    , 	_DeleteStackResultDB01 = 0, _DeleteStackResultDB02 = 0, _DeleteStackResultDB03 = 0, _DeleteStackResultDB04 = 0, _DeleteStackResultDB05 = 0
    , 	_CreateStackResultDB01 = 0, _CreateStackResultDB02 = 0, _CreateStackResultDB03 = 0, _CreateStackResultDB04 = 0, _CreateStackResultDB05 = 0
	, 	_CreateStackResultDB06 = 0, _CreateStackResultDB07 = 0, _CreateStackResultDB08 = 0, _CreateStackResultDB09 = 0, _CreateStackResultDB10 = 0
    , 	_CreateStackResultDB11 = 0, _CreateStackResultDB12 = 0, _CreateStackResultDB13 = 0, _CreateStackResultDB14 = 0, _CreateStackResultDB15 = 0
    , 	_CreateStackResultDB16 = 0, _CreateStackResultDB17 = 0, _CreateStackResultDB18 = 0, _CreateStackResultDB19 = 0, _CreateStackResultDB20 = 0
    , 	_Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        
		ELSEIF	_StackDecreaseAmount01 > 0 OR _StackDecreaseAmount02 > 0 OR _StackDecreaseAmount03 > 0 OR _StackDecreaseAmount04 > 0 OR _StackDecreaseAmount05 > 0
			OR	_StackIncreaseAmount01 < 0 OR _StackIncreaseAmount02 < 0 OR _StackIncreaseAmount03 < 0 OR _StackIncreaseAmount04 < 0 OR _StackIncreaseAmount05 < 0 
            OR	_StackIncreaseAmount06 < 0 OR _StackIncreaseAmount07 < 0 OR _StackIncreaseAmount08 < 0 OR _StackIncreaseAmount09 < 0 OR _StackIncreaseAmount10 < 0 
            OR	_StackIncreaseAmount11 < 0 OR _StackIncreaseAmount12 < 0 OR _StackIncreaseAmount13 < 0 OR _StackIncreaseAmount14 < 0 OR _StackIncreaseAmount15 < 0 
            OR	_StackIncreaseAmount16 < 0 OR _StackIncreaseAmount17 < 0 OR _StackIncreaseAmount18 < 0 OR _StackIncreaseAmount19 < 0 OR _StackIncreaseAmount20 < 0 
            OR 	_MoneyDecreaseAmount01 > 0 OR _MoneyDecreaseAmount02 > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 Amount
		END IF;	
        
		START TRANSACTION;
			-- 재화 변경
            IF	_MoneyDecreaseAmount01	< 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyDecreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            IF	_MoneyDecreaseAmount02	< 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyDecreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
		
            -- 아이템 삭제
            IF _DeleteItemUID01	> 0	THEN 						
				CALL Item_Delete_DB ( _DeleteItemUID01	, _StackDecreaseAmount01	, _DeleteStackResultServer01	, _DeleteStackResultDB01	, _Result );	
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF _DeleteItemUID02	> 0	THEN 						
				CALL Item_Delete_DB ( _DeleteItemUID02	, _StackDecreaseAmount02	, _DeleteStackResultServer02	, _DeleteStackResultDB02	, _Result );	
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF _DeleteItemUID03	> 0	THEN 						
				CALL Item_Delete_DB ( _DeleteItemUID03	, _StackDecreaseAmount03	, _DeleteStackResultServer03	, _DeleteStackResultDB03	, _Result );	
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF _DeleteItemUID04	> 0	THEN 						
				CALL Item_Delete_DB ( _DeleteItemUID04	, _StackDecreaseAmount04	, _DeleteStackResultServer04	, _DeleteStackResultDB04	, _Result );	
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF _DeleteItemUID05	> 0	THEN 						
				CALL Item_Delete_DB ( _DeleteItemUID05	, _StackDecreaseAmount05	, _DeleteStackResultServer05	, _DeleteStackResultDB05	, _Result );	
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            								
			-- 아이템 생성
			IF	_CreateItemUID01	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID01			, _CreateItemIdx01				, _ReinforceLev01	, _ReinforceExp01		
									, _SmeltingLev01	, _StackIncreaseAmount01	, _CreateStackResultServer01	, _OptionIdx01A		, _OptionValue01A			
                                    , _OptionIdx01B		, _OptionValue01B			, _OptionIdx01C					, _OptionValue01C	, _OptionIdx01D						
                                    , _OptionValue01D	, _CreateStackResultDB01	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID02	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID02			, _CreateItemIdx02				, _ReinforceLev02	, _ReinforceExp02		
									, _SmeltingLev02	, _StackIncreaseAmount02	, _CreateStackResultServer02	, _OptionIdx02A		, _OptionValue02A			
                                    , _OptionIdx02B		, _OptionValue02B			, _OptionIdx02C					, _OptionValue02C	, _OptionIdx02D						
                                    , _OptionValue02D	, _CreateStackResultDB02	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID03	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID03			, _CreateItemIdx03				, _ReinforceLev03	, _ReinforceExp03		
									, _SmeltingLev03	, _StackIncreaseAmount03	, _CreateStackResultServer03	, _OptionIdx03A		, _OptionValue03A			
                                    , _OptionIdx03B		, _OptionValue03B			, _OptionIdx03C					, _OptionValue03C	, _OptionIdx03D						
                                    , _OptionValue03D	, _CreateStackResultDB03	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID04	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID04			, _CreateItemIdx04				, _ReinforceLev04	, _ReinforceExp04		
									, _SmeltingLev04	, _StackIncreaseAmount04	, _CreateStackResultServer04	, _OptionIdx04A		, _OptionValue04A			
                                    , _OptionIdx04B		, _OptionValue04B			, _OptionIdx04C					, _OptionValue04C	, _OptionIdx04D						
                                    , _OptionValue04D	, _CreateStackResultDB04	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID05	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID05			, _CreateItemIdx05				, _ReinforceLev05	, _ReinforceExp05		
									, _SmeltingLev05	, _StackIncreaseAmount05	, _CreateStackResultServer05	, _OptionIdx05A		, _OptionValue05A			
                                    , _OptionIdx05B		, _OptionValue05B			, _OptionIdx05C					, _OptionValue05C	, _OptionIdx05D						
                                    , _OptionValue05D	, _CreateStackResultDB05	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID06	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID06			, _CreateItemIdx06				, _ReinforceLev06	, _ReinforceExp06		
									, _SmeltingLev06	, _StackIncreaseAmount06	, _CreateStackResultServer06	, _OptionIdx06A		, _OptionValue06A			
                                    , _OptionIdx06B		, _OptionValue06B			, _OptionIdx06C					, _OptionValue06C	, _OptionIdx06D						
                                    , _OptionValue06D	, _CreateStackResultDB06	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID07	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID07			, _CreateItemIdx07				, _ReinforceLev07	, _ReinforceExp07		
									, _SmeltingLev07	, _StackIncreaseAmount07	, _CreateStackResultServer07	, _OptionIdx07A		, _OptionValue07A			
                                    , _OptionIdx07B		, _OptionValue07B			, _OptionIdx07C					, _OptionValue07C	, _OptionIdx07D						
                                    , _OptionValue07D	, _CreateStackResultDB07	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID08	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID08			, _CreateItemIdx08				, _ReinforceLev08	, _ReinforceExp08		
									, _SmeltingLev08	, _StackIncreaseAmount08	, _CreateStackResultServer08	, _OptionIdx08A		, _OptionValue08A			
                                    , _OptionIdx08B		, _OptionValue08B			, _OptionIdx08C					, _OptionValue08C	, _OptionIdx08D						
                                    , _OptionValue08D	, _CreateStackResultDB08	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID09	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID09			, _CreateItemIdx09				, _ReinforceLev09	, _ReinforceExp09		
									, _SmeltingLev09	, _StackIncreaseAmount09	, _CreateStackResultServer09	, _OptionIdx09A		, _OptionValue09A			
                                    , _OptionIdx09B		, _OptionValue09B			, _OptionIdx09C					, _OptionValue09C	, _OptionIdx09D						
                                    , _OptionValue09D	, _CreateStackResultDB09	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID10	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID10			, _CreateItemIdx10				, _ReinforceLev10	, _ReinforceExp10		
									, _SmeltingLev10	, _StackIncreaseAmount10	, _CreateStackResultServer10	, _OptionIdx10A		, _OptionValue10A			
                                    , _OptionIdx10B		, _OptionValue10B			, _OptionIdx10C					, _OptionValue10C	, _OptionIdx10D						
                                    , _OptionValue10D	, _CreateStackResultDB10	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID11	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID11			, _CreateItemIdx11				, _ReinforceLev11	, _ReinforceExp11		
									, _SmeltingLev11	, _StackIncreaseAmount11	, _CreateStackResultServer11	, _OptionIdx11A		, _OptionValue11A			
                                    , _OptionIdx11B		, _OptionValue11B			, _OptionIdx11C					, _OptionValue11C	, _OptionIdx11D						
                                    , _OptionValue11D	, _CreateStackResultDB11	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID12	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID12			, _CreateItemIdx12				, _ReinforceLev12	, _ReinforceExp12		
									, _SmeltingLev12	, _StackIncreaseAmount12	, _CreateStackResultServer12	, _OptionIdx12A		, _OptionValue12A			
                                    , _OptionIdx12B		, _OptionValue12B			, _OptionIdx12C					, _OptionValue12C	, _OptionIdx12D						
                                    , _OptionValue12D	, _CreateStackResultDB12	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID13	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID13			, _CreateItemIdx13				, _ReinforceLev13	, _ReinforceExp13		
									, _SmeltingLev13	, _StackIncreaseAmount13	, _CreateStackResultServer13	, _OptionIdx13A		, _OptionValue13A			
                                    , _OptionIdx13B		, _OptionValue13B			, _OptionIdx13C					, _OptionValue13C	, _OptionIdx13D						
                                    , _OptionValue13D	, _CreateStackResultDB13	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID14	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID14			, _CreateItemIdx14				, _ReinforceLev14	, _ReinforceExp14		
									, _SmeltingLev14	, _StackIncreaseAmount14	, _CreateStackResultServer14	, _OptionIdx14A		, _OptionValue14A			
                                    , _OptionIdx14B		, _OptionValue14B			, _OptionIdx14C					, _OptionValue14C	, _OptionIdx14D						
                                    , _OptionValue14D	, _CreateStackResultDB14	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID15	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID15			, _CreateItemIdx15				, _ReinforceLev15	, _ReinforceExp15		
									, _SmeltingLev15	, _StackIncreaseAmount15	, _CreateStackResultServer15	, _OptionIdx15A		, _OptionValue15A			
                                    , _OptionIdx15B		, _OptionValue15B			, _OptionIdx15C					, _OptionValue15C	, _OptionIdx15D						
                                    , _OptionValue15D	, _CreateStackResultDB15	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID16	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID16			, _CreateItemIdx16				, _ReinforceLev16	, _ReinforceExp16		
									, _SmeltingLev16	, _StackIncreaseAmount16	, _CreateStackResultServer16	, _OptionIdx16A		, _OptionValue16A			
                                    , _OptionIdx16B		, _OptionValue16B			, _OptionIdx16C					, _OptionValue16C	, _OptionIdx16D						
                                    , _OptionValue16D	, _CreateStackResultDB16	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID17	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID17			, _CreateItemIdx17				, _ReinforceLev17	, _ReinforceExp17		
									, _SmeltingLev17	, _StackIncreaseAmount17	, _CreateStackResultServer17	, _OptionIdx17A		, _OptionValue17A			
                                    , _OptionIdx17B		, _OptionValue17B			, _OptionIdx17C					, _OptionValue17C	, _OptionIdx17D						
                                    , _OptionValue17D	, _CreateStackResultDB17	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID18	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID18			, _CreateItemIdx18				, _ReinforceLev18	, _ReinforceExp18		
									, _SmeltingLev18	, _StackIncreaseAmount18	, _CreateStackResultServer18	, _OptionIdx18A		, _OptionValue18A			
                                    , _OptionIdx18B		, _OptionValue18B			, _OptionIdx18C					, _OptionValue18C	, _OptionIdx18D						
                                    , _OptionValue18D	, _CreateStackResultDB18	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID19	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID19			, _CreateItemIdx19				, _ReinforceLev19	, _ReinforceExp19		
									, _SmeltingLev19	, _StackIncreaseAmount19	, _CreateStackResultServer19	, _OptionIdx19A		, _OptionValue19A			
                                    , _OptionIdx19B		, _OptionValue19B			, _OptionIdx19C					, _OptionValue19C	, _OptionIdx19D						
                                    , _OptionValue19D	, _CreateStackResultDB19	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
			IF	_CreateItemUID20	> 0	THEN											
				CALL Item_Insert_DB	( _CharacterUID		, _CreateItemUID20			, _CreateItemIdx20				, _ReinforceLev20	, _ReinforceExp20		
									, _SmeltingLev20	, _StackIncreaseAmount20	, _CreateStackResultServer20	, _OptionIdx20A		, _OptionValue20A			
                                    , _OptionIdx20B		, _OptionValue20B			, _OptionIdx20C					, _OptionValue20C	, _OptionIdx20D						
                                    , _OptionValue20D	, _CreateStackResultDB20	, _Result 						);									
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;											
			END IF;														
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemOptionChange_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemOptionChange_Insert_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_MoneyType				TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime		INT			UNSIGNED
,	IN	_ChangeItemUID			BIGINT		UNSIGNED
,	IN	_OptionSlot01			TINYINT		UNSIGNED
,	IN	_OptionIdx01			SMALLINT	UNSIGNED
,	IN	_OptionValue01			SMALLINT	UNSIGNED
,	IN	_OptionSlot02			TINYINT		UNSIGNED
,	IN	_OptionIdx02			SMALLINT	UNSIGNED
,	IN	_OptionValue02			SMALLINT	UNSIGNED
,	IN	_OptionSlot03			TINYINT		UNSIGNED
,	IN	_OptionIdx03			SMALLINT	UNSIGNED
,	IN	_OptionValue03			SMALLINT	UNSIGNED
,	IN	_OptionSlot04			TINYINT		UNSIGNED
,	IN	_OptionIdx04			SMALLINT	UNSIGNED
,	IN	_OptionValue04			SMALLINT	UNSIGNED
-- ,	IN	_DeleteItemUID			BIGINT		UNSIGNED
-- ,	IN	_StackDecreaseAmount	MEDIUMINT				
-- ,	IN	_StackResultServer		MEDIUMINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB	BIGINT
-- ,	OUT _StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB = 0, /*_StackResultDB = 0, */ _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF		_CharacterUID = 0 OR _ChangeItemUID = 0						THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        ELSEIF	_MoneyDecreaseAmount >= 0 /*OR _StackDecreaseAmount > 0	*/	THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
/*            
			-- 아이템 삭제
            IF	_DeleteItemUID > 0	THEN
				CALL Item_Delete_DB ( _DeleteItemUID, _StackDecreaseAmount, _StackResultServer, _StackResultDB, _Result );	
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;
*/            
            -- 아이템 신규 옵션 임시 저장
            IF	_OptionSlot01 > 0	THEN			
				INSERT IGNORE INTO item_holdoption_tb ( CharacterUID, ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _CharacterUID, _ChangeItemUID, _OptionSlot01	, _OptionIdx01	, _OptionValue01	);
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;					
            IF	_OptionSlot02 > 0	THEN			
				INSERT IGNORE INTO item_holdoption_tb ( CharacterUID, ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _CharacterUID, _ChangeItemUID, _OptionSlot02	, _OptionIdx02	, _OptionValue02	);
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;					
            IF	_OptionSlot03 > 0	THEN			
				INSERT IGNORE INTO item_holdoption_tb ( CharacterUID, ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _CharacterUID, _ChangeItemUID, _OptionSlot03	, _OptionIdx03	, _OptionValue03	);
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;					
            IF	_OptionSlot04 > 0	THEN			
				INSERT IGNORE INTO item_holdoption_tb ( CharacterUID, ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _CharacterUID, _ChangeItemUID, _OptionSlot04	, _OptionIdx04	, _OptionValue04	);
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;					
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemOptionChoice_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemOptionChoice_Update_Game`(
	IN	_CharacterUID	BIGINT		UNSIGNED
,	IN	_ItemUID		BIGINT		UNSIGNED
,	IN	_OptionSlot01	TINYINT		UNSIGNED
,	IN	_OptionIdx01	SMALLINT	UNSIGNED
,	IN	_OptionValue01	SMALLINT	UNSIGNED
,	IN	_OptionSlot02	TINYINT		UNSIGNED
,	IN	_OptionIdx02	SMALLINT	UNSIGNED
,	IN	_OptionValue02	SMALLINT	UNSIGNED
,	IN	_OptionSlot03	TINYINT		UNSIGNED
,	IN	_OptionIdx03	SMALLINT	UNSIGNED
,	IN	_OptionValue03	SMALLINT	UNSIGNED
,	IN	_OptionSlot04	TINYINT		UNSIGNED
,	IN	_OptionIdx04	SMALLINT	UNSIGNED
,	IN	_OptionValue04	SMALLINT	UNSIGNED

,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _ItemUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	
        
		START TRANSACTION;
			-- 선택 보류 옵션 삭제
			DELETE FROM item_holdoption_tb	WHERE CharacterUID = _CharacterUID;
            IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;
            
            -- 아이템 옵션
            DELETE FROM item_option_tb	WHERE ItemUID = _ItemUID;
            
            IF	_OptionSlot01	> 0	THEN INSERT INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, _OptionSlot01	, _OptionIdx01	, _OptionValue01	);	END IF;
            IF	_OptionSlot02	> 0	THEN INSERT INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, _OptionSlot02	, _OptionIdx02	, _OptionValue02	);	END IF;
            IF	_OptionSlot03	> 0	THEN INSERT INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, _OptionSlot03	, _OptionIdx03	, _OptionValue03	);	END IF;
            IF	_OptionSlot04	> 0	THEN INSERT INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, _OptionSlot04	, _OptionIdx04	, _OptionValue04	);	END IF;
            
/*            IF	_OptionSlot01 > 0	THEN													
				IF	_OptionIdx01	= 0	THEN								
					DELETE FROM item_option_tb	WHERE ItemUID = _ItemUID AND OptionSlot = _OptionSlot01	;
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
				ELSE
					UPDATE item_option_tb	SET OptionIdx = _OptionIdx01, OptionValue = _OptionValue01	WHERE ItemUID = _ItemUID AND OptionSlot = _OptionSlot01;
                    IF ROW_COUNT() <= 0	THEN 
						INSERT IGNORE INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, _OptionSlot01, _OptionIdx01, _OptionValue01 );
                        IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
                    END IF;
				END IF;											
            END IF;															
            															
            IF	_OptionSlot02 > 0	THEN													
				IF	_OptionIdx02	= 0	THEN								
					DELETE FROM item_option_tb	WHERE ItemUID = _ItemUID AND OptionSlot = _OptionSlot02	;
                    IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;
				ELSE
					UPDATE item_option_tb	SET OptionIdx = _OptionIdx02, OptionValue = _OptionValue02	WHERE ItemUID = _ItemUID AND OptionSlot = _OptionSlot02;
                    IF ROW_COUNT() <= 0	THEN 
						INSERT IGNORE INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, _OptionSlot02, _OptionIdx02, _OptionValue02 );
                        IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
                    END IF;
				END IF;											
            END IF;															
            															
            IF	_OptionSlot03 > 0	THEN													
				IF	_OptionIdx03	= 0	THEN								
					DELETE FROM item_option_tb	WHERE ItemUID = _ItemUID AND OptionSlot = _OptionSlot03	;
                    IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;
				ELSE											
					UPDATE item_option_tb	SET OptionIdx = _OptionIdx03, OptionValue = _OptionValue03	WHERE ItemUID = _ItemUID AND OptionSlot = _OptionSlot03;
                    IF ROW_COUNT() <= 0	THEN 
						INSERT IGNORE INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, _OptionSlot03, _OptionIdx03, _OptionValue03 );
                        IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
                    END IF;
				END IF;											
            END IF;															
            															
            IF	_OptionSlot04 > 0	THEN													
				IF	_OptionIdx04	= 0	THEN								
					DELETE FROM item_option_tb	WHERE ItemUID = _ItemUID AND OptionSlot = _OptionSlot04	;
                    IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;
				ELSE											
					UPDATE item_option_tb	SET OptionIdx = _OptionIdx04, OptionValue = _OptionValue04	WHERE ItemUID = _ItemUID AND OptionSlot = _OptionSlot04;
                    IF ROW_COUNT() <= 0	THEN 
						INSERT IGNORE INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, _OptionSlot04, _OptionIdx04, _OptionValue04 );
                        IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
                    END IF;	
				END IF;											
            END IF;															
*/
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemPolishing_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemPolishing_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_MoneyType				TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT	
,	IN	_MoneyResultServer		BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime		INT			UNSIGNED
,	IN	_PolishingItemUID		BIGINT		UNSIGNED
,	IN	_PolishingSlot			TINYINT		UNSIGNED
,	IN	_PolishingCnt			TINYINT		UNSIGNED
,	IN	_DeleteItemUID			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount	MEDIUMINT			
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB	BIGINT
,	OUT	_StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
	SET	_MoneyResultDB = 0, _StackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _PolishingItemUID = 0 OR _PolishingSlot = 0 OR _PolishingCnt = 0 OR _DeleteItemUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount >= 0 OR _StackDecreaseAmount > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
			-- 아이템 삭제
			CALL Item_Delete_DB ( _DeleteItemUID, _StackDecreaseAmount, _StackResultServer, _StackResultDB, _Result );
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;					

            -- 아이템 연마
            UPDATE item_polishing_tb	SET PolishingCnt = _PolishingCnt	WHERE ItemUID = _PolishingItemUID AND PolishingSlot = _PolishingSlot;
            IF ROW_COUNT() <= 0	THEN 
				INSERT IGNORE INTO item_polishing_tb ( ItemUID, PolishingSlot, PolishingCnt )	VALUES ( _PolishingItemUID, _PolishingSlot, _PolishingCnt );
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemReinforce_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemReinforce_Update_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_MoneyType				TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime		INT		UNSIGNED
,	IN	_ReinforceItemUID		BIGINT	UNSIGNED
,	IN	_ReinforceLev			TINYINT	UNSIGNED
,	IN	_ReinforceExp			INT		UNSIGNED

,	IN	_DeleteItemUID01		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount01	MEDIUMINT				
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID02		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount02	MEDIUMINT				
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID03		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount03	MEDIUMINT				
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID04		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount04	MEDIUMINT				
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID05		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount05	MEDIUMINT				
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID06		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount06	MEDIUMINT				
,	IN	_StackResultServer06	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID07		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount07	MEDIUMINT				
,	IN	_StackResultServer07	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID08		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount08	MEDIUMINT				
,	IN	_StackResultServer08	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID09		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount09	MEDIUMINT				
,	IN	_StackResultServer09	MEDIUMINT	UNSIGNED			
,	IN	_DeleteItemUID10		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount10	MEDIUMINT				
,	IN	_StackResultServer10	MEDIUMINT	UNSIGNED			

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB		BIGINT
,	OUT _StackResultDB01	MEDIUMINT
,	OUT _StackResultDB02	MEDIUMINT
,	OUT _StackResultDB03	MEDIUMINT
,	OUT _StackResultDB04	MEDIUMINT
,	OUT _StackResultDB05	MEDIUMINT
,	OUT _StackResultDB06	MEDIUMINT
,	OUT _StackResultDB07	MEDIUMINT
,	OUT _StackResultDB08	MEDIUMINT
,	OUT _StackResultDB09	MEDIUMINT
,	OUT _StackResultDB10	MEDIUMINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _MoneyResultDB = 0
	, 	_StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0
    , 	_StackResultDB06 = 0, _StackResultDB07 = 0, _StackResultDB08 = 0, _StackResultDB09 = 0, _StackResultDB10 = 0
	, 	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _ReinforceItemUID = 0 OR _ReinforceLev = 0 
        OR	( 	_DeleteItemUID01 = 0 AND _DeleteItemUID02 = 0 AND _DeleteItemUID03 = 0 AND _DeleteItemUID04 = 0 AND _DeleteItemUID05 = 0 
			AND	_DeleteItemUID06 = 0 AND _DeleteItemUID07 = 0 AND _DeleteItemUID08 = 0 AND _DeleteItemUID09 = 0 AND _DeleteItemUID10 = 0	)	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount >= 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
            -- 아이템 삭제
            IF	_DeleteItemUID01	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID01	, _StackDecreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID02	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID02	, _StackDecreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID03	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID03	, _StackDecreaseAmount03	, _StackResultServer03	, _StackResultDB03	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID04	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID04	, _StackDecreaseAmount04	, _StackResultServer04	, _StackResultDB04	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID05	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID05	, _StackDecreaseAmount05	, _StackResultServer05	, _StackResultDB05	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID06	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID06	, _StackDecreaseAmount06	, _StackResultServer06	, _StackResultDB06	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID07	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID07	, _StackDecreaseAmount07	, _StackResultServer07	, _StackResultDB07	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID08	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID08	, _StackDecreaseAmount08	, _StackResultServer08	, _StackResultDB08	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID09	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID09	, _StackDecreaseAmount09	, _StackResultServer09	, _StackResultDB09	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_DeleteItemUID10	> 0	THEN					
				CALL Item_Delete_DB ( _DeleteItemUID10	, _StackDecreaseAmount10	, _StackResultServer10	, _StackResultDB10	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            
            -- 아이템 강화
            UPDATE item_reinforce_tb	SET ReinforceLev = _ReinforceLev, ReinforceExp = _ReinforceExp	WHERE ItemUID = _ReinforceItemUID;
            IF ROW_COUNT() <= 0	THEN 
				INSERT IGNORE INTO item_reinforce_tb ( ItemUID, ReinforceLev, ReinforceExp )	VALUES ( _ReinforceItemUID, _ReinforceLev, _ReinforceExp );
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemSell_Delete_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemSell_Delete_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_MoneyType				TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime		INT		UNSIGNED

,	IN	_SellItemUID01			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount01	MEDIUMINT				
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID02			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount02	MEDIUMINT				
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID03			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount03	MEDIUMINT				
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID04			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount04	MEDIUMINT				
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID05			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount05	MEDIUMINT				
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID06			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount06	MEDIUMINT				
,	IN	_StackResultServer06	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID07			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount07	MEDIUMINT				
,	IN	_StackResultServer07	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID08			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount08	MEDIUMINT				
,	IN	_StackResultServer08	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID09			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount09	MEDIUMINT				
,	IN	_StackResultServer09	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID10			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount10	MEDIUMINT				
,	IN	_StackResultServer10	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID11			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount11	MEDIUMINT				
,	IN	_StackResultServer11	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID12			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount12	MEDIUMINT				
,	IN	_StackResultServer12	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID13			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount13	MEDIUMINT				
,	IN	_StackResultServer13	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID14			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount14	MEDIUMINT				
,	IN	_StackResultServer14	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID15			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount15	MEDIUMINT				
,	IN	_StackResultServer15	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID16			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount16	MEDIUMINT				
,	IN	_StackResultServer16	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID17			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount17	MEDIUMINT				
,	IN	_StackResultServer17	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID18			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount18	MEDIUMINT				
,	IN	_StackResultServer18	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID19			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount19	MEDIUMINT				
,	IN	_StackResultServer19	MEDIUMINT	UNSIGNED			
,	IN	_SellItemUID20			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount20	MEDIUMINT				
,	IN	_StackResultServer20	MEDIUMINT	UNSIGNED			

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB		BIGINT
,	OUT _StackResultDB01	MEDIUMINT
,	OUT _StackResultDB02	MEDIUMINT
,	OUT _StackResultDB03	MEDIUMINT
,	OUT _StackResultDB04	MEDIUMINT
,	OUT _StackResultDB05	MEDIUMINT
,	OUT _StackResultDB06	MEDIUMINT
,	OUT _StackResultDB07	MEDIUMINT
,	OUT _StackResultDB08	MEDIUMINT
,	OUT _StackResultDB09	MEDIUMINT
,	OUT _StackResultDB10	MEDIUMINT
,	OUT _StackResultDB11	MEDIUMINT
,	OUT _StackResultDB12	MEDIUMINT
,	OUT _StackResultDB13	MEDIUMINT
,	OUT _StackResultDB14	MEDIUMINT
,	OUT _StackResultDB15	MEDIUMINT
,	OUT _StackResultDB16	MEDIUMINT
,	OUT _StackResultDB17	MEDIUMINT
,	OUT _StackResultDB18	MEDIUMINT
,	OUT _StackResultDB19	MEDIUMINT
,	OUT _StackResultDB20	MEDIUMINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB = 0	,
		_StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0, 
        _StackResultDB06 = 0, _StackResultDB07 = 0, _StackResultDB08 = 0, _StackResultDB09 = 0, _StackResultDB10 = 0, 
        _StackResultDB11 = 0, _StackResultDB12 = 0, _StackResultDB13 = 0, _StackResultDB14 = 0, _StackResultDB15 = 0, 
        _StackResultDB16 = 0, _StackResultDB17 = 0, _StackResultDB18 = 0, _StackResultDB19 = 0, _StackResultDB20 = 0, 
        _Result = -1;			
        
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 
        OR( _SellItemUID01 = 0 AND _SellItemUID02 = 0 AND _SellItemUID03 = 0 AND _SellItemUID04 = 0 AND _SellItemUID05 = 0 
        AND _SellItemUID06 = 0 AND _SellItemUID07 = 0 AND _SellItemUID08 = 0 AND _SellItemUID09 = 0 AND _SellItemUID10 = 0 
        AND _SellItemUID11 = 0 AND _SellItemUID12 = 0 AND _SellItemUID13 = 0 AND _SellItemUID14 = 0 AND _SellItemUID15 = 0 
        AND _SellItemUID16 = 0 AND _SellItemUID17 = 0 AND _SellItemUID18 = 0 AND _SellItemUID19 = 0 AND _SellItemUID20 = 0 )	
        THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        
        ELSEIF	_MoneyIncreaseAmount <= 0 
			OR _StackDecreaseAmount01 > 0 OR _StackDecreaseAmount02 > 0 OR _StackDecreaseAmount03 > 0 OR _StackDecreaseAmount04 > 0 OR _StackDecreaseAmount05 > 0
			OR _StackDecreaseAmount06 > 0 OR _StackDecreaseAmount07 > 0 OR _StackDecreaseAmount08 > 0 OR _StackDecreaseAmount09 > 0 OR _StackDecreaseAmount10 > 0
			OR _StackDecreaseAmount11 > 0 OR _StackDecreaseAmount12 > 0 OR _StackDecreaseAmount13 > 0 OR _StackDecreaseAmount14 > 0 OR _StackDecreaseAmount15 > 0
			OR _StackDecreaseAmount16 > 0 OR _StackDecreaseAmount17 > 0 OR _StackDecreaseAmount18 > 0 OR _StackDecreaseAmount19 > 0 OR _StackDecreaseAmount20 > 0
		THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	

		START TRANSACTION;
        	-- 재화 변경
			IF	_MoneyIncreaseAmount > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyIncreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
        
			-- 아이템 삭제
            IF	_SellItemUID01	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID01	, _StackDecreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID02	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID02	, _StackDecreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID03	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID03	, _StackDecreaseAmount03	, _StackResultServer03	, _StackResultDB03	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID04	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID04	, _StackDecreaseAmount04	, _StackResultServer04	, _StackResultDB04	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID05	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID05	, _StackDecreaseAmount05	, _StackResultServer05	, _StackResultDB05	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID06	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID06	, _StackDecreaseAmount06	, _StackResultServer06	, _StackResultDB06	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID07	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID07	, _StackDecreaseAmount07	, _StackResultServer07	, _StackResultDB07	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID08	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID08	, _StackDecreaseAmount08	, _StackResultServer08	, _StackResultDB08	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID09	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID09	, _StackDecreaseAmount09	, _StackResultServer09	, _StackResultDB09	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID10	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID10	, _StackDecreaseAmount10	, _StackResultServer10	, _StackResultDB10	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID11	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID11	, _StackDecreaseAmount11	, _StackResultServer11	, _StackResultDB11	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID12	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID12	, _StackDecreaseAmount12	, _StackResultServer12	, _StackResultDB12	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID13	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID13	, _StackDecreaseAmount13	, _StackResultServer13	, _StackResultDB13	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID14	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID14	, _StackDecreaseAmount14	, _StackResultServer14	, _StackResultDB14	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID15	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID15	, _StackDecreaseAmount15	, _StackResultServer15	, _StackResultDB15	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID16	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID16	, _StackDecreaseAmount16	, _StackResultServer16	, _StackResultDB16	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID17	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID17	, _StackDecreaseAmount17	, _StackResultServer17	, _StackResultDB17	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID18	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID18	, _StackDecreaseAmount18	, _StackResultServer18	, _StackResultDB18	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID19	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID19	, _StackDecreaseAmount19	, _StackResultServer19	, _StackResultDB19	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_SellItemUID20	> 0	THEN					
				CALL Item_Delete_DB ( _SellItemUID20	, _StackDecreaseAmount20	, _StackResultServer20	, _StackResultDB20	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemSmelting_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemSmelting_Update_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_MoneyType01				TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED
,	IN	_SmeltingItemUID		BIGINT	UNSIGNED
,	IN	_SmeltingLev			TINYINT	UNSIGNED
-- ,	IN	_SmeltingFailCnt		TINYINT	UNSIGNED

,	IN	_DeleteItemUID01		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount01	MEDIUMINT			
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED		
-- ,	IN	_DeleteItemUID02		BIGINT		UNSIGNED
-- ,	IN	_StackDecreaseAmount02	MEDIUMINT			
-- ,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED		
-- ,	IN	_DeleteItemUID03		BIGINT		UNSIGNED
-- ,	IN	_StackDecreaseAmount03	MEDIUMINT			
-- ,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT
,	OUT	_StackResultDB01	MEDIUMINT
-- ,	OUT	_StackResultDB02	MEDIUMINT
-- ,	OUT	_StackResultDB03	MEDIUMINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
	SET	_MoneyResultDB01 = 0, _MoneyResultDB02 = 0, _StackResultDB01 = 0/*, _StackResultDB02 = 0, _StackResultDB03 = 0*/ , _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _SmeltingItemUID = 0
        OR	( _DeleteItemUID01 = 0 /*AND _DeleteItemUID02 = 0 AND _DeleteItemUID03 = 0*/ )	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount01 >= 0 OR _MoneyDecreaseAmount02 >= 0 OR _StackDecreaseAmount01 > 0 /*OR _StackDecreaseAmount02 > 0 OR _StackDecreaseAmount03 > 0*/	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount01 < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyDecreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            IF	_MoneyDecreaseAmount02 < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyDecreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
			-- 아이템 삭제
            IF _DeleteItemUID01	> 0 THEN						
				CALL Item_Delete_DB ( _DeleteItemUID01	, _StackDecreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;					
			END IF;				
/*            IF _DeleteItemUID02	> 0 THEN						
				CALL Item_Delete_DB ( _DeleteItemUID02	, _StackDecreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;					
			END IF;				
            IF _DeleteItemUID03	> 0 THEN						
				CALL Item_Delete_DB ( _DeleteItemUID03	, _StackDecreaseAmount03	, _StackResultServer03	, _StackResultDB03	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;					
			END IF;				
*/
            -- 아이템 재련
            UPDATE item_smelting_tb	SET SmeltingLev = _SmeltingLev/*, SmeltingFailCnt = _SmeltingFailCnt*/	WHERE ItemUID = _SmeltingItemUID;
            IF ROW_COUNT() <= 0	THEN 
				INSERT IGNORE INTO item_smelting_tb ( ItemUID, SmeltingLev/*, SmeltingFailCnt*/ )	VALUES ( _SmeltingItemUID, _SmeltingLev/*, _SmeltingFailCnt*/ );
--              IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
/*            
            INSERT INTO item_smelting_tb ( ItemUID, SmeltingLev	)	VALUES  ( _SmeltingItemUID, _SmeltingLev )	ON DUPLICATE KEY UPDATE	SmeltingLev = _SmeltingLev;
            IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
*/			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemStack_Update_DB` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemStack_Update_DB`(
	IN	_CharacterUID		BIGINT	UNSIGNED
,	IN	_ItemUID			BIGINT	UNSIGNED
,	IN	_ItemIdx			INT		UNSIGNED
,	IN	_StackChangeAmount	MEDIUMINT
,	IN	_StackResultServer	MEDIUMINT	UNSIGNED

,	OUT _StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET	_StackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
	BEGIN
		IF	_ItemUID = 0 OR _StackChangeAmount = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값이 없음
        
		-- 아이템 StackCnt 변경
		UPDATE item_stack_tb	SET StackCnt = @StackResultDB := StackCnt + _StackChangeAmount	WHERE ItemUID = _ItemUID;
        IF	ROW_COUNT() <= 0	THEN	
			IF	_StackChangeAmount > 0	THEN	-- 데이터가 없고 수량 증가일 경우 신규 아이템 생성
				CALL Item_Insert_DB ( _CharacterUID, _ItemUID, _ItemIdx, 0, 0, 0,  _StackChangeAmount, _StackResultServer, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, _StackResultDB, _Result );
				IF _Result != 0	THEN LEAVE MAIN_ROUTINE;	END IF;
			ELSE
				SET _Result = 405;	LEAVE MAIN_ROUTINE;	-- 존재하지 않는 아이템
            END IF;
        ELSE
			SET	_StackResultDB = @StackResultDB;        
			IF	_StackResultDB = 0	THEN	-- StackCnt 가 0이 되었을 경우 아이템 삭제
				CALL Item_Delete_DB ( _ItemUID, 0, 0, _StackResultDB, _Result );
				IF _Result != 0	THEN LEAVE MAIN_ROUTINE;	END IF;
				
			ELSEIF	_StackResultDB < 0						THEN SET _Result = 403;	LEAVE MAIN_ROUTINE;	-- 아이템 스택 갯수 부족
            ELSEIF	_StackResultDB <> _StackResultServer	THEN SET _Result = 8;	LEAVE MAIN_ROUTINE;	-- 서버와 DB의 값이 다름
			END IF;
		END IF;

		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemTransfer_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemTransfer_Update_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_MoneyType				TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime		INT		UNSIGNED
,	IN	_EquipSlot 				TINYINT	UNSIGNED
,	IN	_TransferItemUID		BIGINT	UNSIGNED
,	IN	_ReinforceLev			TINYINT	UNSIGNED
,	IN	_SmeltingLev			TINYINT	UNSIGNED
,	IN	_JewelSlot01			TINYINT	UNSIGNED	
,	IN	_JewelItemIdx01			INT		UNSIGNED
,	IN	_JewelSlot02			TINYINT	UNSIGNED	
,	IN	_JewelItemIdx02			INT		UNSIGNED
,	IN	_JewelSlot03			TINYINT	UNSIGNED	
,	IN	_JewelItemIdx03			INT		UNSIGNED
,	IN	_JewelSlot04			TINYINT	UNSIGNED	
,	IN	_JewelItemIdx04			INT		UNSIGNED
,	IN	_JewelSlot05			TINYINT	UNSIGNED	
,	IN	_JewelItemIdx05			INT		UNSIGNED

,	IN	_CreateItemUID01		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx01		INT			UNSIGNED
,	IN	_StackIncreaseAmount01	MEDIUMINT				
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID02		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx02		INT			UNSIGNED
,	IN	_StackIncreaseAmount02	MEDIUMINT				
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID03		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx03		INT			UNSIGNED
,	IN	_StackIncreaseAmount03	MEDIUMINT				
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID04		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx04		INT			UNSIGNED
,	IN	_StackIncreaseAmount04	MEDIUMINT				
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID05		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx05		INT			UNSIGNED
,	IN	_StackIncreaseAmount05	MEDIUMINT				
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED	

,	IN	_SacrificeItemUID	BIGINT	UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB		BIGINT
,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT
,	OUT	_StackResultDB03	MEDIUMINT
,	OUT	_StackResultDB04	MEDIUMINT
,	OUT	_StackResultDB05	MEDIUMINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _MoneyResultDB = 0, _StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _TransferItemUID = 0 OR _SacrificeItemUID = 0 THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount >= 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
            -- 아이템 착용
            IF	_EquipSlot > 0	THEN
				UPDATE equip_item_tb	SET ItemUID = _TransferItemUID	WHERE CharacterUID = _CharacterUID AND EquipSlot = _EquipSlot;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO equip_item_tb ( CharacterUID, EquipSlot, ItemUID )	VALUE ( _CharacterUID, _EquipSlot, _TransferItemUID );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;
            
            -- 자동 추출 보석 생성
            IF	_CreateItemUID01	> 0	THEN								
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID01	, _CreateItemIdx01	, _StackIncreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
			END IF;								
            IF	_CreateItemUID02	> 0	THEN								
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID02	, _CreateItemIdx02	, _StackIncreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
			END IF;								
            IF	_CreateItemUID03	> 0	THEN								
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID03	, _CreateItemIdx03	, _StackIncreaseAmount03	, _StackResultServer03	, _StackResultDB03	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
			END IF;								
            IF	_CreateItemUID04	> 0	THEN								
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID04	, _CreateItemIdx04	, _StackIncreaseAmount04	, _StackResultServer04	, _StackResultDB04	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
			END IF;								
            IF	_CreateItemUID05	> 0	THEN								
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID05	, _CreateItemIdx05	, _StackIncreaseAmount05	, _StackResultServer05	, _StackResultDB05	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
			END IF;		
            
/*            -- 재물 아이템 삭제
			CALL Item_Delete_DB ( _SacrificeItemUID, 0, 0, @StackResultDB, _Result );
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
*/            
            -- 보석
            UPDATE item_jewel_tb	SET JewelItemIdx = 0	WHERE ItemUID = _SacrificeItemUID;
            
            IF	_JewelSlot01	> 0	THEN						
				UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx01	WHERE ItemUID = _TransferItemUID AND JewelSlot = _JewelSlot01;
                IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_jewel_tb ( ItemUID, JewelSlot, JewelItemIdx )	VALUE ( _TransferItemUID, _JewelSlot01, _JewelItemIdx01 );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
			END IF;
            IF	_JewelSlot02	> 0	THEN						
				UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx02	WHERE ItemUID = _TransferItemUID AND JewelSlot = _JewelSlot02;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_jewel_tb ( ItemUID, JewelSlot, JewelItemIdx )	VALUE ( _TransferItemUID, _JewelSlot02, _JewelItemIdx02 );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;									
            IF	_JewelSlot03	> 0	THEN						
				UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx03	WHERE ItemUID = _TransferItemUID AND JewelSlot = _JewelSlot03;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_jewel_tb ( ItemUID, JewelSlot, JewelItemIdx )	VALUE ( _TransferItemUID, _JewelSlot03, _JewelItemIdx03 );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;									
            IF	_JewelSlot04	> 0	THEN						
				UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx04	WHERE ItemUID = _TransferItemUID AND JewelSlot = _JewelSlot04;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_jewel_tb ( ItemUID, JewelSlot, JewelItemIdx )	VALUE ( _TransferItemUID, _JewelSlot04, _JewelItemIdx04 );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;									
            IF	_JewelSlot05	> 0	THEN						
				UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx05	WHERE ItemUID = _TransferItemUID AND JewelSlot = _JewelSlot05;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_jewel_tb ( ItemUID, JewelSlot, JewelItemIdx )	VALUE ( _TransferItemUID, _JewelSlot05, _JewelItemIdx05 );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;
            
            -- 전이
            IF	_ReinforceLev > 1	THEN
				DELETE FROM item_reinforce_tb	WHERE ItemUID = _SacrificeItemUID;
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
                
				UPDATE item_reinforce_tb	SET ReinforceLev = _ReinforceLev	WHERE ItemUID = _TransferItemUID;
                IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_reinforce_tb ( ItemUID, ReinforceLev, ReinforceExp )	VALUES ( _TransferItemUID, _ReinforceLev, 0 );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;
			
            IF	_SmeltingLev > 0	THEN
				DELETE FROM item_smelting_tb	WHERE ItemUID = _SacrificeItemUID;
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
                
				UPDATE item_smelting_tb	SET SmeltingLev = _SmeltingLev	WHERE ItemUID = _TransferItemUID;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_smelting_tb ( ItemUID, SmeltingLev )	VALUES ( _TransferItemUID, _SmeltingLev );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemUpgrade_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemUpgrade_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED

,	IN	_MoneyType				TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime		INT			UNSIGNED

,	IN	_UpgradeItemUID			BIGINT		UNSIGNED
,	IN	_UpgradeItemIdx			INT			UNSIGNED
,	IN	_OptionSlot01			TINYINT		UNSIGNED
,	IN	_OptionIdx01			SMALLINT	UNSIGNED
,	IN	_OptionValue01			SMALLINT	UNSIGNED
,	IN	_OptionSlot02			TINYINT		UNSIGNED
,	IN	_OptionIdx02			SMALLINT	UNSIGNED
,	IN	_OptionValue02			SMALLINT	UNSIGNED
,	IN	_OptionSlot03			TINYINT		UNSIGNED
,	IN	_OptionIdx03			SMALLINT	UNSIGNED
,	IN	_OptionValue03			SMALLINT	UNSIGNED
,	IN	_OptionSlot04			TINYINT		UNSIGNED
,	IN	_OptionIdx04			SMALLINT	UNSIGNED
,	IN	_OptionValue04			SMALLINT	UNSIGNED

,	IN	_DeleteItemUID			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount	MEDIUMINT				
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB	BIGINT
,	OUT _StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB = 0, _StackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _UpgradeItemUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount >= 0 OR _StackDecreaseAmount > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;

			-- 아이템 삭제
            IF	_DeleteItemUID > 0	THEN
				CALL Item_Delete_DB ( _DeleteItemUID, _StackDecreaseAmount, _StackResultServer, _StackResultDB, _Result );	
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;
            
            -- 아이템 옵션
            IF	_OptionSlot01 > 0	THEN													
				IF	_OptionIdx01	= 0	THEN								
					DELETE FROM item_option_tb	WHERE ItemUID = _UpgradeItemUID AND OptionSlot = _OptionSlot01	;
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
				ELSE
					UPDATE item_option_tb	SET OptionIdx = _OptionIdx01, OptionValue = _OptionValue01	WHERE ItemUID = _UpgradeItemUID AND OptionSlot = _OptionSlot01;
                    IF ROW_COUNT() <= 0	THEN 
						INSERT IGNORE INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _UpgradeItemUID, _OptionSlot01, _OptionIdx01, _OptionValue01 );
                        IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
                    END IF;
				END IF;											
            END IF;															
            															
            IF	_OptionSlot02 > 0	THEN													
				IF	_OptionIdx02	= 0	THEN								
					DELETE FROM item_option_tb	WHERE ItemUID = _UpgradeItemUID AND OptionSlot = _OptionSlot02	;
                    IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;
				ELSE
					UPDATE item_option_tb	SET OptionIdx = _OptionIdx02, OptionValue = _OptionValue02	WHERE ItemUID = _UpgradeItemUID AND OptionSlot = _OptionSlot02;
                    IF ROW_COUNT() <= 0	THEN 
						INSERT IGNORE INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _UpgradeItemUID, _OptionSlot02, _OptionIdx02, _OptionValue02 );
                        IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
                    END IF;
				END IF;											
            END IF;															
            															
            IF	_OptionSlot03 > 0	THEN													
				IF	_OptionIdx03	= 0	THEN								
					DELETE FROM item_option_tb	WHERE ItemUID = _UpgradeItemUID AND OptionSlot = _OptionSlot03	;
                    IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;
				ELSE											
					UPDATE item_option_tb	SET OptionIdx = _OptionIdx03, OptionValue = _OptionValue03	WHERE ItemUID = _UpgradeItemUID AND OptionSlot = _OptionSlot03;
                    IF ROW_COUNT() <= 0	THEN 
						INSERT IGNORE INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _UpgradeItemUID, _OptionSlot03, _OptionIdx03, _OptionValue03 );
                        IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
                    END IF;
				END IF;											
            END IF;															
            															
            IF	_OptionSlot04 > 0	THEN													
				IF	_OptionIdx04	= 0	THEN								
					DELETE FROM item_option_tb	WHERE ItemUID = _UpgradeItemUID AND OptionSlot = _OptionSlot04	;
                    IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;
				ELSE											
					UPDATE item_option_tb	SET OptionIdx = _OptionIdx04, OptionValue = _OptionValue04	WHERE ItemUID = _UpgradeItemUID AND OptionSlot = _OptionSlot04;
                    IF ROW_COUNT() <= 0	THEN 
						INSERT IGNORE INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _UpgradeItemUID, _OptionSlot04, _OptionIdx04, _OptionValue04 );
                        IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
                    END IF;	
				END IF;											
            END IF;															
			
            -- 아이템 변경
            IF	_UpgradeItemIdx > 0	THEN
				DELETE FROM item_polishing_tb	WHERE ItemUID = _UpgradeItemUID;
-- 				UPDATE item_reinforce_tb	SET ReinforceLev = 1, ReinforceExp = 0	WHERE ItemUID = _UpgradeItemUID;	-- 레벨, 경험치 초기화
				UPDATE item_tb				SET ItemIdx = _UpgradeItemIdx			WHERE ItemUID = _UpgradeItemUID;
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			END IF;
			
            -- 초월
/*            IF	_TranscendenceCnt > 0	THEN
				UPDATE item_transcendence_tb	SET TranscendenceCnt = _TranscendenceCnt	WHERE ItemUID = _UpgradeItemUID;
                IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_transcendence_tb ( ItemUID, TranscendenceCnt )	VALUES ( _UpgradeItemUID, _TranscendenceCnt );
                    IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
                END IF;	
            END IF;
*/            
			-- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ItemUse_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ItemUse_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_CurrentHP				INT			UNSIGNED 
,	IN	_CurrentMP				INT			UNSIGNED
,	IN	_UseItemUID				BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount	MEDIUMINT
,	IN	_UseStackResultServer	MEDIUMINT	UNSIGNED

,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED
,	IN	_MoneyType03			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount03	BIGINT
,	IN	_MoneyResultServer03	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime03		INT		UNSIGNED

,	IN	_CreateItemUID01			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01			INT			UNSIGNED	
,	IN	_ReinforceLev01				TINYINT		UNSIGNED	
,	IN	_ReinforceExp01				INT			UNSIGNED
,	IN	_SmeltingLev01				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01		MEDIUMINT					
,	IN	_CreateStackResultServer01	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx01A				SMALLINT	UNSIGNED		
,	IN	_OptionValue01A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B				SMALLINT	UNSIGNED		
,	IN	_OptionValue01B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C				SMALLINT	UNSIGNED		
,	IN	_OptionValue01C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D				SMALLINT	UNSIGNED		
,	IN	_OptionValue01D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID02			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx02			INT			UNSIGNED	
,	IN	_ReinforceLev02				TINYINT		UNSIGNED	
,	IN	_ReinforceExp02				INT			UNSIGNED
,	IN	_SmeltingLev02				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount02		MEDIUMINT					
,	IN	_CreateStackResultServer02	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx02A				SMALLINT	UNSIGNED		
,	IN	_OptionValue02A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02B				SMALLINT	UNSIGNED		
,	IN	_OptionValue02B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02C				SMALLINT	UNSIGNED		
,	IN	_OptionValue02C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02D				SMALLINT	UNSIGNED		
,	IN	_OptionValue02D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID03			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx03			INT			UNSIGNED	
,	IN	_ReinforceLev03				TINYINT		UNSIGNED	
,	IN	_ReinforceExp03				INT			UNSIGNED
,	IN	_SmeltingLev03				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount03		MEDIUMINT					
,	IN	_CreateStackResultServer03	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx03A				SMALLINT	UNSIGNED		
,	IN	_OptionValue03A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03B				SMALLINT	UNSIGNED		
,	IN	_OptionValue03B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03C				SMALLINT	UNSIGNED		
,	IN	_OptionValue03C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03D				SMALLINT	UNSIGNED		
,	IN	_OptionValue03D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID04			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx04			INT			UNSIGNED	
,	IN	_ReinforceLev04				TINYINT		UNSIGNED	
,	IN	_ReinforceExp04				INT			UNSIGNED
,	IN	_SmeltingLev04				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount04		MEDIUMINT					
,	IN	_CreateStackResultServer04	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx04A				SMALLINT	UNSIGNED		
,	IN	_OptionValue04A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04B				SMALLINT	UNSIGNED		
,	IN	_OptionValue04B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04C				SMALLINT	UNSIGNED		
,	IN	_OptionValue04C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04D				SMALLINT	UNSIGNED		
,	IN	_OptionValue04D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID05			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx05			INT			UNSIGNED	
,	IN	_ReinforceLev05				TINYINT		UNSIGNED	
,	IN	_ReinforceExp05				INT			UNSIGNED
,	IN	_SmeltingLev05				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount05		MEDIUMINT					
,	IN	_CreateStackResultServer05	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx05A				SMALLINT	UNSIGNED		
,	IN	_OptionValue05A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05B				SMALLINT	UNSIGNED		
,	IN	_OptionValue05B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05C				SMALLINT	UNSIGNED		
,	IN	_OptionValue05C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05D				SMALLINT	UNSIGNED		
,	IN	_OptionValue05D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID06			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx06			INT			UNSIGNED	
,	IN	_ReinforceLev06				TINYINT		UNSIGNED	
,	IN	_ReinforceExp06				INT			UNSIGNED
,	IN	_SmeltingLev06				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount06		MEDIUMINT					
,	IN	_CreateStackResultServer06	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx06A				SMALLINT	UNSIGNED		
,	IN	_OptionValue06A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06B				SMALLINT	UNSIGNED		
,	IN	_OptionValue06B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06C				SMALLINT	UNSIGNED		
,	IN	_OptionValue06C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06D				SMALLINT	UNSIGNED		
,	IN	_OptionValue06D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID07			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx07			INT			UNSIGNED	
,	IN	_ReinforceLev07				TINYINT		UNSIGNED	
,	IN	_ReinforceExp07				INT			UNSIGNED
,	IN	_SmeltingLev07				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount07		MEDIUMINT					
,	IN	_CreateStackResultServer07	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx07A				SMALLINT	UNSIGNED		
,	IN	_OptionValue07A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07B				SMALLINT	UNSIGNED		
,	IN	_OptionValue07B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07C				SMALLINT	UNSIGNED		
,	IN	_OptionValue07C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07D				SMALLINT	UNSIGNED		
,	IN	_OptionValue07D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID08			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx08			INT			UNSIGNED	
,	IN	_ReinforceLev08				TINYINT		UNSIGNED	
,	IN	_ReinforceExp08				INT			UNSIGNED
,	IN	_SmeltingLev08				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount08		MEDIUMINT					
,	IN	_CreateStackResultServer08	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx08A				SMALLINT	UNSIGNED		
,	IN	_OptionValue08A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08B				SMALLINT	UNSIGNED		
,	IN	_OptionValue08B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08C				SMALLINT	UNSIGNED		
,	IN	_OptionValue08C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08D				SMALLINT	UNSIGNED		
,	IN	_OptionValue08D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID09			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx09			INT			UNSIGNED	
,	IN	_ReinforceLev09				TINYINT		UNSIGNED	
,	IN	_ReinforceExp09				INT			UNSIGNED
,	IN	_SmeltingLev09				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount09		MEDIUMINT					
,	IN	_CreateStackResultServer09	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx09A				SMALLINT	UNSIGNED		
,	IN	_OptionValue09A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09B				SMALLINT	UNSIGNED		
,	IN	_OptionValue09B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09C				SMALLINT	UNSIGNED		
,	IN	_OptionValue09C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09D				SMALLINT	UNSIGNED		
,	IN	_OptionValue09D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID10			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx10			INT			UNSIGNED	
,	IN	_ReinforceLev10				TINYINT		UNSIGNED	
,	IN	_ReinforceExp10				INT			UNSIGNED
,	IN	_SmeltingLev10				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount10		MEDIUMINT					
,	IN	_CreateStackResultServer10	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx10A				SMALLINT	UNSIGNED		
,	IN	_OptionValue10A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10B				SMALLINT	UNSIGNED		
,	IN	_OptionValue10B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10C				SMALLINT	UNSIGNED		
,	IN	_OptionValue10C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10D				SMALLINT	UNSIGNED		
,	IN	_OptionValue10D				SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _UseStackResultDB	MEDIUMINT

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT
,	OUT _MoneyResultDB03	BIGINT

,	OUT	_CreateStackResultDB01	MEDIUMINT
,	OUT	_CreateStackResultDB02	MEDIUMINT
,	OUT	_CreateStackResultDB03	MEDIUMINT
,	OUT	_CreateStackResultDB04	MEDIUMINT
,	OUT	_CreateStackResultDB05	MEDIUMINT
,	OUT	_CreateStackResultDB06	MEDIUMINT
,	OUT	_CreateStackResultDB07	MEDIUMINT
,	OUT	_CreateStackResultDB08	MEDIUMINT
,	OUT	_CreateStackResultDB09	MEDIUMINT
,	OUT	_CreateStackResultDB10	MEDIUMINT

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _UseStackResultDB = 0, _MoneyResultDB01 = 0, _MoneyResultDB02 = 0, _MoneyResultDB03 = 0, 
		_CreateStackResultDB01 = 0, _CreateStackResultDB02 = 0, _CreateStackResultDB03 = 0, _CreateStackResultDB04 = 0, _CreateStackResultDB05 = 0, 
        _CreateStackResultDB06 = 0, _CreateStackResultDB07 = 0, _CreateStackResultDB08 = 0, _CreateStackResultDB09 = 0, _CreateStackResultDB10 = 0, 
        _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _UseItemUID = 0	THEN
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
		ELSEIF	_StackDecreaseAmount > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount02 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyIncreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount03 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType03, _MoneyIncreaseAmount03, _MoneyResultServer03, _MoneyUpdateTime03, _MoneyResultDB03, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
            -- 아이템 사용
            CALL Item_Delete_DB ( _UseItemUID, _StackDecreaseAmount, _UseStackResultServer, _UseStackResultDB, _Result );
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
			
            -- 아이템 생성
			IF	_CreateItemUID01	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01				, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01			, _SmeltingLev01					
									, _StackIncreaseAmount01	, _CreateStackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B				, _OptionValue01B			
									, _OptionIdx01C				, _OptionValue01C				, _OptionIdx01D		, _OptionValue01D	, _CreateStackResultDB01	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID02	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID02				, _CreateItemIdx02	, _ReinforceLev02	, _ReinforceExp02			, _SmeltingLev02					
									, _StackIncreaseAmount02	, _CreateStackResultServer02	, _OptionIdx02A		, _OptionValue02A	, _OptionIdx02B				, _OptionValue02B			
									, _OptionIdx02C				, _OptionValue02C				, _OptionIdx02D		, _OptionValue02D	, _CreateStackResultDB02	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID03	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID03				, _CreateItemIdx03	, _ReinforceLev03	, _ReinforceExp03			, _SmeltingLev03					
									, _StackIncreaseAmount03	, _CreateStackResultServer03	, _OptionIdx03A		, _OptionValue03A	, _OptionIdx03B				, _OptionValue03B			
									, _OptionIdx03C				, _OptionValue03C				, _OptionIdx03D		, _OptionValue03D	, _CreateStackResultDB03	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID04	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID04				, _CreateItemIdx04	, _ReinforceLev04	, _ReinforceExp04			, _SmeltingLev04					
									, _StackIncreaseAmount04	, _CreateStackResultServer04	, _OptionIdx04A		, _OptionValue04A	, _OptionIdx04B				, _OptionValue04B			
									, _OptionIdx04C				, _OptionValue04C				, _OptionIdx04D		, _OptionValue04D	, _CreateStackResultDB04	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID05	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID05				, _CreateItemIdx05	, _ReinforceLev05	, _ReinforceExp05			, _SmeltingLev05					
									, _StackIncreaseAmount05	, _CreateStackResultServer05	, _OptionIdx05A		, _OptionValue05A	, _OptionIdx05B				, _OptionValue05B			
									, _OptionIdx05C				, _OptionValue05C				, _OptionIdx05D		, _OptionValue05D	, _CreateStackResultDB05	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID06	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID06				, _CreateItemIdx06	, _ReinforceLev06	, _ReinforceExp06			, _SmeltingLev06					
									, _StackIncreaseAmount06	, _CreateStackResultServer06	, _OptionIdx06A		, _OptionValue06A	, _OptionIdx06B				, _OptionValue06B			
									, _OptionIdx06C				, _OptionValue06C				, _OptionIdx06D		, _OptionValue06D	, _CreateStackResultDB06	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID07	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID07				, _CreateItemIdx07	, _ReinforceLev07	, _ReinforceExp07			, _SmeltingLev07					
									, _StackIncreaseAmount07	, _CreateStackResultServer07	, _OptionIdx07A		, _OptionValue07A	, _OptionIdx07B				, _OptionValue07B			
									, _OptionIdx07C				, _OptionValue07C				, _OptionIdx07D		, _OptionValue07D	, _CreateStackResultDB07	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID08	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID08				, _CreateItemIdx08	, _ReinforceLev08	, _ReinforceExp08			, _SmeltingLev08					
									, _StackIncreaseAmount08	, _CreateStackResultServer08	, _OptionIdx08A		, _OptionValue08A	, _OptionIdx08B				, _OptionValue08B			
									, _OptionIdx08C				, _OptionValue08C				, _OptionIdx08D		, _OptionValue08D	, _CreateStackResultDB08	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID09	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID09				, _CreateItemIdx09	, _ReinforceLev09	, _ReinforceExp09			, _SmeltingLev09					
									, _StackIncreaseAmount09	, _CreateStackResultServer09	, _OptionIdx09A		, _OptionValue09A	, _OptionIdx09B				, _OptionValue09B			
									, _OptionIdx09C				, _OptionValue09C				, _OptionIdx09D		, _OptionValue09D	, _CreateStackResultDB09	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID10	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID10				, _CreateItemIdx10	, _ReinforceLev10	, _ReinforceExp10			, _SmeltingLev10					
									, _StackIncreaseAmount10	, _CreateStackResultServer10	, _OptionIdx10A		, _OptionValue10A	, _OptionIdx10B				, _OptionValue10B			
									, _OptionIdx10C				, _OptionValue10C				, _OptionIdx10D		, _OptionValue10D	, _CreateStackResultDB10	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Item_Delete_DB` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Item_Delete_DB`( 
	IN	_ItemUID				BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount	MEDIUMINT
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED

,	OUT _StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _StackResultDB = 0, _Result = -1;
    
	MAIN_ROUTINE:
	BEGIN
		IF		_ItemUID = 0				THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		ELSEIF	_StackDecreaseAmount > 0	THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
		END IF;	
		
        IF	_StackDecreaseAmount = 0	THEN	-- 스택 감소값이 없을 경우 아이템 삭제
			INSERT IGNORE INTO item_delete_tb ( ItemUID, DeleteTime )	VALUE ( _ItemUID, NOW() );
            IF ROW_COUNT() <= 0	THEN SET _Result = 401;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 아이템

		ELSE	-- 스택 감소값이 없을 경우 스택값 변경
			UPDATE item_stack_tb	SET StackCnt = @StackResultDB := StackCnt + _StackDecreaseAmount	WHERE ItemUID = _ItemUID;
            IF ROW_COUNT() <= 0	THEN SET _Result = 405;	LEAVE MAIN_ROUTINE;	END IF;	-- 스택 아이템이 아님
            
            SET	_StackResultDB = @StackResultDB;
            IF	_StackResultDB = 0	THEN	-- StackCnt 가 0이 되었을 경우 아이템 삭제
				INSERT IGNORE INTO item_delete_tb ( ItemUID, DeleteTime )	VALUE ( _ItemUID, NOW() );
				IF ROW_COUNT() <= 0	THEN SET _Result = 401;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 아이템
            
			ELSEIF	_StackResultDB < 0						THEN SET _Result = 403;	LEAVE MAIN_ROUTINE;	-- 아이템 스택 갯수 부족
            ELSEIF	_StackResultDB <> _StackResultServer	THEN SET _Result = 8;	LEAVE MAIN_ROUTINE;	-- 서버와 DB의 값이 다름
			END IF;
        END IF;
		
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Item_Delete_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Item_Delete_Game`( 
	IN	_ItemUID				BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount	MEDIUMINT
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED

,	OUT _StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _StackResultDB = 0, _Result = -1;
    
	MAIN_ROUTINE:
	BEGIN
		START TRANSACTION;
			-- 아이템 삭제
			CALL Item_Delete_DB ( _ItemUID, _StackDecreaseAmount, _StackResultServer, _StackResultDB, _Result );
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;

			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Item_Insert_DB` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Item_Insert_DB`( 
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_ItemUID				BIGINT		UNSIGNED
,	IN	_ItemIdx				INT			UNSIGNED
-- ,	IN	_JewelSlotCnt			TINYINT		UNSIGNED
,	IN	_ReinforceLev			TINYINT		UNSIGNED
,	IN	_ReinforceExp			INT			UNSIGNED
,	IN	_SmeltingLev			TINYINT		UNSIGNED
-- ,	IN	_TranscendenceCnt		TINYINT		UNSIGNED
,	IN	_StackIncreaseAmount	MEDIUMINT	UNSIGNED
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED
/*
,	IN	_JewelSlotColorType01	TINYINT		UNSIGNED
,	IN	_JewelSlotColorType02	TINYINT		UNSIGNED
,	IN	_JewelSlotColorType03	TINYINT		UNSIGNED
,	IN	_JewelSlotColorType04	TINYINT		UNSIGNED
,	IN	_JewelSlotColorType05	TINYINT		UNSIGNED
,	IN	_JewelSlotColorType06	TINYINT		UNSIGNED
*/
,	IN	_OptionIdx01			SMALLINT	UNSIGNED
,	IN	_OptionValue01			SMALLINT	UNSIGNED
,	IN	_OptionIdx02			SMALLINT	UNSIGNED
,	IN	_OptionValue02			SMALLINT	UNSIGNED
,	IN	_OptionIdx03			SMALLINT	UNSIGNED
,	IN	_OptionValue03			SMALLINT	UNSIGNED
,	IN	_OptionIdx04			SMALLINT	UNSIGNED
,	IN	_OptionValue04			SMALLINT	UNSIGNED
-- ,	IN	_TagBuffIdx				MEDIUMINT	UNSIGNED

,	OUT _StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _StackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
	BEGIN
		IF _CharacterUID = 0 OR _ItemUID = 0 OR _ItemIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함

        INSERT IGNORE INTO item_tb ( ItemUID, ItemIdx, IsLock )	VALUES ( _ItemUID, _ItemIdx, 0 );	-- 아이템 기본 데이터
        IF ROW_COUNT() <= 0	THEN	-- 존재하는 아이템일 경우 스택 증가
			UPDATE item_stack_tb	SET StackCnt = @StackResultDB := StackCnt + _StackIncreaseAmount	WHERE ItemUID = _ItemUID;
			IF ROW_COUNT() <= 0	THEN SET _Result = 402;	LEAVE MAIN_ROUTINE;	END IF;	-- 이미 존재하는 아이템
            
            SET	_StackResultDB = @StackResultDB;
            IF _StackResultDB <> _StackResultServer	THEN SET _Result = 8;	LEAVE MAIN_ROUTINE;	END IF;	-- 서버와 DB의 값이 다름
            
        ELSE
			INSERT INTO	item_character_tb ( ItemUID, CharacterUID )	VALUES ( _ItemUID, _CharacterUID );	-- 아이템 소유자
			
--          IF	_JewelSlotCnt > 0	THEN INSERT INTO item_jewelslot_tb ( ItemUID, JewelSlotCnt )	VALUES ( _ItemUID, _JewelSlotCnt );	END IF;	-- 보석 슬롯수
/*          IF	_JewelSlotColorType01 > 0	THEN INSERT INTO item_jewel_tb ( ItemUID, JewelSlot, JewelSlotColorType, JewelItemIdx )	VALUES ( _ItemUID, 1, _JewelSlotColorType01, 0 );	END IF;	-- 보석 슬롯
            IF	_JewelSlotColorType02 > 0	THEN INSERT INTO item_jewel_tb ( ItemUID, JewelSlot, JewelSlotColorType, JewelItemIdx )	VALUES ( _ItemUID, 2, _JewelSlotColorType02, 0 );	END IF;
            IF	_JewelSlotColorType03 > 0	THEN INSERT INTO item_jewel_tb ( ItemUID, JewelSlot, JewelSlotColorType, JewelItemIdx )	VALUES ( _ItemUID, 3, _JewelSlotColorType03, 0 );	END IF;
            IF	_JewelSlotColorType04 > 0	THEN INSERT INTO item_jewel_tb ( ItemUID, JewelSlot, JewelSlotColorType, JewelItemIdx )	VALUES ( _ItemUID, 4, _JewelSlotColorType04, 0 );	END IF;
            IF	_JewelSlotColorType05 > 0	THEN INSERT INTO item_jewel_tb ( ItemUID, JewelSlot, JewelSlotColorType, JewelItemIdx )	VALUES ( _ItemUID, 5, _JewelSlotColorType05, 0 );	END IF;
            IF	_JewelSlotColorType06 > 0	THEN INSERT INTO item_jewel_tb ( ItemUID, JewelSlot, JewelSlotColorType, JewelItemIdx )	VALUES ( _ItemUID, 6, _JewelSlotColorType06, 0 );	END IF;
*/            
			IF	_OptionIdx01 > 0	THEN INSERT INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, 1, _OptionIdx01, _OptionValue01 );	END IF;	-- 랜덤옵션
			IF	_OptionIdx02 > 0	THEN INSERT INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, 2, _OptionIdx02, _OptionValue02 );	END IF;
			IF	_OptionIdx03 > 0	THEN INSERT INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, 3, _OptionIdx03, _OptionValue03 );	END IF;
			IF	_OptionIdx04 > 0	THEN INSERT INTO item_option_tb ( ItemUID, OptionSlot, OptionIdx, OptionValue )	VALUES ( _ItemUID, 4, _OptionIdx04, _OptionValue04 );	END IF;
			
			IF	_ReinforceLev > 0 OR _ReinforceExp > 0	THEN INSERT INTO item_reinforce_tb( ItemUID, ReinforceLev, ReinforceExp )	VALUES ( _ItemUID, _ReinforceLev, _ReinforceExp );	END IF;	-- 레벨, 경험치
            IF	_SmeltingLev > 0			THEN INSERT INTO item_smelting_tb ( ItemUID, SmeltingLev )	VALUES ( _ItemUID, _SmeltingLev );	END IF;		-- 강화 레벨
			IF	_StackIncreaseAmount > 0	THEN INSERT INTO item_stack_tb ( ItemUID, StackCnt )	VALUES ( _ItemUID, _StackIncreaseAmount );	END IF;		-- 스택 갯수
-- 			IF	_TagBuffIdx > 0				THEN INSERT INTO item_tagbuff_tb ( ItemUID, TagBuffIdx )	VALUES ( _ItemUID, _TagBuffIdx );	END IF;			-- 스킬
-- 			IF	_TranscendenceCnt > 0		THEN INSERT INTO item_transcendence_tb ( ItemUID, TranscendenceCnt )	VALUES ( _ItemUID, _TranscendenceCnt );	END IF;	-- 초월 횟수
            
            SET	_StackResultDB = _StackIncreaseAmount;
		END IF;        
		
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Item_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Item_Insert_Game`( 
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_ItemUID				BIGINT		UNSIGNED
,	IN	_ItemIdx				INT			UNSIGNED
,	IN	_ReinforceLev			TINYINT		UNSIGNED
,	IN	_ReinforceExp			INT			UNSIGNED
,	IN	_SmeltingLev			TINYINT		UNSIGNED
,	IN	_StackIncreaseAmount	MEDIUMINT	UNSIGNED
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED

,	IN	_OptionIdx01			SMALLINT	UNSIGNED
,	IN	_OptionValue01			SMALLINT	UNSIGNED
,	IN	_OptionIdx02			SMALLINT	UNSIGNED
,	IN	_OptionValue02			SMALLINT	UNSIGNED
,	IN	_OptionIdx03			SMALLINT	UNSIGNED
,	IN	_OptionValue03			SMALLINT	UNSIGNED
,	IN	_OptionIdx04			SMALLINT	UNSIGNED
,	IN	_OptionValue04			SMALLINT	UNSIGNED

,	OUT _StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
		ROLLBACK;
	END;
    
    SET _StackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		START TRANSACTION;
        	-- 아이템 생성
			CALL Item_Insert_DB 
				( _CharacterUID		, _ItemUID			, _ItemIdx		, _ReinforceLev		, _ReinforceExp	, _SmeltingLev		, _StackIncreaseAmount	, _StackResultServer
                , _OptionIdx01		, _OptionValue01	, _OptionIdx02	, _OptionValue02	, _OptionIdx03	, _OptionValue03	, _OptionIdx04			, _OptionValue04	
                , _StackResultDB	, _Result 			);
			IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;

			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `JewelEquip_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `JewelEquip_Update_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
-- ,	IN	_MoneyType				TINYINT	UNSIGNED
-- ,	IN	_MoneyDecreaseAmount	BIGINT
-- ,	IN	_MoneyResultServer		BIGINT	UNSIGNED
-- ,	IN	_MoneyUpdateTime		INT		UNSIGNED
,	IN	_JewelEquipItemUID		BIGINT	UNSIGNED
-- ,	IN	_EquipSlot				TINYINT		UNSIGNED
,	IN	_JewelSlot01			TINYINT	UNSIGNED	
,	IN	_JewelItemIdx01			INT		UNSIGNED
,	IN	_JewelSlot02			TINYINT	UNSIGNED	
,	IN	_JewelItemIdx02			INT		UNSIGNED
,	IN	_JewelSlot03			TINYINT	UNSIGNED	
,	IN	_JewelItemIdx03			INT		UNSIGNED
,	IN	_JewelSlot04			TINYINT	UNSIGNED	
,	IN	_JewelItemIdx04			INT		UNSIGNED
,	IN	_JewelSlot05			TINYINT	UNSIGNED	
,	IN	_JewelItemIdx05			INT		UNSIGNED

,	IN	_DeleteItemUID01		BIGINT		UNSIGNED		
,	IN	_StackDecreaseAmount01	MEDIUMINT					
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED				
,	IN	_DeleteItemUID02		BIGINT		UNSIGNED		
,	IN	_StackDecreaseAmount02	MEDIUMINT					
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED				
,	IN	_DeleteItemUID03		BIGINT		UNSIGNED		
,	IN	_StackDecreaseAmount03	MEDIUMINT					
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED				
,	IN	_DeleteItemUID04		BIGINT		UNSIGNED		
,	IN	_StackDecreaseAmount04	MEDIUMINT					
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED				
,	IN	_DeleteItemUID05		BIGINT		UNSIGNED		
,	IN	_StackDecreaseAmount05	MEDIUMINT					
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED				

-- ,	OUT _MoneyResultDB		BIGINT
,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT
,	OUT	_StackResultDB03	MEDIUMINT
,	OUT	_StackResultDB04	MEDIUMINT
,	OUT	_StackResultDB05	MEDIUMINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	/*_MoneyResultDB = 0, */ _StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _JewelEquipItemUID = 0 OR _JewelSlot01 = 0 OR _JewelItemIdx01 = 0 OR _DeleteItemUID01 = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
		ELSEIF	_StackDecreaseAmount01 >= 0 OR _StackDecreaseAmount02 > 0 OR _StackDecreaseAmount03 > 0 OR _StackDecreaseAmount04 > 0 OR _StackDecreaseAmount05 > 0
			/*OR 	_MoneyDecreaseAmount > 0*/	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 차감
/*			IF	_MoneyDecreaseAmount < 0	THEN	
				CALL Money_Update_DB( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;
*/            
            -- 보석 장착
-- 			UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot;
-- 			IF ROW_COUNT() <= 0	THEN
-- 			END IF;
				UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx01	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot01;
                IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_jewel_tb ( ItemUID, JewelSlot, JewelItemIdx )	VALUE ( _JewelEquipItemUID, _JewelSlot01, _JewelItemIdx01 );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            IF	_JewelSlot02	> 0	THEN						
				UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx02	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot02;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_jewel_tb ( ItemUID, JewelSlot, JewelItemIdx )	VALUE ( _JewelEquipItemUID, _JewelSlot02, _JewelItemIdx02 );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;									
            IF	_JewelSlot03	> 0	THEN						
				UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx03	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot03;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_jewel_tb ( ItemUID, JewelSlot, JewelItemIdx )	VALUE ( _JewelEquipItemUID, _JewelSlot03, _JewelItemIdx03 );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;									
            IF	_JewelSlot04	> 0	THEN						
				UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx04	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot04;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_jewel_tb ( ItemUID, JewelSlot, JewelItemIdx )	VALUE ( _JewelEquipItemUID, _JewelSlot04, _JewelItemIdx04 );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;									
            IF	_JewelSlot05	> 0	THEN						
				UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx05	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot05;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO item_jewel_tb ( ItemUID, JewelSlot, JewelItemIdx )	VALUE ( _JewelEquipItemUID, _JewelSlot05, _JewelItemIdx05 );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;									
         
            -- 아이템 사용
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID01	, 0, _StackDecreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );										
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            IF	_DeleteItemUID02	> 0	THEN												
            	CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID02	, 0, _StackDecreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );										
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;									
            END IF;															
            IF	_DeleteItemUID03	> 0	THEN												
            	CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID03	, 0, _StackDecreaseAmount03	, _StackResultServer03	, _StackResultDB03	, _Result );										
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;									
            END IF;															
            IF	_DeleteItemUID04	> 0	THEN												
            	CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID04	, 0, _StackDecreaseAmount04	, _StackResultServer04	, _StackResultDB04	, _Result );										
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;									
            END IF;															
            IF	_DeleteItemUID05	> 0	THEN												
            	CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID05	, 0, _StackDecreaseAmount05	, _StackResultServer05	, _StackResultDB05	, _Result );										
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;									
            END IF;															
			
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `JewelExtraction_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `JewelExtraction_Update_Game`(
	IN	_CharacterUID		BIGINT	UNSIGNED
-- ,	IN	_MoneyType				TINYINT		UNSIGNED
-- ,	IN	_MoneyDecreaseAmount	BIGINT
-- ,	IN	_MoneyResultServer		BIGINT		UNSIGNED
-- ,	IN	_MoneyUpdateTime		INT			UNSIGNED
,	IN	_JewelEquipItemUID	BIGINT	UNSIGNED	
,	IN	_JewelSlot01		TINYINT	UNSIGNED
,	IN	_JewelSlot02		TINYINT	UNSIGNED
,	IN	_JewelSlot03		TINYINT	UNSIGNED
,	IN	_JewelSlot04		TINYINT	UNSIGNED
,	IN	_JewelSlot05		TINYINT	UNSIGNED

,	IN	_CreateItemUID01		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx01		INT			UNSIGNED
,	IN	_StackIncreaseAmount01	MEDIUMINT				
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID02		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx02		INT			UNSIGNED
,	IN	_StackIncreaseAmount02	MEDIUMINT				
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID03		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx03		INT			UNSIGNED
,	IN	_StackIncreaseAmount03	MEDIUMINT				
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID04		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx04		INT			UNSIGNED
,	IN	_StackIncreaseAmount04	MEDIUMINT				
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED			
,	IN	_CreateItemUID05		BIGINT		UNSIGNED	
,	IN	_CreateItemIdx05		INT			UNSIGNED
,	IN	_StackIncreaseAmount05	MEDIUMINT				
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED			

-- ,	OUT _MoneyResultDB	BIGINT
,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT
,	OUT	_StackResultDB03	MEDIUMINT
,	OUT	_StackResultDB04	MEDIUMINT
,	OUT	_StackResultDB05	MEDIUMINT
,	OUT	_Result				INT

)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	/*_MoneyResultDB = 0, */ _StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _JewelEquipItemUID = 0 
        OR	( _JewelSlot01 = 0 				AND _JewelSlot02 = 0 			AND _JewelSlot03 = 0 			AND _JewelSlot04 = 0 			AND _JewelSlot05 = 0 			) 
        OR 	( _CreateItemUID01 = 0 			AND _CreateItemUID02 = 0 		AND _CreateItemUID03 = 0 		AND _CreateItemUID04 = 0 		AND _CreateItemUID05 = 0 		)	
        OR	( _StackIncreaseAmount01 = 0 	AND _StackIncreaseAmount02 = 0 	AND _StackIncreaseAmount03 = 0 	AND _StackIncreaseAmount04 = 0 	AND _StackIncreaseAmount05 = 0	)	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
		ELSEIF	_StackIncreaseAmount01 < 0 OR _StackIncreaseAmount02 < 0 OR _StackIncreaseAmount03 < 0 OR _StackIncreaseAmount04 < 0 OR _StackIncreaseAmount05 < 0 /*OR _MoneyDecreaseAmount >= 0*/	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
/*			-- 재화 차감
			CALL Money_Update_DB( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
			IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
*/            
            -- 보석 삭제
            IF	_JewelSlot01	> 0	THEN
				UPDATE item_jewel_tb	SET JewelItemIdx = 0	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot01;
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			END IF;
            IF	_JewelSlot02	> 0	THEN
				UPDATE item_jewel_tb	SET JewelItemIdx = 0	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot02;
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
			IF	_JewelSlot03	> 0	THEN
				UPDATE item_jewel_tb	SET JewelItemIdx = 0	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot03;
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
			IF	_JewelSlot04	> 0	THEN
				UPDATE item_jewel_tb	SET JewelItemIdx = 0	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot04;
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
            IF	_JewelSlot05	> 0	THEN
				UPDATE item_jewel_tb	SET JewelItemIdx = 0	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot05;
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
            
			-- 아이템 스택 변경
            IF	_CreateItemUID01	> 0	THEN								
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID01	, _CreateItemIdx01	, _StackIncreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
			END IF;								
            IF	_CreateItemUID02	> 0	THEN								
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID02	, _CreateItemIdx02	, _StackIncreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
			END IF;								
            IF	_CreateItemUID03	> 0	THEN								
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID03	, _CreateItemIdx03	, _StackIncreaseAmount03	, _StackResultServer03	, _StackResultDB03	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
			END IF;								
            IF	_CreateItemUID04	> 0	THEN								
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID04	, _CreateItemIdx04	, _StackIncreaseAmount04	, _StackResultServer04	, _StackResultDB04	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
			END IF;								
            IF	_CreateItemUID05	> 0	THEN								
				CALL ItemStack_Update_DB ( _CharacterUID, _CreateItemUID05	, _CreateItemIdx05	, _StackIncreaseAmount05	, _StackResultServer05	, _StackResultDB05	, _Result );	
				IF	_Result != 0 	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;			
			END IF;								

			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `JewelUpgrade_Inven_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `JewelUpgrade_Inven_Update_Game`(
	IN	_CharacterUID				BIGINT		UNSIGNED
,	IN	_MoneyType					TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount		BIGINT
,	IN	_MoneyResultServer			BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime			INT			UNSIGNED
,	IN	_CreateItemUID				BIGINT		UNSIGNED
,	IN	_CreateItemIdx				INT			UNSIGNED	
,	IN	_StackIncreaseAmount		MEDIUMINT					
,	IN	_CreateStackResultServer	MEDIUMINT	UNSIGNED
,	IN	_DeleteItemUID				BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount		MEDIUMINT				
,	IN	_DeleteStackResultServer	MEDIUMINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB			BIGINT
,	OUT _CreateStackResultDB	MEDIUMINT
,	OUT _DeleteStackResultDB	MEDIUMINT
,	OUT	_Result					INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB = 0, _CreateStackResultDB = 0, _DeleteStackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _CreateItemUID = 0 OR _DeleteItemUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount >= 0 OR _StackIncreaseAmount <= 0 OR _StackDecreaseAmount >= 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;

			-- 아이템 삭제
			CALL Item_Delete_DB ( _DeleteItemUID, _StackDecreaseAmount, _DeleteStackResultServer, _DeleteStackResultDB, _Result );	
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
			
            -- 아이템 생성
			CALL Item_Insert_DB	( _CharacterUID, _CreateItemUID, _CreateItemIdx, 0, 0, 0, _StackIncreaseAmount, _CreateStackResultServer, 0, 0, 0, 0, 0, 0, 0, 0, _CreateStackResultDB, _Result );												
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;												
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `JewelUpgrade_JewelSlot_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `JewelUpgrade_JewelSlot_Update_Game`( 
	IN	_CharacterUID				BIGINT		UNSIGNED
,	IN	_MoneyType					TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount		BIGINT
,	IN	_MoneyResultServer			BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime			INT			UNSIGNED
,	IN	_JewelEquipItemUID			BIGINT		UNSIGNED
,	IN	_JewelSlot					TINYINT		UNSIGNED
,	IN	_JewelItemIdx				INT			UNSIGNED
,	IN	_DeleteItemUID				BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount		MEDIUMINT				
,	IN	_DeleteStackResultServer	MEDIUMINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB			BIGINT
,	OUT _DeleteStackResultDB	MEDIUMINT
,	OUT	_Result					INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB = 0, _DeleteStackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _JewelEquipItemUID = 0 OR _JewelSlot = 0 OR _JewelItemIdx = 0 OR _DeleteItemUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount >= 0 OR _StackDecreaseAmount >= 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;

			-- 아이템 삭제
			CALL Item_Delete_DB ( _DeleteItemUID, _StackDecreaseAmount, _DeleteStackResultServer, _DeleteStackResultDB, _Result );	
            IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            
            -- 보석 변경
            UPDATE item_jewel_tb	SET JewelItemIdx = _JewelItemIdx	WHERE ItemUID = _JewelEquipItemUID AND JewelSlot = _JewelSlot;
            IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `MailAll_Delete_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `MailAll_Delete_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
    
,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	
        
        -- 우편 삭제
		UPDATE			mail_tb			AS MA
        LEFT OUTER JOIN	mail_itemidx_tb	AS II ON II.MailUID = MA.MailUID
        LEFT OUTER JOIN	mail_itemuid_tb	AS IU ON IU.MailUID = MA.MailUID
        LEFT OUTER JOIN	mail_money_tb	AS MM ON MM.MailUID = MA.MailUID
        SET		MA.Deleted = 1
        WHERE	MA.ReceiveCharacterUID = _CharacterUID AND II.MailUID IS NULL AND IU.MailUID IS NULL AND MM.MailUID IS NULL AND MA.ExpiryTime > NOW() AND MA.Deleted = 0;
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `MailAttachGet_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `MailAttachGet_Insert_Game`(
	IN	_MailUID		BIGINT	UNSIGNED
,	IN	_CharacterUID	BIGINT	UNSIGNED

,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED
,	IN	_MoneyType03			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount03	BIGINT
,	IN	_MoneyResultServer03	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime03		INT		UNSIGNED
,	IN	_MoneyType04			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount04	BIGINT
,	IN	_MoneyResultServer04	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime04		INT		UNSIGNED
,	IN	_MoneyType05			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount05	BIGINT
,	IN	_MoneyResultServer05	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime05		INT		UNSIGNED

,	IN	_CreateItemUID01			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01			INT			UNSIGNED	
,	IN	_ReinforceLev01				TINYINT		UNSIGNED	
,	IN	_ReinforceExp01				INT			UNSIGNED
,	IN	_SmeltingLev01				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01		MEDIUMINT					
,	IN	_CreateStackResultServer01	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx01A				SMALLINT	UNSIGNED		
,	IN	_OptionValue01A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B				SMALLINT	UNSIGNED		
,	IN	_OptionValue01B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C				SMALLINT	UNSIGNED		
,	IN	_OptionValue01C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D				SMALLINT	UNSIGNED		
,	IN	_OptionValue01D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID02			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx02			INT			UNSIGNED	
,	IN	_ReinforceLev02				TINYINT		UNSIGNED	
,	IN	_ReinforceExp02				INT			UNSIGNED
,	IN	_SmeltingLev02				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount02		MEDIUMINT					
,	IN	_CreateStackResultServer02	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx02A				SMALLINT	UNSIGNED		
,	IN	_OptionValue02A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02B				SMALLINT	UNSIGNED		
,	IN	_OptionValue02B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02C				SMALLINT	UNSIGNED		
,	IN	_OptionValue02C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02D				SMALLINT	UNSIGNED		
,	IN	_OptionValue02D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID03			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx03			INT			UNSIGNED	
,	IN	_ReinforceLev03				TINYINT		UNSIGNED	
,	IN	_ReinforceExp03				INT			UNSIGNED
,	IN	_SmeltingLev03				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount03		MEDIUMINT					
,	IN	_CreateStackResultServer03	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx03A				SMALLINT	UNSIGNED		
,	IN	_OptionValue03A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03B				SMALLINT	UNSIGNED		
,	IN	_OptionValue03B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03C				SMALLINT	UNSIGNED		
,	IN	_OptionValue03C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03D				SMALLINT	UNSIGNED		
,	IN	_OptionValue03D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID04			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx04			INT			UNSIGNED	
,	IN	_ReinforceLev04				TINYINT		UNSIGNED	
,	IN	_ReinforceExp04				INT			UNSIGNED
,	IN	_SmeltingLev04				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount04		MEDIUMINT					
,	IN	_CreateStackResultServer04	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx04A				SMALLINT	UNSIGNED		
,	IN	_OptionValue04A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04B				SMALLINT	UNSIGNED		
,	IN	_OptionValue04B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04C				SMALLINT	UNSIGNED		
,	IN	_OptionValue04C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04D				SMALLINT	UNSIGNED		
,	IN	_OptionValue04D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID05			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx05			INT			UNSIGNED	
,	IN	_ReinforceLev05				TINYINT		UNSIGNED	
,	IN	_ReinforceExp05				INT			UNSIGNED
,	IN	_SmeltingLev05				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount05		MEDIUMINT					
,	IN	_CreateStackResultServer05	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx05A				SMALLINT	UNSIGNED		
,	IN	_OptionValue05A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05B				SMALLINT	UNSIGNED		
,	IN	_OptionValue05B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05C				SMALLINT	UNSIGNED		
,	IN	_OptionValue05C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05D				SMALLINT	UNSIGNED		
,	IN	_OptionValue05D				SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	IN	_ReceiveItemUID01	BIGINT	UNSIGNED
,	IN	_ReceiveItemUID02	BIGINT	UNSIGNED
,	IN	_ReceiveItemUID03	BIGINT	UNSIGNED
,	IN	_ReceiveItemUID04	BIGINT	UNSIGNED
,	IN	_ReceiveItemUID05	BIGINT	UNSIGNED

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT
,	OUT _MoneyResultDB03	BIGINT
,	OUT _MoneyResultDB04	BIGINT
,	OUT _MoneyResultDB05	BIGINT

,	OUT	_CreateStackResultDB01	MEDIUMINT
,	OUT	_CreateStackResultDB02	MEDIUMINT
,	OUT	_CreateStackResultDB03	MEDIUMINT
,	OUT	_CreateStackResultDB04	MEDIUMINT
,	OUT	_CreateStackResultDB05	MEDIUMINT

,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
	
    SET	_MoneyResultDB01 = 0		, _MoneyResultDB02 = 0		, _MoneyResultDB03 = 0		, _MoneyResultDB04 = 0		, _MoneyResultDB05 = 0
	, 	_CreateStackResultDB01 = 0	, _CreateStackResultDB02 = 0, _CreateStackResultDB03 = 0, _CreateStackResultDB04 = 0, _CreateStackResultDB05 = 0
    , 	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _MailUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		
        ELSEIF	_MoneyIncreaseAmount01 < 0 OR _MoneyIncreaseAmount02 < 0 OR _MoneyIncreaseAmount03 < 0 OR _MoneyIncreaseAmount04 < 0 OR _MoneyIncreaseAmount05 < 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	

		START TRANSACTION;
            -- 재화 변경
			IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount02 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyIncreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount03 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType03, _MoneyIncreaseAmount03, _MoneyResultServer03, _MoneyUpdateTime03, _MoneyResultDB03, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;

            -- 생성된 아이템 받기
            IF	_ReceiveItemUID01	> 0	THEN				
				INSERT IGNORE INTO item_character_tb ( ItemUID, CharacterUID )	VALUES ( _ReceiveItemUID01	, _CharacterUID );	
                IF ROW_COUNT() <= 0	THEN SET _Result = 402;	ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;				
            END IF;							
							
            IF	_ReceiveItemUID02	> 0	THEN				
				INSERT IGNORE INTO item_character_tb ( ItemUID, CharacterUID )	VALUES ( _ReceiveItemUID02	, _CharacterUID );	
                IF ROW_COUNT() <= 0	THEN SET _Result = 402;	ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;				
            END IF;							
							
            IF	_ReceiveItemUID03	> 0	THEN				
				INSERT IGNORE INTO item_character_tb ( ItemUID, CharacterUID )	VALUES ( _ReceiveItemUID03	, _CharacterUID );	
                IF ROW_COUNT() <= 0	THEN SET _Result = 402;	ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;				
            END IF;							
							
            IF	_ReceiveItemUID04	> 0	THEN				
				INSERT IGNORE INTO item_character_tb ( ItemUID, CharacterUID )	VALUES ( _ReceiveItemUID04	, _CharacterUID );	
                IF ROW_COUNT() <= 0	THEN SET _Result = 402;	ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;				
            END IF;							
							
            IF	_ReceiveItemUID05	> 0	THEN				
				INSERT IGNORE INTO item_character_tb ( ItemUID, CharacterUID )	VALUES ( _ReceiveItemUID05	, _CharacterUID );	
                IF ROW_COUNT() <= 0	THEN SET _Result = 402;	ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;				
            END IF;							
							
			-- 아이템 생성
			IF	_CreateItemUID01	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01				, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01			, _SmeltingLev01					
									, _StackIncreaseAmount01	, _CreateStackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B				, _OptionValue01B			
									, _OptionIdx01C				, _OptionValue01C				, _OptionIdx01D		, _OptionValue01D	, _CreateStackResultDB01	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID02	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID02				, _CreateItemIdx02	, _ReinforceLev02	, _ReinforceExp02			, _SmeltingLev02					
									, _StackIncreaseAmount02	, _CreateStackResultServer02	, _OptionIdx02A		, _OptionValue02A	, _OptionIdx02B				, _OptionValue02B			
									, _OptionIdx02C				, _OptionValue02C				, _OptionIdx02D		, _OptionValue02D	, _CreateStackResultDB02	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID03	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID03				, _CreateItemIdx03	, _ReinforceLev03	, _ReinforceExp03			, _SmeltingLev03					
									, _StackIncreaseAmount03	, _CreateStackResultServer03	, _OptionIdx03A		, _OptionValue03A	, _OptionIdx03B				, _OptionValue03B			
									, _OptionIdx03C				, _OptionValue03C				, _OptionIdx03D		, _OptionValue03D	, _CreateStackResultDB03	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID04	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID04				, _CreateItemIdx04	, _ReinforceLev04	, _ReinforceExp04			, _SmeltingLev04					
									, _StackIncreaseAmount04	, _CreateStackResultServer04	, _OptionIdx04A		, _OptionValue04A	, _OptionIdx04B				, _OptionValue04B			
									, _OptionIdx04C				, _OptionValue04C				, _OptionIdx04D		, _OptionValue04D	, _CreateStackResultDB04	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID05	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID05				, _CreateItemIdx05	, _ReinforceLev05	, _ReinforceExp05			, _SmeltingLev05					
									, _StackIncreaseAmount05	, _CreateStackResultServer05	, _OptionIdx05A		, _OptionValue05A	, _OptionIdx05B				, _OptionValue05B			
									, _OptionIdx05C				, _OptionValue05C				, _OptionIdx05D		, _OptionValue05D	, _CreateStackResultDB05	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
            
            -- 우편 삭제
            UPDATE mail_tb	SET Deleted = 1	WHERE MailUID = _MailUID AND ReceiveCharacterUID = _CharacterUID AND Deleted = 0;
            IF ROW_COUNT() <= 0	THEN SET _Result = 1;	ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `MailList_Get_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `MailList_Get_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_RecentMailUID	BIGINT	UNSIGNED
,   IN	_LastMailUID	BIGINT	UNSIGNED
,	IN	_CntPerPage		TINYINT	UNSIGNED

,	OUT	_TotalCnt	SMALLINT	UNSIGNED
,	OUT	_Result		INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _TotalCnt = 0, _Result = -1;
    
	MAIN_ROUTINE:
	BEGIN
		IF _CharacterUID = 0 OR _CntPerPage = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
        -- 보유 우편 갯수
        SELECT	COUNT(*)
        INTO	_TotalCnt
        FROM	mail_tb
        WHERE	ReceiveCharacterUID = _CharacterUID AND ExpiryTime > NOW() AND Deleted = 0;
        
        -- 요청 MailUID 이전 우편 리스트 
        CREATE TEMPORARY TABLE mail_tmp
        SELECT	MailUID, SenderIdx, TitleIdx, TitleText, MailRead, UNIX_TIMESTAMP(ExpiryTime) AS ExpiryTime
        FROM	mail_tb
        WHERE (	MailUID < CASE WHEN _LastMailUID = 0 THEN MailUID + 1 ELSE _LastMailUID END OR MailUID > _RecentMailUID ) 
			AND ReceiveCharacterUID = _CharacterUID AND ExpiryTime > NOW() AND Deleted = 0
        ORDER BY	MailUID DESC
        LIMIT	_CntPerPage;
		
        SELECT * FROM mail_tmp;
        
        -- 첨부 아이템 (수령시 생성될 아이템)
        SELECT	MI.MailUID, MI.ItemIdx, MI.StackCnt
        FROM		mail_tmp		AS MA
        INNER JOIN	mail_itemidx_tb	AS MI ON MI.MailUID = MA.MailUID;

		
        -- 첨부 아이템 (이미 생성된 아이템)
        CREATE TEMPORARY TABLE	item_tmp
        SELECT	MI.MailUID, MI.ItemUID, IT.ItemIdx	
        FROM			mail_tmp		AS MA
        INNER JOIN		mail_itemuid_tb	AS MI ON MI.MailUID = MA.MailUID
        INNER JOIN		item_tb			AS IT ON IT.ItemUID = MI.ItemUID
        LEFT OUTER JOIN	item_delete_tb	AS ID ON ID.ItemUID = IT.ItemUID
        WHERE	ID.ItemUID IS NULL;
        
		SELECT	IT.MailUID, IT.ItemUID, IT.ItemIdx
            , 	IFNULL( IR.ReinforceLev, 1 ) AS ReinforceLev
			, 	IFNULL( IR.ReinforceExp, 0 ) AS ReinforceExp
            , 	IFNULL( SM.SmeltingLev, 0 ) AS SmeltingLev
            , 	IFNULL( ST.StackCnt, 0 ) AS StackCnt
        FROM			item_tmp			AS IT 
        LEFT OUTER JOIN	item_reinforce_tb	AS IR ON IR.ItemUID = IT.ItemUID
        LEFT OUTER JOIN	item_smelting_tb	AS SM ON SM.ItemUID = IT.ItemUID
        LEFT OUTER JOIN	item_stack_tb		AS ST ON ST.ItemUID = IT.ItemUID;
		
        -- 아이템 착용 보석
		SELECT	IT.ItemUID, IJ.JewelSlot, IJ.JewelItemIdx
        FROM		item_tmp		AS IT 
        INNER JOIN	item_jewel_tb	AS IJ ON IJ.ItemUID = IT.ItemUID;

        -- 아이템 랜덤 옵션
		SELECT	IT.ItemUID, OP.OptionSlot, OP.OptionIdx, OP.OptionValue
        FROM		item_tmp		AS IT 
        INNER JOIN	item_option_tb	AS OP ON OP.ItemUID = IT.ItemUID;

        -- 아이템 연마 단계
        SELECT	IT.ItemUID, IP.PolishingSlot, IP.PolishingCnt
        FROM		item_tmp			AS IT 
        INNER JOIN	item_polishing_tb	AS IP ON IP.ItemUID = IT.ItemUID;
        
        DROP TEMPORARY TABLE item_tmp;

        
        -- 첨부 재화
        SELECT	MM.MailUID, MM.MoneyType, MM.Money
        FROM		mail_tmp		AS MA
        INNER JOIN	mail_money_tb	AS MM ON MM.MailUID = MA.MailUID;
        
        DROP TEMPORARY TABLE mail_tmp;

		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `MailRead_Get_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `MailRead_Get_Game`(
	IN	_MailUID	BIGINT	UNSIGNED
    
,	OUT _ContentsIdx	SMALLINT	UNSIGNED
,	OUT	_ContentsText	VARCHAR(300)
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _ContentsIdx = 0, _ContentsText = '', _Result = -1;
    
	MAIN_ROUTINE:
	BEGIN
		IF _MailUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
		UPDATE 	mail_tb	
        SET 	MailRead = 1, ContentsIdx = @ContentsIdx := ContentsIdx, ContentsText = @ContentsText := ContentsText	
        WHERE 	MailUID = _MailUID;
        
        SET	_ContentsIdx = @ContentsIdx, _ContentsText = @ContentsText;
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Mail_Delete_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Mail_Delete_Game`(
	IN	_MailUID	BIGINT	UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_MailUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	
        
        -- 우편 삭제
        UPDATE mail_tb	SET Deleted = 1	WHERE MailUID = _MailUID AND ExpiryTime > NOW() AND Deleted = 0;
        IF ROW_COUNT() <= 0	THEN SET _Result = 1;	ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Mail_Insert_DB` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Mail_Insert_DB`(
	IN	_ReceiveCharacterUID	BIGINT		UNSIGNED
,	IN	_SenderIdx				SMALLINT	UNSIGNED
,	IN	_TitleIdx				SMALLINT	UNSIGNED
,	IN	_ContentsIdx			SMALLINT	UNSIGNED
,	IN	_ExpiryTime				INT			UNSIGNED
,	IN	_TitleText				VARCHAR(36)
,	IN	_ContentsText			VARCHAR(300)

,	IN	_ItemIdx01		INT			UNSIGNED
,	IN	_StackCnt01		MEDIUMINT	UNSIGNED
,	IN	_ItemIdx02		INT			UNSIGNED
,	IN	_StackCnt02		MEDIUMINT	UNSIGNED
,	IN	_ItemIdx03		INT			UNSIGNED
,	IN	_StackCnt03		MEDIUMINT	UNSIGNED
,	IN	_ItemIdx04		INT			UNSIGNED
,	IN	_StackCnt04		MEDIUMINT	UNSIGNED
,	IN	_ItemIdx05		INT			UNSIGNED
,	IN	_StackCnt05		MEDIUMINT	UNSIGNED

,	IN	_ItemUID01	BIGINT	UNSIGNED
,	IN	_ItemUID02	BIGINT	UNSIGNED
,	IN	_ItemUID03	BIGINT	UNSIGNED
,	IN	_ItemUID04	BIGINT	UNSIGNED
,	IN	_ItemUID05	BIGINT	UNSIGNED

,	IN	_MoneyType01	TINYINT	UNSIGNED
,	IN	_Money01		BIGINT	UNSIGNED
,	IN	_MoneyType02	TINYINT	UNSIGNED
,	IN	_Money02		BIGINT	UNSIGNED
,	IN	_MoneyType03	TINYINT	UNSIGNED
,	IN	_Money03		BIGINT	UNSIGNED
,	IN	_MoneyType04	TINYINT	UNSIGNED
,	IN	_Money04		BIGINT	UNSIGNED
,	IN	_MoneyType05	TINYINT	UNSIGNED
,	IN	_Money05		BIGINT	UNSIGNED

-- ,	OUT	@MailUID	BIGINT
,	OUT	_Result		INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
    
	MAIN_ROUTINE:
	BEGIN
		IF _ReceiveCharacterUID = 0 OR _SenderIdx = 0 OR _ExpiryTime = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
        -- 우편 기본 데이터
		INSERT INTO mail_tb
				( ReceiveCharacterUID	, SenderIdx	, TitleIdx	, ContentsIdx	, ExpiryTime				, TitleText	, ContentsText	)
		VALUES	( _ReceiveCharacterUID	, _SenderIdx, _TitleIdx	, _ContentsIdx	, FROM_UNIXTIME(_ExpiryTime), _TitleText, _ContentsText	);
        SET	@MailUID := LAST_INSERT_ID();
		
        -- 첨부 아이템 (수령시 생성될 아이템)
        IF	_ItemIdx01	> 0	THEN INSERT INTO mail_itemidx_tb ( MailUID, AttachSlot, ItemIdx, StackCnt )	VALUES ( @MailUID, 1	, _ItemIdx01	, _StackCnt01	);	END IF;					
        IF	_ItemIdx02	> 0	THEN INSERT INTO mail_itemidx_tb ( MailUID, AttachSlot, ItemIdx, StackCnt )	VALUES ( @MailUID, 2	, _ItemIdx02	, _StackCnt02	);	END IF;				
		IF	_ItemIdx03	> 0	THEN INSERT INTO mail_itemidx_tb ( MailUID, AttachSlot, ItemIdx, StackCnt )	VALUES ( @MailUID, 3	, _ItemIdx03	, _StackCnt03	);	END IF;					
        IF	_ItemIdx04	> 0	THEN INSERT INTO mail_itemidx_tb ( MailUID, AttachSlot, ItemIdx, StackCnt )	VALUES ( @MailUID, 4	, _ItemIdx04	, _StackCnt04	);	END IF;					
        IF	_ItemIdx05	> 0	THEN INSERT INTO mail_itemidx_tb ( MailUID, AttachSlot, ItemIdx, StackCnt )	VALUES ( @MailUID, 5	, _ItemIdx05	, _StackCnt05	);	END IF;					
		
        -- 첨부 아이템 (이미 생성된 아이템)
        IF	_ItemUID01	> 0	THEN				
			IF EXISTS ( SELECT 1	FROM item_character_tb	WHERE ItemUID = _ItemUID01 )	THEN	
				SET _Result = 406;	LEAVE MAIN_ROUTINE;		
            END IF;							
            DELETE FROM item_delete_tb	WHERE ItemUID = _ItemUID01;						
            INSERT IGNORE INTO mail_itemuid_tb ( MailUID, AttachSlot, ItemUID )	VALUES ( @MailUID, 1	, _ItemUID01	);					
            IF ROW_COUNT() <= 0	THEN SET _Result = 402;	LEAVE MAIN_ROUTINE;	END IF;				
        END IF;							
        IF	_ItemUID02	> 0	THEN				
			IF EXISTS ( SELECT 1	FROM item_character_tb	WHERE ItemUID = _ItemUID02 )	THEN	
				SET _Result = 406;	LEAVE MAIN_ROUTINE;		
            END IF;							
            DELETE FROM item_delete_tb	WHERE ItemUID = _ItemUID02;						
            INSERT IGNORE INTO mail_itemuid_tb ( MailUID, AttachSlot, ItemUID )	VALUES ( @MailUID, 2	, _ItemUID02	);					
            IF ROW_COUNT() <= 0	THEN SET _Result = 402;	LEAVE MAIN_ROUTINE;	END IF;				
        END IF;							
        IF	_ItemUID03	> 0	THEN				
			IF EXISTS ( SELECT 1	FROM item_character_tb	WHERE ItemUID = _ItemUID03 )	THEN	
				SET _Result = 406;	LEAVE MAIN_ROUTINE;		
            END IF;							
            DELETE FROM item_delete_tb	WHERE ItemUID = _ItemUID03;						
            INSERT IGNORE INTO mail_itemuid_tb ( MailUID, AttachSlot, ItemUID )	VALUES ( @MailUID, 3	, _ItemUID03	);					
            IF ROW_COUNT() <= 0	THEN SET _Result = 402;	LEAVE MAIN_ROUTINE;	END IF;				
        END IF;							
        IF	_ItemUID04	> 0	THEN				
			IF EXISTS ( SELECT 1	FROM item_character_tb	WHERE ItemUID = _ItemUID04 )	THEN	
				SET _Result = 406;	LEAVE MAIN_ROUTINE;		
            END IF;							
            DELETE FROM item_delete_tb	WHERE ItemUID = _ItemUID04;						
            INSERT IGNORE INTO mail_itemuid_tb ( MailUID, AttachSlot, ItemUID )	VALUES ( @MailUID, 4	, _ItemUID04	);					
            IF ROW_COUNT() <= 0	THEN SET _Result = 402;	LEAVE MAIN_ROUTINE;	END IF;				
        END IF;							
        IF	_ItemUID05	> 0	THEN				
			IF EXISTS ( SELECT 1	FROM item_character_tb	WHERE ItemUID = _ItemUID05 )	THEN	
				SET _Result = 406;	LEAVE MAIN_ROUTINE;		
            END IF;							
            DELETE FROM item_delete_tb	WHERE ItemUID = _ItemUID05;						
            INSERT IGNORE INTO mail_itemuid_tb ( MailUID, AttachSlot, ItemUID )	VALUES ( @MailUID, 5	, _ItemUID05	);					
            IF ROW_COUNT() <= 0	THEN SET _Result = 402;	LEAVE MAIN_ROUTINE;	END IF;				
        END IF;							
		
        -- 첨부 재화
        IF	_Money01	> 0	THEN INSERT INTO mail_money_tb ( MailUID, AttachSlot, MoneyType, Money )	VALUES ( @MailUID, 1	, _MoneyType01	, _Money01	);	END IF;
		IF	_Money02	> 0	THEN INSERT INTO mail_money_tb ( MailUID, AttachSlot, MoneyType, Money )	VALUES ( @MailUID, 2	, _MoneyType02	, _Money02	);	END IF;
		IF	_Money03	> 0	THEN INSERT INTO mail_money_tb ( MailUID, AttachSlot, MoneyType, Money )	VALUES ( @MailUID, 3	, _MoneyType03	, _Money03	);	END IF;
        IF	_Money04	> 0	THEN INSERT INTO mail_money_tb ( MailUID, AttachSlot, MoneyType, Money )	VALUES ( @MailUID, 4	, _MoneyType04	, _Money04	);	END IF;
		IF	_Money05	> 0	THEN INSERT INTO mail_money_tb ( MailUID, AttachSlot, MoneyType, Money )	VALUES ( @MailUID, 5	, _MoneyType05	, _Money05	);	END IF;
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Mail_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Mail_Insert_Game`(
	IN	_ReceiveCharacterUID	BIGINT		UNSIGNED
,	IN	_SenderIdx				SMALLINT	UNSIGNED
,	IN	_TitleIdx				SMALLINT	UNSIGNED
,	IN	_ContentsIdx			SMALLINT	UNSIGNED
,	IN	_ExpiryTime				INT			UNSIGNED
,	IN	_TitleText				VARCHAR(36)
,	IN	_ContentsText			VARCHAR(300)

,	IN	_ItemIdx01		INT			UNSIGNED
,	IN	_StackCnt01		MEDIUMINT	UNSIGNED
,	IN	_ItemIdx02		INT			UNSIGNED
,	IN	_StackCnt02		MEDIUMINT	UNSIGNED
,	IN	_ItemIdx03		INT			UNSIGNED
,	IN	_StackCnt03		MEDIUMINT	UNSIGNED
,	IN	_ItemIdx04		INT			UNSIGNED
,	IN	_StackCnt04		MEDIUMINT	UNSIGNED
,	IN	_ItemIdx05		INT			UNSIGNED
,	IN	_StackCnt05		MEDIUMINT	UNSIGNED

,	IN	_ItemUID01	BIGINT	UNSIGNED
,	IN	_ItemUID02	BIGINT	UNSIGNED
,	IN	_ItemUID03	BIGINT	UNSIGNED
,	IN	_ItemUID04	BIGINT	UNSIGNED
,	IN	_ItemUID05	BIGINT	UNSIGNED

,	IN	_MoneyType01	TINYINT	UNSIGNED
,	IN	_Money01		BIGINT	UNSIGNED
,	IN	_MoneyType02	TINYINT	UNSIGNED
,	IN	_Money02		BIGINT	UNSIGNED
,	IN	_MoneyType03	TINYINT	UNSIGNED
,	IN	_Money03		BIGINT	UNSIGNED
,	IN	_MoneyType04	TINYINT	UNSIGNED
,	IN	_Money04		BIGINT	UNSIGNED
,	IN	_MoneyType05	TINYINT	UNSIGNED
,	IN	_Money05		BIGINT	UNSIGNED

,	OUT	_Result		INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
    
	MAIN_ROUTINE:
	BEGIN
		IF _ReceiveCharacterUID = 0 OR _SenderIdx = 0 OR _ExpiryTime = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
        START TRANSACTION;
			CALL Mail_Insert_DB ( _ReceiveCharacterUID	, _SenderIdx, _TitleIdx	, _ContentsIdx	, _ExpiryTime	, _TitleText, _ContentsText
								, _ItemIdx01, _StackCnt01
                                , _ItemIdx02, _StackCnt02
                                , _ItemIdx03, _StackCnt03
                                , _ItemIdx04, _StackCnt04
                                , _ItemIdx05, _StackCnt05
								, _ItemUID01, _ItemUID02, _ItemUID03, _ItemUID04, _ItemUID05
								, _MoneyType01	, _Money01	
                                , _MoneyType02	, _Money02
                                , _MoneyType03	, _Money03
                                , _MoneyType04	, _Money04
                                , _MoneyType05	, _Money05
                                , _Result	);
			IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Mastery_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Mastery_Update_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_MoneyType				TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime		INT		UNSIGNED

,	IN	_DeleteItemUID01		BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount01	MEDIUMINT
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID02		BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount02	MEDIUMINT
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED		

,	IN	_MasterySlot01	TINYINT	UNSIGNED
,	IN	_MasteryCnt01	TINYINT	UNSIGNED
,	IN	_MasterySlot02	TINYINT	UNSIGNED
,	IN	_MasteryCnt02	TINYINT	UNSIGNED
,	IN	_MasterySlot03	TINYINT	UNSIGNED
,	IN	_MasteryCnt03	TINYINT	UNSIGNED
,	IN	_MasterySlot04	TINYINT	UNSIGNED
,	IN	_MasteryCnt04	TINYINT	UNSIGNED
,	IN	_MasterySlot05	TINYINT	UNSIGNED
,	IN	_MasteryCnt05	TINYINT	UNSIGNED
,	IN	_MasterySlot06	TINYINT	UNSIGNED
,	IN	_MasteryCnt06	TINYINT	UNSIGNED
,	IN	_MasterySlot07	TINYINT	UNSIGNED
,	IN	_MasteryCnt07	TINYINT	UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB		BIGINT
,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _MoneyResultDB = 0, _StackResultDB01 = 0, _StackResultDB02 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _MasterySlot01 = 0 OR _MasteryCnt01 = 0 OR _DeleteItemUID01 = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount >= 0 OR _StackDecreaseAmount01 >= 0 OR _StackDecreaseAmount02 > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
-- 			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
-- 			END IF;
            
            -- 착용 숙련도 변경
				UPDATE mastery_tb	SET MasteryCnt = _MasteryCnt01	WHERE CharacterUID = _CharacterUID AND MasterySlot = _MasterySlot01;				
				IF ROW_COUNT() <= 0	THEN 					
					INSERT IGNORE INTO mastery_tb ( CharacterUID, MasterySlot, MasteryCnt )	VALUES  ( _CharacterUID, _MasterySlot01	, _MasteryCnt01 );				
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;						
            										
            IF	_MasterySlot02	> 0	THEN							
				UPDATE mastery_tb	SET MasteryCnt = _MasteryCnt02	WHERE CharacterUID = _CharacterUID AND MasterySlot = _MasterySlot02;				
				IF ROW_COUNT() <= 0	THEN 					
					INSERT IGNORE INTO mastery_tb ( CharacterUID, MasterySlot, MasteryCnt )	VALUES  ( _CharacterUID, _MasterySlot02	, _MasteryCnt02 );				
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;						
            END IF;										
            										
            IF	_MasterySlot03	> 0	THEN							
				UPDATE mastery_tb	SET MasteryCnt = _MasteryCnt03	WHERE CharacterUID = _CharacterUID AND MasterySlot = _MasterySlot03;				
				IF ROW_COUNT() <= 0	THEN 					
					INSERT IGNORE INTO mastery_tb ( CharacterUID, MasterySlot, MasteryCnt )	VALUES  ( _CharacterUID, _MasterySlot03	, _MasteryCnt03 );				
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;						
            END IF;										
            										
            IF	_MasterySlot04	> 0	THEN							
				UPDATE mastery_tb	SET MasteryCnt = _MasteryCnt04	WHERE CharacterUID = _CharacterUID AND MasterySlot = _MasterySlot04;				
				IF ROW_COUNT() <= 0	THEN 					
					INSERT IGNORE INTO mastery_tb ( CharacterUID, MasterySlot, MasteryCnt )	VALUES  ( _CharacterUID, _MasterySlot04	, _MasteryCnt04 );				
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;						
            END IF;										
            										
            IF	_MasterySlot05	> 0	THEN							
				UPDATE mastery_tb	SET MasteryCnt = _MasteryCnt05	WHERE CharacterUID = _CharacterUID AND MasterySlot = _MasterySlot05;				
				IF ROW_COUNT() <= 0	THEN 					
					INSERT IGNORE INTO mastery_tb ( CharacterUID, MasterySlot, MasteryCnt )	VALUES  ( _CharacterUID, _MasterySlot05	, _MasteryCnt05 );				
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;						
            END IF;										
            										
            IF	_MasterySlot06	> 0	THEN							
				UPDATE mastery_tb	SET MasteryCnt = _MasteryCnt06	WHERE CharacterUID = _CharacterUID AND MasterySlot = _MasterySlot06;				
				IF ROW_COUNT() <= 0	THEN 					
					INSERT IGNORE INTO mastery_tb ( CharacterUID, MasterySlot, MasteryCnt )	VALUES  ( _CharacterUID, _MasterySlot06	, _MasteryCnt06 );				
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;						
            END IF;										
            										
            IF	_MasterySlot07	> 0	THEN							
				UPDATE mastery_tb	SET MasteryCnt = _MasteryCnt07	WHERE CharacterUID = _CharacterUID AND MasterySlot = _MasterySlot07;				
				IF ROW_COUNT() <= 0	THEN 					
					INSERT IGNORE INTO mastery_tb ( CharacterUID, MasterySlot, MasteryCnt )	VALUES  ( _CharacterUID, _MasterySlot07	, _MasteryCnt07 );				
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;						
            END IF;										
            										
			-- 아이템 스택 변경
--             IF	_DeleteItemUID01	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID01	, 0, _StackDecreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );	
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
--             END IF;	
            IF	_DeleteItemUID02	> 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID02	, 0, _StackDecreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );	
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;	
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Money_Update_DB` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'NO_AUTO_VALUE_ON_ZERO' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Money_Update_DB`( 
	IN	_AccountUID			BIGINT	UNSIGNED
,	IN	_CharacterUID		BIGINT	UNSIGNED
,	IN	_MoneyType			TINYINT	UNSIGNED
,	IN	_MoneyChangeAmount	BIGINT
,	IN	_MoneyResultServer	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime	INT		UNSIGNED

,	OUT _MoneyResultDB	BIGINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
	
    SET	_MoneyResultDB = 0, _Result = -1;
    
	MAIN_ROUTINE:
	BEGIN
		IF	_MoneyChangeAmount = 0 AND _MoneyUpdateTime = 0	THEN SET _Result = 0;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경 값이 없을 경우 종료
        
		CASE
		WHEN _MoneyType = 2 AND _CharacterUID > 0 AND _MoneyChangeAmount != 0	THEN	-- 골드
			UPDATE character_tb	SET Gold = @MoneyResultDB := Gold + _MoneyChangeAmount	WHERE CharacterUID = _CharacterUID;
            
		WHEN _MoneyType = 3 AND _CharacterUID > 0 AND _MoneyChangeAmount != 0	THEN	-- 원보
			UPDATE character_tb	SET Wonbo = @MoneyResultDB := Wonbo + _MoneyChangeAmount	WHERE CharacterUID = _CharacterUID;

		WHEN _MoneyType = 4 AND _AccountUID > 0 AND _MoneyChangeAmount != 0	THEN	-- 캐쉬
			UPDATE account_tb		SET Cash = @MoneyResultDB := Cash + _MoneyChangeAmount	WHERE AccountUID = _AccountUID;

        WHEN _MoneyType = 5 AND _CharacterUID > 0 AND _MoneyChangeAmount != 0	THEN	-- 흑철
			UPDATE character_tb	SET BlackIron = @MoneyResultDB := BlackIron + _MoneyChangeAmount	WHERE CharacterUID = _CharacterUID;
/*		BEGIN
			UPDATE blackiron_tb	SET BlackIron = @MoneyResultDB := BlackIron + _MoneyChangeAmount	WHERE CharacterUID = _CharacterUID;	
			IF ROW_COUNT() <= 0	THEN 
				SET	@MoneyResultDB = _MoneyChangeAmount;
				INSERT IGNORE INTO	blackiron_tb ( CharacterUID, BlackIron, LootingCnt, LastLootingTime )	VALUES ( _CharacterUID, _MoneyChangeAmount, 0, '0000-00-00 00:00:00' );
				IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			END IF;
		END;
*/        
--      WHEN _MoneyType = 20 AND _CharacterUID > 0	THEN	-- 업적 포인트
-- 			UPDATE character_tb	SET AchievementPoint = @MoneyResultDB := AchievementPoint + _MoneyChangeAmount	WHERE CharacterUID = _CharacterUID;	

		WHEN _MoneyType = 11 AND _CharacterUID > 0 AND _MoneyChangeAmount != 0	THEN	-- 진기
			UPDATE character_tb	SET EnergyPoint = @MoneyResultDB := EnergyPoint + _MoneyChangeAmount	WHERE CharacterUID = _CharacterUID;	

        WHEN _MoneyType = 12 AND _CharacterUID > 0 AND _MoneyUpdateTime > 0	THEN	-- 행동력
		BEGIN
			UPDATE 	character_tb	
            SET 	ActionPoint = @MoneyResultDB := _MoneyResultServer, LastActionPointUpdateTime = FROM_UNIXTIME(_MoneyUpdateTime)	
            WHERE 	CharacterUID = _CharacterUID;
            IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
		END;
        
		WHEN _MoneyType = 20 AND _CharacterUID > 0	THEN	-- 업적 포인트
 		UPDATE character_tb	SET AncientCoin = @MoneyResultDB := AncientCoin + _MoneyChangeAmount	WHERE CharacterUID = _CharacterUID;	
            
		ELSE SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END CASE;
		IF ROW_COUNT() <= 0	THEN SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터

			

		SET	_MoneyResultDB = @MoneyResultDB;
        IF _MoneyResultDB < 0					THEN SET _Result = 302;	LEAVE MAIN_ROUTINE;	END IF;	-- 재화 부족
        IF _MoneyResultDB <> _MoneyResultServer	THEN SET _Result = 8;	LEAVE MAIN_ROUTINE;	END IF;	-- 서버와 DB의 값이 다름
 
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Money_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Money_Update_Game`( 
	IN	_AccountUID			BIGINT	UNSIGNED
,	IN	_CharacterUID		BIGINT	UNSIGNED
,	IN	_MoneyType			TINYINT	UNSIGNED
,	IN	_MoneyChangeAmount	BIGINT
,	IN	_MoneyResultServer	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime	INT		UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB	BIGINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_MoneyType = 0 OR _MoneyChangeAmount = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			CALL Money_Update_DB ( _AccountUID, _CharacterUID, _MoneyType, _MoneyChangeAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
			IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Occupation_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Occupation_Update_Game`(
	IN	_OccupationIdx	SMALLINT	UNSIGNED
,	IN	_GuildUID		BIGINT		UNSIGNED
,	IN	_ExpiryTime		INT			UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _Result = -1;
        
	MAIN_ROUTINE:
	BEGIN
		IF _OccupationIdx = 0 OR _GuildUID = 0 /*OR _ExpiryTime = 0*/	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
        START TRANSACTION;
            UPDATE occupation_tb	SET GuildUID = _GuildUID/*, ExpiryTime = FROM_UNIXTIME(_ExpiryTime)*/	WHERE OccupationIdx = _OccupationIdx;
            IF ROW_COUNT() <= 0	THEN 
				INSERT IGNORE INTO occupation_tb ( OccupationIdx, GuildUID, ExpiryTime )	VALUE ( _OccupationIdx, _GuildUID, DEFAULT/*FROM_UNIXTIME(_ExpiryTime)*/ );
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
            
			SET	_Result = 0;
		COMMIT;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `PKResult_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `PKResult_Update_Game`( 
	IN	_GetCharacterUID		BIGINT	UNSIGNED
,	IN	_GetCharacterPKPoint	SMALLINT
-- ,	IN	_GetMoneyType			TINYINT	UNSIGNED
-- ,	IN	_GetMoneyIncreaseAmount	BIGINT
-- ,	IN	_GetMoneyResultServer	BIGINT	UNSIGNED
-- ,	IN	_GetMoneyUpdateTime		INT		UNSIGNED

,	IN	_GetPlayDataIdx01	SMALLINT	UNSIGNED
,	IN	_GetPlayDataValue01	BIGINT		UNSIGNED
,	IN	_GetPlayDataIdx02	SMALLINT	UNSIGNED
,	IN	_GetPlayDataValue02	BIGINT		UNSIGNED
,	IN	_GetPlayDataIdx03	SMALLINT	UNSIGNED
,	IN	_GetPlayDataValue03	BIGINT		UNSIGNED
,	IN	_GetPlayDataIdx04	SMALLINT	UNSIGNED
,	IN	_GetPlayDataValue04	BIGINT		UNSIGNED
,	IN	_GetPlayDataIdx05	SMALLINT	UNSIGNED
,	IN	_GetPlayDataValue05	BIGINT		UNSIGNED
,	IN	_GetPlayDataIdx06	SMALLINT	UNSIGNED
,	IN	_GetPlayDataValue06	BIGINT		UNSIGNED
,	IN	_GetPlayDataIdx07	SMALLINT	UNSIGNED
,	IN	_GetPlayDataValue07	BIGINT		UNSIGNED
,	IN	_GetPlayDataIdx08	SMALLINT	UNSIGNED
,	IN	_GetPlayDataValue08	BIGINT		UNSIGNED
,	IN	_GetPlayDataIdx09	SMALLINT	UNSIGNED
,	IN	_GetPlayDataValue09	BIGINT		UNSIGNED
,	IN	_GetPlayDataIdx10	SMALLINT	UNSIGNED
,	IN	_GetPlayDataValue10	BIGINT		UNSIGNED

,	IN	_LostCharacterUID			BIGINT	UNSIGNED
,	IN	_LostCharacterPKPoint		SMALLINT
,	IN	_LostMoneyType				TINYINT	UNSIGNED
,	IN	_LostMoneyDecreaseAmount	BIGINT
,	IN	_LostMoneyResultServer		BIGINT	UNSIGNED
,	IN	_LostMoneyUpdateTime		INT		UNSIGNED

,	IN	_LostItemUID01			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount01	MEDIUMINT				
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED			
,	IN	_LostItemUID02			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount02	MEDIUMINT				
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED			
,	IN	_LostItemUID03			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount03	MEDIUMINT				
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED			
,	IN	_LostItemUID04			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount04	MEDIUMINT				
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED			
,	IN	_LostItemUID05			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount05	MEDIUMINT				
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED			
,	IN	_LostItemUID06			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount06	MEDIUMINT				
,	IN	_StackResultServer06	MEDIUMINT	UNSIGNED			
,	IN	_LostItemUID07			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount07	MEDIUMINT				
,	IN	_StackResultServer07	MEDIUMINT	UNSIGNED			
,	IN	_LostItemUID08			BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount08	MEDIUMINT				
,	IN	_StackResultServer08	MEDIUMINT	UNSIGNED			

,	IN	_LostPlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_LostPlayDataValue01	BIGINT		UNSIGNED
,	IN	_LostPlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_LostPlayDataValue02	BIGINT		UNSIGNED
,	IN	_LostPlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_LostPlayDataValue03	BIGINT		UNSIGNED
,	IN	_LostPlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_LostPlayDataValue04	BIGINT		UNSIGNED
,	IN	_LostPlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_LostPlayDataValue05	BIGINT		UNSIGNED
,	IN	_LostPlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_LostPlayDataValue06	BIGINT		UNSIGNED
,	IN	_LostPlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_LostPlayDataValue07	BIGINT		UNSIGNED
,	IN	_LostPlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_LostPlayDataValue08	BIGINT		UNSIGNED
,	IN	_LostPlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_LostPlayDataValue09	BIGINT		UNSIGNED
,	IN	_LostPlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_LostPlayDataValue10	BIGINT		UNSIGNED

-- ,	OUT _GetMoneyResultDB	BIGINT
,	OUT _LostMoneyResultDB	BIGINT
,	OUT _StackResultDB01	MEDIUMINT
,	OUT _StackResultDB02	MEDIUMINT
,	OUT _StackResultDB03	MEDIUMINT
,	OUT _StackResultDB04	MEDIUMINT
,	OUT _StackResultDB05	MEDIUMINT
,	OUT _StackResultDB06	MEDIUMINT
,	OUT _StackResultDB07	MEDIUMINT
,	OUT _StackResultDB08	MEDIUMINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
	
	SET	/*_GetMoneyResultDB = 0,*/ _LostMoneyResultDB = 0
    , 	_StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0, _StackResultDB06 = 0, _StackResultDB07 = 0, _StackResultDB08 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
    	IF		_GetCharacterUID = 0 OR _LostCharacterUID = 0				THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		ELSEIF	/*_GetMoneyIncreaseAmount < 0 OR*/ _LostMoneyDecreaseAmount > 0	THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 획득한 캐릭터 처리
            UPDATE character_tb	SET PKPoint = _GetCharacterPKPoint	WHERE CharacterUID = _GetCharacterUID;
            /*
			IF	_GetMoneyIncreaseAmount > 0	THEN	
				CALL Money_Update_DB ( 0, _GetCharacterUID, _GetMoneyType, _GetMoneyIncreaseAmount, _GetMoneyResultServer, _GetMoneyUpdateTime, _GetMoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            END IF;
            */
            -- 잃은 캐릭터 처리
			UPDATE character_tb	SET PKPoint = _LostCharacterPKPoint	WHERE CharacterUID = _LostCharacterUID;
            
            IF	_LostMoneyDecreaseAmount < 0	THEN	
				CALL Money_Update_DB ( 0, _LostCharacterUID, _LostMoneyType, _LostMoneyDecreaseAmount, _LostMoneyResultServer, _LostMoneyUpdateTime, _LostMoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
            -- 아이템 삭제
            IF	_LostItemUID01	> 0	THEN					
				CALL Item_Delete_DB ( _LostItemUID01	, _StackDecreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_LostItemUID02	> 0	THEN					
				CALL Item_Delete_DB ( _LostItemUID02	, _StackDecreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_LostItemUID03	> 0	THEN					
				CALL Item_Delete_DB ( _LostItemUID03	, _StackDecreaseAmount03	, _StackResultServer03	, _StackResultDB03	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_LostItemUID04	> 0	THEN					
				CALL Item_Delete_DB ( _LostItemUID04	, _StackDecreaseAmount04	, _StackResultServer04	, _StackResultDB04	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_LostItemUID05	> 0	THEN					
				CALL Item_Delete_DB ( _LostItemUID05	, _StackDecreaseAmount05	, _StackResultServer05	, _StackResultDB05	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_LostItemUID06	> 0	THEN					
				CALL Item_Delete_DB ( _LostItemUID06	, _StackDecreaseAmount06	, _StackResultServer06	, _StackResultDB06	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_LostItemUID07	> 0	THEN					
				CALL Item_Delete_DB ( _LostItemUID07	, _StackDecreaseAmount07	, _StackResultServer07	, _StackResultDB07	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            IF	_LostItemUID08	> 0	THEN					
				CALL Item_Delete_DB ( _LostItemUID08	, _StackDecreaseAmount08	, _StackResultServer08	, _StackResultDB08	, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;					
            
            -- 플레이 데이터 변경
            IF	_GetPlayDataIdx01 > 0 OR _GetPlayDataIdx02 > 0 OR _GetPlayDataIdx03 > 0 OR _GetPlayDataIdx04 > 0 OR _GetPlayDataIdx05 > 0 
			OR	_GetPlayDataIdx06 > 0 OR _GetPlayDataIdx07 > 0 OR _GetPlayDataIdx08 > 0 OR _GetPlayDataIdx09 > 0 OR _GetPlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _GetCharacterUID
										, _GetPlayDataIdx01	, _GetPlayDataValue01
										, _GetPlayDataIdx02	, _GetPlayDataValue02
										, _GetPlayDataIdx03	, _GetPlayDataValue03
										, _GetPlayDataIdx04	, _GetPlayDataValue04
										, _GetPlayDataIdx05	, _GetPlayDataValue05
										, _GetPlayDataIdx06	, _GetPlayDataValue06
										, _GetPlayDataIdx07	, _GetPlayDataValue07
										, _GetPlayDataIdx08	, _GetPlayDataValue08
										, _GetPlayDataIdx09	, _GetPlayDataValue09
										, _GetPlayDataIdx10	, _GetPlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
            IF	_LostPlayDataIdx01 > 0 OR _LostPlayDataIdx02 > 0 OR _LostPlayDataIdx03 > 0 OR _LostPlayDataIdx04 > 0 OR _LostPlayDataIdx05 > 0 
			OR	_LostPlayDataIdx06 > 0 OR _LostPlayDataIdx07 > 0 OR _LostPlayDataIdx08 > 0 OR _LostPlayDataIdx09 > 0 OR _LostPlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _LostCharacterUID
										, _LostPlayDataIdx01	, _LostPlayDataValue01
										, _LostPlayDataIdx02	, _LostPlayDataValue02
										, _LostPlayDataIdx03	, _LostPlayDataValue03
										, _LostPlayDataIdx04	, _LostPlayDataValue04
										, _LostPlayDataIdx05	, _LostPlayDataValue05
										, _LostPlayDataIdx06	, _LostPlayDataValue06
										, _LostPlayDataIdx07	, _LostPlayDataValue07
										, _LostPlayDataIdx08	, _LostPlayDataValue08
										, _LostPlayDataIdx09	, _LostPlayDataValue09
										, _LostPlayDataIdx10	, _LostPlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `PlayData_Update_DB` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `PlayData_Update_DB`(
	IN	_CharacterUID	BIGINT	UNSIGNED
    
,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED		
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED		
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED		
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED		
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED		
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED		
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED		
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED		
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED		
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		END IF;	

        -- 업적 데이터 변경
        IF	_PlayDataIdx01	> 0	THEN				
			UPDATE playdata_tb	SET PlayDataValue = _PlayDataValue01	WHERE CharacterUID = _CharacterUID AND PlayDataIdx = _PlayDataIdx01;		
            IF ROW_COUNT() <= 0	THEN						
				INSERT IGNORE INTO playdata_tb ( CharacterUID, PlayDataIdx, PlayDataValue )	VALUES ( _CharacterUID, _PlayDataIdx01	, _PlayDataValue01	);
                IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;					
            END IF;							
        END IF;							
        IF	_PlayDataIdx02	> 0	THEN				
			UPDATE playdata_tb	SET PlayDataValue = _PlayDataValue02	WHERE CharacterUID = _CharacterUID AND PlayDataIdx = _PlayDataIdx02;		
            IF ROW_COUNT() <= 0	THEN						
				INSERT IGNORE INTO playdata_tb ( CharacterUID, PlayDataIdx, PlayDataValue )	VALUES ( _CharacterUID, _PlayDataIdx02	, _PlayDataValue02	);
                IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;					
            END IF;							
        END IF;							
        IF	_PlayDataIdx03	> 0	THEN				
			UPDATE playdata_tb	SET PlayDataValue = _PlayDataValue03	WHERE CharacterUID = _CharacterUID AND PlayDataIdx = _PlayDataIdx03;		
            IF ROW_COUNT() <= 0	THEN						
				INSERT IGNORE INTO playdata_tb ( CharacterUID, PlayDataIdx, PlayDataValue )	VALUES ( _CharacterUID, _PlayDataIdx03	, _PlayDataValue03	);
                IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;					
            END IF;							
        END IF;							
        IF	_PlayDataIdx04	> 0	THEN				
			UPDATE playdata_tb	SET PlayDataValue = _PlayDataValue04	WHERE CharacterUID = _CharacterUID AND PlayDataIdx = _PlayDataIdx04;		
            IF ROW_COUNT() <= 0	THEN						
				INSERT IGNORE INTO playdata_tb ( CharacterUID, PlayDataIdx, PlayDataValue )	VALUES ( _CharacterUID, _PlayDataIdx04	, _PlayDataValue04	);
                IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;					
            END IF;							
        END IF;							
        IF	_PlayDataIdx05	> 0	THEN				
			UPDATE playdata_tb	SET PlayDataValue = _PlayDataValue05	WHERE CharacterUID = _CharacterUID AND PlayDataIdx = _PlayDataIdx05;		
            IF ROW_COUNT() <= 0	THEN						
				INSERT IGNORE INTO playdata_tb ( CharacterUID, PlayDataIdx, PlayDataValue )	VALUES ( _CharacterUID, _PlayDataIdx05	, _PlayDataValue05	);
                IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;					
            END IF;							
        END IF;							
        IF	_PlayDataIdx06	> 0	THEN				
			UPDATE playdata_tb	SET PlayDataValue = _PlayDataValue06	WHERE CharacterUID = _CharacterUID AND PlayDataIdx = _PlayDataIdx06;		
            IF ROW_COUNT() <= 0	THEN						
				INSERT IGNORE INTO playdata_tb ( CharacterUID, PlayDataIdx, PlayDataValue )	VALUES ( _CharacterUID, _PlayDataIdx06	, _PlayDataValue06	);
                IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;					
            END IF;							
        END IF;							
        IF	_PlayDataIdx07	> 0	THEN				
			UPDATE playdata_tb	SET PlayDataValue = _PlayDataValue07	WHERE CharacterUID = _CharacterUID AND PlayDataIdx = _PlayDataIdx07;		
            IF ROW_COUNT() <= 0	THEN						
				INSERT IGNORE INTO playdata_tb ( CharacterUID, PlayDataIdx, PlayDataValue )	VALUES ( _CharacterUID, _PlayDataIdx07	, _PlayDataValue07	);
                IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;					
            END IF;							
        END IF;							
        IF	_PlayDataIdx08	> 0	THEN				
			UPDATE playdata_tb	SET PlayDataValue = _PlayDataValue08	WHERE CharacterUID = _CharacterUID AND PlayDataIdx = _PlayDataIdx08;		
            IF ROW_COUNT() <= 0	THEN						
				INSERT IGNORE INTO playdata_tb ( CharacterUID, PlayDataIdx, PlayDataValue )	VALUES ( _CharacterUID, _PlayDataIdx08	, _PlayDataValue08	);
                IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;					
            END IF;							
        END IF;							
        IF	_PlayDataIdx09	> 0	THEN				
			UPDATE playdata_tb	SET PlayDataValue = _PlayDataValue09	WHERE CharacterUID = _CharacterUID AND PlayDataIdx = _PlayDataIdx09;		
            IF ROW_COUNT() <= 0	THEN						
				INSERT IGNORE INTO playdata_tb ( CharacterUID, PlayDataIdx, PlayDataValue )	VALUES ( _CharacterUID, _PlayDataIdx09	, _PlayDataValue09	);
                IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;					
            END IF;							
        END IF;							
        IF	_PlayDataIdx10	> 0	THEN				
			UPDATE playdata_tb	SET PlayDataValue = _PlayDataValue10	WHERE CharacterUID = _CharacterUID AND PlayDataIdx = _PlayDataIdx10;		
            IF ROW_COUNT() <= 0	THEN						
				INSERT IGNORE INTO playdata_tb ( CharacterUID, PlayDataIdx, PlayDataValue )	VALUES ( _CharacterUID, _PlayDataIdx10	, _PlayDataValue10	);
                IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;					
            END IF;							
        END IF;							

		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `PlayData_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `PlayData_Update_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_CharacterUID = 0 
        OR( _PlayDataIdx01 = 0 AND _PlayDataIdx02 = 0 AND _PlayDataIdx03 = 0 AND _PlayDataIdx04 = 0 AND _PlayDataIdx05 = 0 
		AND	_PlayDataIdx06 = 0 AND _PlayDataIdx07 = 0 AND _PlayDataIdx08 = 0 AND _PlayDataIdx09 = 0 AND _PlayDataIdx10 = 0 )	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;	
        
		START TRANSACTION;
			-- 플레이 데이터 변경
			CALL PlayData_Update_DB	( _CharacterUID
									, _PlayDataIdx01	, _PlayDataValue01
									, _PlayDataIdx02	, _PlayDataValue02
									, _PlayDataIdx03	, _PlayDataValue03
									, _PlayDataIdx04	, _PlayDataValue04
									, _PlayDataIdx05	, _PlayDataValue05
									, _PlayDataIdx06	, _PlayDataValue06
									, _PlayDataIdx07	, _PlayDataValue07
									, _PlayDataIdx08	, _PlayDataValue08
									, _PlayDataIdx09	, _PlayDataValue09
									, _PlayDataIdx10	, _PlayDataValue10
									, _Result	);
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QuestDailyNewList_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `QuestDailyNewList_Insert_Game`(
	IN	_CharacterUID		BIGINT	UNSIGNED
,	IN	_ListReceiveTime	INT		UNSIGNED
,	IN	_QuestIdx01			INT		UNSIGNED
,	IN	_QuestIdx02			INT		UNSIGNED
,	IN	_QuestIdx03			INT		UNSIGNED
,	IN	_QuestIdx04			INT		UNSIGNED
,	IN	_QuestIdx05			INT		UNSIGNED
,	IN	_QuestIdx06			INT		UNSIGNED
,	IN	_QuestIdx07			INT		UNSIGNED
,	IN	_QuestIdx08			INT		UNSIGNED
,	IN	_QuestIdx09			INT		UNSIGNED
,	IN	_QuestIdx10			INT		UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
	
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _ListReceiveTime = 0
        OR 	_QuestIdx01 = 0 OR _QuestIdx02 = 0 OR _QuestIdx03 = 0 OR _QuestIdx04 = 0 OR _QuestIdx05 = 0 
        OR 	_QuestIdx06 = 0 OR _QuestIdx07 = 0 OR _QuestIdx08 = 0 OR _QuestIdx09 = 0 OR _QuestIdx10 = 0	
			THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		END IF;	
        
		START TRANSACTION;
			-- 일일과제 기타정보 초기화
            UPDATE quest_daily_tb	SET ListReceiveTime = FROM_UNIXTIME(_ListReceiveTime), PlusRewardReceiveCnt = 0	WHERE CharacterUID = _CharacterUID;
			IF ROW_COUNT() <= 0	THEN
				INSERT IGNORE INTO	quest_daily_tb ( CharacterUID, ListReceiveTime, PlusRewardReceiveCnt )	VALUES ( _CharacterUID, FROM_UNIXTIME(_ListReceiveTime), 0 );
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;

			-- 일일과제 리스트 삭제후 새로운 일일과제 INSERT
			DELETE FROM	quest_daily_list_tb	WHERE CharacterUID = _CharacterUID;
			INSERT INTO quest_daily_list_tb 
					( CharacterUID	, QuestIdx		, State	, QuestValue	) 
			VALUES	( _CharacterUID	, _QuestIdx01	, 1		, 0				) 
				,	( _CharacterUID	, _QuestIdx02	, 1		, 0				) 
				,	( _CharacterUID	, _QuestIdx03	, 1		, 0			 	)
                ,	( _CharacterUID	, _QuestIdx04	, 1		, 0			 	)
                ,	( _CharacterUID	, _QuestIdx05	, 1		, 0			 	)
                ,	( _CharacterUID	, _QuestIdx06	, 1		, 0			 	)
                ,	( _CharacterUID	, _QuestIdx07	, 1		, 0			 	)
                ,	( _CharacterUID	, _QuestIdx08	, 1		, 0			 	)
                ,	( _CharacterUID	, _QuestIdx09	, 1		, 0			 	)
                ,	( _CharacterUID	, _QuestIdx10	, 1		, 0			 	);
		
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QuestDailyPlusRewardReceive_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `QuestDailyPlusRewardReceive_Update_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_CharacterLev			TINYINT	UNSIGNED
,	IN	_CharacterExp			INT		UNSIGNED
,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_PlusRewardReceiveCnt	TINYINT	UNSIGNED

,	IN	_CreateItemUID01			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01			INT			UNSIGNED	
,	IN	_ReinforceLev01				TINYINT		UNSIGNED	
,	IN	_ReinforceExp01				INT			UNSIGNED
,	IN	_SmeltingLev01				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01		MEDIUMINT					
,	IN	_CreateStackResultServer01	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx01A				SMALLINT	UNSIGNED		
,	IN	_OptionValue01A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B				SMALLINT	UNSIGNED		
,	IN	_OptionValue01B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C				SMALLINT	UNSIGNED		
,	IN	_OptionValue01C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D				SMALLINT	UNSIGNED		
,	IN	_OptionValue01D				SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01		BIGINT
,	OUT	_CreateStackResultDB01	MEDIUMINT
,	OUT	_Result					INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
	
    SET	_MoneyResultDB01 = 0, _CreateStackResultDB01 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _PlusRewardReceiveCnt = 0 OR ( _MoneyIncreaseAmount01 = 0 AND _CreateItemUID01 = 0 )	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        ELSEIF	_MoneyIncreaseAmount01 < 0																				THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
            -- 재화 변경
			IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
			-- 레벨, 경험치 변경
			IF	_CharacterLev > 0	THEN
				UPDATE character_tb	SET Lev = _CharacterLev, Exp = _CharacterExp	WHERE CharacterUID = _CharacterUID;
				IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			END IF;
            
            -- 아이템 생성
			IF	_CreateItemUID01	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01				, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01			, _SmeltingLev01					
									, _StackIncreaseAmount01	, _CreateStackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B				, _OptionValue01B			
									, _OptionIdx01C				, _OptionValue01C				, _OptionIdx01D		, _OptionValue01D	, _CreateStackResultDB01	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
            -- 보상 횟수 증가
            UPDATE quest_daily_tb	SET PlusRewardReceiveCnt = _PlusRewardReceiveCnt	WHERE CharacterUID = _CharacterUID;
            IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QuestDailyQusetRewardReceive_All_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `QuestDailyQusetRewardReceive_All_Update_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_CharacterLev	TINYINT	UNSIGNED
,	IN	_CharacterExp	INT		UNSIGNED

,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED
,	IN	_MoneyType03			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount03	BIGINT
,	IN	_MoneyResultServer03	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime03		INT		UNSIGNED

,	IN	_RewardQuestIdx01	INT		UNSIGNED
,	IN	_RewardQuestState01	TINYINT	UNSIGNED	
,	IN	_RewardQuestIdx02	INT		UNSIGNED
,	IN	_RewardQuestState02	TINYINT	UNSIGNED	
,	IN	_RewardQuestIdx03	INT		UNSIGNED
,	IN	_RewardQuestState03	TINYINT	UNSIGNED	
,	IN	_RewardQuestIdx04	INT		UNSIGNED
,	IN	_RewardQuestState04	TINYINT	UNSIGNED	
,	IN	_RewardQuestIdx05	INT		UNSIGNED
,	IN	_RewardQuestState05	TINYINT	UNSIGNED	
,	IN	_RewardQuestIdx06	INT		UNSIGNED
,	IN	_RewardQuestState06	TINYINT	UNSIGNED	
,	IN	_RewardQuestIdx07	INT		UNSIGNED
,	IN	_RewardQuestState07	TINYINT	UNSIGNED	
,	IN	_RewardQuestIdx08	INT		UNSIGNED
,	IN	_RewardQuestState08	TINYINT	UNSIGNED	
,	IN	_RewardQuestIdx09	INT		UNSIGNED
,	IN	_RewardQuestState09	TINYINT	UNSIGNED	
,	IN	_RewardQuestIdx10	INT		UNSIGNED
,	IN	_RewardQuestState10	TINYINT	UNSIGNED	

,	IN	_CreateItemUID01			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01			INT			UNSIGNED	
,	IN	_ReinforceLev01				TINYINT		UNSIGNED	
,	IN	_ReinforceExp01				INT			UNSIGNED
,	IN	_SmeltingLev01				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01		MEDIUMINT					
,	IN	_CreateStackResultServer01	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx01A				SMALLINT	UNSIGNED		
,	IN	_OptionValue01A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B				SMALLINT	UNSIGNED		
,	IN	_OptionValue01B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C				SMALLINT	UNSIGNED		
,	IN	_OptionValue01C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D				SMALLINT	UNSIGNED		
,	IN	_OptionValue01D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID02			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx02			INT			UNSIGNED	
,	IN	_ReinforceLev02				TINYINT		UNSIGNED	
,	IN	_ReinforceExp02				INT			UNSIGNED
,	IN	_SmeltingLev02				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount02		MEDIUMINT					
,	IN	_CreateStackResultServer02	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx02A				SMALLINT	UNSIGNED		
,	IN	_OptionValue02A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02B				SMALLINT	UNSIGNED		
,	IN	_OptionValue02B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02C				SMALLINT	UNSIGNED		
,	IN	_OptionValue02C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02D				SMALLINT	UNSIGNED		
,	IN	_OptionValue02D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID03			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx03			INT			UNSIGNED	
,	IN	_ReinforceLev03				TINYINT		UNSIGNED	
,	IN	_ReinforceExp03				INT			UNSIGNED
,	IN	_SmeltingLev03				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount03		MEDIUMINT					
,	IN	_CreateStackResultServer03	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx03A				SMALLINT	UNSIGNED		
,	IN	_OptionValue03A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03B				SMALLINT	UNSIGNED		
,	IN	_OptionValue03B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03C				SMALLINT	UNSIGNED		
,	IN	_OptionValue03C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03D				SMALLINT	UNSIGNED		
,	IN	_OptionValue03D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID04			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx04			INT			UNSIGNED	
,	IN	_ReinforceLev04				TINYINT		UNSIGNED	
,	IN	_ReinforceExp04				INT			UNSIGNED
,	IN	_SmeltingLev04				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount04		MEDIUMINT					
,	IN	_CreateStackResultServer04	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx04A				SMALLINT	UNSIGNED		
,	IN	_OptionValue04A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04B				SMALLINT	UNSIGNED		
,	IN	_OptionValue04B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04C				SMALLINT	UNSIGNED		
,	IN	_OptionValue04C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04D				SMALLINT	UNSIGNED		
,	IN	_OptionValue04D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID05			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx05			INT			UNSIGNED	
,	IN	_ReinforceLev05				TINYINT		UNSIGNED	
,	IN	_ReinforceExp05				INT			UNSIGNED
,	IN	_SmeltingLev05				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount05		MEDIUMINT					
,	IN	_CreateStackResultServer05	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx05A				SMALLINT	UNSIGNED		
,	IN	_OptionValue05A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05B				SMALLINT	UNSIGNED		
,	IN	_OptionValue05B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05C				SMALLINT	UNSIGNED		
,	IN	_OptionValue05C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05D				SMALLINT	UNSIGNED		
,	IN	_OptionValue05D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID06			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx06			INT			UNSIGNED	
,	IN	_ReinforceLev06				TINYINT		UNSIGNED	
,	IN	_ReinforceExp06				INT			UNSIGNED
,	IN	_SmeltingLev06				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount06		MEDIUMINT					
,	IN	_CreateStackResultServer06	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx06A				SMALLINT	UNSIGNED		
,	IN	_OptionValue06A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06B				SMALLINT	UNSIGNED		
,	IN	_OptionValue06B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06C				SMALLINT	UNSIGNED		
,	IN	_OptionValue06C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06D				SMALLINT	UNSIGNED		
,	IN	_OptionValue06D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID07			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx07			INT			UNSIGNED	
,	IN	_ReinforceLev07				TINYINT		UNSIGNED	
,	IN	_ReinforceExp07				INT			UNSIGNED
,	IN	_SmeltingLev07				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount07		MEDIUMINT					
,	IN	_CreateStackResultServer07	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx07A				SMALLINT	UNSIGNED		
,	IN	_OptionValue07A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07B				SMALLINT	UNSIGNED		
,	IN	_OptionValue07B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07C				SMALLINT	UNSIGNED		
,	IN	_OptionValue07C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07D				SMALLINT	UNSIGNED		
,	IN	_OptionValue07D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID08			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx08			INT			UNSIGNED	
,	IN	_ReinforceLev08				TINYINT		UNSIGNED	
,	IN	_ReinforceExp08				INT			UNSIGNED
,	IN	_SmeltingLev08				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount08		MEDIUMINT					
,	IN	_CreateStackResultServer08	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx08A				SMALLINT	UNSIGNED		
,	IN	_OptionValue08A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08B				SMALLINT	UNSIGNED		
,	IN	_OptionValue08B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08C				SMALLINT	UNSIGNED		
,	IN	_OptionValue08C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08D				SMALLINT	UNSIGNED		
,	IN	_OptionValue08D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID09			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx09			INT			UNSIGNED	
,	IN	_ReinforceLev09				TINYINT		UNSIGNED	
,	IN	_ReinforceExp09				INT			UNSIGNED
,	IN	_SmeltingLev09				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount09		MEDIUMINT					
,	IN	_CreateStackResultServer09	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx09A				SMALLINT	UNSIGNED		
,	IN	_OptionValue09A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09B				SMALLINT	UNSIGNED		
,	IN	_OptionValue09B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09C				SMALLINT	UNSIGNED		
,	IN	_OptionValue09C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09D				SMALLINT	UNSIGNED		
,	IN	_OptionValue09D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID10			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx10			INT			UNSIGNED	
,	IN	_ReinforceLev10				TINYINT		UNSIGNED	
,	IN	_ReinforceExp10				INT			UNSIGNED
,	IN	_SmeltingLev10				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount10		MEDIUMINT					
,	IN	_CreateStackResultServer10	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx10A				SMALLINT	UNSIGNED		
,	IN	_OptionValue10A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10B				SMALLINT	UNSIGNED		
,	IN	_OptionValue10B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10C				SMALLINT	UNSIGNED		
,	IN	_OptionValue10C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10D				SMALLINT	UNSIGNED		
,	IN	_OptionValue10D				SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT
,	OUT _MoneyResultDB03	BIGINT

,	OUT	_CreateStackResultDB01	MEDIUMINT
,	OUT	_CreateStackResultDB02	MEDIUMINT
,	OUT	_CreateStackResultDB03	MEDIUMINT
,	OUT	_CreateStackResultDB04	MEDIUMINT
,	OUT	_CreateStackResultDB05	MEDIUMINT
,	OUT	_CreateStackResultDB06	MEDIUMINT
,	OUT	_CreateStackResultDB07	MEDIUMINT
,	OUT	_CreateStackResultDB08	MEDIUMINT
,	OUT	_CreateStackResultDB09	MEDIUMINT
,	OUT	_CreateStackResultDB10	MEDIUMINT
,	OUT	_Result					INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _MoneyResultDB01 = 0		, _MoneyResultDB02 = 0		, _MoneyResultDB03 = 0
    , 	_CreateStackResultDB01 = 0	, _CreateStackResultDB02 = 0, _CreateStackResultDB03 = 0, _CreateStackResultDB04 = 0, _CreateStackResultDB05 = 0
	, 	_CreateStackResultDB06 = 0	, _CreateStackResultDB07 = 0, _CreateStackResultDB08 = 0, _CreateStackResultDB09 = 0, _CreateStackResultDB10 = 0
    , 	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
    	IF	_CharacterUID = 0 OR _RewardQuestIdx = 0 OR ( _MoneyIncreaseAmount01 = 0 AND _CreateItemUID01 = 0 )	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyIncreaseAmount01 < 0 OR _MoneyIncreaseAmount02 < 0 OR	_MoneyIncreaseAmount03 < 0 
			OR 	_StackIncreaseAmount01 < 0 OR _StackIncreaseAmount02 < 0 OR _StackIncreaseAmount03 < 0 OR _StackIncreaseAmount04 < 0 OR _StackIncreaseAmount05 < 0 
			OR 	_StackIncreaseAmount06 < 0 OR _StackIncreaseAmount07 < 0 OR _StackIncreaseAmount08 < 0 OR _StackIncreaseAmount09 < 0 OR _StackIncreaseAmount10 < 0	THEN 
            SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
 
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount02 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyIncreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount03 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType03, _MoneyIncreaseAmount03, _MoneyResultServer03, _MoneyUpdateTime03, _MoneyResultDB03, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
            -- 레벨, 경험치 변경
			IF	_CharacterLev > 0	THEN
				UPDATE character_tb	SET Lev = _CharacterLev, Exp = _CharacterExp	WHERE CharacterUID = _CharacterUID;
				IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			END IF;
            
            -- 아이템 생성
			IF	_CreateItemUID01	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01				, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01			, _SmeltingLev01					
									, _StackIncreaseAmount01	, _CreateStackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B				, _OptionValue01B			
									, _OptionIdx01C				, _OptionValue01C				, _OptionIdx01D		, _OptionValue01D	, _CreateStackResultDB01	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID02	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID02				, _CreateItemIdx02	, _ReinforceLev02	, _ReinforceExp02			, _SmeltingLev02					
									, _StackIncreaseAmount02	, _CreateStackResultServer02	, _OptionIdx02A		, _OptionValue02A	, _OptionIdx02B				, _OptionValue02B			
									, _OptionIdx02C				, _OptionValue02C				, _OptionIdx02D		, _OptionValue02D	, _CreateStackResultDB02	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID03	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID03				, _CreateItemIdx03	, _ReinforceLev03	, _ReinforceExp03			, _SmeltingLev03					
									, _StackIncreaseAmount03	, _CreateStackResultServer03	, _OptionIdx03A		, _OptionValue03A	, _OptionIdx03B				, _OptionValue03B			
									, _OptionIdx03C				, _OptionValue03C				, _OptionIdx03D		, _OptionValue03D	, _CreateStackResultDB03	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID04	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID04				, _CreateItemIdx04	, _ReinforceLev04	, _ReinforceExp04			, _SmeltingLev04					
									, _StackIncreaseAmount04	, _CreateStackResultServer04	, _OptionIdx04A		, _OptionValue04A	, _OptionIdx04B				, _OptionValue04B			
									, _OptionIdx04C				, _OptionValue04C				, _OptionIdx04D		, _OptionValue04D	, _CreateStackResultDB04	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID05	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID05				, _CreateItemIdx05	, _ReinforceLev05	, _ReinforceExp05			, _SmeltingLev05					
									, _StackIncreaseAmount05	, _CreateStackResultServer05	, _OptionIdx05A		, _OptionValue05A	, _OptionIdx05B				, _OptionValue05B			
									, _OptionIdx05C				, _OptionValue05C				, _OptionIdx05D		, _OptionValue05D	, _CreateStackResultDB05	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID06	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID06				, _CreateItemIdx06	, _ReinforceLev06	, _ReinforceExp06			, _SmeltingLev06					
									, _StackIncreaseAmount06	, _CreateStackResultServer06	, _OptionIdx06A		, _OptionValue06A	, _OptionIdx06B				, _OptionValue06B			
									, _OptionIdx06C				, _OptionValue06C				, _OptionIdx06D		, _OptionValue06D	, _CreateStackResultDB06	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID07	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID07				, _CreateItemIdx07	, _ReinforceLev07	, _ReinforceExp07			, _SmeltingLev07					
									, _StackIncreaseAmount07	, _CreateStackResultServer07	, _OptionIdx07A		, _OptionValue07A	, _OptionIdx07B				, _OptionValue07B			
									, _OptionIdx07C				, _OptionValue07C				, _OptionIdx07D		, _OptionValue07D	, _CreateStackResultDB07	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID08	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID08				, _CreateItemIdx08	, _ReinforceLev08	, _ReinforceExp08			, _SmeltingLev08					
									, _StackIncreaseAmount08	, _CreateStackResultServer08	, _OptionIdx08A		, _OptionValue08A	, _OptionIdx08B				, _OptionValue08B			
									, _OptionIdx08C				, _OptionValue08C				, _OptionIdx08D		, _OptionValue08D	, _CreateStackResultDB08	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID09	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID09				, _CreateItemIdx09	, _ReinforceLev09	, _ReinforceExp09			, _SmeltingLev09					
									, _StackIncreaseAmount09	, _CreateStackResultServer09	, _OptionIdx09A		, _OptionValue09A	, _OptionIdx09B				, _OptionValue09B			
									, _OptionIdx09C				, _OptionValue09C				, _OptionIdx09D		, _OptionValue09D	, _CreateStackResultDB09	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID10	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID10				, _CreateItemIdx10	, _ReinforceLev10	, _ReinforceExp10			, _SmeltingLev10					
									, _StackIncreaseAmount10	, _CreateStackResultServer10	, _OptionIdx10A		, _OptionValue10A	, _OptionIdx10B				, _OptionValue10B			
									, _OptionIdx10C				, _OptionValue10C				, _OptionIdx10D		, _OptionValue10D	, _CreateStackResultDB10	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
            -- 퀘스트 보상수령으로 변경
				UPDATE quest_daily_list_tb	SET State = _RewardQuestState01	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardQuestIdx01	;		
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 603;	LEAVE MAIN_ROUTINE;	END IF;	-- 완료된 퀘스트가 아님
            IF	_RewardQuestIdx02	> 0	THEN						
				UPDATE quest_daily_list_tb	SET State = _RewardQuestState02	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardQuestIdx02	;		
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 603;	LEAVE MAIN_ROUTINE;	END IF;	-- 완료된 퀘스트가 아님
            END IF;									
            IF	_RewardQuestIdx03	> 0	THEN						
				UPDATE quest_daily_list_tb	SET State = _RewardQuestState03	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardQuestIdx03	;		
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 603;	LEAVE MAIN_ROUTINE;	END IF;	-- 완료된 퀘스트가 아님
            END IF;									
            IF	_RewardQuestIdx04	> 0	THEN						
				UPDATE quest_daily_list_tb	SET State = _RewardQuestState04	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardQuestIdx04	;		
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 603;	LEAVE MAIN_ROUTINE;	END IF;	-- 완료된 퀘스트가 아님
            END IF;									
            IF	_RewardQuestIdx05	> 0	THEN						
				UPDATE quest_daily_list_tb	SET State = _RewardQuestState05	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardQuestIdx05	;		
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 603;	LEAVE MAIN_ROUTINE;	END IF;	-- 완료된 퀘스트가 아님
            END IF;									
            IF	_RewardQuestIdx06	> 0	THEN						
				UPDATE quest_daily_list_tb	SET State = _RewardQuestState06	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardQuestIdx06	;		
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 603;	LEAVE MAIN_ROUTINE;	END IF;	-- 완료된 퀘스트가 아님
            END IF;									
            IF	_RewardQuestIdx07	> 0	THEN						
				UPDATE quest_daily_list_tb	SET State = _RewardQuestState07	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardQuestIdx07	;		
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 603;	LEAVE MAIN_ROUTINE;	END IF;	-- 완료된 퀘스트가 아님
            END IF;									
            IF	_RewardQuestIdx08	> 0	THEN						
				UPDATE quest_daily_list_tb	SET State = _RewardQuestState08	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardQuestIdx08	;		
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 603;	LEAVE MAIN_ROUTINE;	END IF;	-- 완료된 퀘스트가 아님
            END IF;									
            IF	_RewardQuestIdx09	> 0	THEN						
				UPDATE quest_daily_list_tb	SET State = _RewardQuestState09	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardQuestIdx09	;		
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 603;	LEAVE MAIN_ROUTINE;	END IF;	-- 완료된 퀘스트가 아님
            END IF;									
            IF	_RewardQuestIdx10	> 0	THEN						
				UPDATE quest_daily_list_tb	SET State = _RewardQuestState10	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardQuestIdx10	;		
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 603;	LEAVE MAIN_ROUTINE;	END IF;	-- 완료된 퀘스트가 아님
            END IF;									

			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QuestDailyRewardReceive_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `QuestDailyRewardReceive_Update_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_CharacterLev			TINYINT	UNSIGNED
,	IN	_CharacterExp			INT		UNSIGNED
,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_RewardQuestIdx			INT		UNSIGNED
,	IN	_RewardQuestState		TINYINT	UNSIGNED

,	IN	_CreateItemUID01			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01			INT			UNSIGNED	
,	IN	_ReinforceLev01				TINYINT		UNSIGNED	
,	IN	_ReinforceExp01				INT			UNSIGNED
,	IN	_SmeltingLev01				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01		MEDIUMINT					
,	IN	_CreateStackResultServer01	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx01A				SMALLINT	UNSIGNED		
,	IN	_OptionValue01A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B				SMALLINT	UNSIGNED		
,	IN	_OptionValue01B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C				SMALLINT	UNSIGNED		
,	IN	_OptionValue01C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D				SMALLINT	UNSIGNED		
,	IN	_OptionValue01D				SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01		BIGINT
,	OUT	_CreateStackResultDB01	MEDIUMINT
,	OUT	_Result					INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB01 = 0, _CreateStackResultDB01 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
    	IF	_CharacterUID = 0 OR _RewardQuestIdx = 0 OR ( _MoneyIncreaseAmount01 = 0 AND _CreateItemUID01 = 0 )	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        ELSEIF	_MoneyIncreaseAmount01 < 0																		THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
 
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
            -- 레벨, 경험치 변경
			IF	_CharacterLev > 0	THEN
				UPDATE character_tb	SET Lev = _CharacterLev, Exp = _CharacterExp	WHERE CharacterUID = _CharacterUID;
				IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			END IF;
            
            -- 아이템 생성
			IF	_CreateItemUID01	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01				, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01			, _SmeltingLev01					
									, _StackIncreaseAmount01	, _CreateStackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B				, _OptionValue01B			
									, _OptionIdx01C				, _OptionValue01C				, _OptionIdx01D		, _OptionValue01D	, _CreateStackResultDB01	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
            -- 퀘스트 보상수령으로 변경
            UPDATE quest_daily_list_tb	SET State = _RewardQuestState	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardQuestIdx;
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 603;	LEAVE MAIN_ROUTINE;	END IF;	-- 완료된 퀘스트가 아님
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QuestDaily_Get_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `QuestDaily_Get_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED

,	OUT	_ListReceiveTime		INT		UNSIGNED
,	OUT _PlusRewardReceiveCnt	TINYINT	UNSIGNED 
,	OUT	_Result					INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	BEGIN SET _Result = -1;	END;	-- 알수없는 DB 오류
    
    SET	_ListReceiveTime = 0, _PlusRewardReceiveCnt = 0, _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
       
		-- 일일과제 리스트 및 기타 정보 가져오기
		SELECT	QuestIdx, State, QuestValue
		FROM	quest_daily_list_tb
		WHERE	CharacterUID = _CharacterUID;    
		
		SELECT	UNIX_TIMESTAMP(ListReceiveTime)	, PlusRewardReceiveCnt	
		INTO	_ListReceiveTime				, _PlusRewardReceiveCnt	
		FROM	quest_daily_tb
		WHERE	CharacterUID = _CharacterUID;
		IF	FOUND_ROWS() <= 0	THEN
			SET	_ListReceiveTime = 0, _PlusRewardReceiveCnt = 0;
		END IF;
		
		SET _Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QuestDaily_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `QuestDaily_Update_Game`(
	IN	_CharacterUID		BIGINT	UNSIGNED
,	IN	_DailyQuestIdx		INT		UNSIGNED
,	IN	_DailyQuestState	TINYINT	UNSIGNED
,	IN	_DailyQuestValue	TINYINT	UNSIGNED
    
,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _DailyQuestIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
		UPDATE quest_daily_list_tb	SET State = _DailyQuestState, QuestValue = _DailyQuestValue	WHERE CharacterUID = _CharacterUID AND QuestIdx = _DailyQuestIdx;
        IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QuestMainRewardReceive_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `QuestMainRewardReceive_Update_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_CharacterLev			TINYINT	UNSIGNED
,	IN	_CharacterExp			INT		UNSIGNED
,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED
,	IN	_MoneyType03			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount03	BIGINT
,	IN	_MoneyResultServer03	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime03		INT		UNSIGNED

,	IN	_RewardMainQuestIdx		INT		UNSIGNED
,	IN	_RewardMainQuestState	TINYINT	UNSIGNED
,	IN	_NewMainQuestIdx		INT		UNSIGNED

,	IN	_CreateItemUID01			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01			INT			UNSIGNED	
,	IN	_ReinforceLev01				TINYINT		UNSIGNED	
,	IN	_ReinforceExp01				INT			UNSIGNED
,	IN	_SmeltingLev01				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01		MEDIUMINT					
,	IN	_CreateStackResultServer01	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx01A				SMALLINT	UNSIGNED		
,	IN	_OptionValue01A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B				SMALLINT	UNSIGNED		
,	IN	_OptionValue01B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C				SMALLINT	UNSIGNED		
,	IN	_OptionValue01C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D				SMALLINT	UNSIGNED		
,	IN	_OptionValue01D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID02			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx02			INT			UNSIGNED	
,	IN	_ReinforceLev02				TINYINT		UNSIGNED	
,	IN	_ReinforceExp02				INT			UNSIGNED
,	IN	_SmeltingLev02				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount02		MEDIUMINT					
,	IN	_CreateStackResultServer02	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx02A				SMALLINT	UNSIGNED		
,	IN	_OptionValue02A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02B				SMALLINT	UNSIGNED		
,	IN	_OptionValue02B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02C				SMALLINT	UNSIGNED		
,	IN	_OptionValue02C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02D				SMALLINT	UNSIGNED		
,	IN	_OptionValue02D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID03			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx03			INT			UNSIGNED	
,	IN	_ReinforceLev03				TINYINT		UNSIGNED	
,	IN	_ReinforceExp03				INT			UNSIGNED
,	IN	_SmeltingLev03				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount03		MEDIUMINT					
,	IN	_CreateStackResultServer03	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx03A				SMALLINT	UNSIGNED		
,	IN	_OptionValue03A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03B				SMALLINT	UNSIGNED		
,	IN	_OptionValue03B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03C				SMALLINT	UNSIGNED		
,	IN	_OptionValue03C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03D				SMALLINT	UNSIGNED		
,	IN	_OptionValue03D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID04			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx04			INT			UNSIGNED	
,	IN	_ReinforceLev04				TINYINT		UNSIGNED	
,	IN	_ReinforceExp04				INT			UNSIGNED
,	IN	_SmeltingLev04				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount04		MEDIUMINT					
,	IN	_CreateStackResultServer04	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx04A				SMALLINT	UNSIGNED		
,	IN	_OptionValue04A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04B				SMALLINT	UNSIGNED		
,	IN	_OptionValue04B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04C				SMALLINT	UNSIGNED		
,	IN	_OptionValue04C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04D				SMALLINT	UNSIGNED		
,	IN	_OptionValue04D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID05			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx05			INT			UNSIGNED	
,	IN	_ReinforceLev05				TINYINT		UNSIGNED	
,	IN	_ReinforceExp05				INT			UNSIGNED
,	IN	_SmeltingLev05				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount05		MEDIUMINT					
,	IN	_CreateStackResultServer05	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx05A				SMALLINT	UNSIGNED		
,	IN	_OptionValue05A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05B				SMALLINT	UNSIGNED		
,	IN	_OptionValue05B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05C				SMALLINT	UNSIGNED		
,	IN	_OptionValue05C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05D				SMALLINT	UNSIGNED		
,	IN	_OptionValue05D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID06			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx06			INT			UNSIGNED	
,	IN	_ReinforceLev06				TINYINT		UNSIGNED	
,	IN	_ReinforceExp06				INT			UNSIGNED
,	IN	_SmeltingLev06				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount06		MEDIUMINT					
,	IN	_CreateStackResultServer06	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx06A				SMALLINT	UNSIGNED		
,	IN	_OptionValue06A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06B				SMALLINT	UNSIGNED		
,	IN	_OptionValue06B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06C				SMALLINT	UNSIGNED		
,	IN	_OptionValue06C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06D				SMALLINT	UNSIGNED		
,	IN	_OptionValue06D				SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT
,	OUT _MoneyResultDB03	BIGINT

,	OUT	_CreateStackResultDB01	MEDIUMINT
,	OUT	_CreateStackResultDB02	MEDIUMINT
,	OUT	_CreateStackResultDB03	MEDIUMINT
,	OUT	_CreateStackResultDB04	MEDIUMINT
,	OUT	_CreateStackResultDB05	MEDIUMINT
,	OUT	_CreateStackResultDB06	MEDIUMINT

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB01 = 0		, _MoneyResultDB02 = 0		, _MoneyResultDB03 = 0
	, 	_CreateStackResultDB01 = 0	, _CreateStackResultDB02 = 0, _CreateStackResultDB03 = 0, _CreateStackResultDB04 = 0, _CreateStackResultDB05 = 0, _CreateStackResultDB06 = 0
    , 	_Result = -1;

	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _RewardMainQuestIdx = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
		ELSEIF 	_MoneyIncreaseAmount01 < 0 OR _MoneyIncreaseAmount02 < 0 OR _MoneyIncreaseAmount03 < 0
			OR 	_StackIncreaseAmount01 < 0 OR _StackIncreaseAmount02 < 0 OR _StackIncreaseAmount03 < 0 OR _StackIncreaseAmount04 < 0 OR _StackIncreaseAmount05 < 0 OR _StackIncreaseAmount06 < 0	THEN	
			SET	_Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
		END IF;	

		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount02 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyIncreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount03 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType03, _MoneyIncreaseAmount03, _MoneyResultServer03, _MoneyUpdateTime03, _MoneyResultDB03, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
            -- 레벨, 경험치 변경
			IF	_CharacterLev > 0	THEN
				UPDATE character_tb	SET Lev = _CharacterLev, Exp = _CharacterExp	WHERE CharacterUID = _CharacterUID;
				IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			END IF;
            
            -- 아이템 생성
			IF	_CreateItemUID01	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01				, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01			, _SmeltingLev01					
									, _StackIncreaseAmount01	, _CreateStackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B				, _OptionValue01B			
									, _OptionIdx01C				, _OptionValue01C				, _OptionIdx01D		, _OptionValue01D	, _CreateStackResultDB01	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID02	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID02				, _CreateItemIdx02	, _ReinforceLev02	, _ReinforceExp02			, _SmeltingLev02					
									, _StackIncreaseAmount02	, _CreateStackResultServer02	, _OptionIdx02A		, _OptionValue02A	, _OptionIdx02B				, _OptionValue02B			
									, _OptionIdx02C				, _OptionValue02C				, _OptionIdx02D		, _OptionValue02D	, _CreateStackResultDB02	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID03	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID03				, _CreateItemIdx03	, _ReinforceLev03	, _ReinforceExp03			, _SmeltingLev03					
									, _StackIncreaseAmount03	, _CreateStackResultServer03	, _OptionIdx03A		, _OptionValue03A	, _OptionIdx03B				, _OptionValue03B			
									, _OptionIdx03C				, _OptionValue03C				, _OptionIdx03D		, _OptionValue03D	, _CreateStackResultDB03	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID04	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID04				, _CreateItemIdx04	, _ReinforceLev04	, _ReinforceExp04			, _SmeltingLev04					
									, _StackIncreaseAmount04	, _CreateStackResultServer04	, _OptionIdx04A		, _OptionValue04A	, _OptionIdx04B				, _OptionValue04B			
									, _OptionIdx04C				, _OptionValue04C				, _OptionIdx04D		, _OptionValue04D	, _CreateStackResultDB04	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID05	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID05				, _CreateItemIdx05	, _ReinforceLev05	, _ReinforceExp05			, _SmeltingLev05					
									, _StackIncreaseAmount05	, _CreateStackResultServer05	, _OptionIdx05A		, _OptionValue05A	, _OptionIdx05B				, _OptionValue05B			
									, _OptionIdx05C				, _OptionValue05C				, _OptionIdx05D		, _OptionValue05D	, _CreateStackResultDB05	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID06	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID06				, _CreateItemIdx06	, _ReinforceLev06	, _ReinforceExp06			, _SmeltingLev06					
									, _StackIncreaseAmount06	, _CreateStackResultServer06	, _OptionIdx06A		, _OptionValue06A	, _OptionIdx06B				, _OptionValue06B			
									, _OptionIdx06C				, _OptionValue06C				, _OptionIdx06D		, _OptionValue06D	, _CreateStackResultDB06	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			-- 메인 퀘스트 변경
            IF	_NewMainQuestIdx > 0	THEN
				UPDATE quest_main_tb	SET QuestIdx = _NewMainQuestIdx, State = 1, QuestValue = 0	WHERE CharacterUID = _CharacterUID;
                IF ROW_COUNT() <= 0 THEN ROLLBACK;	SET _Result = 602;	LEAVE MAIN_ROUTINE;	END IF;	
			ELSEIF	_RewardMainQuestIdx > 0	THEN
				UPDATE quest_main_tb	SET State = _RewardMainQuestState	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardMainQuestIdx;
                IF ROW_COUNT() <= 0 THEN ROLLBACK;	SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;

			
			SET	_Result = 0;
		COMMIT;
    END;

END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QuestMain_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `QuestMain_Update_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_MainQuestIdx	INT		UNSIGNED
,	IN	_MainQuestState	TINYINT	UNSIGNED
,	IN	_MainQuestValue	TINYINT	UNSIGNED
    
,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _MainQuestIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
		UPDATE quest_main_tb	SET State = _MainQuestState, QuestValue = _MainQuestValue	WHERE CharacterUID = _CharacterUID AND QuestIdx = _MainQuestIdx;
--        IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QuestSubRewardReceive_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `QuestSubRewardReceive_Update_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_CharacterLev			TINYINT	UNSIGNED
,	IN	_CharacterExp			INT		UNSIGNED
,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED
,	IN	_MoneyType03			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount03	BIGINT
,	IN	_MoneyResultServer03	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime03		INT		UNSIGNED

,	IN	_RewardSubQuestIdx		INT		UNSIGNED
,	IN	_RewardSubQuestState	TINYINT	UNSIGNED
,	IN	_ClearCnt				TINYINT	UNSIGNED
,	IN	_ClearTime				INT		UNSIGNED

,	IN	_NewSubQuestIdx01	INT	UNSIGNED
,	IN	_NewSubQuestIdx02	INT	UNSIGNED
,	IN	_NewSubQuestIdx03	INT	UNSIGNED
,	IN	_NewSubQuestIdx04	INT	UNSIGNED
,	IN	_NewSubQuestIdx05	INT	UNSIGNED

,	IN	_CreateItemUID01			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01			INT			UNSIGNED	
,	IN	_ReinforceLev01				TINYINT		UNSIGNED	
,	IN	_ReinforceExp01				INT			UNSIGNED
,	IN	_SmeltingLev01				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01		MEDIUMINT					
,	IN	_CreateStackResultServer01	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx01A				SMALLINT	UNSIGNED		
,	IN	_OptionValue01A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B				SMALLINT	UNSIGNED		
,	IN	_OptionValue01B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C				SMALLINT	UNSIGNED		
,	IN	_OptionValue01C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D				SMALLINT	UNSIGNED		
,	IN	_OptionValue01D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID02			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx02			INT			UNSIGNED	
,	IN	_ReinforceLev02				TINYINT		UNSIGNED	
,	IN	_ReinforceExp02				INT			UNSIGNED
,	IN	_SmeltingLev02				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount02		MEDIUMINT					
,	IN	_CreateStackResultServer02	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx02A				SMALLINT	UNSIGNED		
,	IN	_OptionValue02A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02B				SMALLINT	UNSIGNED		
,	IN	_OptionValue02B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02C				SMALLINT	UNSIGNED		
,	IN	_OptionValue02C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02D				SMALLINT	UNSIGNED		
,	IN	_OptionValue02D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID03			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx03			INT			UNSIGNED	
,	IN	_ReinforceLev03				TINYINT		UNSIGNED	
,	IN	_ReinforceExp03				INT			UNSIGNED
,	IN	_SmeltingLev03				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount03		MEDIUMINT					
,	IN	_CreateStackResultServer03	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx03A				SMALLINT	UNSIGNED		
,	IN	_OptionValue03A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03B				SMALLINT	UNSIGNED		
,	IN	_OptionValue03B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03C				SMALLINT	UNSIGNED		
,	IN	_OptionValue03C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03D				SMALLINT	UNSIGNED		
,	IN	_OptionValue03D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID04			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx04			INT			UNSIGNED	
,	IN	_ReinforceLev04				TINYINT		UNSIGNED	
,	IN	_ReinforceExp04				INT			UNSIGNED
,	IN	_SmeltingLev04				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount04		MEDIUMINT					
,	IN	_CreateStackResultServer04	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx04A				SMALLINT	UNSIGNED		
,	IN	_OptionValue04A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04B				SMALLINT	UNSIGNED		
,	IN	_OptionValue04B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04C				SMALLINT	UNSIGNED		
,	IN	_OptionValue04C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04D				SMALLINT	UNSIGNED		
,	IN	_OptionValue04D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID05			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx05			INT			UNSIGNED	
,	IN	_ReinforceLev05				TINYINT		UNSIGNED	
,	IN	_ReinforceExp05				INT			UNSIGNED
,	IN	_SmeltingLev05				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount05		MEDIUMINT					
,	IN	_CreateStackResultServer05	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx05A				SMALLINT	UNSIGNED		
,	IN	_OptionValue05A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05B				SMALLINT	UNSIGNED		
,	IN	_OptionValue05B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05C				SMALLINT	UNSIGNED		
,	IN	_OptionValue05C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05D				SMALLINT	UNSIGNED		
,	IN	_OptionValue05D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID06			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx06			INT			UNSIGNED	
,	IN	_ReinforceLev06				TINYINT		UNSIGNED	
,	IN	_ReinforceExp06				INT			UNSIGNED
,	IN	_SmeltingLev06				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount06		MEDIUMINT					
,	IN	_CreateStackResultServer06	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx06A				SMALLINT	UNSIGNED		
,	IN	_OptionValue06A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06B				SMALLINT	UNSIGNED		
,	IN	_OptionValue06B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06C				SMALLINT	UNSIGNED		
,	IN	_OptionValue06C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06D				SMALLINT	UNSIGNED		
,	IN	_OptionValue06D				SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT
,	OUT _MoneyResultDB03	BIGINT

,	OUT	_CreateStackResultDB01	MEDIUMINT
,	OUT	_CreateStackResultDB02	MEDIUMINT
,	OUT	_CreateStackResultDB03	MEDIUMINT
,	OUT	_CreateStackResultDB04	MEDIUMINT
,	OUT	_CreateStackResultDB05	MEDIUMINT
,	OUT	_CreateStackResultDB06	MEDIUMINT

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _MoneyResultDB01 = 0		, _MoneyResultDB02 = 0		, _MoneyResultDB03 = 0
    , 	_CreateStackResultDB01 = 0	, _CreateStackResultDB02 = 0, _CreateStackResultDB03 = 0, _CreateStackResultDB04 = 0, _CreateStackResultDB05 = 0, _CreateStackResultDB06 = 0
    , 	_Result = -1;

	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _RewardSubQuestIdx = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
		ELSEIF 	_MoneyIncreaseAmount01 < 0 OR _MoneyIncreaseAmount02 < 0 OR _MoneyIncreaseAmount03 < 0
			OR 	_StackIncreaseAmount01 < 0 OR _StackIncreaseAmount02 < 0 OR _StackIncreaseAmount03 < 0 OR _StackIncreaseAmount04 < 0 OR _StackIncreaseAmount05 < 0 OR _StackIncreaseAmount06 < 0	THEN	
			SET	_Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
		END IF;	

		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount02 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyIncreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount03 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType03, _MoneyIncreaseAmount03, _MoneyResultServer03, _MoneyUpdateTime03, _MoneyResultDB03, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
            -- 레벨, 경험치 변경
			IF	_CharacterLev > 0	THEN
				UPDATE character_tb	SET Lev = _CharacterLev, Exp = _CharacterExp	WHERE CharacterUID = _CharacterUID;
				IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			END IF;
            
            -- 아이템 생성
			IF	_CreateItemUID01	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01				, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01			, _SmeltingLev01					
									, _StackIncreaseAmount01	, _CreateStackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B				, _OptionValue01B			
									, _OptionIdx01C				, _OptionValue01C				, _OptionIdx01D		, _OptionValue01D	, _CreateStackResultDB01	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID02	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID02				, _CreateItemIdx02	, _ReinforceLev02	, _ReinforceExp02			, _SmeltingLev02					
									, _StackIncreaseAmount02	, _CreateStackResultServer02	, _OptionIdx02A		, _OptionValue02A	, _OptionIdx02B				, _OptionValue02B			
									, _OptionIdx02C				, _OptionValue02C				, _OptionIdx02D		, _OptionValue02D	, _CreateStackResultDB02	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID03	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID03				, _CreateItemIdx03	, _ReinforceLev03	, _ReinforceExp03			, _SmeltingLev03					
									, _StackIncreaseAmount03	, _CreateStackResultServer03	, _OptionIdx03A		, _OptionValue03A	, _OptionIdx03B				, _OptionValue03B			
									, _OptionIdx03C				, _OptionValue03C				, _OptionIdx03D		, _OptionValue03D	, _CreateStackResultDB03	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID04	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID04				, _CreateItemIdx04	, _ReinforceLev04	, _ReinforceExp04			, _SmeltingLev04					
									, _StackIncreaseAmount04	, _CreateStackResultServer04	, _OptionIdx04A		, _OptionValue04A	, _OptionIdx04B				, _OptionValue04B			
									, _OptionIdx04C				, _OptionValue04C				, _OptionIdx04D		, _OptionValue04D	, _CreateStackResultDB04	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID05	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID05				, _CreateItemIdx05	, _ReinforceLev05	, _ReinforceExp05			, _SmeltingLev05					
									, _StackIncreaseAmount05	, _CreateStackResultServer05	, _OptionIdx05A		, _OptionValue05A	, _OptionIdx05B				, _OptionValue05B			
									, _OptionIdx05C				, _OptionValue05C				, _OptionIdx05D		, _OptionValue05D	, _CreateStackResultDB05	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID06	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID06				, _CreateItemIdx06	, _ReinforceLev06	, _ReinforceExp06			, _SmeltingLev06					
									, _StackIncreaseAmount06	, _CreateStackResultServer06	, _OptionIdx06A		, _OptionValue06A	, _OptionIdx06B				, _OptionValue06B			
									, _OptionIdx06C				, _OptionValue06C				, _OptionIdx06D		, _OptionValue06D	, _CreateStackResultDB06	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
            -- 서브 퀘스트 변경
            IF	_RewardSubQuestIdx > 0	THEN
				UPDATE quest_sub_tb	SET State = _RewardSubQuestState	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardSubQuestIdx;
                IF ROW_COUNT() <= 0 THEN ROLLBACK;	SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;
            
            IF	_ClearCnt > 0	THEN
				UPDATE quest_sub_clearcnt_tb	SET ClearCnt = _ClearCnt, ClearTime = FROM_UNIXTIME(_ClearTime)	WHERE CharacterUID = _CharacterUID AND QuestIdx = _RewardSubQuestIdx;
                IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO quest_sub_clearcnt_tb ( CharacterUID, QuestIdx, ClearCnt, ClearTime )	VALUES ( _CharacterUID, _RewardSubQuestIdx, _ClearCnt, FROM_UNIXTIME(_ClearTime) );
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;
            
            IF _NewSubQuestIdx01 > 0	THEN INSERT INTO quest_sub_tb ( CharacterUID, QuestIdx, State, QuestValue )	VALUES ( _CharacterUID, _NewSubQuestIdx01, 1, 0 );	END IF;
            IF _NewSubQuestIdx02 > 0	THEN INSERT INTO quest_sub_tb ( CharacterUID, QuestIdx, State, QuestValue )	VALUES ( _CharacterUID, _NewSubQuestIdx02, 1, 0 );	END IF;
            IF _NewSubQuestIdx03 > 0	THEN INSERT INTO quest_sub_tb ( CharacterUID, QuestIdx, State, QuestValue )	VALUES ( _CharacterUID, _NewSubQuestIdx03, 1, 0 );	END IF;
            IF _NewSubQuestIdx04 > 0	THEN INSERT INTO quest_sub_tb ( CharacterUID, QuestIdx, State, QuestValue )	VALUES ( _CharacterUID, _NewSubQuestIdx04, 1, 0 );	END IF;
            IF _NewSubQuestIdx05 > 0	THEN INSERT INTO quest_sub_tb ( CharacterUID, QuestIdx, State, QuestValue )	VALUES ( _CharacterUID, _NewSubQuestIdx05, 1, 0 );	END IF;

			
			SET	_Result = 0;
		COMMIT;
    END;

END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QuestSub_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `QuestSub_Update_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_SubQuestIdx	INT		UNSIGNED
,	IN	_SubQuestState	TINYINT	UNSIGNED
,	IN	_SubQuestValue	TINYINT	UNSIGNED
    
,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _SubQuestIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
		UPDATE quest_sub_tb	SET State = _SubQuestState, QuestValue = _SubQuestValue	WHERE CharacterUID = _CharacterUID AND QuestIdx = _SubQuestIdx;
       	IF ROW_COUNT() <= 0	THEN
			INSERT IGNORE INTO quest_sub_tb ( CharacterUID, QuestIdx, State, QuestValue )	VALUES ( _CharacterUID, _SubQuestIdx, _SubQuestState, _SubQuestValue );
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
		END IF;
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Quest_Update_DB` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Quest_Update_DB`(
	IN	_CharacterUID	BIGINT	UNSIGNED

,	IN	_MainQuestIdx	INT		UNSIGNED
,	IN	_MainQuestValue	TINYINT	UNSIGNED
    
,	IN	_SubQuestIdx01		INT		UNSIGNED
,	IN	_SubQuestValue01	TINYINT	UNSIGNED
,	IN	_SubQuestIdx02		INT		UNSIGNED
,	IN	_SubQuestValue02	TINYINT	UNSIGNED
,	IN	_SubQuestIdx03		INT		UNSIGNED
,	IN	_SubQuestValue03	TINYINT	UNSIGNED
,	IN	_SubQuestIdx04		INT		UNSIGNED
,	IN	_SubQuestValue04	TINYINT	UNSIGNED

,	IN	_DailyQuestUID01	TINYINT		UNSIGNED
,	IN	_DailyQuestValue01	SMALLINT	UNSIGNED
,	IN	_DailyQuestClear01	TINYINT		UNSIGNED
,	IN	_DailyQuestUID02	TINYINT		UNSIGNED
,	IN	_DailyQuestValue02	SMALLINT	UNSIGNED
,	IN	_DailyQuestClear02	TINYINT		UNSIGNED
,	IN	_DailyQuestUID03	TINYINT		UNSIGNED
,	IN	_DailyQuestValue03	SMALLINT	UNSIGNED
,	IN	_DailyQuestClear03	TINYINT		UNSIGNED

,	IN	_WeeklyQuestUID01	TINYINT		UNSIGNED
,	IN	_WeeklyQuestValue01	SMALLINT	UNSIGNED
,	IN	_WeeklyQuestClear01	TINYINT		UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;

    SET _Result = -1;
        
	MAIN_ROUTINE:
    BEGIN
        -- 일일 퀘스트 진행상황 변경
        IF	_DailyQuestUID01	> 0	THEN			
			UPDATE 	quest_daily_list_tb	
            SET 	QuestValue = _DailyQuestValue01	, QuestClear = _DailyQuestClear01				
            WHERE 	CharacterUID = _CharacterUID AND QuestUID = _DailyQuestUID01;					
            IF ROW_COUNT() <= 0 THEN SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;			
		END IF;			
        						
        IF	_DailyQuestUID02	> 0	THEN			
			UPDATE 	quest_daily_list_tb	
            SET 	QuestValue = _DailyQuestValue02	, QuestClear = _DailyQuestClear02				
            WHERE 	CharacterUID = _CharacterUID AND QuestUID = _DailyQuestUID02;					
            IF ROW_COUNT() <= 0 THEN SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;			
		END IF;			
        						
        IF	_DailyQuestUID03	> 0	THEN			
			UPDATE 	quest_daily_list_tb	
            SET 	QuestValue = _DailyQuestValue03	, QuestClear = _DailyQuestClear03				
            WHERE 	CharacterUID = _CharacterUID AND QuestUID = _DailyQuestUID03;					
            IF ROW_COUNT() <= 0 THEN SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;			
		END IF;			
        
        
        -- 퀘스트 진행상황 변경
        IF	_MainQuestIdx	> 0	THEN			
			UPDATE quest_main_tb	SET QuestValue = _MainQuestValue	WHERE CharacterUID = _CharacterUID AND QuestIdx = _MainQuestIdx;
            IF ROW_COUNT() <= 0 THEN SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;			
        END IF;	
        
        IF	_SubQuestIdx01	> 0	THEN			
			UPDATE quest_sub_tb	SET QuestValue = _SubQuestValue01	WHERE CharacterUID = _CharacterUID AND QuestIdx = _SubQuestIdx01;
            IF ROW_COUNT() <= 0 THEN SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;			
        END IF;						

        IF	_SubQuestIdx02	> 0	THEN			
			UPDATE quest_sub_tb	SET QuestValue = _SubQuestValue02	WHERE CharacterUID = _CharacterUID AND QuestIdx = _SubQuestIdx02;
            IF ROW_COUNT() <= 0 THEN SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;			
        END IF;						
        						
        IF	_SubQuestIdx03	> 0	THEN			
			UPDATE quest_sub_tb	SET QuestValue = _SubQuestValue03	WHERE CharacterUID = _CharacterUID AND QuestIdx = _SubQuestIdx03;
            IF ROW_COUNT() <= 0 THEN SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;			
        END IF;						
        						
        IF	_SubQuestIdx04	> 0	THEN			
			UPDATE quest_sub_tb	SET QuestValue = _SubQuestValue04	WHERE CharacterUID = _CharacterUID AND QuestIdx = _SubQuestIdx04;
            IF ROW_COUNT() <= 0 THEN SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;			
        END IF;						

		
		-- 주간 퀘스트 진행상황 변경
        IF	_WeeklyQuestUID01	> 0	THEN			
			UPDATE 	quest_Weekly_list_tb	
            SET 	QuestValue = _WeeklyQuestValue01	, QuestClear = _WeeklyQuestClear01				
            WHERE 	CharacterUID = _CharacterUID AND QuestUID = _WeeklyQuestUID01;					
            IF ROW_COUNT() <= 0 THEN SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;			
		END IF;		
        
        
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Reward_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Reward_Update_Game`(
-- 	IN	_AccountUID		BIGINT		UNSIGNED
	IN	_CharacterUID	BIGINT		UNSIGNED
,	IN	_CharacterLev	TINYINT		UNSIGNED
,	IN	_CharacterExp	INT			UNSIGNED
,	IN	_CurrentHP		INT			UNSIGNED 
,	IN	_CurrentMP		INT			UNSIGNED
,	IN	_PKPoint		SMALLINT
-- ,	IN	_RewardIdx			SMALLINT	UNSIGNED
-- ,	IN	_RewardReceiveCnt	TINYINT		UNSIGNED
-- ,	IN	_LastReceiveTime	INT			UNSIGNED

,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED
,	IN	_MoneyType03			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount03	BIGINT
,	IN	_MoneyResultServer03	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime03		INT		UNSIGNED

,	IN	_CreateItemUID01			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01			INT			UNSIGNED	
,	IN	_ReinforceLev01				TINYINT		UNSIGNED	
,	IN	_ReinforceExp01				INT			UNSIGNED
,	IN	_SmeltingLev01				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01		MEDIUMINT					
,	IN	_CreateStackResultServer01	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx01A				SMALLINT	UNSIGNED		
,	IN	_OptionValue01A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B				SMALLINT	UNSIGNED		
,	IN	_OptionValue01B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C				SMALLINT	UNSIGNED		
,	IN	_OptionValue01C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D				SMALLINT	UNSIGNED		
,	IN	_OptionValue01D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID02			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx02			INT			UNSIGNED	
,	IN	_ReinforceLev02				TINYINT		UNSIGNED	
,	IN	_ReinforceExp02				INT			UNSIGNED
,	IN	_SmeltingLev02				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount02		MEDIUMINT					
,	IN	_CreateStackResultServer02	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx02A				SMALLINT	UNSIGNED		
,	IN	_OptionValue02A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02B				SMALLINT	UNSIGNED		
,	IN	_OptionValue02B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02C				SMALLINT	UNSIGNED		
,	IN	_OptionValue02C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx02D				SMALLINT	UNSIGNED		
,	IN	_OptionValue02D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID03			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx03			INT			UNSIGNED	
,	IN	_ReinforceLev03				TINYINT		UNSIGNED	
,	IN	_ReinforceExp03				INT			UNSIGNED
,	IN	_SmeltingLev03				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount03		MEDIUMINT					
,	IN	_CreateStackResultServer03	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx03A				SMALLINT	UNSIGNED		
,	IN	_OptionValue03A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03B				SMALLINT	UNSIGNED		
,	IN	_OptionValue03B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03C				SMALLINT	UNSIGNED		
,	IN	_OptionValue03C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx03D				SMALLINT	UNSIGNED		
,	IN	_OptionValue03D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID04			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx04			INT			UNSIGNED	
,	IN	_ReinforceLev04				TINYINT		UNSIGNED	
,	IN	_ReinforceExp04				INT			UNSIGNED
,	IN	_SmeltingLev04				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount04		MEDIUMINT					
,	IN	_CreateStackResultServer04	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx04A				SMALLINT	UNSIGNED		
,	IN	_OptionValue04A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04B				SMALLINT	UNSIGNED		
,	IN	_OptionValue04B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04C				SMALLINT	UNSIGNED		
,	IN	_OptionValue04C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx04D				SMALLINT	UNSIGNED		
,	IN	_OptionValue04D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID05			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx05			INT			UNSIGNED	
,	IN	_ReinforceLev05				TINYINT		UNSIGNED	
,	IN	_ReinforceExp05				INT			UNSIGNED
,	IN	_SmeltingLev05				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount05		MEDIUMINT					
,	IN	_CreateStackResultServer05	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx05A				SMALLINT	UNSIGNED		
,	IN	_OptionValue05A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05B				SMALLINT	UNSIGNED		
,	IN	_OptionValue05B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05C				SMALLINT	UNSIGNED		
,	IN	_OptionValue05C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx05D				SMALLINT	UNSIGNED		
,	IN	_OptionValue05D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID06			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx06			INT			UNSIGNED	
,	IN	_ReinforceLev06				TINYINT		UNSIGNED	
,	IN	_ReinforceExp06				INT			UNSIGNED
,	IN	_SmeltingLev06				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount06		MEDIUMINT					
,	IN	_CreateStackResultServer06	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx06A				SMALLINT	UNSIGNED		
,	IN	_OptionValue06A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06B				SMALLINT	UNSIGNED		
,	IN	_OptionValue06B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06C				SMALLINT	UNSIGNED		
,	IN	_OptionValue06C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx06D				SMALLINT	UNSIGNED		
,	IN	_OptionValue06D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID07			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx07			INT			UNSIGNED	
,	IN	_ReinforceLev07				TINYINT		UNSIGNED	
,	IN	_ReinforceExp07				INT			UNSIGNED
,	IN	_SmeltingLev07				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount07		MEDIUMINT					
,	IN	_CreateStackResultServer07	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx07A				SMALLINT	UNSIGNED		
,	IN	_OptionValue07A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07B				SMALLINT	UNSIGNED		
,	IN	_OptionValue07B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07C				SMALLINT	UNSIGNED		
,	IN	_OptionValue07C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx07D				SMALLINT	UNSIGNED		
,	IN	_OptionValue07D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID08			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx08			INT			UNSIGNED	
,	IN	_ReinforceLev08				TINYINT		UNSIGNED	
,	IN	_ReinforceExp08				INT			UNSIGNED
,	IN	_SmeltingLev08				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount08		MEDIUMINT					
,	IN	_CreateStackResultServer08	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx08A				SMALLINT	UNSIGNED		
,	IN	_OptionValue08A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08B				SMALLINT	UNSIGNED		
,	IN	_OptionValue08B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08C				SMALLINT	UNSIGNED		
,	IN	_OptionValue08C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx08D				SMALLINT	UNSIGNED		
,	IN	_OptionValue08D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID09			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx09			INT			UNSIGNED	
,	IN	_ReinforceLev09				TINYINT		UNSIGNED	
,	IN	_ReinforceExp09				INT			UNSIGNED
,	IN	_SmeltingLev09				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount09		MEDIUMINT					
,	IN	_CreateStackResultServer09	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx09A				SMALLINT	UNSIGNED		
,	IN	_OptionValue09A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09B				SMALLINT	UNSIGNED		
,	IN	_OptionValue09B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09C				SMALLINT	UNSIGNED		
,	IN	_OptionValue09C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx09D				SMALLINT	UNSIGNED		
,	IN	_OptionValue09D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID10			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx10			INT			UNSIGNED	
,	IN	_ReinforceLev10				TINYINT		UNSIGNED	
,	IN	_ReinforceExp10				INT			UNSIGNED
,	IN	_SmeltingLev10				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount10		MEDIUMINT					
,	IN	_CreateStackResultServer10	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx10A				SMALLINT	UNSIGNED		
,	IN	_OptionValue10A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10B				SMALLINT	UNSIGNED		
,	IN	_OptionValue10B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10C				SMALLINT	UNSIGNED		
,	IN	_OptionValue10C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx10D				SMALLINT	UNSIGNED		
,	IN	_OptionValue10D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID11			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx11			INT			UNSIGNED	
,	IN	_ReinforceLev11				TINYINT		UNSIGNED	
,	IN	_ReinforceExp11				INT			UNSIGNED
,	IN	_SmeltingLev11				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount11		MEDIUMINT					
,	IN	_CreateStackResultServer11	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx11A				SMALLINT	UNSIGNED		
,	IN	_OptionValue11A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx11B				SMALLINT	UNSIGNED		
,	IN	_OptionValue11B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx11C				SMALLINT	UNSIGNED		
,	IN	_OptionValue11C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx11D				SMALLINT	UNSIGNED		
,	IN	_OptionValue11D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID12			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx12			INT			UNSIGNED	
,	IN	_ReinforceLev12				TINYINT		UNSIGNED	
,	IN	_ReinforceExp12				INT			UNSIGNED
,	IN	_SmeltingLev12				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount12		MEDIUMINT					
,	IN	_CreateStackResultServer12	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx12A				SMALLINT	UNSIGNED		
,	IN	_OptionValue12A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx12B				SMALLINT	UNSIGNED		
,	IN	_OptionValue12B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx12C				SMALLINT	UNSIGNED		
,	IN	_OptionValue12C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx12D				SMALLINT	UNSIGNED		
,	IN	_OptionValue12D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID13			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx13			INT			UNSIGNED	
,	IN	_ReinforceLev13				TINYINT		UNSIGNED	
,	IN	_ReinforceExp13				INT			UNSIGNED
,	IN	_SmeltingLev13				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount13		MEDIUMINT					
,	IN	_CreateStackResultServer13	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx13A				SMALLINT	UNSIGNED		
,	IN	_OptionValue13A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx13B				SMALLINT	UNSIGNED		
,	IN	_OptionValue13B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx13C				SMALLINT	UNSIGNED		
,	IN	_OptionValue13C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx13D				SMALLINT	UNSIGNED		
,	IN	_OptionValue13D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID14			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx14			INT			UNSIGNED	
,	IN	_ReinforceLev14				TINYINT		UNSIGNED	
,	IN	_ReinforceExp14				INT			UNSIGNED
,	IN	_SmeltingLev14				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount14		MEDIUMINT					
,	IN	_CreateStackResultServer14	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx14A				SMALLINT	UNSIGNED		
,	IN	_OptionValue14A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx14B				SMALLINT	UNSIGNED		
,	IN	_OptionValue14B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx14C				SMALLINT	UNSIGNED		
,	IN	_OptionValue14C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx14D				SMALLINT	UNSIGNED		
,	IN	_OptionValue14D				SMALLINT	UNSIGNED		
,	IN	_CreateItemUID15			BIGINT		UNSIGNED		
,	IN	_CreateItemIdx15			INT			UNSIGNED	
,	IN	_ReinforceLev15				TINYINT		UNSIGNED	
,	IN	_ReinforceExp15				INT			UNSIGNED
,	IN	_SmeltingLev15				TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount15		MEDIUMINT					
,	IN	_CreateStackResultServer15	MEDIUMINT	UNSIGNED					
,	IN	_OptionIdx15A				SMALLINT	UNSIGNED		
,	IN	_OptionValue15A				SMALLINT	UNSIGNED		
,	IN	_OptionIdx15B				SMALLINT	UNSIGNED		
,	IN	_OptionValue15B				SMALLINT	UNSIGNED		
,	IN	_OptionIdx15C				SMALLINT	UNSIGNED		
,	IN	_OptionValue15C				SMALLINT	UNSIGNED		
,	IN	_OptionIdx15D				SMALLINT	UNSIGNED		
,	IN	_OptionValue15D				SMALLINT	UNSIGNED		

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT
,	OUT _MoneyResultDB03	BIGINT

,	OUT	_CreateStackResultDB01	MEDIUMINT
,	OUT	_CreateStackResultDB02	MEDIUMINT
,	OUT	_CreateStackResultDB03	MEDIUMINT
,	OUT	_CreateStackResultDB04	MEDIUMINT
,	OUT	_CreateStackResultDB05	MEDIUMINT
,	OUT	_CreateStackResultDB06	MEDIUMINT
,	OUT	_CreateStackResultDB07	MEDIUMINT
,	OUT	_CreateStackResultDB08	MEDIUMINT
,	OUT	_CreateStackResultDB09	MEDIUMINT
,	OUT	_CreateStackResultDB10	MEDIUMINT
,	OUT	_CreateStackResultDB11	MEDIUMINT
,	OUT	_CreateStackResultDB12	MEDIUMINT
,	OUT	_CreateStackResultDB13	MEDIUMINT
,	OUT	_CreateStackResultDB14	MEDIUMINT
,	OUT	_CreateStackResultDB15	MEDIUMINT

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _MoneyResultDB01 = 0		, _MoneyResultDB02 = 0		, _MoneyResultDB03 = 0
    , 	_CreateStackResultDB01 = 0	, _CreateStackResultDB02 = 0, _CreateStackResultDB03 = 0, _CreateStackResultDB04 = 0, _CreateStackResultDB05 = 0
	, 	_CreateStackResultDB06 = 0	, _CreateStackResultDB07 = 0, _CreateStackResultDB08 = 0, _CreateStackResultDB09 = 0, _CreateStackResultDB10 = 0
    , 	_CreateStackResultDB11 = 0	, _CreateStackResultDB12 = 0, _CreateStackResultDB13 = 0, _CreateStackResultDB14 = 0, _CreateStackResultDB15 = 0
    , 	_Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
		ELSEIF 	_MoneyIncreaseAmount01 < 0 OR _MoneyIncreaseAmount02 < 0 OR	_MoneyIncreaseAmount03 < 0 
			OR 	_StackIncreaseAmount01 < 0 OR _StackIncreaseAmount02 < 0 OR _StackIncreaseAmount03 < 0 OR _StackIncreaseAmount04 < 0 OR _StackIncreaseAmount05 < 0 
			OR 	_StackIncreaseAmount06 < 0 OR _StackIncreaseAmount07 < 0 OR _StackIncreaseAmount08 < 0 OR _StackIncreaseAmount09 < 0 OR _StackIncreaseAmount10 < 0	
            OR 	_StackIncreaseAmount11 < 0 OR _StackIncreaseAmount12 < 0 OR _StackIncreaseAmount13 < 0 OR _StackIncreaseAmount14 < 0 OR _StackIncreaseAmount15 < 0 THEN	
			SET	_Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
		END IF;	

		START TRANSACTION;
            -- 재화 변경
			IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount02 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyIncreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
			IF	_MoneyIncreaseAmount03 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType03, _MoneyIncreaseAmount03, _MoneyResultServer03, _MoneyUpdateTime03, _MoneyResultDB03, _Result );
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			
            -- 레벨, 경험치 변경
			IF	_CharacterLev > 0	THEN
				UPDATE 	character_tb	
				SET 	Lev = _CharacterLev, Exp = _CharacterExp
					, 	CurrentHP = CASE WHEN _CurrentHP IS NULL THEN CurrentHP ELSE _CurrentHP END
					, 	CurrentMP = CASE WHEN _CurrentMP IS NULL THEN CurrentMP ELSE _CurrentMP END
				WHERE 	CharacterUID = _CharacterUID;
				IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			ELSEIF	_CurrentHP IS NOT NULL AND _CurrentMP IS NOT NULL	THEN
				UPDATE character_tb	SET CurrentHP = _CurrentHP, CurrentMP = _CurrentMP	WHERE CharacterUID = _CharacterUID;
			END IF;
            
            UPDATE character_tb	SET PKPoint = _PKPoint	WHERE CharacterUID = _CharacterUID;
            
            -- 아이템 생성
			IF	_CreateItemUID01	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01				, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01			, _SmeltingLev01					
									, _StackIncreaseAmount01	, _CreateStackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B				, _OptionValue01B			
									, _OptionIdx01C				, _OptionValue01C				, _OptionIdx01D		, _OptionValue01D	, _CreateStackResultDB01	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID02	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID02				, _CreateItemIdx02	, _ReinforceLev02	, _ReinforceExp02			, _SmeltingLev02					
									, _StackIncreaseAmount02	, _CreateStackResultServer02	, _OptionIdx02A		, _OptionValue02A	, _OptionIdx02B				, _OptionValue02B			
									, _OptionIdx02C				, _OptionValue02C				, _OptionIdx02D		, _OptionValue02D	, _CreateStackResultDB02	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID03	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID03				, _CreateItemIdx03	, _ReinforceLev03	, _ReinforceExp03			, _SmeltingLev03					
									, _StackIncreaseAmount03	, _CreateStackResultServer03	, _OptionIdx03A		, _OptionValue03A	, _OptionIdx03B				, _OptionValue03B			
									, _OptionIdx03C				, _OptionValue03C				, _OptionIdx03D		, _OptionValue03D	, _CreateStackResultDB03	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID04	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID04				, _CreateItemIdx04	, _ReinforceLev04	, _ReinforceExp04			, _SmeltingLev04					
									, _StackIncreaseAmount04	, _CreateStackResultServer04	, _OptionIdx04A		, _OptionValue04A	, _OptionIdx04B				, _OptionValue04B			
									, _OptionIdx04C				, _OptionValue04C				, _OptionIdx04D		, _OptionValue04D	, _CreateStackResultDB04	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID05	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID05				, _CreateItemIdx05	, _ReinforceLev05	, _ReinforceExp05			, _SmeltingLev05					
									, _StackIncreaseAmount05	, _CreateStackResultServer05	, _OptionIdx05A		, _OptionValue05A	, _OptionIdx05B				, _OptionValue05B			
									, _OptionIdx05C				, _OptionValue05C				, _OptionIdx05D		, _OptionValue05D	, _CreateStackResultDB05	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID06	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID06				, _CreateItemIdx06	, _ReinforceLev06	, _ReinforceExp06			, _SmeltingLev06					
									, _StackIncreaseAmount06	, _CreateStackResultServer06	, _OptionIdx06A		, _OptionValue06A	, _OptionIdx06B				, _OptionValue06B			
									, _OptionIdx06C				, _OptionValue06C				, _OptionIdx06D		, _OptionValue06D	, _CreateStackResultDB06	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID07	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID07				, _CreateItemIdx07	, _ReinforceLev07	, _ReinforceExp07			, _SmeltingLev07					
									, _StackIncreaseAmount07	, _CreateStackResultServer07	, _OptionIdx07A		, _OptionValue07A	, _OptionIdx07B				, _OptionValue07B			
									, _OptionIdx07C				, _OptionValue07C				, _OptionIdx07D		, _OptionValue07D	, _CreateStackResultDB07	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID08	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID08				, _CreateItemIdx08	, _ReinforceLev08	, _ReinforceExp08			, _SmeltingLev08					
									, _StackIncreaseAmount08	, _CreateStackResultServer08	, _OptionIdx08A		, _OptionValue08A	, _OptionIdx08B				, _OptionValue08B			
									, _OptionIdx08C				, _OptionValue08C				, _OptionIdx08D		, _OptionValue08D	, _CreateStackResultDB08	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID09	> 0	THEN													
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID09				, _CreateItemIdx09	, _ReinforceLev09	, _ReinforceExp09			, _SmeltingLev09					
									, _StackIncreaseAmount09	, _CreateStackResultServer09	, _OptionIdx09A		, _OptionValue09A	, _OptionIdx09B				, _OptionValue09B			
									, _OptionIdx09C				, _OptionValue09C				, _OptionIdx09D		, _OptionValue09D	, _CreateStackResultDB09	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;														
			END IF;																
			IF	_CreateItemUID10	> 0	THEN																							
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID10				, _CreateItemIdx10	, _ReinforceLev10	, _ReinforceExp10			, _SmeltingLev10											
									, _StackIncreaseAmount10	, _CreateStackResultServer10	, _OptionIdx10A		, _OptionValue10A	, _OptionIdx10B				, _OptionValue10B											
									, _OptionIdx10C				, _OptionValue10C				, _OptionIdx10D		, _OptionValue10D	, _CreateStackResultDB10	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;																							
			END IF;																										
			IF	_CreateItemUID11	> 0	THEN																							
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID11				, _CreateItemIdx11	, _ReinforceLev11	, _ReinforceExp11			, _SmeltingLev11											
									, _StackIncreaseAmount11	, _CreateStackResultServer11	, _OptionIdx11A		, _OptionValue11A	, _OptionIdx11B				, _OptionValue11B											
									, _OptionIdx11C				, _OptionValue11C				, _OptionIdx11D		, _OptionValue11D	, _CreateStackResultDB11	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;																							
			END IF;																										
			IF	_CreateItemUID12	> 0	THEN																							
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID12				, _CreateItemIdx12	, _ReinforceLev12	, _ReinforceExp12			, _SmeltingLev12											
									, _StackIncreaseAmount12	, _CreateStackResultServer12	, _OptionIdx12A		, _OptionValue12A	, _OptionIdx12B				, _OptionValue12B											
									, _OptionIdx12C				, _OptionValue12C				, _OptionIdx12D		, _OptionValue12D	, _CreateStackResultDB12	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;																							
			END IF;																										
			IF	_CreateItemUID13	> 0	THEN																							
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID13				, _CreateItemIdx13	, _ReinforceLev13	, _ReinforceExp13			, _SmeltingLev13											
									, _StackIncreaseAmount13	, _CreateStackResultServer13	, _OptionIdx13A		, _OptionValue13A	, _OptionIdx13B				, _OptionValue13B											
									, _OptionIdx13C				, _OptionValue13C				, _OptionIdx13D		, _OptionValue13D	, _CreateStackResultDB13	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;																							
			END IF;																										
			IF	_CreateItemUID14	> 0	THEN																							
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID14				, _CreateItemIdx14	, _ReinforceLev14	, _ReinforceExp14			, _SmeltingLev14											
									, _StackIncreaseAmount14	, _CreateStackResultServer14	, _OptionIdx14A		, _OptionValue14A	, _OptionIdx14B				, _OptionValue14B											
									, _OptionIdx14C				, _OptionValue14C				, _OptionIdx14D		, _OptionValue14D	, _CreateStackResultDB14	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;																							
			END IF;																										
			IF	_CreateItemUID15	> 0	THEN																							
				CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID15				, _CreateItemIdx15	, _ReinforceLev15	, _ReinforceExp15			, _SmeltingLev15											
									, _StackIncreaseAmount15	, _CreateStackResultServer15	, _OptionIdx15A		, _OptionValue15A	, _OptionIdx15B				, _OptionValue15B											
									, _OptionIdx15C				, _OptionValue15C				, _OptionIdx15D		, _OptionValue15D	, _CreateStackResultDB15	, _Result 			);					
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;																							
			END IF;																										
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
/*            
            IF	_RewardIdx > 0	THEN
				UPDATE 	reward_tb	
				SET 	RewardReceiveCnt = _RewardReceiveCnt, LastReceiveTime = FROM_UNIXTIME(_LastReceiveTime)	
				WHERE 	CharacterUID = _CharacterUID AND RewardIdx = _RewardIdx;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO reward_tb 
							( CharacterUID	, RewardIdx	, RewardReceiveCnt	, LastReceiveTime 					)	
					VALUES	( _CharacterUID	, _RewardIdx, _RewardReceiveCnt	, FROM_UNIXTIME(_LastReceiveTime)	);
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
				END IF;	
			END IF;
*/            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ServerStart_Get_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `ServerStart_Get_World`(
	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
            
	SET	_Result = -1;
   
	MAIN_ROUTINE:
    BEGIN
		-- 캐릭터 로그아웃 처리
        UPDATE character_tb	SET LogoutTime = NOW()	WHERE LoginTime > LogoutTime;
        
		-- 점령길드
        SELECT OccupationIdx, GuildUID, UNIX_TIMESTAMP(ExpiryTime) AS ExpiryTime	FROM occupation_tb;
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `SkillActiveLev_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `SkillActiveLev_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_MoneyType				TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime		INT			UNSIGNED
,	IN	_DeleteItemUID			BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount	MEDIUMINT
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED		
,	IN	_ActiveIdx				MEDIUMINT	UNSIGNED
,	IN	_ActiveLev				TINYINT		UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB	BIGINT
,	OUT	_StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB = 0, _StackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _ActiveIdx = 0 OR _ActiveLev = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount > 0 OR _StackDecreaseAmount > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
			-- 아이템 스택 변경
            IF	_DeleteItemUID > 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID, 0, _StackDecreaseAmount, _StackResultServer, _StackResultDB, _Result );	
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;	
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
            -- 스킬 레벨 변경
            UPDATE skill_active_tb	SET ActiveLev = _ActiveLev	WHERE CharacterUID = _CharacterUID AND ActiveIdx = _ActiveIdx;
            IF ROW_COUNT() <= 0	THEN
				INSERT IGNORE INTO skill_active_tb ( CharacterUID, ActiveIdx, ActiveLev )	VALUES ( _CharacterUID, _ActiveIdx, _ActiveLev );
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
          
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `SkillDeck_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `SkillDeck_Update_Game`(
	IN	_CharacterUID	BIGINT		UNSIGNED
,	IN	_DeckNum		TINYINT		UNSIGNED
,	IN	_SkillSlot		TINYINT		UNSIGNED
,	IN	_ActiveIdx		MEDIUMINT	UNSIGNED

,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _DeckNum = 0 OR _SkillSlot = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값이 없음
		
        IF	_ActiveIdx = 0	THEN
			DELETE FROM skill_deck_tb	WHERE CharacterUID = _CharacterUID AND DeckNum = _DeckNum AND SkillSlot = _SkillSlot;
            IF ROW_COUNT() <= 0	THEN SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
		ELSE
			UPDATE skill_deck_tb	SET ActiveIdx = _ActiveIdx	WHERE CharacterUID = _CharacterUID AND DeckNum = _DeckNum AND SkillSlot = _SkillSlot;
			IF ROW_COUNT() <= 0	THEN
				INSERT IGNORE INTO skill_deck_tb ( CharacterUID, DeckNum, SkillSlot, ActiveIdx )	VALUE ( _CharacterUID, _DeckNum, _SkillSlot, _ActiveIdx );
				IF ROW_COUNT() <= 0	THEN SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;	-- 중복된 데이터 존재
			END IF;
        END IF;
        
        

		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `SkillPassiveGroupLev_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `SkillPassiveGroupLev_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_MoneyType				TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime		INT			UNSIGNED
,	IN	_DeleteItemUID			BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount	MEDIUMINT
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED
,	IN	_PassiveGroupIdx		MEDIUMINT	UNSIGNED
,	IN	_PassiveGroupLev		TINYINT		UNSIGNED
,	IN	_PassiveGroupExp		SMALLINT	UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB	BIGINT
,	OUT	_StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB = 0, _StackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _PassiveGroupIdx = 0 OR _PassiveGroupLev = 0	THEN
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount >= 0 OR _StackDecreaseAmount > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
			IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            
			-- 아이템 스택 변경
            IF	_DeleteItemUID > 0	THEN
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID, 0, _StackDecreaseAmount, _StackResultServer, _StackResultDB, _Result );	
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
			END IF;
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
            -- 패시브 그룹 스킬 레벨, 경험치 변경
            UPDATE 	skill_passivegroup_tb	
            SET 	PassiveGroupLev = _PassiveGroupLev, PassiveGroupExp = _PassiveGroupExp	
            WHERE 	CharacterUID = _CharacterUID AND PassiveGroupIdx = _PassiveGroupIdx;
            IF ROW_COUNT() <= 0	THEN
				INSERT IGNORE INTO skill_passivegroup_tb 
						( CharacterUID	, PassiveGroupIdx	, PassiveGroupLev	, PassiveGroupExp 	)	
                VALUES 	( _CharacterUID	, _PassiveGroupIdx	, _PassiveGroupLev	, _PassiveGroupExp	);
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
          
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `SkillPassiveLev_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `SkillPassiveLev_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_MoneyType				TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime		INT			UNSIGNED
,	IN	_DeleteItemUID			BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount	MEDIUMINT
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED
,	IN	_PassiveGroupIdx		MEDIUMINT	UNSIGNED
,	IN	_PassiveIdx				MEDIUMINT	UNSIGNED
,	IN	_PassiveLev				TINYINT		UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB	BIGINT
,	OUT	_StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB = 0, _StackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _PassiveIdx = 0 OR _PassiveLev = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount >= 0 OR _StackDecreaseAmount > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
			IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
            
			-- 아이템 스택 변경
            IF	_DeleteItemUID > 0 THEN							
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID, 0, _StackDecreaseAmount, _StackResultServer, _StackResultDB, _Result );	
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            END IF;	
			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
            -- 패시브 스킬 레벨 변경
            UPDATE skill_passive_tb	SET PassiveLev = _PassiveLev	WHERE CharacterUID = _CharacterUID AND PassiveGroupIdx = _PassiveGroupIdx AND PassiveIdx = _PassiveIdx;
            IF ROW_COUNT() <= 0	THEN
				INSERT IGNORE INTO skill_passive_tb ( CharacterUID, PassiveIdx, PassiveLev, PassiveGroupIdx )	VALUES ( _CharacterUID, _PassiveIdx, _PassiveLev, _PassiveGroupIdx );
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
          
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `SkillPassiveReset_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `SkillPassiveReset_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_DeleteItemUID			BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount	MEDIUMINT
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED
,	IN	_PassiveGroupIdx		MEDIUMINT	UNSIGNED

,	OUT	_StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_StackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _DeleteItemUID = 0 OR _PassiveGroupIdx = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_StackDecreaseAmount >= 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 아이템 스택 변경
			CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID, 0, _StackDecreaseAmount, _StackResultServer, _StackResultDB, _Result );	
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            
            -- 패시브 그룹 스킬 레벨, 경험치 변경
            DELETE FROM skill_passive_tb	WHERE CharacterUID = _CharacterUID AND PassiveGroupIdx = _PassiveGroupIdx;
            IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
          
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `SPCheck_Get_World` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `SPCheck_Get_World`(
	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
            
	MAIN_ROUTINE:
    BEGIN
		SELECT 	SPECIFIC_NAME, PARAMETER_MODE, COUNT(*) AS ParameterCnt
		FROM 	information_schema.parameters 
		WHERE 	SPECIFIC_SCHEMA = DATABASE() AND SPECIFIC_NAME NOT LIKE '\_%' AND SPECIFIC_NAME NOT LIKE '%\_DB'AND SPECIFIC_NAME NOT LIKE '%\_fn'
		GROUP BY	SPECIFIC_NAME, PARAMETER_MODE;
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `test` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`%` PROCEDURE `test`()
BEGIN
	    SELECT	CharacterName	, /*Class	,*/ Lev	, Exp	, StageIdx	, PositionX	, PositionY	, PositionZ	, Wonbo	, Gold	, AwakenGrade	, AchievementPoint	, EnergyPoint	
			, 	UNIX_TIMESTAMP(EnergyUseTime)	, InvenExtendCnt	, CostumeIdx
        FROM	character_tb
        WHERE	CharacterUID = 42;
        
        UPDATE character_tb	SET LoginTime = NOW()	WHERE CharacterUID = 42;
        
        SELECT CostumeIdx, HairColorIdx, ClothesColorIdx	FROM costume_tb	WHERE CharacterUID = 42;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `test_wait` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`%` PROCEDURE `test_wait`()
BEGIN
	    SELECT	CharacterName	, /*Class	,*/ Lev	, Exp	, StageIdx	, PositionX	, PositionY	, PositionZ	, Wonbo	, Gold	, AwakenGrade	, AchievementPoint	, EnergyPoint	
			, 	UNIX_TIMESTAMP(EnergyUseTime)	, InvenExtendCnt	, CostumeIdx
        FROM	character_tb
        WHERE	CharacterUID = 42;
        
        UPDATE character_tb	SET LoginTime = NOW()	WHERE CharacterUID = 42;
        
        select sleep(10);
        
        SELECT CostumeIdx, HairColorIdx, ClothesColorIdx	FROM costume_tb	WHERE CharacterUID = 42;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `tran_test` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`localhost` PROCEDURE `tran_test`()
BEGIN	
-- 	START TRANSACTION;
		UPDATE character_tb set LogoutTime = now() where CharacterUID = 18;
        select sleep(10);
-- 		call mm_game_db_release.Hunting_Update_Game(18);
        UPDATE character_tb set LogoutTime = now() where CharacterUID = 32;
		UPDATE character_tb set LogoutTime = now() where CharacterUID = 39;
        
        
--     COMMIT;
--     rollback;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `TreasureLev_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `TreasureLev_Update_Game`(
	IN	_CharacterUID	BIGINT		UNSIGNED
,	IN	_TreasureIdx	SMALLINT	UNSIGNED
,	IN	_TreasureLev	TINYINT		UNSIGNED

,	IN	_DeleteItemUID01		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount01	MEDIUMINT			
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID02		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount02	MEDIUMINT			
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID03		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount03	MEDIUMINT			
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID04		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount04	MEDIUMINT			
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID05		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount05	MEDIUMINT			
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED		
,	IN	_DeleteItemUID06		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount06	MEDIUMINT			
,	IN	_StackResultServer06	MEDIUMINT	UNSIGNED		

,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT
,	OUT	_StackResultDB03	MEDIUMINT
,	OUT	_StackResultDB04	MEDIUMINT
,	OUT	_StackResultDB05	MEDIUMINT
,	OUT	_StackResultDB06	MEDIUMINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0, _StackResultDB06 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _TreasureIdx = 0 OR _TreasureLev = 0	OR _DeleteItemUID01 = 0	THEN
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        ELSEIF	_StackDecreaseAmount01 > 0 OR _StackDecreaseAmount02 > 0 OR _StackDecreaseAmount03 > 0 OR _StackDecreaseAmount04 > 0 OR _StackDecreaseAmount05 > 0 OR _StackDecreaseAmount06 > 0	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
            -- 보물 레벨 변경
            UPDATE treasure_lev_tb	SET TreasureLev = _TreasureLev	WHERE CharacterUID = _CharacterUID AND TreasureIdx = _TreasureIdx;
            IF ROW_COUNT() <= 0	THEN 
				INSERT IGNORE INTO treasure_lev_tb ( CharacterUID, TreasureIdx, TreasureLev )	VALUES ( _CharacterUID, _TreasureIdx, _TreasureLev );
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            END IF;
            
            -- 아이템 삭제
            IF	_DeleteItemUID01	> 0	THEN												
				CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID01	, 0, _StackDecreaseAmount01	, _StackResultServer01	, _StackResultDB01	, _Result );										
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            IF	_DeleteItemUID02	> 0	THEN												
            	CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID02	, 0, _StackDecreaseAmount02	, _StackResultServer02	, _StackResultDB02	, _Result );										
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;									
            END IF;															
            IF	_DeleteItemUID03	> 0	THEN												
            	CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID03	, 0, _StackDecreaseAmount03	, _StackResultServer03	, _StackResultDB03	, _Result );										
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;									
            END IF;															
            IF	_DeleteItemUID04	> 0	THEN												
            	CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID04	, 0, _StackDecreaseAmount04	, _StackResultServer04	, _StackResultDB04	, _Result );										
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;									
            END IF;															
            IF	_DeleteItemUID05	> 0	THEN												
            	CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID05	, 0, _StackDecreaseAmount05	, _StackResultServer05	, _StackResultDB05	, _Result );										
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;									
            END IF;															
            IF	_DeleteItemUID06	> 0	THEN												
            	CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID06	, 0, _StackDecreaseAmount06	, _StackResultServer06	, _StackResultDB06	, _Result );										
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;									
            END IF;															
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `TreasureMeterial_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `TreasureMeterial_Insert_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_TreasureIdx			SMALLINT	UNSIGNED
,	IN	_MeterialSlot			TINYINT		UNSIGNED
,	IN	_DeleteItemUID			BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount	MEDIUMINT
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED		

,	OUT	_StackResultDB	MEDIUMINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF		_CharacterUID = 0 OR _TreasureIdx = 0 OR _MeterialSlot = 0 OR _DeleteItemUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		ELSEIF	_StackDecreaseAmount >= 0															THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 아이템 스택 변경
			CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID	, 0, _StackDecreaseAmount	, _StackResultServer	, _StackResultDB	, _Result );	
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
                
			-- 보물 재료 활성화
			INSERT IGNORE INTO treasure_meterial_tb ( CharacterUID, TreasureIdx, MeterialSlot )	VALUES ( _CharacterUID, _TreasureIdx, _MeterialSlot );
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;	-- 중복된 데이터 존재
		
			SET	_Result = 0;
		COMMIT;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Treasure_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Treasure_Insert_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_TreasureIdx			SMALLINT	UNSIGNED
,	IN	_TreasureLev			TINYINT		UNSIGNED
,	IN	_MoneyType01			TINYINT		UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime01		INT			UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB01	BIGINT
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB01 = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_CharacterUID = 0 OR _TreasureIdx = 0 OR _TreasureLev = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		ELSEIF 	_MoneyIncreaseAmount01 < 0								THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
		END IF;	
        
        START TRANSACTION;
			-- 재화 획득
            IF	_MoneyIncreaseAmount01 > 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			-- 보물 추가
			INSERT IGNORE INTO treasure_lev_tb ( CharacterUID, TreasureIdx, TreasureLev )	VALUES ( _CharacterUID, _TreasureIdx, _TreasureLev );
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;	-- 중복된 데이터 존재
			
			SET	_Result = 0;
        COMMIT;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `TutorialClear_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `TutorialClear_Insert_Game`(
	IN	_AccountUID			BIGINT		UNSIGNED
,	IN	_TutorialGroupIdx	SMALLINT	UNSIGNED
    
,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_AccountUID = 0 OR _TutorialGroupIdx = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		END IF;
            
		INSERT IGNORE INTO tutorial_clear_tb( AccountUID, TutorialGroupIdx )	VALUES( _AccountUID, _TutorialGroupIdx );
		IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;	-- 중복된 데이터 존재

		SET	_Result = 0; 
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `UID_Get_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `UID_Get_Game`(
	IN	_UIDType			TINYINT	UNSIGNED 

,	OUT	_UIDCnt				BIGINT	UNSIGNED
,	OUT	_UIDRecallPercent	TINYINT	UNSIGNED
,	OUT	_StartUID			BIGINT	UNSIGNED
,	OUT	_EndUID				BIGINT	UNSIGNED
,	OUT	_Result				INT
)
BEGIN
	DECLARE	_LockName	VARCHAR(30);
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET	_UIDCnt = UIDCnt_fn(_UIDType), _UIDRecallPercent = UIDRecallPercent_fn(), _StartUID = 0, _EndUID = 0, _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_UIDType = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
-- 		SET SESSION TRANSACTION ISOLATION LEVEL SERIALIZABLE; 
		START TRANSACTION;
			SET	_LockName = CONCAT( 'UID_Get_', _UIDType );
			SET _Result = GET_LOCK( _LockName, 10 );
				CASE
				WHEN	_UIDType = 1	THEN	-- ItemUID 발급
					SELECT EndUID INTO _StartUID FROM uid_tb WHERE UIDType = 1 ORDER BY EndUID DESC LIMIT 1;
					
					SET _EndUID = _StartUID + _UIDCnt, _StartUID = _StartUID + 1;
					
					INSERT INTO uid_tb 
							( UIDType	, StartUID	, EndUID	, CreateTime 	)	
					VALUE 	( _UIDType	, _StartUID	, _EndUID	, NOW() 		);
				ELSE	
					ROLLBACK;	SET	_Result = 6;	LEAVE MAIN_ROUTINE;	-- 정의되지 않은 값
				END CASE;
            SET _Result = RELEASE_LOCK(_LockName);

            SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Universal_Update_DB` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Universal_Update_DB`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_CharacterLev	TINYINT	UNSIGNED
,	IN	_CharacterExp	INT		UNSIGNED
,	IN	_CurrentHP		INT		UNSIGNED
,	IN	_CurrentMP		INT		UNSIGNED

,	IN	_MoneyType01			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount01	BIGINT
,	IN	_MoneyResultServer01	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime01		INT		UNSIGNED
,	IN	_MoneyType02			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount02	BIGINT
,	IN	_MoneyResultServer02	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime02		INT		UNSIGNED
,	IN	_MoneyType03			TINYINT	UNSIGNED
,	IN	_MoneyIncreaseAmount03	BIGINT
,	IN	_MoneyResultServer03	BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime03		INT		UNSIGNED

,	IN	_ActionType01		SMALLINT	UNSIGNED	
,	IN	_ActionValueIdx01	INT			UNSIGNED		
,	IN	_ActionValue01		INT			UNSIGNED
,	IN	_ActionType02		SMALLINT	UNSIGNED	
,	IN	_ActionValueIdx02	INT			UNSIGNED		
,	IN	_ActionValue02		INT			UNSIGNED
,	IN	_ActionType03		SMALLINT	UNSIGNED	
,	IN	_ActionValueIdx03	INT			UNSIGNED		
,	IN	_ActionValue03		INT			UNSIGNED
,	IN	_ActionType04		SMALLINT	UNSIGNED	
,	IN	_ActionValueIdx04	INT			UNSIGNED		
,	IN	_ActionValue04		INT			UNSIGNED
,	IN	_ActionType05		SMALLINT	UNSIGNED	
,	IN	_ActionValueIdx05	INT			UNSIGNED		
,	IN	_ActionValue05		INT			UNSIGNED
,	IN	_ActionType06		SMALLINT	UNSIGNED	
,	IN	_ActionValueIdx06	INT			UNSIGNED		
,	IN	_ActionValue06		INT			UNSIGNED
,	IN	_ActionType07		SMALLINT	UNSIGNED	
,	IN	_ActionValueIdx07	INT			UNSIGNED		
,	IN	_ActionValue07		INT			UNSIGNED
,	IN	_ActionType08		SMALLINT	UNSIGNED	
,	IN	_ActionValueIdx08	INT			UNSIGNED		
,	IN	_ActionValue08		INT			UNSIGNED
,	IN	_ActionType09		SMALLINT	UNSIGNED	
,	IN	_ActionValueIdx09	INT			UNSIGNED		
,	IN	_ActionValue09		INT			UNSIGNED
,	IN	_ActionType10		SMALLINT	UNSIGNED	
,	IN	_ActionValueIdx10	INT			UNSIGNED
,	IN	_ActionValue10		INT			UNSIGNED

,	IN	_ClearAchievementIdx01	MEDIUMINT	UNSIGNED		
,	IN	_AchievementClearTime01	INT			UNSIGNED
,	IN	_ClearAchievementIdx02	MEDIUMINT	UNSIGNED		
,	IN	_AchievementClearTime02	INT			UNSIGNED
,	IN	_ClearAchievementIdx03	MEDIUMINT	UNSIGNED		
,	IN	_AchievementClearTime03	INT			UNSIGNED
,	IN	_ClearAchievementIdx04	MEDIUMINT	UNSIGNED		
,	IN	_AchievementClearTime04	INT			UNSIGNED
,	IN	_ClearAchievementIdx05	MEDIUMINT	UNSIGNED		
,	IN	_AchievementClearTime05	INT			UNSIGNED
,	IN	_ClearAchievementIdx06	MEDIUMINT	UNSIGNED		
,	IN	_AchievementClearTime06	INT			UNSIGNED
,	IN	_ClearAchievementIdx07	MEDIUMINT	UNSIGNED		
,	IN	_AchievementClearTime07	INT			UNSIGNED
,	IN	_ClearAchievementIdx08	MEDIUMINT	UNSIGNED		
,	IN	_AchievementClearTime08	INT			UNSIGNED
,	IN	_ClearAchievementIdx09	MEDIUMINT	UNSIGNED		
,	IN	_AchievementClearTime09	INT			UNSIGNED
,	IN	_ClearAchievementIdx10	MEDIUMINT	UNSIGNED		
,	IN	_AchievementClearTime10	INT			UNSIGNED

,	IN	_MainQuestIdx	INT		UNSIGNED
,	IN	_MainQuestValue	TINYINT	UNSIGNED
    
,	IN	_SubQuestIdx01		INT		UNSIGNED
,	IN	_SubQuestValue01	TINYINT	UNSIGNED
,	IN	_SubQuestIdx02		INT		UNSIGNED
,	IN	_SubQuestValue02	TINYINT	UNSIGNED
,	IN	_SubQuestIdx03		INT		UNSIGNED
,	IN	_SubQuestValue03	TINYINT	UNSIGNED
,	IN	_SubQuestIdx04		INT		UNSIGNED
,	IN	_SubQuestValue04	TINYINT	UNSIGNED

,	IN	_DailyQuestUID01	TINYINT		UNSIGNED
,	IN	_DailyQuestValue01	SMALLINT	UNSIGNED
,	IN	_DailyQuestClear01	TINYINT		UNSIGNED
,	IN	_DailyQuestUID02	TINYINT		UNSIGNED
,	IN	_DailyQuestValue02	SMALLINT	UNSIGNED
,	IN	_DailyQuestClear02	TINYINT		UNSIGNED
,	IN	_DailyQuestUID03	TINYINT		UNSIGNED
,	IN	_DailyQuestValue03	SMALLINT	UNSIGNED
,	IN	_DailyQuestClear03	TINYINT		UNSIGNED

,	IN	_WeeklyQuestUID01	TINYINT		UNSIGNED
,	IN	_WeeklyQuestValue01	SMALLINT	UNSIGNED
,	IN	_WeeklyQuestClear01	TINYINT		UNSIGNED

,	IN	_CreateItemUID01		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx01		INT			UNSIGNED	
,	IN	_ReinforceLev01			TINYINT		UNSIGNED	
,	IN	_ReinforceExp01			INT			UNSIGNED
,	IN	_SmeltingLev01			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount01	MEDIUMINT					
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx01A			SMALLINT	UNSIGNED		
,	IN	_OptionValue01A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01B			SMALLINT	UNSIGNED		
,	IN	_OptionValue01B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01C			SMALLINT	UNSIGNED		
,	IN	_OptionValue01C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx01D			SMALLINT	UNSIGNED		
,	IN	_OptionValue01D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID02		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx02		INT			UNSIGNED	
,	IN	_ReinforceLev02			TINYINT		UNSIGNED	
,	IN	_ReinforceExp02			INT			UNSIGNED
,	IN	_SmeltingLev02			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount02	MEDIUMINT					
,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx02A			SMALLINT	UNSIGNED		
,	IN	_OptionValue02A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02B			SMALLINT	UNSIGNED		
,	IN	_OptionValue02B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02C			SMALLINT	UNSIGNED		
,	IN	_OptionValue02C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx02D			SMALLINT	UNSIGNED		
,	IN	_OptionValue02D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID03		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx03		INT			UNSIGNED	
,	IN	_ReinforceLev03			TINYINT		UNSIGNED	
,	IN	_ReinforceExp03			INT			UNSIGNED
,	IN	_SmeltingLev03			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount03	MEDIUMINT					
,	IN	_StackResultServer03	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx03A			SMALLINT	UNSIGNED		
,	IN	_OptionValue03A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx03B			SMALLINT	UNSIGNED		
,	IN	_OptionValue03B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx03C			SMALLINT	UNSIGNED		
,	IN	_OptionValue03C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx03D			SMALLINT	UNSIGNED		
,	IN	_OptionValue03D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID04		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx04		INT			UNSIGNED	
,	IN	_ReinforceLev04			TINYINT		UNSIGNED	
,	IN	_ReinforceExp04			INT			UNSIGNED
,	IN	_SmeltingLev04			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount04	MEDIUMINT					
,	IN	_StackResultServer04	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx04A			SMALLINT	UNSIGNED		
,	IN	_OptionValue04A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx04B			SMALLINT	UNSIGNED		
,	IN	_OptionValue04B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx04C			SMALLINT	UNSIGNED		
,	IN	_OptionValue04C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx04D			SMALLINT	UNSIGNED		
,	IN	_OptionValue04D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID05		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx05		INT			UNSIGNED	
,	IN	_ReinforceLev05			TINYINT		UNSIGNED	
,	IN	_ReinforceExp05			INT			UNSIGNED
,	IN	_SmeltingLev05			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount05	MEDIUMINT					
,	IN	_StackResultServer05	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx05A			SMALLINT	UNSIGNED		
,	IN	_OptionValue05A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx05B			SMALLINT	UNSIGNED		
,	IN	_OptionValue05B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx05C			SMALLINT	UNSIGNED		
,	IN	_OptionValue05C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx05D			SMALLINT	UNSIGNED		
,	IN	_OptionValue05D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID06		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx06		INT			UNSIGNED	
,	IN	_ReinforceLev06			TINYINT		UNSIGNED	
,	IN	_ReinforceExp06			INT			UNSIGNED
,	IN	_SmeltingLev06			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount06	MEDIUMINT					
,	IN	_StackResultServer06	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx06A			SMALLINT	UNSIGNED		
,	IN	_OptionValue06A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx06B			SMALLINT	UNSIGNED		
,	IN	_OptionValue06B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx06C			SMALLINT	UNSIGNED		
,	IN	_OptionValue06C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx06D			SMALLINT	UNSIGNED		
,	IN	_OptionValue06D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID07		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx07		INT			UNSIGNED	
,	IN	_ReinforceLev07			TINYINT		UNSIGNED	
,	IN	_ReinforceExp07			INT			UNSIGNED
,	IN	_SmeltingLev07			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount07	MEDIUMINT					
,	IN	_StackResultServer07	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx07A			SMALLINT	UNSIGNED		
,	IN	_OptionValue07A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx07B			SMALLINT	UNSIGNED		
,	IN	_OptionValue07B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx07C			SMALLINT	UNSIGNED		
,	IN	_OptionValue07C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx07D			SMALLINT	UNSIGNED		
,	IN	_OptionValue07D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID08		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx08		INT			UNSIGNED	
,	IN	_ReinforceLev08			TINYINT		UNSIGNED	
,	IN	_ReinforceExp08			INT			UNSIGNED
,	IN	_SmeltingLev08			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount08	MEDIUMINT					
,	IN	_StackResultServer08	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx08A			SMALLINT	UNSIGNED		
,	IN	_OptionValue08A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx08B			SMALLINT	UNSIGNED		
,	IN	_OptionValue08B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx08C			SMALLINT	UNSIGNED		
,	IN	_OptionValue08C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx08D			SMALLINT	UNSIGNED		
,	IN	_OptionValue08D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID09		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx09		INT			UNSIGNED	
,	IN	_ReinforceLev09			TINYINT		UNSIGNED	
,	IN	_ReinforceExp09			INT			UNSIGNED
,	IN	_SmeltingLev09			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount09	MEDIUMINT					
,	IN	_StackResultServer09	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx09A			SMALLINT	UNSIGNED		
,	IN	_OptionValue09A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx09B			SMALLINT	UNSIGNED		
,	IN	_OptionValue09B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx09C			SMALLINT	UNSIGNED		
,	IN	_OptionValue09C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx09D			SMALLINT	UNSIGNED		
,	IN	_OptionValue09D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID10		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx10		INT			UNSIGNED	
,	IN	_ReinforceLev10			TINYINT		UNSIGNED	
,	IN	_ReinforceExp10			INT			UNSIGNED
,	IN	_SmeltingLev10			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount10	MEDIUMINT					
,	IN	_StackResultServer10	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx10A			SMALLINT	UNSIGNED		
,	IN	_OptionValue10A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx10B			SMALLINT	UNSIGNED		
,	IN	_OptionValue10B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx10C			SMALLINT	UNSIGNED		
,	IN	_OptionValue10C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx10D			SMALLINT	UNSIGNED		
,	IN	_OptionValue10D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID11		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx11		INT			UNSIGNED	
,	IN	_ReinforceLev11			TINYINT		UNSIGNED	
,	IN	_ReinforceExp11			INT			UNSIGNED
,	IN	_SmeltingLev11			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount11	MEDIUMINT					
,	IN	_StackResultServer11	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx11A			SMALLINT	UNSIGNED		
,	IN	_OptionValue11A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx11B			SMALLINT	UNSIGNED		
,	IN	_OptionValue11B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx11C			SMALLINT	UNSIGNED		
,	IN	_OptionValue11C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx11D			SMALLINT	UNSIGNED		
,	IN	_OptionValue11D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID12		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx12		INT			UNSIGNED	
,	IN	_ReinforceLev12			TINYINT		UNSIGNED	
,	IN	_ReinforceExp12			INT			UNSIGNED
,	IN	_SmeltingLev12			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount12	MEDIUMINT					
,	IN	_StackResultServer12	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx12A			SMALLINT	UNSIGNED		
,	IN	_OptionValue12A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx12B			SMALLINT	UNSIGNED		
,	IN	_OptionValue12B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx12C			SMALLINT	UNSIGNED		
,	IN	_OptionValue12C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx12D			SMALLINT	UNSIGNED		
,	IN	_OptionValue12D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID13		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx13		INT			UNSIGNED	
,	IN	_ReinforceLev13			TINYINT		UNSIGNED	
,	IN	_ReinforceExp13			INT			UNSIGNED
,	IN	_SmeltingLev13			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount13	MEDIUMINT					
,	IN	_StackResultServer13	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx13A			SMALLINT	UNSIGNED		
,	IN	_OptionValue13A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx13B			SMALLINT	UNSIGNED		
,	IN	_OptionValue13B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx13C			SMALLINT	UNSIGNED		
,	IN	_OptionValue13C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx13D			SMALLINT	UNSIGNED		
,	IN	_OptionValue13D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID14		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx14		INT			UNSIGNED	
,	IN	_ReinforceLev14			TINYINT		UNSIGNED	
,	IN	_ReinforceExp14			INT			UNSIGNED
,	IN	_SmeltingLev14			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount14	MEDIUMINT					
,	IN	_StackResultServer14	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx14A			SMALLINT	UNSIGNED		
,	IN	_OptionValue14A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx14B			SMALLINT	UNSIGNED		
,	IN	_OptionValue14B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx14C			SMALLINT	UNSIGNED		
,	IN	_OptionValue14C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx14D			SMALLINT	UNSIGNED		
,	IN	_OptionValue14D			SMALLINT	UNSIGNED		
,	IN	_CreateItemUID15		BIGINT		UNSIGNED		
,	IN	_CreateItemIdx15		INT			UNSIGNED	
,	IN	_ReinforceLev15			TINYINT		UNSIGNED	
,	IN	_ReinforceExp15			INT			UNSIGNED
,	IN	_SmeltingLev15			TINYINT		UNSIGNED	
,	IN	_StackIncreaseAmount15	MEDIUMINT					
,	IN	_StackResultServer15	MEDIUMINT	UNSIGNED				
,	IN	_OptionIdx15A			SMALLINT	UNSIGNED		
,	IN	_OptionValue15A			SMALLINT	UNSIGNED		
,	IN	_OptionIdx15B			SMALLINT	UNSIGNED		
,	IN	_OptionValue15B			SMALLINT	UNSIGNED		
,	IN	_OptionIdx15C			SMALLINT	UNSIGNED		
,	IN	_OptionValue15C			SMALLINT	UNSIGNED		
,	IN	_OptionIdx15D			SMALLINT	UNSIGNED		
,	IN	_OptionValue15D			SMALLINT	UNSIGNED		

,	OUT _MoneyResultDB01	BIGINT
,	OUT _MoneyResultDB02	BIGINT
,	OUT _MoneyResultDB03	BIGINT

,	OUT	_StackResultDB01	MEDIUMINT
,	OUT	_StackResultDB02	MEDIUMINT
,	OUT	_StackResultDB03	MEDIUMINT
,	OUT	_StackResultDB04	MEDIUMINT
,	OUT	_StackResultDB05	MEDIUMINT
,	OUT	_StackResultDB06	MEDIUMINT
,	OUT	_StackResultDB07	MEDIUMINT
,	OUT	_StackResultDB08	MEDIUMINT
,	OUT	_StackResultDB09	MEDIUMINT
,	OUT	_StackResultDB10	MEDIUMINT
,	OUT	_StackResultDB11	MEDIUMINT
,	OUT	_StackResultDB12	MEDIUMINT
,	OUT	_StackResultDB13	MEDIUMINT
,	OUT	_StackResultDB14	MEDIUMINT
,	OUT	_StackResultDB15	MEDIUMINT

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;

    SET _MoneyResultDB01 = 0, _MoneyResultDB02 = 0, _MoneyResultDB03 = 0
    , 	_StackResultDB01 = 0, _StackResultDB02 = 0, _StackResultDB03 = 0, _StackResultDB04 = 0, _StackResultDB05 = 0
    , 	_StackResultDB06 = 0, _StackResultDB07 = 0, _StackResultDB08 = 0, _StackResultDB09 = 0, _StackResultDB10 = 0
    , 	_StackResultDB11 = 0, _StackResultDB12 = 0, _StackResultDB13 = 0, _StackResultDB14 = 0, _StackResultDB15 = 0
    , 	_Result = -1;
   
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
		ELSEIF 	_MoneyIncreaseAmount01 < 0 OR _MoneyIncreaseAmount02 < 0 OR	_MoneyIncreaseAmount03 < 0 
			OR 	_StackIncreaseAmount01 < 0 OR _StackIncreaseAmount02 < 0 OR _StackIncreaseAmount03 < 0 OR _StackIncreaseAmount04 < 0 OR _StackIncreaseAmount05 < 0 
			OR 	_StackIncreaseAmount06 < 0 OR _StackIncreaseAmount07 < 0 OR _StackIncreaseAmount08 < 0 OR _StackIncreaseAmount09 < 0 OR _StackIncreaseAmount10 < 0	
            OR 	_StackIncreaseAmount11 < 0 OR _StackIncreaseAmount12 < 0 OR _StackIncreaseAmount13 < 0 OR _StackIncreaseAmount14 < 0 OR _StackIncreaseAmount15 < 0 THEN	
			SET	_Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
		END IF;	
        

        -- 재화 변경
		IF	_MoneyIncreaseAmount01 > 0	THEN
			CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType01, _MoneyIncreaseAmount01, _MoneyResultServer01, _MoneyUpdateTime01, _MoneyResultDB01, _Result );
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;
		END IF;
        
        IF	_MoneyIncreaseAmount02 > 0	THEN
			CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType02, _MoneyIncreaseAmount02, _MoneyResultServer02, _MoneyUpdateTime02, _MoneyResultDB02, _Result );
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;
		END IF;
        
        IF	_MoneyIncreaseAmount03 > 0	THEN
			CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType03, _MoneyIncreaseAmount03, _MoneyResultServer03, _MoneyUpdateTime03, _MoneyResultDB03, _Result );
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;
		END IF;

 
		-- 레벨, 경험치 변경
        IF	_CharacterLev > 0	THEN
			UPDATE 	character_tb	
            SET 	Lev = _CharacterLev, Exp = _CharacterExp
				, 	CurrentHP = CASE WHEN _CurrentHP IS NULL THEN CurrentHP ELSE _CurrentHP END
                , 	CurrentMP = CASE WHEN _CurrentMP IS NULL THEN CurrentMP ELSE _CurrentMP END
            WHERE 	CharacterUID = _CharacterUID;
			IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
		ELSEIF	_CurrentHP IS NOT NULL AND _CurrentMP IS NOT NULL	THEN
			UPDATE character_tb	SET CurrentHP = _CurrentHP, CurrentMP = _CurrentMP	WHERE CharacterUID = _CharacterUID;
        END IF;
        

		-- 업적
		IF	_ActionType01 > 0 OR _ActionType02 > 0 OR _ActionType03 > 0 OR _ActionType04 > 0 OR _ActionType05 > 0 
		OR	_ActionType06 > 0 OR _ActionType07 > 0 OR _ActionType08 > 0 OR _ActionType09 > 0 OR _ActionType10 > 0 
        OR _ClearAchievementIdx01	> 0 OR _ClearAchievementIdx02	> 0 OR _ClearAchievementIdx03	> 0 OR _ClearAchievementIdx04	> 0 OR _ClearAchievementIdx05	> 0 
        OR _ClearAchievementIdx06	> 0 OR _ClearAchievementIdx07	> 0 OR _ClearAchievementIdx08	> 0 OR _ClearAchievementIdx09	> 0 OR _ClearAchievementIdx10	> 0	
        THEN
			CALL Achievement_Update_DB	( _CharacterUID
										, _ActionType01	, _ActionValueIdx01	, _ActionValue01
										, _ActionType02	, _ActionValueIdx02	, _ActionValue02
										, _ActionType03	, _ActionValueIdx03	, _ActionValue03
										, _ActionType04	, _ActionValueIdx04	, _ActionValue04
										, _ActionType05	, _ActionValueIdx05	, _ActionValue05
										, _ActionType06	, _ActionValueIdx06	, _ActionValue06
										, _ActionType07	, _ActionValueIdx07	, _ActionValue07
										, _ActionType08	, _ActionValueIdx08	, _ActionValue08
										, _ActionType09	, _ActionValueIdx09	, _ActionValue09
										, _ActionType10	, _ActionValueIdx10	, _ActionValue10
										, _ClearAchievementIdx01	, _AchievementClearTime01
										, _ClearAchievementIdx02	, _AchievementClearTime02
										, _ClearAchievementIdx03	, _AchievementClearTime03
										, _ClearAchievementIdx04	, _AchievementClearTime04
										, _ClearAchievementIdx05	, _AchievementClearTime05
										, _ClearAchievementIdx06	, _AchievementClearTime06
										, _ClearAchievementIdx07	, _AchievementClearTime07
										, _ClearAchievementIdx08	, _AchievementClearTime08
										, _ClearAchievementIdx09	, _AchievementClearTime09
										, _ClearAchievementIdx10	, _AchievementClearTime10
										, _Result	);
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;
        END IF;
        
        
        -- 아이템 생성
		IF	_CreateItemUID01	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID01		, _CreateItemIdx01	, _ReinforceLev01	, _ReinforceExp01	, _SmeltingLev01					
								, _StackIncreaseAmount01	, _StackResultServer01	, _OptionIdx01A		, _OptionValue01A	, _OptionIdx01B		, _OptionValue01B			
                                , _OptionIdx01C				, _OptionValue01C		, _OptionIdx01D		, _OptionValue01D	, _StackResultDB01	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID02	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID02		, _CreateItemIdx02	, _ReinforceLev02	, _ReinforceExp02	, _SmeltingLev02					
								, _StackIncreaseAmount02	, _StackResultServer02	, _OptionIdx02A		, _OptionValue02A	, _OptionIdx02B		, _OptionValue02B			
                                , _OptionIdx02C				, _OptionValue02C		, _OptionIdx02D		, _OptionValue02D	, _StackResultDB02	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID03	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID03		, _CreateItemIdx03	, _ReinforceLev03	, _ReinforceExp03	, _SmeltingLev03					
								, _StackIncreaseAmount03	, _StackResultServer03	, _OptionIdx03A		, _OptionValue03A	, _OptionIdx03B		, _OptionValue03B			
                                , _OptionIdx03C				, _OptionValue03C		, _OptionIdx03D		, _OptionValue03D	, _StackResultDB03	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID04	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID04		, _CreateItemIdx04	, _ReinforceLev04	, _ReinforceExp04	, _SmeltingLev04					
								, _StackIncreaseAmount04	, _StackResultServer04	, _OptionIdx04A		, _OptionValue04A	, _OptionIdx04B		, _OptionValue04B			
                                , _OptionIdx04C				, _OptionValue04C		, _OptionIdx04D		, _OptionValue04D	, _StackResultDB04	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID05	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID05		, _CreateItemIdx05	, _ReinforceLev05	, _ReinforceExp05	, _SmeltingLev05					
								, _StackIncreaseAmount05	, _StackResultServer05	, _OptionIdx05A		, _OptionValue05A	, _OptionIdx05B		, _OptionValue05B			
                                , _OptionIdx05C				, _OptionValue05C		, _OptionIdx05D		, _OptionValue05D	, _StackResultDB05	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID06	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID06		, _CreateItemIdx06	, _ReinforceLev06	, _ReinforceExp06	, _SmeltingLev06					
								, _StackIncreaseAmount06	, _StackResultServer06	, _OptionIdx06A		, _OptionValue06A	, _OptionIdx06B		, _OptionValue06B			
                                , _OptionIdx06C				, _OptionValue06C		, _OptionIdx06D		, _OptionValue06D	, _StackResultDB06	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID07	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID07		, _CreateItemIdx07	, _ReinforceLev07	, _ReinforceExp07	, _SmeltingLev07					
								, _StackIncreaseAmount07	, _StackResultServer07	, _OptionIdx07A		, _OptionValue07A	, _OptionIdx07B		, _OptionValue07B			
                                , _OptionIdx07C				, _OptionValue07C		, _OptionIdx07D		, _OptionValue07D	, _StackResultDB07	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID08	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID08		, _CreateItemIdx08	, _ReinforceLev08	, _ReinforceExp08	, _SmeltingLev08					
								, _StackIncreaseAmount08	, _StackResultServer08	, _OptionIdx08A		, _OptionValue08A	, _OptionIdx08B		, _OptionValue08B			
                                , _OptionIdx08C				, _OptionValue08C		, _OptionIdx08D		, _OptionValue08D	, _StackResultDB08	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID09	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID09		, _CreateItemIdx09	, _ReinforceLev09	, _ReinforceExp09	, _SmeltingLev09					
								, _StackIncreaseAmount09	, _StackResultServer09	, _OptionIdx09A		, _OptionValue09A	, _OptionIdx09B		, _OptionValue09B			
                                , _OptionIdx09C				, _OptionValue09C		, _OptionIdx09D		, _OptionValue09D	, _StackResultDB09	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID10	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID10		, _CreateItemIdx10	, _ReinforceLev10	, _ReinforceExp10	, _SmeltingLev10					
								, _StackIncreaseAmount10	, _StackResultServer10	, _OptionIdx10A		, _OptionValue10A	, _OptionIdx10B		, _OptionValue10B			
                                , _OptionIdx10C				, _OptionValue10C		, _OptionIdx10D		, _OptionValue10D	, _StackResultDB10	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID11	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID11		, _CreateItemIdx11	, _ReinforceLev11	, _ReinforceExp11	, _SmeltingLev11					
								, _StackIncreaseAmount11	, _StackResultServer11	, _OptionIdx11A		, _OptionValue11A	, _OptionIdx11B		, _OptionValue11B			
                                , _OptionIdx11C				, _OptionValue11C		, _OptionIdx11D		, _OptionValue11D	, _StackResultDB11	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID12	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID12		, _CreateItemIdx12	, _ReinforceLev12	, _ReinforceExp12	, _SmeltingLev12					
								, _StackIncreaseAmount12	, _StackResultServer12	, _OptionIdx12A		, _OptionValue12A	, _OptionIdx12B		, _OptionValue12B			
                                , _OptionIdx12C				, _OptionValue12C		, _OptionIdx12D		, _OptionValue12D	, _StackResultDB12	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID13	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID13		, _CreateItemIdx13	, _ReinforceLev13	, _ReinforceExp13	, _SmeltingLev13					
								, _StackIncreaseAmount13	, _StackResultServer13	, _OptionIdx13A		, _OptionValue13A	, _OptionIdx13B		, _OptionValue13B			
                                , _OptionIdx13C				, _OptionValue13C		, _OptionIdx13D		, _OptionValue13D	, _StackResultDB13	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID14	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID14		, _CreateItemIdx14	, _ReinforceLev14	, _ReinforceExp14	, _SmeltingLev14					
								, _StackIncreaseAmount14	, _StackResultServer14	, _OptionIdx14A		, _OptionValue14A	, _OptionIdx14B		, _OptionValue14B			
                                , _OptionIdx14C				, _OptionValue14C		, _OptionIdx14D		, _OptionValue14D	, _StackResultDB14	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
		IF	_CreateItemUID15	> 0	THEN													
			CALL Item_Insert_DB	( _CharacterUID				, _CreateItemUID15		, _CreateItemIdx15	, _ReinforceLev15	, _ReinforceExp15	, _SmeltingLev15					
								, _StackIncreaseAmount15	, _StackResultServer15	, _OptionIdx15A		, _OptionValue15A	, _OptionIdx15B		, _OptionValue15B			
                                , _OptionIdx15C				, _OptionValue15C		, _OptionIdx15D		, _OptionValue15D	, _StackResultDB15	, _Result 			);					
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;														
		END IF;																
																	
		
		-- 퀘스트
		IF	_MainQuestIdx > 0 OR _SubQuestIdx01 > 0 OR _SubQuestIdx02 > 0 OR _SubQuestIdx03 > 0 OR _SubQuestIdx04 > 0 
        OR 	_DailyQuestUID01 > 0 OR _DailyQuestUID02 > 0 OR _DailyQuestUID03 > 0 OR _WeeklyQuestUID01 > 0 
		THEN
			CALL Quest_Update_DB( _CharacterUID
								, _MainQuestIdx	, _MainQuestValue
								, _SubQuestIdx01, _SubQuestValue01	
                                , _SubQuestIdx02, _SubQuestValue02	
                                , _SubQuestIdx03, _SubQuestValue03	
                                , _SubQuestIdx04, _SubQuestValue04	
                                , _DailyQuestUID01	, _DailyQuestValue01	, _DailyQuestClear01	
                                , _DailyQuestUID02	, _DailyQuestValue02	, _DailyQuestClear02	
                                , _DailyQuestUID03	, _DailyQuestValue03	, _DailyQuestClear03	
                                , _WeeklyQuestUID01	, _WeeklyQuestValue01	, _WeeklyQuestClear01	
								, _Result	);
			IF _Result != 0 THEN LEAVE MAIN_ROUTINE;	END IF;
		END IF;
        
        
		SET	_Result = 0;
    END;    
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `VehicleEquip_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `VehicleEquip_Update_Game`(
	IN	_CharacterUID	BIGINT		UNSIGNED
,	IN	_VehicleGroupId	SMALLINT	UNSIGNED

,	OUT _Result	INT 
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
-- 	DECLARE EXIT HANDLER FOR NOT FOUND, SQLEXCEPTION	BEGIN SET _Result = -1;		END;	-- 알수없는 DB 오류
    
    SET _Result = -1;
    
	MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _VehicleGroupId = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값이 없음
		
		-- 착용 탈것 변경
        UPDATE equip_vehicle_tb	SET VehicleGroupId = _VehicleGroupId	WHERE CharacterUID = _CharacterUID;
        IF ROW_COUNT() <= 0	THEN 
			INSERT IGNORE INTO equip_vehicle_tb ( CharacterUID, VehicleGroupId )	VALUE ( _CharacterUID, _VehicleGroupId );
            IF ROW_COUNT() <= 0	THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
		END IF;

		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `VehicleExp_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `VehicleExp_Update_Game`( 
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_MoneyType				TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime		INT			UNSIGNED
,	IN	_VehicleGroupId			SMALLINT	UNSIGNED
,	IN	_VehicleLev				TINYINT		UNSIGNED
,	IN	_VehicleExp				INT			UNSIGNED
,	IN	_DeleteItemUID01		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount01	MEDIUMINT
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED		
-- ,	IN	_DeleteItemUID02		BIGINT		UNSIGNED
-- ,	IN	_StackDecreaseAmount02	MEDIUMINT
-- ,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB		BIGINT
,	OUT	_StackResultDB01	MEDIUMINT 
-- ,	OUT	_StackResultDB02	MEDIUMINT 
,	OUT	_Result				INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
	SET	_MoneyResultDB = 0, _StackResultDB01 = 0, /*_StackResultDB02 = 0, */ _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _VehicleGroupId = 0 OR _VehicleLev = 0	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount > 0 OR _StackDecreaseAmount01 > 0 /*OR _StackDecreaseAmount02 > 0*/	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
			-- 아이템 삭제
            IF _DeleteItemUID01	> 0 THEN
				CALL Item_Delete_DB ( _DeleteItemUID01, _StackDecreaseAmount01, _StackResultServer01, _StackResultDB01, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
/*            
            IF _DeleteItemUID02	> 0 THEN
				CALL Item_Delete_DB ( _DeleteItemUID02, _StackDecreaseAmount02, _StackResultServer02, _StackResultDB02, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
*/			
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
            -- 탈것 강화
            UPDATE vehicle_tb	SET VehicleLev = _VehicleLev, VehicleExp = _VehicleExp	WHERE CharacterUID = _CharacterUID AND VehicleGroupId = _VehicleGroupId;
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `VehicleUpgrade_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `VehicleUpgrade_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_MoneyType				TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime		INT			UNSIGNED
,	IN	_VehicleGroupId			SMALLINT	UNSIGNED
,	IN	_NewVehicleIdx			SMALLINT	UNSIGNED
,	IN	_DeleteItemUID01		BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount01	MEDIUMINT
,	IN	_StackResultServer01	MEDIUMINT	UNSIGNED		
-- ,	IN	_DeleteItemUID02		BIGINT		UNSIGNED
-- ,	IN	_StackDecreaseAmount02	MEDIUMINT
-- ,	IN	_StackResultServer02	MEDIUMINT	UNSIGNED

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB	BIGINT
,	OUT	_StackResultDB01	MEDIUMINT 
-- ,	OUT	_StackResultDB02	MEDIUMINT 
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
	SET	_MoneyResultDB = 0, _StackResultDB01 = 0, /*_StackResultDB02 = 0,*/ _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _VehicleGroupId = 0 OR _NewVehicleIdx = 0 OR  _DeleteItemUID01 = 0 /*OR _DeleteItemUID02 = 0*/	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
            
        ELSEIF	_MoneyDecreaseAmount >= 0 OR _StackDecreaseAmount01 >= 0 /*OR _StackDecreaseAmount02 >= 0*/	THEN 
			SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
			-- 아이템 삭제
            IF _DeleteItemUID01	> 0 THEN
				CALL Item_Delete_DB ( _DeleteItemUID01, _StackDecreaseAmount01, _StackResultServer01, _StackResultDB01, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            /*
            IF _DeleteItemUID02	> 0 THEN
				CALL Item_Delete_DB ( _DeleteItemUID02, _StackDecreaseAmount02, _StackResultServer02, _StackResultDB02, _Result );
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
			*/
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
            -- 탈것 승급
            UPDATE 	vehicle_tb	
            SET 	VehicleIdx = _NewVehicleIdx, VehicleLev = 1, VehicleExp = 0
            WHERE 	CharacterUID = _CharacterUID AND VehicleGroupId = _VehicleGroupId;
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Vehicle_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Vehicle_Insert_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_VehicleGroupId			SMALLINT	UNSIGNED
,	IN	_VehicleIdx				SMALLINT	UNSIGNED
,	IN	_DeleteItemUID			BIGINT		UNSIGNED	
,	IN	_StackDecreaseAmount	MEDIUMINT
,	IN	_StackResultServer		MEDIUMINT	UNSIGNED		

,	OUT	_StackResultDB	MEDIUMINT
,	OUT _Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _Result = -1;
    
	MAIN_ROUTINE: 
    BEGIN
		IF		_VehicleIdx = 0 OR _VehicleGroupId = 0 OR _DeleteItemUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값이 없음
        ELSEIF	_StackDecreaseAmount >= 0										THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
        START TRANSACTION;
            -- 아이템 스택 변경
			CALL ItemStack_Update_DB ( _CharacterUID, _DeleteItemUID	, 0, _StackDecreaseAmount	, _StackResultServer	, _StackResultDB	, _Result );	
			IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;	
            
			-- 탈것 추가
			INSERT IGNORE INTO vehicle_tb
					( CharacterUID	, VehicleGroupId	, VehicleIdx	, VehicleLev, VehicleExp	) 
			VALUES	( _CharacterUID	, _VehicleGroupId	, _VehicleIdx	, 1			, 0				);
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 902;	LEAVE MAIN_ROUTINE;	END IF;	-- 이미 존재하는 탈것
			
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Warp_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `Warp_Update_Game`(
	IN	_CharacterUID		BIGINT	UNSIGNED
,	IN	_CurrentHP			INT		UNSIGNED
,	IN	_CurrentMP			INT		UNSIGNED
,	IN	_StageIdx			INT		UNSIGNED
,	IN	_PositionX			FLOAT
,	IN	_PositionY			FLOAT
,	IN	_PositionZ			FLOAT
,	IN	_EscapeStageIdx		INT		UNSIGNED
,	IN	_EscapePositionX	FLOAT
,	IN	_EscapePositionY	FLOAT
,	IN	_EscapePositionZ	FLOAT
,	IN	_PlaytimeSec		INT		UNSIGNED 
,	IN	_CombatPoint		INT		UNSIGNED

,	IN	_MoneyType				TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime		INT		UNSIGNED

,	IN	_DeleteItemUID				BIGINT		UNSIGNED
,	IN	_StackDecreaseAmount		MEDIUMINT			
,	IN	_DeleteStackResultServer	MEDIUMINT	UNSIGNED			

,	IN	_PlayDataIdx01		SMALLINT	UNSIGNED
,	IN	_PlayDataValue01	BIGINT		
,	IN	_PlayDataIdx02		SMALLINT	UNSIGNED
,	IN	_PlayDataValue02	BIGINT		
,	IN	_PlayDataIdx03		SMALLINT	UNSIGNED
,	IN	_PlayDataValue03	BIGINT		
,	IN	_PlayDataIdx04		SMALLINT	UNSIGNED
,	IN	_PlayDataValue04	BIGINT		
,	IN	_PlayDataIdx05		SMALLINT	UNSIGNED
,	IN	_PlayDataValue05	BIGINT		
,	IN	_PlayDataIdx06		SMALLINT	UNSIGNED
,	IN	_PlayDataValue06	BIGINT		
,	IN	_PlayDataIdx07		SMALLINT	UNSIGNED
,	IN	_PlayDataValue07	BIGINT		
,	IN	_PlayDataIdx08		SMALLINT	UNSIGNED
,	IN	_PlayDataValue08	BIGINT		
,	IN	_PlayDataIdx09		SMALLINT	UNSIGNED
,	IN	_PlayDataValue09	BIGINT		
,	IN	_PlayDataIdx10		SMALLINT	UNSIGNED
,	IN	_PlayDataValue10	BIGINT		

,	OUT _MoneyResultDB			BIGINT
,	OUT	_DeleteStackResultDB	MEDIUMINT
,	OUT	_Result					INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET _MoneyResultDB = 0, _DeleteStackResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF 		_CharacterUID = 0 OR _StageIdx = 0						THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        ELSEIF	_MoneyDecreaseAmount > 0 OR _StackDecreaseAmount > 0	THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 Amount
		END IF;
        
        START TRANSACTION;
			-- 재화 변경
            IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
			-- 캐릭터 정보 변경
			UPDATE 	character_tb	
			SET		CurrentHP = _CurrentHP	, CurrentMP = _CurrentMP, StageIdx = _StageIdx		, PositionX = _PositionX, PositionY = _PositionY, PositionZ= _PositionZ, 
					PlaytimeSec = _PlaytimeSec		, CombatPoint = _CombatPoint
			WHERE 	CharacterUID = _CharacterUID;
-- 			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
            
            -- 탈출 위치
            IF	_EscapeStageIdx > 0	THEN
				UPDATE 	escape_position_tb	
				SET 	EscapeStageIdx = _EscapeStageIdx, EscapePositionX = _EscapePositionX, EscapePositionY = _EscapePositionY, EscapePositionZ = _EscapePositionZ	
				WHERE 	CharacterUID = _CharacterUID;
				IF ROW_COUNT() <= 0	THEN 
					INSERT IGNORE INTO escape_position_tb 
							( CharacterUID	, EscapeStageIdx	, EscapePositionX	, EscapePositionY	, EscapePositionZ	)	
					VALUE 	( _CharacterUID	, _EscapeStageIdx	, _EscapePositionX	, _EscapePositionY	, _EscapePositionZ	);
					IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
				END IF;
            END IF;
            
            -- 아이템 삭제
            IF _DeleteItemUID	> 0	THEN 						
				CALL Item_Delete_DB ( _DeleteItemUID, _StackDecreaseAmount, _DeleteStackResultServer, _DeleteStackResultDB, _Result );	
                IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;						
			END IF;	
            
            -- 플레이 데이터 변경
            IF	_PlayDataIdx01 > 0 OR _PlayDataIdx02 > 0 OR _PlayDataIdx03 > 0 OR _PlayDataIdx04 > 0 OR _PlayDataIdx05 > 0 
			OR	_PlayDataIdx06 > 0 OR _PlayDataIdx07 > 0 OR _PlayDataIdx08 > 0 OR _PlayDataIdx09 > 0 OR _PlayDataIdx10 > 0	THEN
				CALL PlayData_Update_DB	( _CharacterUID
										, _PlayDataIdx01	, _PlayDataValue01
										, _PlayDataIdx02	, _PlayDataValue02
										, _PlayDataIdx03	, _PlayDataValue03
										, _PlayDataIdx04	, _PlayDataValue04
										, _PlayDataIdx05	, _PlayDataValue05
										, _PlayDataIdx06	, _PlayDataValue06
										, _PlayDataIdx07	, _PlayDataValue07
										, _PlayDataIdx08	, _PlayDataValue08
										, _PlayDataIdx09	, _PlayDataValue09
										, _PlayDataIdx10	, _PlayDataValue10
										, _Result	);
				IF _Result != 0 THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;		
            END IF;
            
			SET	_Result = 0;
        COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `WayPoint_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `WayPoint_Insert_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_WayPointIdx	INT		UNSIGNED

,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
        IF	_CharacterUID = 0 OR _WayPointIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
            
        -- 표지석 추가
        INSERT IGNORE INTO waypoint_tb ( CharacterUID, WayPointIdx )	VALUES ( _CharacterUID, _WayPointIdx );
        IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 2;	LEAVE MAIN_ROUTINE;	END IF;	-- 중복된 데이터 존재
		
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_GuildMember_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `_GuildMember_Insert_Game`( 
	IN	_GuildUID		INT		UNSIGNED
,	IN	_CharacterUID	BIGINT	UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text;
		ROLLBACK;
	END;
     
    SET _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		START TRANSACTION;
        	UPDATE guild_member_tb	SET GuildUID = _GuildUID	WHERE CharacterUID = _CharacterUID;								
            IF ROW_COUNT() <= 0	THEN										
				INSERT IGNORE INTO	guild_member_tb ( GuildUID, CharacterUID )	VALUES ( _GuildUID, _CharacterUID );		
                IF ROW_COUNT() <= 0 THEN SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;									
            END IF;	

			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_PulseReset_Delete_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`%` PROCEDURE `_PulseReset_Delete_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_MoneyType				TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_PulseIdx				TINYINT		UNSIGNED
,	IN	_ResetCount				SMALLINT	UNSIGNED
 
,	OUT _MoneyResult	BIGINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR NOT FOUND, SQLEXCEPTION	BEGIN ROLLBACK;	SET	_Result = -1;	END;	-- 알수없는 DB 오류
    DECLARE EXIT HANDLER FOR 1452						BEGIN ROLLBACK;	SET	_Result = 401;	END;	-- (외래키 제약조건 위반) 존재하지 않는 아이템
    
    SET	_MoneyResult = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _PulseIdx = 0 OR _ResetCount = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        ELSEIF	_MoneyDecreaseAmount >= 0 							THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 재화 변경
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResult, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
			-- 경맥 초기화
            DELETE FROM pulse_blood_tb	WHERE CharacterUID = _CharacterUID AND PulseIdx = _PulseIdx;
            IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 1;	LEAVE MAIN_ROUTINE;	END IF;	-- DB에 존재하지 않는 데이터
            
            UPDATE pulse_tb	SET ResetCount = _ResetCount	WHERE CharacterUID = _CharacterUID AND PulseIdx = _PulseIdx;
            IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;	-- 변경된 데이터가 없음
			
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_QuestDailyAccept_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`%` PROCEDURE `_QuestDailyAccept_Update_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_QuestUID		TINYINT	UNSIGNED
,	IN	_AcceptTime		INT		UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR NOT FOUND, SQLEXCEPTION	BEGIN SET _Result = -1;	END;	-- 알수없는 DB 오류
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _QuestUID = 0 OR _AcceptTime = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
		-- 수락한 일일퀘스트로 UPDATE
		UPDATE 	quest_daily_list_tb	
		SET 	AcceptTime = FROM_UNIXTIME(_AcceptTime)
		WHERE	CharacterUID = _CharacterUID AND QuestUID = _QuestUID AND AcceptTime = 0 AND QuestClear = 0 AND RewardReceiveTime = 0;
		IF ROW_COUNT() <= 0	THEN SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 퀘스트
		
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_QuestDailyClear_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `_QuestDailyClear_Update_Game`(
	IN	_CharacterUID			BIGINT		UNSIGNED
,	IN	_MoneyType				TINYINT		UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT		UNSIGNED
,	IN	_MoneyUpdateTime		INT			UNSIGNED
,	IN	_QuestUID				TINYINT		UNSIGNED
,	IN	_QuestValue				SMALLINT	UNSIGNED

,	OUT _MoneyResultDB	BIGINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
	
    SET	_MoneyResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _QuestUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		ELSEIF	_MoneyDecreaseAmount > 0		THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
			-- 즉시 완료일 경우 재화 차감
			IF	_MoneyDecreaseAmount < 0	THEN
				CALL Money_Update_DB ( 0, _CharacterUID, _MoneyType, _MoneyDecreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			END IF;
            
            -- 퀘스트 진행값 변경
            UPDATE	quest_daily_list_tb
            SET		QuestValue = _QuestValue, QuestClear = 1
            WHERE	CharacterUID = _CharacterUID AND QuestUID = _QuestUID AND AcceptTime > 0 AND QuestClear = 0 AND RewardReceiveTime = 0;
			IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 퀘스트
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_QuestDailyReset_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `_QuestDailyReset_Update_Game`(
	IN	_CharacterUID			BIGINT	UNSIGNED
,	IN	_MoneyType				TINYINT	UNSIGNED
,	IN	_MoneyDecreaseAmount	BIGINT
,	IN	_MoneyResultServer		BIGINT	UNSIGNED
,	IN	_MoneyUpdateTime		INT		UNSIGNED
,	IN	_FreeResetCnt			TINYINT	UNSIGNED

,	IN	_QuestUID01		TINYINT	UNSIGNED
,	IN	_QuestIdx01		INT		UNSIGNED
,	IN	_QuestGrade01	TINYINT	UNSIGNED
,	IN	_QuestUID02		TINYINT	UNSIGNED
,	IN	_QuestIdx02		INT		UNSIGNED
,	IN	_QuestGrade02	TINYINT	UNSIGNED
,	IN	_QuestUID03		TINYINT	UNSIGNED
,	IN	_QuestIdx03		INT		UNSIGNED
,	IN	_QuestGrade03	TINYINT	UNSIGNED

,	OUT _MoneyResultDB	BIGINT
,	OUT	_Result			INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
		ROLLBACK;
	END;
    
    SET	_MoneyResultDB = 0, _Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 				THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
		ELSEIF	_MoneyDecreaseAmount > 0	THEN SET _Result = 4;	LEAVE MAIN_ROUTINE;	-- 잘못된 증감값
        END IF;	
        
		START TRANSACTION;
            IF	_MoneyDecreaseAmount < 0	THEN	-- 유료 갱신일 경우 재화 차감
				CALL Money_Update_DB( 0, _CharacterUID, _MoneyType, _MoneyIncreaseAmount, _MoneyResultServer, _MoneyUpdateTime, _MoneyResultDB, _Result );
				IF _Result != 0	THEN ROLLBACK;	LEAVE MAIN_ROUTINE;	END IF;
			ELSE	-- 무료 갱신일 경우 사용 카운트 증가
				UPDATE quest_daily_tb	SET FreeResetCnt = _FreeResetCnt	WHERE CharacterUID = _CharacterUID;
			END IF;
            
            -- 퀘스트 변경
            IF	_QuestUID01	> 0	THEN
				UPDATE	quest_daily_list_tb
				SET		QuestIdx = _QuestIdx01	, QuestGrade = _QuestGrade01	
				WHERE	CharacterUID = _CharacterUID AND QuestUID = _QuestUID01	AND AcceptTime = 0 AND QuestClear = 0 AND RewardReceiveTime = 0;
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 퀘스트			
            END IF;
           								
            IF	_QuestUID02	> 0	THEN	
				UPDATE	quest_daily_list_tb			
				SET		QuestIdx = _QuestIdx02	, QuestGrade = _QuestGrade02	
				WHERE	CharacterUID = _CharacterUID AND QuestUID = _QuestUID02	AND AcceptTime = 0 AND QuestClear = 0 AND RewardReceiveTime = 0;		
				IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 퀘스트
            END IF;								
            								
            IF	_QuestUID03	> 0	THEN					
				UPDATE	quest_daily_list_tb			
				SET		QuestIdx = _QuestIdx03	, QuestGrade = _QuestGrade03	
				WHERE	CharacterUID = _CharacterUID AND QuestUID = _QuestUID03	AND AcceptTime = 0 AND QuestClear = 0 AND RewardReceiveTime = 0;		
                IF ROW_COUNT() <= 0	THEN ROLLBACK;	SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 퀘스트			
            END IF;								
            
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_QuestReset_Delete_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `_QuestReset_Delete_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_QuestIdx		INT		UNSIGNED
    
,	OUT _Result	INT 
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		START TRANSACTION;
			IF	_CharacterUID = 0 OR _QuestIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
			
			DELETE FROM quest_tb	WHERE CharacterUID = _CharacterUID;-- AND QuestIdx >= _QuestIdx;
			INSERT INTO quest_tb ( CharacterUID, QuestIdx, State, QuestValue )	VALUES ( _CharacterUID, _QuestIdx, 1, 0 );
			
			SET	_Result = 0;
		COMMIT;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_QuestSub_Delete_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `_QuestSub_Delete_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_SubQuestIdx	INT		UNSIGNED
    
,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _SubQuestIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
		DELETE FROM quest_sub_tb	WHERE CharacterUID = _CharacterUID AND QuestIdx = _SubQuestIdx;
        IF ROW_COUNT() <= 0	THEN SET _Result = 601;	LEAVE MAIN_ROUTINE;	END IF;	-- 존재하지 않는 퀘스트
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_QuestSub_Insert_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `_QuestSub_Insert_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED
,	IN	_SubQuestIdx	INT		UNSIGNED
    
,	OUT _Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;

    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR _SubQuestIdx = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
        
		INSERT INTO quest_sub_tb ( CharacterUID, QuestIdx, State, QuestValue )	VALUES ( _CharacterUID, _SubQuestIdx, 1, 0 );
        
		SET	_Result = 0;
    END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_RewardReceiveList_Get_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `_RewardReceiveList_Get_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET _Result = -1;
        
	MAIN_ROUTINE:
	BEGIN
		IF _CharacterUID = 0	THEN SET _Result = 3;	LEAVE MAIN_ROUTINE;	END IF;	-- 처리에 필요한 값을 전달받지 못함
		
		-- 보상 받은 횟수
		SELECT	RewardIdx, RewardReceiveCnt, UNIX_TIMESTAMP(LastReceiveTime)
        FROM	reward_tb
        WHERE	CharacterUID = _CharacterUID;
		
		SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `_SkillPassiveExp_Update_Game` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`MM_DBA`@`%` PROCEDURE `_SkillPassiveExp_Update_Game`(
	IN	_CharacterUID	BIGINT	UNSIGNED

,	IN	_PassiveIdx01	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp01	INT			UNSIGNED
,	IN	_PassiveIdx02	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp02	INT			UNSIGNED
,	IN	_PassiveIdx03	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp03	INT			UNSIGNED
,	IN	_PassiveIdx04	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp04	INT			UNSIGNED
,	IN	_PassiveIdx05	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp05	INT			UNSIGNED
,	IN	_PassiveIdx06	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp06	INT			UNSIGNED
,	IN	_PassiveIdx07	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp07	INT			UNSIGNED
,	IN	_PassiveIdx08	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp08	INT			UNSIGNED
,	IN	_PassiveIdx09	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp09	INT			UNSIGNED
,	IN	_PassiveIdx10	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp10	INT			UNSIGNED
,	IN	_PassiveIdx11	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp11	INT			UNSIGNED
,	IN	_PassiveIdx12	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp12	INT			UNSIGNED
,	IN	_PassiveIdx13	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp13	INT			UNSIGNED
,	IN	_PassiveIdx14	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp14	INT			UNSIGNED
,	IN	_PassiveIdx15	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp15	INT			UNSIGNED
,	IN	_PassiveIdx16	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp16	INT			UNSIGNED
,	IN	_PassiveIdx17	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp17	INT			UNSIGNED
,	IN	_PassiveIdx18	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp18	INT			UNSIGNED
,	IN	_PassiveIdx19	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp19	INT			UNSIGNED
,	IN	_PassiveIdx20	MEDIUMINT	UNSIGNED		
,	IN	_PassiveExp20	INT			UNSIGNED

,	OUT	_Result	INT
)
BEGIN
	DECLARE EXIT HANDLER FOR SQLEXCEPTION	
    BEGIN 
		GET DIAGNOSTICS CONDITION 1	@Sqlstate = RETURNED_SQLSTATE, @Errno = MYSQL_ERRNO, @Text = MESSAGE_TEXT; 
        SET _Result = @Errno;	
-- 		SELECT @Sqlstate, @Errno, @Text; 
	END;
    
    SET	_Result = -1;
    
    MAIN_ROUTINE:
    BEGIN
		IF	_CharacterUID = 0 OR 
        ( 	_PassiveIdx01 = 0 AND _PassiveIdx02 = 0 AND _PassiveIdx03 = 0 AND _PassiveIdx04 = 0 AND _PassiveIdx05 = 0 
        AND _PassiveIdx06 = 0 AND _PassiveIdx07 = 0 AND _PassiveIdx08 = 0 AND _PassiveIdx09 = 0 AND _PassiveIdx10 = 0 
        AND _PassiveIdx11 = 0 AND _PassiveIdx12 = 0 AND _PassiveIdx13 = 0 AND _PassiveIdx14 = 0 AND _PassiveIdx15 = 0 
        AND _PassiveIdx16 = 0 AND _PassiveIdx17 = 0 AND _PassiveIdx18 = 0 AND _PassiveIdx19 = 0 AND _PassiveIdx20 = 0 )	THEN 
			SET _Result = 3;	LEAVE MAIN_ROUTINE;	-- 처리에 필요한 값을 전달받지 못함
        END IF;
        
        -- 패시브 스킬 경험치 변경
        IF	_PassiveIdx01	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp01	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx01;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx02	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp02	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx02;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx03	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp03	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx03;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx04	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp04	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx04;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx05	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp05	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx05;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx06	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp06	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx06;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx07	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp07	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx07;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx08	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp08	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx08;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx09	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp09	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx09;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx10	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp10	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx10;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx11	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp11	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx11;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx12	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp12	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx12;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx13	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp13	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx13;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx14	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp14	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx14;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx15	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp15	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx15;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx16	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp16	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx16;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx17	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp17	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx17;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx18	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp18	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx18;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx19	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp19	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx19;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							
        IF	_PassiveIdx20	> 0	THEN				
			UPDATE skill_passive_tb	SET PassiveExp = _PassiveExp20	WHERE CharacterUID = _CharacterUID AND PassiveIdx = _PassiveIdx20;		
			IF ROW_COUNT() <= 0	THEN	SET _Result = 5;	LEAVE MAIN_ROUTINE;	END IF;
        END IF;							
        							

        SET	_Result = 0;
	END;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Current Database: `mm_front_db`
--

USE `mm_front_db`;

--
-- Final view structure for view `vw_world`
--

/*!50001 DROP VIEW IF EXISTS `vw_world`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`MM_DBA`@`%` SQL SECURITY DEFINER */
/*!50001 VIEW `vw_world` AS select `wo`.`WorldUID` AS `WorldUID`,`wo`.`WorldState` AS `WorldState`,`wo`.`WorldName` AS `WorldName`,`wo`.`OrderNum` AS `OrderNum`,`se`.`ServerUID` AS `ServerUID`,`se`.`ServerType` AS `ServerType`,`se`.`PrivateServerIP` AS `PrivateServerIP`,`se`.`PrivateServerPort` AS `PrivateServerPort`,`se`.`PublicServerIP` AS `PublicServerIP`,`se`.`PublicServerPort` AS `PublicServerPort`,`db`.`DBUID` AS `DBUID`,`db`.`DBName` AS `DBName`,`db`.`DBType` AS `DBType`,`db`.`PrivateDBIP` AS `PrivateDBIP`,`db`.`PrivateDBPort` AS `PrivateDBPort`,`dt`.`DBConnectionCnt` AS `DBConnectionCnt`,`dt`.`DBTypeName` AS `DBTypeName`,`du`.`DBUserName` AS `DBUserName`,`du`.`DBUserPassword` AS `DBUserPassword` from (((((`world_tb` `wo` left join `server_tb` `se` on((`se`.`WorldUID` = `wo`.`WorldUID`))) left join `server_db_tb` `sd` on((`sd`.`ServerUID` = `se`.`ServerUID`))) left join `db_tb` `db` on((`db`.`DBUID` = `sd`.`DBUID`))) left join `db_type_tb` `dt` on((`dt`.`DBType` = `db`.`DBType`))) left join `db_user_tb` `du` on((`du`.`DBUserUID` = `db`.`DBUserUID`))) order by `wo`.`OrderNum` desc,`wo`.`WorldUID`,`se`.`ServerUID` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Current Database: `mm_device_db`
--

USE `mm_device_db`;

--
-- Final view structure for view `vw_deviceid`
--

/*!50001 DROP VIEW IF EXISTS `vw_deviceid`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`MM_DBA`@`%` SQL SECURITY DEFINER */
/*!50001 VIEW `vw_deviceid` AS select `os`.`OSUID` AS `OSUID`,`os`.`OSName` AS `OSName`,`de`.`DeviceID` AS `DeviceID`,`de`.`UserName` AS `UserName`,`dp`.`DepartmentUID` AS `DepartmentUID`,`dp`.`DepartmentName` AS `DepartmentName` from ((`deviceid_tb` `de` left join `department_tb` `dp` on((`dp`.`DepartmentUID` = `de`.`DepartmentUID`))) left join `os_tb` `os` on((`os`.`OSUID` = `de`.`OSUID`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Current Database: `mm_user_db`
--

USE `mm_user_db`;

--
-- Current Database: `mm_game_db_release`
--

USE `mm_game_db_release`;

--
-- Final view structure for view `vw_character`
--

/*!50001 DROP VIEW IF EXISTS `vw_character`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`MM_DBA`@`%` SQL SECURITY DEFINER */
/*!50001 VIEW `vw_character` AS select `ch`.`CharacterUID` AS `CharacterUID`,`ch`.`CharacterName` AS `CharacterName`,`ac`.`AccountUID` AS `AccountUID`,`ac`.`AccountName` AS `AccountName`,`ch`.`Class` AS `Class`,`ch`.`Lev` AS `Lev`,`ch`.`Exp` AS `Exp`,`gu`.`GuildUID` AS `GuildUID`,`gu`.`GuildName` AS `GuildName`,`cg`.`MemberGrade` AS `MemberGrade`,`ch`.`StageIdx` AS `StageIdx`,`ch`.`PositionX` AS `PositionX`,`ch`.`PositionY` AS `PositionY`,`ch`.`PositionZ` AS `PositionZ`,`ch`.`Wonbo` AS `Wonbo`,`ch`.`Gold` AS `Gold`,`ch`.`CreateTime` AS `CreateTime`,`ch`.`LoginTime` AS `LoginTime`,`ch`.`LogoutTime` AS `LogoutTime`,`cd`.`DeleteTime` AS `DeleteTime`,`ch`.`PlaytimeSec` AS `PlaytimeSec`,`ch`.`CombatPoint` AS `CombatPoint`,`ch`.`EnergyPoint` AS `EnergyPoint`,`ch`.`BlackIron` AS `BlackIron`,`ch`.`ActionPoint` AS `ActionPoint`,`ch`.`AwakenGrade` AS `AwakenGrade`,`ch`.`InvenExtendCnt` AS `InvenExtendCnt`,`ch`.`CostumeIdx` AS `CostumeIdx`,`ch`.`PKPoint` AS `PKPoint` from ((((`account_tb` `ac` join `character_tb` `ch` on((`ch`.`AccountUID` = `ac`.`AccountUID`))) left join `character_delete_tb` `cd` on((`cd`.`CharacterUID` = `ch`.`CharacterUID`))) left join `character_guild_tb` `cg` on((`cg`.`CharacterUID` = `ch`.`CharacterUID`))) left join `guild_tb` `gu` on((`gu`.`GuildUID` = `cg`.`GuildUID`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vw_item`
--

/*!50001 DROP VIEW IF EXISTS `vw_item`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`MM_DBA`@`%` SQL SECURITY DEFINER */
/*!50001 VIEW `vw_item` AS select `ch`.`CharacterUID` AS `CharacterUID`,`ch`.`CharacterName` AS `CharacterName`,`it`.`ItemUID` AS `ItemUID`,`it`.`ItemIdx` AS `ItemIdx`,`id`.`DeleteTime` AS `DeleteTime`,`ir`.`ReinforceLev` AS `ReinforceLev`,`ir`.`ReinforceExp` AS `ReinforceExp`,`sm`.`SmeltingLev` AS `SmeltingLev`,`st`.`StackCnt` AS `StackCnt`,max((case when (`op`.`OptionSlot` = 1) then `op`.`OptionIdx` else 0 end)) AS `OptionIdx01`,max((case when (`op`.`OptionSlot` = 1) then `op`.`OptionValue` else 0 end)) AS `OptionValue01`,max((case when (`op`.`OptionSlot` = 2) then `op`.`OptionIdx` else 0 end)) AS `OptionIdx02`,max((case when (`op`.`OptionSlot` = 2) then `op`.`OptionValue` else 0 end)) AS `OptionValue02`,max((case when (`op`.`OptionSlot` = 3) then `op`.`OptionIdx` else 0 end)) AS `OptionIdx03`,max((case when (`op`.`OptionSlot` = 3) then `op`.`OptionValue` else 0 end)) AS `OptionValue03`,max((case when (`op`.`OptionSlot` = 4) then `op`.`OptionIdx` else 0 end)) AS `OptionIdx04`,max((case when (`op`.`OptionSlot` = 4) then `op`.`OptionValue` else 0 end)) AS `OptionValue04`,max((case when (`ip`.`PolishingSlot` = 1) then `ip`.`PolishingCnt` else 0 end)) AS `PolishingCnt01`,max((case when (`ip`.`PolishingSlot` = 2) then `ip`.`PolishingCnt` else 0 end)) AS `PolishingCnt02`,max((case when (`ip`.`PolishingSlot` = 3) then `ip`.`PolishingCnt` else 0 end)) AS `PolishingCnt03`,max((case when (`ip`.`PolishingSlot` = 4) then `ip`.`PolishingCnt` else 0 end)) AS `PolishingCnt04`,max((case when (`ij`.`JewelSlot` = 1) then `ij`.`JewelItemIdx` else 0 end)) AS `JewelItemIdx01`,max((case when (`ij`.`JewelSlot` = 2) then `ij`.`JewelItemIdx` else 0 end)) AS `JewelItemIdx02`,max((case when (`ij`.`JewelSlot` = 3) then `ij`.`JewelItemIdx` else 0 end)) AS `JewelItemIdx03`,max((case when (`ij`.`JewelSlot` = 4) then `ij`.`JewelItemIdx` else 0 end)) AS `JewelItemIdx04`,max((case when (`ij`.`JewelSlot` = 5) then `ij`.`JewelItemIdx` else 0 end)) AS `JewelItemIdx05` from ((((((((((`item_tb` `it` left join `item_character_tb` `ic` on((`ic`.`ItemUID` = `it`.`ItemUID`))) left join `character_tb` `ch` on((`ch`.`CharacterUID` = `ic`.`CharacterUID`))) left join `item_binding_tb` `ib` on((`ib`.`ItemUID` = `it`.`ItemUID`))) left join `item_delete_tb` `id` on((`id`.`ItemUID` = `it`.`ItemUID`))) left join `item_jewel_tb` `ij` on((`ij`.`ItemUID` = `it`.`ItemUID`))) left join `item_option_tb` `op` on((`op`.`ItemUID` = `it`.`ItemUID`))) left join `item_polishing_tb` `ip` on((`ip`.`ItemUID` = `it`.`ItemUID`))) left join `item_reinforce_tb` `ir` on((`ir`.`ItemUID` = `it`.`ItemUID`))) left join `item_smelting_tb` `sm` on((`sm`.`ItemUID` = `it`.`ItemUID`))) left join `item_stack_tb` `st` on((`st`.`ItemUID` = `it`.`ItemUID`))) group by `it`.`ItemUID` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2025-03-23 21:08:49
