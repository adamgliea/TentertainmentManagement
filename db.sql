CREATE DATABASE  IF NOT EXISTS `test` /*!40100 DEFAULT CHARACTER SET latin1 */;
USE `test`;
-- MySQL dump 10.13  Distrib 5.5.16, for osx10.5 (i386)
--
-- Host: localhost    Database: test
-- ------------------------------------------------------
-- Server version	5.5.24

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `tmGlobaldata`
--

DROP TABLE IF EXISTS `tmGlobaldata`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tmGlobaldata` (
  `inventory` int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `inventoryReport`
--

DROP TABLE IF EXISTS `inventoryReport`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `inventoryReport` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `machineId` int(11) NOT NULL,
  `addPointString` varchar(512) DEFAULT NULL,
  `clearPointString` varchar(512) DEFAULT NULL,
  `opDate` int(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `machine`
--

DROP TABLE IF EXISTS `machine`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `machine` (
  `machineId` int(11) NOT NULL AUTO_INCREMENT,
  `assetType` int(11) NOT NULL,
  `factoryName` varchar(45) DEFAULT NULL,
  `factoryPhoneNumber` varchar(45) DEFAULT NULL,
  `location` varchar(90) DEFAULT NULL,
  `businessConditions` int(11) DEFAULT NULL,
  `remark` varchar(45) DEFAULT NULL,
  `clearPointCycle` int(11) DEFAULT NULL,
  `machineType` int(11) DEFAULT '0',
  `cashRatio` double DEFAULT '0',
  `coinRatio` double DEFAULT '0',
  `mainProbability` double DEFAULT '0',
  `probabilityRange` double DEFAULT '0',
  `maxPoints` int(11) DEFAULT '0',
  `minPoints` int(11) DEFAULT '0',
  `markPoints` int(11) DEFAULT '0',
  `drawPoints` int(11) DEFAULT '0',
  `pushPointDays` int(11) DEFAULT '0',
  PRIMARY KEY (`machineId`,`assetType`)
) ENGINE=InnoDB AUTO_INCREMENT=18 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `asset`
--

DROP TABLE IF EXISTS `asset`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `asset` (
  `assetId` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `assetType` int(10) unsigned NOT NULL,
  `statementType` int(10) unsigned NOT NULL,
  `chingCoinsCycle` int(11) NOT NULL,
  `chingCoinsDiff` int(11) NOT NULL,
  `liabilities` int(11) NOT NULL,
  `lossDays` int(11) NOT NULL,
  PRIMARY KEY (`assetId`)
) ENGINE=InnoDB AUTO_INCREMENT=19 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2013-02-05 20:48:32
