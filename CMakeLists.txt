# CMake entry point
cmake_minimum_required (VERSION 2.6)
project (P2D)

find_package(OpenGL REQUIRED)


if( CMAKE_BINARY_DIR STREQUAL CMAKE_SOURCE_DIR )
	message( FATAL_ERROR "Please select another Build Directory ! (and give it a clever name, like 'build')" )
endif()
if( CMAKE_SOURCE_DIR MATCHES " " )
	message( "Your Source Directory contains spaces. If you experience problems when compiling, this can be the cause." )
endif()
if( CMAKE_BINARY_DIR MATCHES " " )
	message( "Your Build Directory contains spaces. If you experience problems when compiling, this can be the cause." )
endif()


# Compile external dependencies
add_subdirectory (external)

if(UNIX)
	set(CMAKE_CXX_FLAGS "-Wall -std=c++11 -O2")

	# For leak-checking and profiling, add '-pg' to CXX flags
	# set(CMAKE_CXX_FLAGS "-Wall -pg -std=c++11 -O2")
	# valgrind --leak-check=full ./demo
	# ./demo # creates cmon.out
	# gprof demo gmon.out > analysis.txt
endif(UNIX)

if(WIN32)
	# Create a group for Visual Studio
	SOURCE_GROUP(p2d REGULAR_EXPRESSION ".*/p2d/.*" )
	# suppress pedantic warnings
	add_definitions( "/W1 /D_CRT_SECURE_NO_WARNINGS /wd4514 /nologo" )
endif(WIN32)

include_directories(
	external/glfw-3.0.3/include/GLFW/
	external/glm-0.9.8.4/
	external/glew-1.9.0/include/
	.
)

set(ALL_GRAPHICS_LIBS
	${OPENGL_LIBRARY}
	GLFW_303
	GLEW_190
)

add_definitions(
	-DTW_STATIC
	-DTW_NO_LIB_PRAGMA
	-DTW_NO_DIRECT3D
	-DGLEW_STATIC
	-D_CRT_SECURE_NO_WARNINGS
)

# p2d (libp2d.a)
add_library(p2d
	p2d/camera.h
	p2d/camera.cpp
	p2d/renderer.h
	p2d/renderer.cpp
	p2d/sprite.h
	p2d/sprite.cpp
	p2d/entity.h
	p2d/entity.cpp
	p2d/scene.cpp
	p2d/scene.h
	p2d/core.cpp
	p2d/core.h
	p2d/input.h
	p2d/input.cpp
)

# Demo
add_executable(demo
	demo/demo.cpp
	demo/myscene.h
	demo/myscene.cpp
	demo/myentity.h
	demo/myentity.cpp

)
target_link_libraries(demo
	p2d
	${ALL_GRAPHICS_LIBS}
)
# Copy assets and shaders to the build directory
# (In Visual Studio, copy these directories to either 'Release' or 'Build')
file(
	COPY demo/assets
	DESTINATION ${CMAKE_BINARY_DIR}
)
file(
	COPY p2d/shaders
	DESTINATION ${CMAKE_BINARY_DIR}
)
