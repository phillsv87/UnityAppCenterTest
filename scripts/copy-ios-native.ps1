#!/usr/local/bin/pwsh
param(
    [string]$build=$(throw "-build required")
)

cp -v "$PSScriptRoot/../builds/$build/Libraries/Plugins/iOS/UnitySpotify.mm" "$PSScriptRoot/../DistMe/Assets/Plugins/iOS"
if(!$?){throw "copy to Plugins failed"}

cp -v "$PSScriptRoot/../builds/$build/Libraries/Plugins/iOS/UnitySpotify.h" "$PSScriptRoot/../DistMe/Assets/Plugins/iOS"
if(!$?){throw "copy to Plugins failed"}