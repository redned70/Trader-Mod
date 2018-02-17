/*Turn APEX Buildings on by removing the "//" at the beginning of the line.
But be careful! People who don't have the APEX DLC can not see the Buildings! They can walk through them!!!!*/

//#define USE_APEX_Buildings 1

class ExtendedBaseMod
	{
		name = "ExtendedBaseMod";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
		"Land_HBarrier_1_F_Kit",
		"Land_HBarrier_3_F_Kit",
		"Land_HBarrier_5_F_Kit",
		"Land_BagBunker_Tower_F_Kit",
		//"CamoNet_OPFOR_open_F_Kit",Removed
		//"CamoNet_INDP_open_F_Kit",Removed
		//"CamoNet_BLUFOR_open_F_Kit",Removed
		///////////////////////// V0.0.2
		"Land_CncBarrier_F_Kit",
		"Land_Stone_4m_F_Kit",
		"Land_Stone_Gate_F_Kit",
		"PierLadder_F_Kit",
		"Land_WaterCooler_01_new_F_Kit",
		///////////////////////// V0.0.3
		"Land_Pallet_MilBoxes_F_Kit",
		"Land_Cargo20_military_green_F_Kit",
		"Land_BagFence_Corner_F_Kit",
		"Land_BagFence_Long_F_Kit",
		"Land_HBarrierTower_F_Kit",
		"Land_Metal_wooden_rack_F_Kit",
		"Land_BagBunker_Small_F_Kit",
		"Land_Bunker_F_Kit",
		"Land_HBarrierWall_corner_F_Kit",
		"Land_HBarrierWall6_F_Kit",
		"Land_HBarrierWall4_F_Kit",
		"Land_RampConcrete_F_Kit",
		///////////////////////// V0.0.4
		"Land_Wall_IndCnc_4_F_Kit",
		"Land_City2_4m_F_Kit",
		"Land_City2_8m_F_Kit",
		"Land_HelipadCivil_F_Kit",
		"Land_Rack_F_Kit",
		///////////////////////// V0.1.0
		"Land_City_Gate_F_Kit",
		"Land_BarGate_F_Kit",
		"Land_Icebox_F_Kit",
		"Land_Sign_WarningMilitaryArea_F_Kit",
		"Land_Mil_WallBig_4m_F_Kit",
		"Land_Cargo_Patrol_V2_F_Kit",
		///////////////////////// V0.1.1
		"Land_Pier_small_F_Kit",
		"Land_Wall_Tin_4_Kit",
		///////////////////////// V0.1.2
		"Land_Tank_rust_F_Kit",
		"Land_ShelvesMetal_F_Kit",
		"Land_Cargo_Tower_V2_F_Kit",
		"Land_FuelStation_Feed_F_Kit",
		"Land_BagBunker_Large_F_Kit",
		"ShootingPos_F_Kit",
		///////////////////////// V0.1.3
		"Land_cargo_house_slum_F_Kit",
		"Land_Cargo40_light_green_F_Kit",
		"Land_Cargo_House_V2_F_Kit",
		"Land_LampHalogen_F_Kit",
		///////////////////////// V0.1.4
		"Land_LampAirport_F_Kit",
		"Land_CncShelter_F_Kit",
		"Land_Wall_IndCnc_2deco_F_Kit",
		"Land_CncWall4_F_Kit",
		"Land_FuelStation_Shed_F_Kit",
		"Land_Shed_Small_F_Kit",
		"Land_Razorwire_F_Kit",
		///////////////////////// V0.1.5
		"Land_u_Addon_01_V1_F_Kit", //brokenshed
		"Land_Cargo20_sand_F_Kit",
		"Land_GH_Stairs_F_Kit",
		"Land_i_Garage_V2_F_Kit",
		"Land_GH_Platform_F_Kit",
		"Land_TentDome_F_Kit",
		"Land_TentHangar_V1_F_Kit",
		///////////////////////// V0.1.6
		"Land_CncWall1_F_Kit",
		"Land_CncBarrierMedium_F_Kit",
		"Land_Crash_barrier_F_Kit",
		"Land_Shed_Big_F_Kit",
		"Land_TouristShelter_01_F_Kit",
		"Land_Water_source_F_Kit",
		"Land_Sign_WarningMilitaryVehicles_F_Kit",
		"Land_Sign_WarningMilAreaSmall_F_Kit",
		"Land_Concrete_SmallWall_8m_F_Kit",
		"Land_Concrete_SmallWall_4m_F_Kit",
		///////////////////////// V0.1.7
		"Land_PortableLight_double_F_Kit",
		"Land_Radar_Small_F_Kit",
		"Land_Cargo_addon02_V2_F_Kit", //Slumplane
		"Land_TableDesk_F_Kit",
		"Land_ToiletBox_F_Kit",
		//"Land_Pier_Box_F_Kit",//  Removed!
		///////////////////////// V0.1.8
		"Land_ChairWood_F_Kit",
		"BlockConcrete_F_Kit",
		"Land_CargoBox_V1_F_Kit",
		"Land_IndFnc_3_F_Kit",
		"Land_IndFnc_9_F_Kit",
		"Land_Sea_Wall_F_Kit",
		"Land_i_Addon_03_V1_F_Kit",
		"Land_i_Addon_03mid_V1_F_Kit",
		"Land_LampStreet_F_Kit",
		///////////////////////// V0.1.9
		"Land_Dome_Big_F_Kit",
		"Land_Hangar_F_Kit",
		"Land_Metal_Shed_F_Kit",
		"Land_spp_Tower_F_Kit",
		"Land_Sun_chair_F_Kit",
		"Land_Sunshade_04_F_Kit",
		"Land_LampShabby_F_Kit",
		///////////////////////// V0.2.0
		"Land_Airport_Tower_F_Kit",
		"Land_i_Barracks_V1_F_Kit",
		"Land_BeachBooth_01_F_Kit",
		"Land_Castle_01_tower_F_Kit",
		"Land_Sign_WarningUnexplodedAmmo_F_Kit",
		"Land_TTowerSmall_1_F_Kit",
		///////////////////////// V0.2.1 Hotfix
		///////////////////////// V0.2.2
		"Exile_Plant_GreenBush_Kit",
		//"Land_nav_pier_m_F_Kit",// Removed
		"Land_SharpStone_01_F_Kit",
		"Land_SharpStone_02_F_Kit",
		"Land_Sleeping_bag_F_Kit",
		"Land_Small_Stone_02_F_Kit",
		"Land_SolarPanel_2_F_Kit",
		"Land_spp_Panel_F_Kit",
		///////////////////////// V0.2.3
		"Land_CampingChair_V2_F_Kit",
		"Land_CampingChair_V1_F_Kit",
		"Land_Camping_Light_F_Kit",
		"Land_CampingTable_F_Kit",
		"MapBoard_altis_F_Kit",
		"Land_Pavement_narrow_F_Kit",
		"Land_Pavement_narrow_corner_F_Kit",
		"Land_Pavement_wide_F_Kit",
		"Land_Pavement_wide_corner_F_Kit",
		///////////////////////// V0.2.4
		"Exile_ConcreteMixer_Kit",
		"Flag_CSAT_F_Kit",
		"Land_GarbageContainer_closed_F_Kit",
		"Land_Metal_rack_F_Kit",
		"Land_Sink_F_Kit",
		///////////////////////// V0.2.5
		//"Land_Atm_02_F_Kit",
		///////////////////////// V0.2.6
		#ifdef USE_APEX_Buildings
		"Land_Airport_01_hangar_F_Kit",//V0.2.8
		"Land_Ammobox_rounds_F_Kit",//V0.2.8
		"Land_BagBunker_01_small_green_F_Kit",
		"Land_Bagbunker_01_large_green_F_Kit",//V0.2.8
		"Land_Bagfence_01_long_green_F_Kit",//V0.2.8
		"Land_Bagfence_01_short_green_F_Kit",//V0.2.8
		"Land_HBarrier_01_big_tower_green_F_Kit",//V0.2.8
		"Land_HBarrier_01_line_3_green_F_Kit",
		"Land_HBarrier_01_line_5_green_F_Kit",
		"Land_HBarrier_01_tower_green_F_Kit", //name changed
		"Land_IRMaskingCover_01_F_Kit",//V0.2.8
		"Land_IRMaskingCover_02_F_Kit",//V0.2.8
		/*
		"Land_Airport_01_controlTower_F_Kit",
		"Land_BasaltWall_01_4m_F_Kit",//V0.2.8
		"Land_BasaltWall_01_8m_F_Kit",//V0.2.8
		"Land_BasaltWall_01_gate_F_Kit",//V0.2.8
		"Land_Breakwater_01_F_Kit",//V0.2.8
		"Land_Breakwater_02_F_Kit",//V0.2.8
		"Land_GarageShelter_01_F_Kit", //V0.2.7
		"Land_PetroglyphWall_01_F_Kit",//V0.2.8
		"Land_PetroglyphWall_02_F_Kit",//V0.2.8
		"Land_PillboxBunker_01_big_F_Kit",
		"Land_PillboxBunker_01_hex_F_Kit",
		"Land_PillboxBunker_01_rectangle_F_Kit",
		"Land_PillboxWall_01_3m_F_Kit",
		"Land_PillboxWall_01_6m_F_Kit",
		"Land_trench_01_forest_F_Kit",
		"Land_trench_01_grass_F_Kit",
		*/
		#endif
		///////////////////////// V0.2.7
		"Land_i_House_Small_03_V1_F_Kit",//Bungalow
		"Land_i_House_Big_01_V2_F_Kit",
		"Land_PlasticCase_01_medium_F_Kit",
		"Land_Research_HQ_F_Kit",
		"Land_Research_house_V1_F_Kit",
		///////////////////////// V0.2.8 - Some Apex buildings
		"Land_Suitcase_F_Kit",
		"B_Slingload_01_fuel_F_Kit",
		"B_Slingload_01_Ammo_F_Kit",
		///////////////////////// V0.3.1
		"Land_FlatTV_01_F_Kit",
		"Land_ChairPlastic_F_Kit",
		"Land_GamingSet_01_console_F_Kit",
		"Land_GamingSet_01_controller_F_Kit",
		"Land_GymBench_01_F_Kit",
		"Land_GymRack_03_F_Kit",
		"Land_OfficeCabinet_01_F_Kit",
		"Land_OfficeChair_01_F_Kit",
		"Land_PCSet_01_case_F_Kit",
		"Land_PCSet_01_keyboard_F_Kit",
		"Land_PCSet_01_mouse_F_Kit",
		"Land_PCSet_01_screen_F_Kit",
		"Land_Printer_01_F_Kit",
		"Land_RattanChair_01_F_Kit",
		"Land_RattanTable_01_F_Kit",
		"Land_Sleeping_bag_blue_F_Kit",
		"Land_Sleeping_bag_brown_F_Kit",
		"Land_Trophy_01_bronze_F_Kit",
		"Land_Trophy_01_gold_F_Kit",
		"Land_Trophy_01_silver_F_Kit",
		"Land_Sun_chair_green_F_Kit",
		"Land_Sunshade_01_F_Kit",
		"Land_Sunshade_02_F_Kit",
		"Land_Sunshade_03_F_Kit",
		"Land_Sunshade_F_Kit",
		"Land_TablePlastic_01_F_Kit",
		"Land_WoodenTable_large_F_Kit",
		"Land_WoodenTable_small_F_Kit",
		"OfficeTable_01_new_F_Kit",
		"Land_DieselGroundPowerUnit_01_F_Kit",
		"Land_EngineCrane_01_F_Kit",
		"Land_PalletTrolley_01_yellow_F_Kit",
		"Land_PressureWasher_01_F_Kit",
		"Land_WeldingTrolley_01_F_Kit",
		"Land_Workbench_01_F_Kit",
		"ArrowDesk_L_F_Kit",
		"ArrowDesk_R_F_Kit",
		"PlasticBarrier_02_grey_F_Kit",
		"PlasticBarrier_02_yellow_F_Kit",
		"PlasticBarrier_03_blue_F_Kit",
		"PlasticBarrier_03_orange_F_Kit",
		"RoadBarrier_F_Kit",
		"RoadBarrier_small_F_Kit",
		"RoadCone_F_Kit",
		"RoadCone_L_F_Kit",
		"TapeSign_F_Kit",
		"Land_Target_Dueling_01_F_Kit",
		"TargetP_Inf_F_Kit",
		"Fridge_01_closed_F_Kit",
		"Land_MetalCase_01_large_F_Kit",
		"Land_Microwave_01_F_Kit",
		"Land_ShelvesWooden_F_Kit",
		"Land_ShelvesWooden_blue_F_Kit",
		"Land_ShelvesWooden_khaki_F_Kit",
		"Land_ToolTrolley_01_F_Kit",
		"Land_ToolTrolley_02_F_Kit",
		"Land_Sign_Mines_F_Kit",
		"Land_PortableHelipadLight_01_F_Kit",
		"PortableHelipadLight_01_blue_F_Kit",
		"PortableHelipadLight_01_green_F_Kit",
		"PortableHelipadLight_01_red_F_Kit",
		"PortableHelipadLight_01_white_F_Kit",
		"PortableHelipadLight_01_yellow_F_Kit",
		"Land_GamingSet_01_powerSupply_F_Kit",
		"Land_GamingSet_01_camera_F_Kit",
		"WaterPump_01_forest_F_Kit",
		"WaterPump_01_sand_F_Kit",
		"Land_TripodScreen_01_large_F_Kit",
		"Land_TripodScreen_01_dual_v2_F_Kit",
		"Land_TripodScreen_01_dual_v1_F_Kit",
		"TargetP_Inf_Acc2_F_Kit",
		"TargetBootcampHuman_F_Kit",
		"Target_F_Kit",
		"Land_SatelliteAntenna_01_F_Kit",
		"Land_Projector_01_F_Kit",
		"Land_PortableGenerator_01_F_Kit",
		"Land_Obstacle_Ramp_F_Kit",
		"MetalBarrel_burning_F_Kit",
		///////////////////////// V0.3.2
		"EBM_Brickwall_window_Kit",
		"EBM_Brickwall_stairs_Kit",
		"EBM_Brickwall_floorport_door_Kit",
		"EBM_Brickwall_floorport_Kit",
		"EBM_Brickwall_floor_Kit",
		"EBM_Brickwall_door_Kit",
		"EBM_Brickwall_hole_Kit",
		"EBM_Helipad_Kit",
		"EBM_Airhook_Kit",
		"EBM_Parksign_Kit",
		"EBM_Brickwall_Kit",
		///////////////////////// V0.3.3
		/*"EBM_Metalwall_window_Kit",
		"EBM_Metalwall_stairs_Kit",
		"EBM_Metalwall_floorport_door_Kit",
		"EBM_Metalwall_floorport_Kit",
		"EBM_Metalwall_floor_Kit",
		"EBM_Metalwall_door_Kit",
		"EBM_Metalwall_hole_Kit",
		"EBM_Metalwall_half_Kit",
		"EBM_Metalwall_Kit",*/
		"EBM_Medikit_Kit",
		"EBM_pollard_Kit",
		"EBM_ATM_Kit"
		};
	};