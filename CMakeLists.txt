cmake_minimum_required(VERSION 3.30)

project(Animal CXX)
add_subdirectory(animal)
#message(${animal_source})
add_executable(Animal main.cpp)

#include(animal/CMakeLists.txt)

target_link_libraries(Animal PUBLIC AnimalLib)

#target_include_directories(Animal PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/animal")