class SYB_MedicineVial_ColorBase: Inventory_Base {
    scope=0;
    descriptionShort="#syb_ampoule_desc";
    itemSize[]={1,2};
    weight=100;
    quantityBar=1;
    varQuantityInit=4;
    varQuantityMin=0;
    varQuantityMax=4;
    varQuantityDestroyOnMin=0;
    stackedUnit="percentage";
    absorbency=0;
    overdosedIncrement=0.25;
    medicalItem=1;
    hiddenSelections[]=
    {
        "zbytek"
    };
    ITEM_DAMAGE_SYSTEM(50, "DZ\gear\medical\data\InjectionVial.rvmat", "DZ\gear\medical\data\InjectionVial_damage.rvmat", "DZ\gear\medical\data\InjectionVial_destruct.rvmat");
    class AnimEvents {
        class SoundWeapon {
            class pickUpItem {
                soundSet="injectionvial_pickup_SoundSet";
                id=797;
            };
        };
    };
};
class SYB_MedicineVial_Alcohol: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_alcohol_name";
    medHemologicShock=1;
    overdosedIncrement=4;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_Hihlofos: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_dihlofos_name";
    medHemologicShock=1;
    overdosedIncrement=4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_red_co.paa"
    };
};
class SYB_MedicineVial_Cypermetrin: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_cypermetrin_name";
    medHemologicShock=1;
    overdosedIncrement=4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_green_co.paa"
    };
};
class SYB_MedicineVial_Diazinon: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_diazinon_name";
    medHemologicShock=1;
    overdosedIncrement=4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_green_co.paa"
    };
};
class SYB_MedicineVial_Arsenic: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_arsenic_name";
    medHemologicShock=1;
    overdosedIncrement=4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_green_co.paa"
    };
};
class SYB_MedicineVial_Novocain: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_novocaine_name";
    medPainkillerLevel=2;
    medPainkillerTimeSec=1500; // 25 minutes
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_blue_co.paa"
    };
};
class SYB_MedicineVial_Irineks: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_irineks_name";
    medPainkillerLevel=2;
    medPainkillerTimeSec=600; // 25 minutes
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_blue_co.paa"
    };
};
class SYB_MedicineVial_Nimesulid: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_nimesulid_name";
    medPainkillerLevel=2;
    medPainkillerTimeSec=1600; // 25 minutes
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_yellow_co.paa"
    };
};
class SYB_MedicineVial_Ketoprofen: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_ketoprofen_name";
    medPainkillerLevel=2;
    medPainkillerTimeSec=1800;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_Propofol: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_propofol_name";
    medPainkillerLevel=3;
    medPainkillerTimeSec=800;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_yellow_co.paa"
    };
};
class SYB_MedicineVial_Tiopental: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_tiopental_name";
    medPainkillerLevel=3;
    medPainkillerTimeSec=600;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_red_co.paa"
    };
};
class SYB_MedicineVial_Ketamin: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_ketamin_name";
    medPainkillerLevel=3;
    medPainkillerTimeSec=300;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_blue_co.paa"
    };
};
class SYB_MedicineVial_Propanidid: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_propanidid_name";
    medPainkillerLevel=2;
    medPainkillerTimeSec=400;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_yellow_co.paa"
    };
};
class SYB_MedicineVial_Gexobarbital: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_gexobarbital_name";
    medPainkillerLevel=2;
    medPainkillerTimeSec=800;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_SodiumOxybutirate: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_sodium_oxybutirate_name";
    medPainkillerLevel=3;
    medPainkillerTimeSec=1200;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_Metoclopramid: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_metoclopramid_name";
    medStomatchhealLevel=2;
    medStomatchhealTimeSec=600;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_yellow_co.paa"
    };
};
class SYB_MedicineVial_Zerukal: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_zerukal_name";
    medStomatchhealLevel=2;
    medStomatchhealTimeSec=800;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_blue_co.paa"
    };
};
class SYB_MedicineVial_Ketorol: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_ketorol_name";
    medStomatchhealLevel=2;
    medStomatchhealTimeSec=1000;
    medPainkillerLevel=1;
    medPainkillerTimeSec=1200;
    medAntibioticLevel=2;
    medAntibioticsTimeSec=1200;
    medAntibioticsStrength=2.0;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_green_co.paa"
    };
};
class SYB_MedicineVial_Diklofenak: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_diklofenak_name";
    medAntibioticLevel=2;
    medAntibioticsTimeSec=1100;
    medAntibioticsStrength=2.5;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_Heptral: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_heptral_name";
    medStomatchhealLevel=2;
    medStomatchhealTimeSec=1200;
    overdosedIncrement=0.3;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_Cylaspen: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_cylaspen_name";
    medAntibioticLevel=2;
    medAntibioticsTimeSec=600;
    medAntibioticsStrength=2.0;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_Grimipenem: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_grimipenem_name";
    medAntibioticLevel=2;
    medAntibioticsTimeSec=500;
    medAntibioticsStrength=1.8;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_Zeftriaxon: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_zeftriaxon_name";
    medAntibioticLevel=2;
    medAntibioticsTimeSec=600;
    medAntibioticsStrength=1.8;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_blue_co.paa"
    };
};
class SYB_MedicineVial_Erytromicyn: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_erytromicyn_name";
    medAntibioticLevel=2;
    medAntibioticsTimeSec=1000;
    medAntibioticsStrength=2.0;
    overdosedIncrement=0.45;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_red_co.paa"
    };
};
class SYB_MedicineVial_Flemoclav: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_flemoclav_name";
    medAntibioticLevel=3;
    medAntibioticsTimeSec=1400;
    medAntibioticsStrength=2.5;
    overdosedIncrement=0.45;
    medRemoveSepsis=1;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_yellow_co.paa"
    };
};
class SYB_MedicineVial_Ocsacylin: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_ocsacylin_name";
    medAntibioticLevel=3;
    medAntibioticsTimeSec=300;
    medAntibioticsStrength=2.7;
    overdosedIncrement=0.5;
    medRemoveSepsis=1;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_blue_co.paa"
    };
};
class SYB_MedicineVial_Imipenem: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_imipenem_name";
    medAntibioticLevel=3;
    medAntibioticsTimeSec=1200;
    medAntibioticsStrength=3.0;
    overdosedIncrement=0.55;
    medRemoveSepsis=1;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_Amoksivan: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_amoksivan_name";
    medAntibioticLevel=3;
    medAntibioticsTimeSec=1400;
    medAntibioticsStrength=3.0;
    overdosedIncrement=0.6;
    medRemoveSepsis=1;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_red_co.paa"
    };
};
class SYB_MedicineVial_Zivirol: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_zvirus_antidot_name";
    medRemoveZVirus=1;
    overdosedIncrement=1.8;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_red_co.paa"
    };
};
class SYB_MedicineVial_Meksidol: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_meksidol_name";
    medConcussionHeal=1;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_green_co.paa"
    };
};
class SYB_MedicineVial_Actovegin: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_actovegin_name";
    medConcussionHeal=1;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_blue_co.paa"
    };
};
class SYB_MedicineVial_Neiroks: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_neiroks_name";
    medConcussionHeal=1;
    overdosedIncrement=0.5;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_Peklitakcel: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_peklitakcel_name";
    medHematomaHeal=1;
    medHematomaHealTimeSec=900;
    overdosedIncrement=0.2;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_NonacogAlpha: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_nonacog_alpha_name";
    medBloodHemostatic=1;
    medBloodHemostaticTimeSec=600;
    overdosedIncrement=0.3;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_AminokaprolSulfat: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_aminokapsulfat_name";
    medBloodHemostatic=1;
    medBloodHemostaticTimeSec=600;
    overdosedIncrement=0.3;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_red_co.paa"
    };
};
class SYB_MedicineVial_Vikasol: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_vikasol_name";
    medBloodHemostatic=1;
    medBloodHemostaticTimeSec=800;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_blue_co.paa"
    };
};
class SYB_MedicineVial_Etamzilat: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_etamzilat_name";
    medBloodHemostatic=1;
    medBloodHemostaticTimeSec=1400;
    overdosedIncrement=0.5;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_yellow_co.paa"
    };
};
class SYB_MedicineVial_Perftoran: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_perftoran_name";
    medBloodHematopoiesis=1;
    medBloodHematopoiesisTimeSec=300;
    overdosedIncrement=0.3;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_blue_co.paa"
    };
};
class SYB_MedicineVial_Maltofer: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_maltofer_name";
    medBloodHematopoiesis=1;
    medBloodHematopoiesisTimeSec=600;
    overdosedIncrement=0.3;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_Erytropoenin: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_erytropoenin_name";
    medBloodHematopoiesis=1;
    medBloodHematopoiesisTimeSec=900;
    medBloodHemostatic=1;
    medBloodHemostaticTimeSec=900;
    overdosedIncrement=0.5;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_red_co.paa"
    };
};
class SYB_MedicineVial_Adrenalin05: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_adrenalin05_name";
    medAdrenalinLevel=1;
    medAdrenalinTimeSec=900;
    overdosedIncrement=0.2;
    hiddenSelectionsTextures[]=
    { 
        "SyberiaScripts\data\medical\ampoule_co.paa"
    };
};
class SYB_MedicineVial_Adrenalin10: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_adrenalin10_name";
    medAdrenalinLevel=2;
    medAdrenalinTimeSec=600;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_yellow_co.paa"
    };
};
class SYB_MedicineVial_Adrenalin30: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_adrenalin30_name";
    medAdrenalinLevel=3;
    medAdrenalinTimeSec=300;
    overdosedIncrement=0.6;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_red_co.paa"
    };
};
class SYB_MedicineVial_Pentacin: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_pentacin";
    medRadioprotectionLevel=2;
    medRadioprotectionTimer=300;
    overdosedIncrement=0.6;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_yellow_co.paa"
    };
};
class SYB_MedicineVial_Carboxyme: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_carboxyme";
    medRadioprotectionLevel=2;
    medRadioprotectionTimer=300;
    overdosedIncrement=0.6;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_blue_co.paa"
    };
};
class SYB_MedicineVial_Metralindol: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_metralyndol";
    medAntidepresantLevel=2;
    medAntidepresantTimer=300;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_green_co.paa"
    };
};
class SYB_MedicineVial_Actaparoxetine: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_aktaparoksetyn";
    medAntidepresantLevel=2;
    medAntidepresantTimer=400;
    overdosedIncrement=0.4;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_blue_co.paa"
    };
};
class SYB_MedicineVial_Amitriptyline: SYB_MedicineVial_ColorBase {
    scope=2;
    displayName="#syb_amitriptilin";
    medAntidepresantLevel=2;
    medAntidepresantTimer=600;
    overdosedIncrement=0.5;
    hiddenSelectionsTextures[]=
    {
        "SyberiaScripts\data\medical\ampoule_yellow_co.paa"
    };
};