class CfgPatches {
	class SyberiaModular_Trader {
        units[]={};
		requiredAddons[]=
		{
            "DZ_Data"
		};
	};
};
class CfgMods {
	class SyberiaModular_Trader {
		type="mod";
        author="SMACC, Terje Broygard";
        inputs="SyberiaModular_Trader/inputs/inputs.xml";
		class defs {
			class gameScriptModule {
				value="";
				files[]={"SyberiaModular_Trader/scripts/3_Game"};
			};
			class worldScriptModule {
				value="";
				files[]={"SyberiaModular_Trader/scripts/4_World"};
			};
			class missionScriptModule {
				value="";
				files[]={"SyberiaModular_Trader/scripts/5_Mission"};
			};
		};
	};
};
class CfgVehicles {
    #include "predef.hpp"
    #include "medicine_redef.hpp"
//    #include "medicine_syb.hpp" // For now just gonna include the trader stuff in with where the syb items are made, as its config should make nae diff
};