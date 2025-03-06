$problem_directory = Get-Location
$src_directory = "$problem_directory/src"
$bin_directory = "$problem_directory/bin"
if (!(Test-Path -Path "$bin_directory"))
{
    New-Item -ItemType "directory" -Path "$bin_directory"
}
g++ "$src_directory/*" -o "$bin_directory/windows.exe"  