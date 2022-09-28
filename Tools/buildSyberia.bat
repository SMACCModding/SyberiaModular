:: CHEEP AND DIRTY METHOD FOR NOW - This should be python exe
@echo off

if exist p:\ (
    echo "Building SyberiaModular Client! Please stand by and be attentive for any popups!"
) else echo "P: does not exist, please mount before running this script!"

cd "%~dp0"
cd "..\Client-Side"

IF exist "P:\SyberiaScripts" (
	echo Removing existing link P:\SyberiaScripts
	rmdir /S /Q "P:\SyberiaScripts"
)
echo Copying SyberiaModular_Deprecated to P drive!
echo d | xcopy "SyberiaModular_Deprecated\src" "P:\SyberiaScripts" /s /e /q
call "F:\Steam\steamapps\common\DayZ Tools\Bin\AddonBuilder\AddonBuilder.exe" "P:\SyberiaScripts" "F:\DayZModding\!ModdingToolKit\Mods - Online Deployed\@SyberiaModular" "-packonly" "-sign=P:\!ModdingToolKit\Tools & Scripts\Keys\smaccModding.biprivatekey"
echo SyberiaModular_Deprecated Done

echo Build Complete!