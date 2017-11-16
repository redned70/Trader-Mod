	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"CUPPointerAttachments",
			"MASPointerAttachments",
			"R3FPointerAttachments",
			"RHSPointerAttachments",
			"FFAAPointerAttachments",
			"BipodAttachments",
			"FFAABipodAttachments",
			//"APEXBipodAttachments",		//not used
			"R3FBipodAttachments",
			"RHSBipodAttachments",
			"RHSForegripAttachments",
			"MuzzleAttachments",
			"APEXMuzzleAttachments",
			//"HLCMuzzleAttachments",		//should use NIArms
			"CUPMuzzleAttachments",
			"MASMuzzleAttachments",
			"NIAMuzzleAttachments",
			"R3FMuzzleAttachments",
			"RHSMuzzleAttachments",
			"FFAAMuzzleAttachments",
			"OpticAttachments",
			"APEXOpticAttachments",
			//"HLCOpticAttachments",		//should use NIArms
			"CUPOpticAttachments",
			"FFAAMuzzleAttachments",
			"MASOpticAttachments",
			"NIAOpticAttachments",
			"R3FOpticAttachments",
			"RHSOpticAttachments",
			"NIAAttachments",
			"Ammunition",
			"APEXAmmunition",
			"GREFAmmunition",
			//"HLCAmmunition",		//should use NIArms
			"CUPAmmunition",
			"FFAAAmunition",
			"MASAmmunition",
			"NIAAmmunition",
			"R3FAmmunition",
			"RHSAmmunition",
			"Pistols",
			"APEXPistols",
			"CUPPistols",
			"FFAAPistols",
			"MASPistols",
			"R3FPistols",
			"RHSPistols",
			"Shotguns",
			"SubMachineGuns",
			"APEXSubMachineGuns",
			"CUPSubMachineGuns",
			"FFAASmg",
			"MASSubMachineGuns",
			"R3FSubMachineGuns",
			"RHSSubMachineGuns",
			"LightMachineGuns",
			"APEXLightMachineGuns",
			//"HLCLightMachineGuns",		//should use NIArms
			"CUPLightMachineGuns",
			"MASLightMachineGuns",
			"NIALightMachineGuns",
			"R3FLightMachineGuns",
			"RHSLightMachineGuns",
			"AssaultRifles",
			"APEXAssaultRifles",
			"HAPASSAULTRIFLES",
			//"HLCAssaultRifles",		//should use NIArms
			"CUPAssaultRifles",
			"FFAARifles",
			"MASAssaultRifles",
			"NIAAssaultRifles",
			"R3FAssaultRifles",
			"RHSAssaultRifles",
			"GREFWeapons",
			"SniperRifles",
			"APEXSniperRifles",
			"FFAASniperRifles",
			"HAPSNIPERRIFLES",
			//"HLCSniperRifles",		//should use NIArms
			"HWPweapons",
			"CUPSniperRifles",
			"MASSniperRifles",
			"NIASniperRifles",
			"R3FSniperRifles",
			"RHSSniperRifles",
			"SAFWeapons", 
			"SAFAmmunition", 
			"SAFAttachments"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Navigation",
			"ExplosiveWeapons",
			"Explosives",
			"A3Launchers",
			"ApexLaunchers",
			"CUPLaunchers",
			"MASLaunchers",
			"R3FLaunchers",
			"RHSLaunchers",
			"A3LauncherAmmo",
			"APEXLauncherAmmo",
			"CUPLauncherAmmo",
			"MASLauncherAmmo",
			"R3FLauncherAmmo",
			"RHSLauncherAmmo",
			"CUPExplosive",
			"MASExplosive",
			"RHSExplosives",
			"RHSUGLAmmo",
			"SAFMines"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"APEXHeadgear",
			"CUPHeadgear",
			"FFAAHeadgear",
			"GREFHeadgear",
			"HAPHEADGEAR",
			"Headgear",
			"MASHeadgear",
			"RHSHeadgear",
			"TRYKHeadgear",
			"FFAAfaceware",
			"APEXUniforms",
			"CUPUniforms",
			"FFAAUniform",
			"GREFUniforms",
			"HAPUNIFORMS",
			"RHSUniforms",
			"TRYKUniforms",
			"Uniforms",
			"RHSAccessories",
			"APEXVests",
			"CUPVests",
			"FFAAVest",
			"GREFVests",
			"HAPVESTS",
			"RHSVests",
			"TRYKVests",
			"Vests",
			"A3Backpacks",
			"APEXBackpacks",
			"Backpacks",
			"CUPBackpacks",
			"FFAAbackpack",
			"HAPBACKPACKS",
			"MASBackpacks",
			"RHSBackpacks",
			"TRYKBackpacks",
			"Tools",
			//"APEXTools",		//not used
			"MASTools",
			"FirstAid",
			"SAFUniforms",
			"SAFVests",
			"SAFHeadgear",
			"SAFBackpacks"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks",
			"NonVeganFood"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			//"R3FTools",
			"ExtendedBaseMod",
			"CBuilding"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Bikes",
			"Cars",
			"A3Cars",
			"ApexCars",
			"HAPCARS",
			"HVPCars",
			"JonzieCars",
			"MASCars",
			"CUPUnarmed",
			"ApexTrucks",
			"HAPTRUCKS",
			"MASTrucks",
			"CUPArmed",
			"MASArmed",
			"A3Armed",
			"SAFUnarmed", 
			"SAFArmed",
			"RHSVehicles",
			"GREFArmed",
			"GREFUnarmed",
			"CTrucks",
			"Trucks",
			"A3Trucks",
			"CUGVs",
			"FMPCars",
			"FMPTrucks",
			"FOXCars",
			"FOXTrucks"
			//"MASTanks"
			//"A3Tanks"	
			//"UGV"	
			//"A3UGVs"	
			//"ApexUAVs"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers",
			"ApexChoppers",
			"CChoppers",			
			"CUPChoppers",
			"MASChoppers",
			"RHSChoppers",
			"GREFChoppers",
			"A3unarmedChoppers",
			"A3armedChoppers",
			"Planes",
			"A3Planes",
			"ApexPlanes",
			"CPlanes",
			"HVPPlanes",
			"MASPlanes",
			"SAFChoppers",
			"RHSPlanes",
			"GREFPlanes",
			//"CUAVs",
			//"A3UAVs",
			"Pods"		
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats",
			"A3Boats",
			"ApexBoats"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};	
	
	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};
	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};