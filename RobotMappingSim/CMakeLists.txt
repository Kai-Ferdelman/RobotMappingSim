# CMakeList.txt : CMake project for RobotMappingSim, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (RobotMappingSim WIN32 "RobotMappingSim.cpp" )

find_package(wxWidgets REQUIRED)

target_include_directories(RobotMappingSim PRIVATE ${wxWidgets_INCLUDE_DIRS})

target_link_libraries(RobotMappingSim PRIVATE ${wxWidgets_LIBRARIES})

# TODO: Add tests and install targets if needed.