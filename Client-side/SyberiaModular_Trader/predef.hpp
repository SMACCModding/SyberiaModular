#define ITEM_DAMAGE_SYSTEM(hitpoints_value, rvmat_path, rvmat_path_damage, rvmat_path_destruct) class DamageSystem {\
    class GlobalHealth {\
        class Health {\
            hitpoints=hitpoints_value;\
            healthLevels[]={\
                { 1.0, { rvmat_path } },\
                { 0.7, { rvmat_path } },\
                { 0.5, { rvmat_path_damage } },\
                { 0.3, { rvmat_path_damage } },\
                { 0.0, { rvmat_path_destruct } }\
            };\
        };\
    };\
}

// Base Classes
class Inventory_Base;
class Clothing;