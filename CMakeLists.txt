cmake_minimum_required(VERSION 3.1)

project(TowersOfIcarus)

## If you want to link SFML statically
# set(SFML_STATIC_LIBRARIES TRUE)

#In most cases better set in the CMake cache
set(SFML_DIR "../Tools/SFML/lib/cmake/SFML")

find_package(SFML COMPONENTS graphics audio system REQUIRED)
add_executable(TowersOfIcarus main.cpp)
target_link_libraries(TowersOfIcarus sfml-graphics sfml-audio)