#!/usr/local/bin/pwsh
param(
    [string]$srcProject="DistMe",
    [switch]$compress
)

$ErrorActionPreference="Stop"

if(!(Test-Path "$srcProject")){
    $srcProject="$PSScriptRoot/../$srcProject"
}

if(!(Test-Path "$srcProject")){
    throw "-srcProject does not exist"
}

$dest="$PSScriptRoot/src"
if(Test-Path "$dest"){
    Remove-Item -Path "$dest" -Recurse -Force
}

New-Item -ItemType Directory -Path "$dest"

function Copy-Content
{
    param(
        [string]$dir,
        [string]$file
    )

    if(!(Test-Path "$dest/$dir")){
        New-Item -ItemType Directory -Path "$dest/$dir"
    }

    Copy-Item -Path "$srcProject/$dir/$file" -Destination "$dest/$dir" -Recurse
}

Copy-Content -dir "Assets/Editor" -file "UnitySpotify*"
Copy-Content -dir "Assets/Plugins/iOS" -file "UnitySpotify*"
Copy-Content -dir "Assets/Plugins" -file "UnitySpotify"
Copy-Content -dir "NativeAssets" -file "SpotifyiOS.framework"

if($compress){
    $zip="$PSScriptRoot/UnitySpotifyPlugin.zip"

    if(Test-Path "$zip"){
        Remove-Item -Path "$zip"
    }

    Compress-Archive -Path "$dest" -DestinationPath "$zip" -CompressionLevel Optimal
}