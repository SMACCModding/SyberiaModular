class CfgPatches {
	class SyberiaModular_Core {
        units[]={};
		requiredAddons[]=
		{
            "DZ_Data",
            "DZ_Scripts",
            "DZ_Gear_Medical"
		};
	};
};
class CfgMods {
	class SyberiaModular_Core {
		type="mod";
        author="SMACC, Terje Broygard";
        inputs="SyberiaModular_Core/inputs/inputs.xml";
		class defs {
			class gameScriptModule {
				value="";
				files[]={"SyberiaModular_Core/scripts/3_Game"};
			};
			class worldScriptModule {
				value="";
				files[]={"SyberiaModular_Core/scripts/4_World"};
			};
			class missionScriptModule {
				value="";
				files[]={"SyberiaModular_Core/scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles {
    #include "predef.hpp"
    #include "medicine_base.hpp" // Calls all the medical based stuffs!
};