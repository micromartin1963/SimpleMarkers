

class CfgPatches
{
	class SimpleMarkers
	{
		units[] = {"red_pole","simplesign_left","simplesign_right","simplesign_checkpoint"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
	};
};
class CfgMods
{
	class SimpleMarkers
	{
		author = "FodnBrew";
		type = "mod";
		dependencies[] = {"Game","World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"SimpleMarkers/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"SimpleMarkers/scripts/4_World"};
			};

		};
	};
};
class CfgVehicles
{


	class House;
	class HouseNoDestruct;


	class red_pole : House
	{
		scope = 2;
		model = "\SimpleMarkers\models\red_pole.p3d";
	};

	class simplesign_left : HouseNoDestruct
	{
		scope = 2;
		model = "\SimpleMarkers\models\simplesign_left.p3d";
	};

		class simplesign_right : HouseNoDestruct
	{
		scope = 2;
		model = "\SimpleMarkers\models\simplesign_right.p3d";
	};


		class simplesign_checkpoint : HouseNoDestruct
	{
		scope = 2;
		model = "\SimpleMarkers\models\checkpoint.p3d";
	};




};






