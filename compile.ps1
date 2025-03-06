$problem_directory = Get-Location
$src_directory = "$problem_directory/src"
$bin_directory = "$problem_directory/bin"
g++ "$src_directory/*" -o "$bin_directory/windows.exe"  