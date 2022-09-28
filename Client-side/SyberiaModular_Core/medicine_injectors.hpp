class SYB_Injector_ColorBase: Inventory_Base {
    descriptionShort="#syb_injector_base_desc";
    rotationFlags=17;
    itemSize[]={1,2};
    weight=60;
    overdosedIncrement=0.4;
    medicalItem=1;
    ITEM_DAMAGE_SYSTEM(100, "DZ\gear\medical\data\Morphine.rvmat", "DZ\gear\medical\data\Morphine_damage.rvmat", "DZ\gear\medical\data\Morphine_destruct.rvmat");
    class AnimEvents {
        class SoundWeapon {
            class Morphine_spear {
                soundSet="Morphine_spear_SoundSet";
                id=201;
            };
            class Morphine_out {
                soundSet="Morphine_out_SoundSet";
                id=202;
            };
        };
    };
};
class SYB_Injector_Promedol: SYB_Injector_ColorBase {
    scope=2;
    displayName="#syb_promedol_name";
    medPainkillerLevel=3;
    medPainkillerTimeSec=1800;
    hiddenSelectionsTextures[]=
    {
        "SyberiaModular_Core\data\medical\injector_blue_co.paa"
    };
};
class SYB_Injector_Zivirol: SYB_Injector_ColorBase {
    scope=2;
    displayName="#syb_zvirus_antidot_name";
    medRemoveZVirus=1;
    overdosedIncrement=1.8;
    hiddenSelectionsTextures[]=
    {
        "SyberiaModular_Core\data\medical\injector_red_co.paa"
    };
};
class SYB_Injector_Topoizomeraza: SYB_Injector_ColorBase {
    scope=2;
    displayName="#syb_topoizomeraza_name";
    medRemoveSepsis=1;
    hiddenSelectionsTextures[]=
    {
        "SyberiaModular_Core\data\medical\injector_green_co.paa"
    };
};
class SYB_Injector_Erytropoenin: SYB_Injector_ColorBase {
    scope=2;
    displayName="#syb_erytropoenin_name";
    medBloodHematopoiesis=1;
    medBloodHematopoiesisTimeSec=900;
    medBloodHemostatic=1;
    medBloodHemostaticTimeSec=900;
    hiddenSelectionsTextures[]=
    {
        "SyberiaModular_Core\data\medical\injector_red_co.paa"
    };
};
class SYB_Injector_Neiroks: SYB_Injector_ColorBase {
    scope=2;
    displayName="#syb_neiroks_name";
    medConcussionHeal=1;
    overdosedIncrement=0.5;
    hiddenSelectionsTextures[]=
    {
        "SyberiaModular_Core\data\medical\injector_blue_co.paa"
    };
};
class SYB_Injector_Amoksivan: SYB_Injector_ColorBase {
    scope=2;
    displayName="#syb_amoksivan_name";
    medAntibioticLevel=3;
    medAntibioticsTimeSec=1800;
    medAntibioticsStrength=5.0;
    medRemoveSepsis=1;
    overdosedIncrement=0.6;
    hiddenSelectionsTextures[]=
    {
        "SyberiaModular_Core\data\medical\injector_red_co.paa"
    };
};
class SYB_Injector_Ketorol: SYB_Injector_ColorBase {
    scope=2;
    displayName="#syb_ketorol_name";
    medStomatchhealLevel=2;
    medStomatchhealTimeSec=1600;
    medPainkillerLevel=1;
    medPainkillerTimeSec=1800;
    medAntibioticLevel=2;
    medAntibioticsTimeSec=1800;
    medAntibioticsStrength=2.0;
    hiddenSelectionsTextures[]=
    {
        "SyberiaModular_Core\data\medical\injector_green_co.paa"
    };
};
class SYB_Injector_Epipen: SYB_Injector_ColorBase {
    scope=2;
    displayName="#syb_epipen_name";
    medAdrenalinLevel=3;
    medAdrenalinTimeSec=300;
    overdosedIncrement=0.5;
    hiddenSelectionsTextures[]=
    {
        "SyberiaModular_Core\data\medical\injector_blue_co.paa"
    };
};
class SYB_Injector_Novichek: SYB_Injector_ColorBase {
    scope=2;
    displayName="#syb_novichek_name";
    medHemologicShock=1;
    overdosedIncrement=5;
    hiddenSelectionsTextures[]=
    {
        "SyberiaModular_Core\data\medical\injector_blue_co.paa"
    };
};
class SYB_Injector_Radioprotector: SYB_Injector_ColorBase {
    scope=2;
    displayName="#syb_radioprotector";
    medRadioprotectionLevel=2;
    medRadioprotectionTimer=350;
    overdosedIncrement=0.7;
    hiddenSelectionsTextures[]=
    {
        "SyberiaModular_Core\data\medical\injector_yellow_co.paa"
    };
};