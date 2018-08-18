/*--------------------------------------------------------+
|    __________  ___   ________________   ____  ____  ___
|   / ____/ __ \/   | / ___/_  __/  _/ | / / / / /  |/  /
|  / /   / /_/ / /| | \__ \ / /  / //  |/ / / / / /|_/ /
| / /___/ _, _/ ___ |___/ // / _/ // /|  / /_/ / /  / /
| \____/_/ |_/_/  |_/____//_/ /___/_/ |_/\____/_/  /_/
|
+---------------------------------------------------------+
| Made with ❤️ by Crastinum Community's Modding Team
| http://community.crastinum.eu/
+---------------------------------------------------------+
| 📧 modding[at]community.crastinum.eu
+------------------------------------------------------//*/

class CfgPatches {
	class ccmt_insignias {
		name = "CCMT Insignias";
		version = "0.1";
		author[]= {"Crastinum Community Modding Team"};
		authorUrl = "http://community.crastinum.eu/";
	};
};

class CfgUnitInsignia {
	// Other / Crastinum Community
	class ccmt_insignia_1 {
		displayName = "[OTHER] Crastinum Community";
		author = "CCMT_SleepyAsh17";
		texture = "\ccmt_insignias\img\crastinum_community.paa";
		textureVehicle = "";
	};

	// Flag / Poland
	class ccmt_insignia_2 {
		displayName = "[FLAG]";
		author = "CCMT_RaiX";
		texture = "\ccmt_insignias\img\flag_poland.paa";
		textureVehicle = "";
	};
};