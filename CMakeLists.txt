cmake_minimum_required(VERSION 3.6)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra -Werror -fPIC")

project(GurpsBattleSim CXX)

add_executable(gurps_battle_sim
  character.cpp
  characterattribute.cpp
  main.cpp
  primaryattribute.cpp
)

target_include_directories(gurps_battle_sim
  PUBLIC include
)