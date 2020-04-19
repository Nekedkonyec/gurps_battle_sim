cmake_minimum_required(VERSION 3.6)

add_library(gurps_core
  character.cpp
  characterattribute.cpp
  primaryattribute.cpp
  secondaryattribute.cpp
)

target_include_directories(gurps_core
  PUBLIC include
)

add_subdirectory(test)