# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/VIncent/tp_cours/OpenGL_API_V4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/tp1_opengl.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tp1_opengl.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tp1_opengl.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp1_opengl.dir/flags.make

CMakeFiles/tp1_opengl.dir/main.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/main.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/main.cpp
CMakeFiles/tp1_opengl.dir/main.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp1_opengl.dir/main.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/main.cpp.o -MF CMakeFiles/tp1_opengl.dir/main.cpp.o.d -o CMakeFiles/tp1_opengl.dir/main.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/main.cpp

CMakeFiles/tp1_opengl.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/main.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/main.cpp > CMakeFiles/tp1_opengl.dir/main.cpp.i

CMakeFiles/tp1_opengl.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/main.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/main.cpp -o CMakeFiles/tp1_opengl.dir/main.cpp.s

CMakeFiles/tp1_opengl.dir/board.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/board.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/board.cpp
CMakeFiles/tp1_opengl.dir/board.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tp1_opengl.dir/board.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/board.cpp.o -MF CMakeFiles/tp1_opengl.dir/board.cpp.o.d -o CMakeFiles/tp1_opengl.dir/board.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/board.cpp

CMakeFiles/tp1_opengl.dir/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/board.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/board.cpp > CMakeFiles/tp1_opengl.dir/board.cpp.i

CMakeFiles/tp1_opengl.dir/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/board.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/board.cpp -o CMakeFiles/tp1_opengl.dir/board.cpp.s

CMakeFiles/tp1_opengl.dir/king.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/king.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/king.cpp
CMakeFiles/tp1_opengl.dir/king.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tp1_opengl.dir/king.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/king.cpp.o -MF CMakeFiles/tp1_opengl.dir/king.cpp.o.d -o CMakeFiles/tp1_opengl.dir/king.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/king.cpp

CMakeFiles/tp1_opengl.dir/king.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/king.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/king.cpp > CMakeFiles/tp1_opengl.dir/king.cpp.i

CMakeFiles/tp1_opengl.dir/king.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/king.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/king.cpp -o CMakeFiles/tp1_opengl.dir/king.cpp.s

CMakeFiles/tp1_opengl.dir/game.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/game.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/game.cpp
CMakeFiles/tp1_opengl.dir/game.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/tp1_opengl.dir/game.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/game.cpp.o -MF CMakeFiles/tp1_opengl.dir/game.cpp.o.d -o CMakeFiles/tp1_opengl.dir/game.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/game.cpp

CMakeFiles/tp1_opengl.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/game.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/game.cpp > CMakeFiles/tp1_opengl.dir/game.cpp.i

CMakeFiles/tp1_opengl.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/game.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/game.cpp -o CMakeFiles/tp1_opengl.dir/game.cpp.s

CMakeFiles/tp1_opengl.dir/piece.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/piece.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/piece.cpp
CMakeFiles/tp1_opengl.dir/piece.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/tp1_opengl.dir/piece.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/piece.cpp.o -MF CMakeFiles/tp1_opengl.dir/piece.cpp.o.d -o CMakeFiles/tp1_opengl.dir/piece.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/piece.cpp

CMakeFiles/tp1_opengl.dir/piece.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/piece.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/piece.cpp > CMakeFiles/tp1_opengl.dir/piece.cpp.i

CMakeFiles/tp1_opengl.dir/piece.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/piece.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/piece.cpp -o CMakeFiles/tp1_opengl.dir/piece.cpp.s

CMakeFiles/tp1_opengl.dir/queen.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/queen.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/queen.cpp
CMakeFiles/tp1_opengl.dir/queen.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/tp1_opengl.dir/queen.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/queen.cpp.o -MF CMakeFiles/tp1_opengl.dir/queen.cpp.o.d -o CMakeFiles/tp1_opengl.dir/queen.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/queen.cpp

CMakeFiles/tp1_opengl.dir/queen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/queen.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/queen.cpp > CMakeFiles/tp1_opengl.dir/queen.cpp.i

CMakeFiles/tp1_opengl.dir/queen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/queen.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/queen.cpp -o CMakeFiles/tp1_opengl.dir/queen.cpp.s

CMakeFiles/tp1_opengl.dir/pawn.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/pawn.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/pawn.cpp
CMakeFiles/tp1_opengl.dir/pawn.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/tp1_opengl.dir/pawn.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/pawn.cpp.o -MF CMakeFiles/tp1_opengl.dir/pawn.cpp.o.d -o CMakeFiles/tp1_opengl.dir/pawn.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/pawn.cpp

CMakeFiles/tp1_opengl.dir/pawn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/pawn.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/pawn.cpp > CMakeFiles/tp1_opengl.dir/pawn.cpp.i

CMakeFiles/tp1_opengl.dir/pawn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/pawn.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/pawn.cpp -o CMakeFiles/tp1_opengl.dir/pawn.cpp.s

CMakeFiles/tp1_opengl.dir/rook.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/rook.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/rook.cpp
CMakeFiles/tp1_opengl.dir/rook.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/tp1_opengl.dir/rook.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/rook.cpp.o -MF CMakeFiles/tp1_opengl.dir/rook.cpp.o.d -o CMakeFiles/tp1_opengl.dir/rook.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/rook.cpp

CMakeFiles/tp1_opengl.dir/rook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/rook.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/rook.cpp > CMakeFiles/tp1_opengl.dir/rook.cpp.i

CMakeFiles/tp1_opengl.dir/rook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/rook.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/rook.cpp -o CMakeFiles/tp1_opengl.dir/rook.cpp.s

CMakeFiles/tp1_opengl.dir/knight.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/knight.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/knight.cpp
CMakeFiles/tp1_opengl.dir/knight.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/tp1_opengl.dir/knight.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/knight.cpp.o -MF CMakeFiles/tp1_opengl.dir/knight.cpp.o.d -o CMakeFiles/tp1_opengl.dir/knight.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/knight.cpp

CMakeFiles/tp1_opengl.dir/knight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/knight.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/knight.cpp > CMakeFiles/tp1_opengl.dir/knight.cpp.i

CMakeFiles/tp1_opengl.dir/knight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/knight.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/knight.cpp -o CMakeFiles/tp1_opengl.dir/knight.cpp.s

CMakeFiles/tp1_opengl.dir/bishop.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/bishop.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/bishop.cpp
CMakeFiles/tp1_opengl.dir/bishop.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/tp1_opengl.dir/bishop.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/bishop.cpp.o -MF CMakeFiles/tp1_opengl.dir/bishop.cpp.o.d -o CMakeFiles/tp1_opengl.dir/bishop.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/bishop.cpp

CMakeFiles/tp1_opengl.dir/bishop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/bishop.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/bishop.cpp > CMakeFiles/tp1_opengl.dir/bishop.cpp.i

CMakeFiles/tp1_opengl.dir/bishop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/bishop.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/bishop.cpp -o CMakeFiles/tp1_opengl.dir/bishop.cpp.s

CMakeFiles/tp1_opengl.dir/stb_image.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/stb_image.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/stb_image.cpp
CMakeFiles/tp1_opengl.dir/stb_image.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/tp1_opengl.dir/stb_image.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/stb_image.cpp.o -MF CMakeFiles/tp1_opengl.dir/stb_image.cpp.o.d -o CMakeFiles/tp1_opengl.dir/stb_image.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/stb_image.cpp

CMakeFiles/tp1_opengl.dir/stb_image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/stb_image.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/stb_image.cpp > CMakeFiles/tp1_opengl.dir/stb_image.cpp.i

CMakeFiles/tp1_opengl.dir/stb_image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/stb_image.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/stb_image.cpp -o CMakeFiles/tp1_opengl.dir/stb_image.cpp.s

CMakeFiles/tp1_opengl.dir/object.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/object.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/object.cpp
CMakeFiles/tp1_opengl.dir/object.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/tp1_opengl.dir/object.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/object.cpp.o -MF CMakeFiles/tp1_opengl.dir/object.cpp.o.d -o CMakeFiles/tp1_opengl.dir/object.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/object.cpp

CMakeFiles/tp1_opengl.dir/object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/object.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/object.cpp > CMakeFiles/tp1_opengl.dir/object.cpp.i

CMakeFiles/tp1_opengl.dir/object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/object.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/object.cpp -o CMakeFiles/tp1_opengl.dir/object.cpp.s

CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/uvbuffer.cpp
CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.o -MF CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.o.d -o CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/uvbuffer.cpp

CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/uvbuffer.cpp > CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.i

CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/uvbuffer.cpp -o CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.s

CMakeFiles/tp1_opengl.dir/texture.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/texture.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/texture.cpp
CMakeFiles/tp1_opengl.dir/texture.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/tp1_opengl.dir/texture.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/texture.cpp.o -MF CMakeFiles/tp1_opengl.dir/texture.cpp.o.d -o CMakeFiles/tp1_opengl.dir/texture.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/texture.cpp

CMakeFiles/tp1_opengl.dir/texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/texture.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/texture.cpp > CMakeFiles/tp1_opengl.dir/texture.cpp.i

CMakeFiles/tp1_opengl.dir/texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/texture.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/texture.cpp -o CMakeFiles/tp1_opengl.dir/texture.cpp.s

CMakeFiles/tp1_opengl.dir/shader.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/shader.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/shader.cpp
CMakeFiles/tp1_opengl.dir/shader.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/tp1_opengl.dir/shader.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/shader.cpp.o -MF CMakeFiles/tp1_opengl.dir/shader.cpp.o.d -o CMakeFiles/tp1_opengl.dir/shader.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/shader.cpp

CMakeFiles/tp1_opengl.dir/shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/shader.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/shader.cpp > CMakeFiles/tp1_opengl.dir/shader.cpp.i

CMakeFiles/tp1_opengl.dir/shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/shader.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/shader.cpp -o CMakeFiles/tp1_opengl.dir/shader.cpp.s

CMakeFiles/tp1_opengl.dir/renderer.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/renderer.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/renderer.cpp
CMakeFiles/tp1_opengl.dir/renderer.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/tp1_opengl.dir/renderer.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/renderer.cpp.o -MF CMakeFiles/tp1_opengl.dir/renderer.cpp.o.d -o CMakeFiles/tp1_opengl.dir/renderer.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/renderer.cpp

CMakeFiles/tp1_opengl.dir/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/renderer.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/renderer.cpp > CMakeFiles/tp1_opengl.dir/renderer.cpp.i

CMakeFiles/tp1_opengl.dir/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/renderer.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/renderer.cpp -o CMakeFiles/tp1_opengl.dir/renderer.cpp.s

CMakeFiles/tp1_opengl.dir/vertexarray.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/vertexarray.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/vertexarray.cpp
CMakeFiles/tp1_opengl.dir/vertexarray.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/tp1_opengl.dir/vertexarray.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/vertexarray.cpp.o -MF CMakeFiles/tp1_opengl.dir/vertexarray.cpp.o.d -o CMakeFiles/tp1_opengl.dir/vertexarray.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/vertexarray.cpp

CMakeFiles/tp1_opengl.dir/vertexarray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/vertexarray.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/vertexarray.cpp > CMakeFiles/tp1_opengl.dir/vertexarray.cpp.i

CMakeFiles/tp1_opengl.dir/vertexarray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/vertexarray.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/vertexarray.cpp -o CMakeFiles/tp1_opengl.dir/vertexarray.cpp.s

CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.o: CMakeFiles/tp1_opengl.dir/flags.make
CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.o: /home/VIncent/tp_cours/OpenGL_API_V4/vertexbuffer.cpp
CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.o: CMakeFiles/tp1_opengl.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.o"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.o -MF CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.o.d -o CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.o -c /home/VIncent/tp_cours/OpenGL_API_V4/vertexbuffer.cpp

CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.i"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/VIncent/tp_cours/OpenGL_API_V4/vertexbuffer.cpp > CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.i

CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.s"
	/usr/bin/clang++-18 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/VIncent/tp_cours/OpenGL_API_V4/vertexbuffer.cpp -o CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.s

# Object files for target tp1_opengl
tp1_opengl_OBJECTS = \
"CMakeFiles/tp1_opengl.dir/main.cpp.o" \
"CMakeFiles/tp1_opengl.dir/board.cpp.o" \
"CMakeFiles/tp1_opengl.dir/king.cpp.o" \
"CMakeFiles/tp1_opengl.dir/game.cpp.o" \
"CMakeFiles/tp1_opengl.dir/piece.cpp.o" \
"CMakeFiles/tp1_opengl.dir/queen.cpp.o" \
"CMakeFiles/tp1_opengl.dir/pawn.cpp.o" \
"CMakeFiles/tp1_opengl.dir/rook.cpp.o" \
"CMakeFiles/tp1_opengl.dir/knight.cpp.o" \
"CMakeFiles/tp1_opengl.dir/bishop.cpp.o" \
"CMakeFiles/tp1_opengl.dir/stb_image.cpp.o" \
"CMakeFiles/tp1_opengl.dir/object.cpp.o" \
"CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.o" \
"CMakeFiles/tp1_opengl.dir/texture.cpp.o" \
"CMakeFiles/tp1_opengl.dir/shader.cpp.o" \
"CMakeFiles/tp1_opengl.dir/renderer.cpp.o" \
"CMakeFiles/tp1_opengl.dir/vertexarray.cpp.o" \
"CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.o"

# External object files for target tp1_opengl
tp1_opengl_EXTERNAL_OBJECTS =

tp1_opengl: CMakeFiles/tp1_opengl.dir/main.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/board.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/king.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/game.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/piece.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/queen.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/pawn.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/rook.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/knight.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/bishop.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/stb_image.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/object.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/uvbuffer.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/texture.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/shader.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/renderer.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/vertexarray.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/vertexbuffer.cpp.o
tp1_opengl: CMakeFiles/tp1_opengl.dir/build.make
tp1_opengl: CMakeFiles/tp1_opengl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Linking CXX executable tp1_opengl"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp1_opengl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp1_opengl.dir/build: tp1_opengl
.PHONY : CMakeFiles/tp1_opengl.dir/build

CMakeFiles/tp1_opengl.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp1_opengl.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp1_opengl.dir/clean

CMakeFiles/tp1_opengl.dir/depend:
	cd /home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/VIncent/tp_cours/OpenGL_API_V4 /home/VIncent/tp_cours/OpenGL_API_V4 /home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug /home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug /home/VIncent/tp_cours/OpenGL_API_V4/build/Desktop-Debug/CMakeFiles/tp1_opengl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tp1_opengl.dir/depend

