cmake_minimum_required(VERSION 4.0)

project(OpenCVProject)

set(SOURCE_FILES
    src/main.cpp
    src/droneControls/droneControl.cpp
    src/locustDetect.cpp
)

find_package(OpenCV REQUIRED)
include_directories(${OpenCv_INCLUDE_DIRS})
include_directories(include/main.h)

add_executable(OpenCVApp ${SOURCE_FILES})
target_sources(OpenCVApp PUBLIC src/main.cpp PUBLIC src/droneControls/droneControl.cpp PUBLIC include/main.h)
target_include_directories(OpenCVApp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(OpenCVApp ${OpenCV_LIBS})