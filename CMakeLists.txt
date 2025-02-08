cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(SiriusHeadersCommon VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the library
add_library(SiriusHeadersCommon INTERFACE)
# Add the header files
target_sources(SiriusHeadersCommon INTERFACE

)
# Include directories
target_include_directories(SiriusHeadersCommon INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/Accelerometer
    ${CMAKE_CURRENT_SOURCE_DIR}/Altimeter
    ${CMAKE_CURRENT_SOURCE_DIR}/Engine
    ${CMAKE_CURRENT_SOURCE_DIR}/GPS
    ${CMAKE_CURRENT_SOURCE_DIR}/Gyroscope
    ${CMAKE_CURRENT_SOURCE_DIR}/Magnetometer
    ${CMAKE_CURRENT_SOURCE_DIR}/PressureSensor
    ${CMAKE_CURRENT_SOURCE_DIR}/Rocket
    ${CMAKE_CURRENT_SOURCE_DIR}/Storage
    ${CMAKE_CURRENT_SOURCE_DIR}/Telecommunication
    ${CMAKE_CURRENT_SOURCE_DIR}/TemperatureSensor
    ${CMAKE_CURRENT_SOURCE_DIR}/Valve
)

# Add any required libraries
# target_link_libraries(SiriusHeadersCommon PRIVATE some_other_library)