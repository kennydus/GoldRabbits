# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\kenny\AppData\Local\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\kenny\AppData\Local\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kenny\CLionProjects\GoldRabbits

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kenny\CLionProjects\GoldRabbits\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\GoldRabbits.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\GoldRabbits.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\GoldRabbits.dir\flags.make

CMakeFiles\GoldRabbits.dir\main.cpp.obj: CMakeFiles\GoldRabbits.dir\flags.make
CMakeFiles\GoldRabbits.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kenny\CLionProjects\GoldRabbits\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GoldRabbits.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\GoldRabbits.dir\main.cpp.obj /FdCMakeFiles\GoldRabbits.dir\ /FS -c C:\Users\kenny\CLionProjects\GoldRabbits\main.cpp
<<

CMakeFiles\GoldRabbits.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GoldRabbits.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\GoldRabbits.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kenny\CLionProjects\GoldRabbits\main.cpp
<<

CMakeFiles\GoldRabbits.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GoldRabbits.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\GoldRabbits.dir\main.cpp.s /c C:\Users\kenny\CLionProjects\GoldRabbits\main.cpp
<<

CMakeFiles\GoldRabbits.dir\BigInt.cpp.obj: CMakeFiles\GoldRabbits.dir\flags.make
CMakeFiles\GoldRabbits.dir\BigInt.cpp.obj: ..\BigInt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kenny\CLionProjects\GoldRabbits\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GoldRabbits.dir/BigInt.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\GoldRabbits.dir\BigInt.cpp.obj /FdCMakeFiles\GoldRabbits.dir\ /FS -c C:\Users\kenny\CLionProjects\GoldRabbits\BigInt.cpp
<<

CMakeFiles\GoldRabbits.dir\BigInt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GoldRabbits.dir/BigInt.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\GoldRabbits.dir\BigInt.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kenny\CLionProjects\GoldRabbits\BigInt.cpp
<<

CMakeFiles\GoldRabbits.dir\BigInt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GoldRabbits.dir/BigInt.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\GoldRabbits.dir\BigInt.cpp.s /c C:\Users\kenny\CLionProjects\GoldRabbits\BigInt.cpp
<<

# Object files for target GoldRabbits
GoldRabbits_OBJECTS = \
"CMakeFiles\GoldRabbits.dir\main.cpp.obj" \
"CMakeFiles\GoldRabbits.dir\BigInt.cpp.obj"

# External object files for target GoldRabbits
GoldRabbits_EXTERNAL_OBJECTS =

GoldRabbits.exe: CMakeFiles\GoldRabbits.dir\main.cpp.obj
GoldRabbits.exe: CMakeFiles\GoldRabbits.dir\BigInt.cpp.obj
GoldRabbits.exe: CMakeFiles\GoldRabbits.dir\build.make
GoldRabbits.exe: CMakeFiles\GoldRabbits.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kenny\CLionProjects\GoldRabbits\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable GoldRabbits.exe"
	"C:\Users\kenny\AppData\Local\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\GoldRabbits.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\GoldRabbits.dir\objects1.rsp @<<
 /out:GoldRabbits.exe /implib:GoldRabbits.lib /pdb:C:\Users\kenny\CLionProjects\GoldRabbits\cmake-build-debug\GoldRabbits.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\GoldRabbits.dir\build: GoldRabbits.exe
.PHONY : CMakeFiles\GoldRabbits.dir\build

CMakeFiles\GoldRabbits.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GoldRabbits.dir\cmake_clean.cmake
.PHONY : CMakeFiles\GoldRabbits.dir\clean

CMakeFiles\GoldRabbits.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\kenny\CLionProjects\GoldRabbits C:\Users\kenny\CLionProjects\GoldRabbits C:\Users\kenny\CLionProjects\GoldRabbits\cmake-build-debug C:\Users\kenny\CLionProjects\GoldRabbits\cmake-build-debug C:\Users\kenny\CLionProjects\GoldRabbits\cmake-build-debug\CMakeFiles\GoldRabbits.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\GoldRabbits.dir\depend

