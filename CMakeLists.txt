#sets up the minimum version of cmake
cmake_minimum_required(VERSION 3.2) # personally I'd set this version as low as required; you don't have to require the cutting edge version

#how the project will be called
project (tic_tac_toe)

#set the C++ standard to be used
set (CMAKE_CXX_STANDARD 17)
set( CMAKE_CXX_FLAGS "-Wall -m64 -O3 -fsanitize=address -g" )

#set output directory
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
add_subdirectory(src)
#add_subdirectory(main)

