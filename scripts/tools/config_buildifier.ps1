Write-Host "--- Start to config Buildifier ---"

$Env:BASE_ROOT = Get-Location

if ($Null -Eq $Env:TOOLS_ROOT) {
    $Env:TOOLS_ROOT = "$Env:BASE_ROOT\tools"
}

$buildifierVersion = "6.4.0"

if ($Null -Eq $Env:BUILDIFIER_ROOT) {
    $Env:BUILDIFIER_ROOT = "$Env:TOOLS_ROOT\buildifier-$buildifierVersion"
}

$buildifierURL = "https://github.com/bazelbuild/buildtools/releases/download/v$buildifierVersion/buildifier-windows-amd64.exe"
$buildifierPath = "$Env:BUILDIFIER_ROOT\buildifier.exe"

if (!(Test-Path -Path "$Env:BUILDIFIER_ROOT/buildifier.exe")) {
    New-Item $Env:BUILDIFIER_ROOT -Force -ItemType Directory
    if (!(Test-Path -Path $Env:BUILDIFIER_ROOT)) {
        Write-Host "error: Failed to create Bazel directory, $Env:BUILDIFIER_ROOT"
        Exit 1
    }

    # Purge Buildifier directory
    Remove-Item -Path "$Env:TOOLS_ROOT\buildifier-*\*" -Recurse -Force

    (New-Object Net.WebClient).DownloadFile($buildifierURL, $buildifierPath)
    if (!(Test-Path -Path $buildifierPath)) {
        Write-Host "error: Failed to download Buildifier, $buildifierURL"
        Exit 1
    }
}

if (![string]::IsNullOrEmpty($Env:BUILDIFIER_ROOT) -and -not ($env:Path -split ';' -contains $Env:BUILDIFIER_ROOT)) {
    $env:Path += "; $Env:BUILDIFIER_ROOT"
}

# Check Buildifier version
& buildifier --version

Write-Host "--- Complete configing Buildifier ---"