cmake_minimum_required(VERSION 3.16)
message("CMake Version: ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}")

# Project/Language definition
project(SDL_SA C)
set(CMAKE_C_STANDARD 99)

# Options
option(SDL_SA_VCPKG "Use the VCPKG library definitions instead of the normal package manager." OFF)

# Libraries
find_package(SDL2 REQUIRED)

# Library
add_library(SDL_SA STATIC "SDL_SimpleAbstraction.c" "SDL_SimpleAbstraction.h")

# Link
if(${SDL_SA_VCPKG})
	# Link VCPKG (probably windows)
	target_link_libraries(SDL_SA PRIVATE SDL2::SDL2 SDL2::SDL2main)
else()
	# Link normally
	target_link_libraries(SDL_SA PRIVATE SDL2)
endif()

# Tetris project
option(SDL_SA_Tetris "Build tetris project?" ON)
if(${SDL_SA_Tetris})
	project(Tetris C)
	add_executable(Tetris "Tetris/GAME_Tetris.c")
	target_include_directories(Tetris PRIVATE "${CMAKE_SOURCE_DIR1}")
endif()