cmake_minimum_required(VERSION 3.28)

set(LibName common-headers)

add_library(${LibName} INTERFACE)

target_include_directories(${LibName} INTERFACE

${CMAKE_CURRENT_SOURCE_DIR}/Accelerometer/AccelerometerData.h
${CMAKE_CURRENT_SOURCE_DIR}/Accelerometer/AccelerometerErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/Accelerometer/AccelerometerPacket.h
${CMAKE_CURRENT_SOURCE_DIR}/Accelerometer/AccelerometerStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/Altimeter/AltimeterData.h
${CMAKE_CURRENT_SOURCE_DIR}/Altimeter/AltimeterErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/Altimeter/AltimeterPacket.h
${CMAKE_CURRENT_SOURCE_DIR}/Altimeter/AltimeterStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/GPS/GPSErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/GPS/GpsData.h
${CMAKE_CURRENT_SOURCE_DIR}/GPS/GpsPacket.h
${CMAKE_CURRENT_SOURCE_DIR}/GPS/GpsStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/FillStation/FillStationErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/FillStation/FillStationSensors.h
${CMAKE_CURRENT_SOURCE_DIR}/FillStation/FillStationState.h
${CMAKE_CURRENT_SOURCE_DIR}/FillStation/FillStationStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/Engine/EngineErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/Engine/EngineSensors.h
${CMAKE_CURRENT_SOURCE_DIR}/Engine/EngineState.h
${CMAKE_CURRENT_SOURCE_DIR}/Engine/EngineStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/GSControl/GSControlErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/GSControl/GSControlSensors.h
${CMAKE_CURRENT_SOURCE_DIR}/GSControl/GSControlState.h
${CMAKE_CURRENT_SOURCE_DIR}/GSControl/GSControlStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/LowLevelDriver/ADC/ADCChannelErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/LowLevelDriver/ADC/ADCChannelStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/LowLevelDriver/ADC/ADCErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/LowLevelDriver/ADC/ADCStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/LowLevelDriver/PWM/PWMErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/LowLevelDriver/PWM/PWMStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/LowLevelDriver/GPIO/GPIOErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/LowLevelDriver/GPIO/GPIOStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/LowLevelDriver/UART/UARTErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/LowLevelDriver/UART/UARTStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/Gyroscope/GyroscopeData.h
${CMAKE_CURRENT_SOURCE_DIR}/Gyroscope/GyroscopeErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/Gyroscope/GyroscopePacket.h
${CMAKE_CURRENT_SOURCE_DIR}/Gyroscope/GyroscopeStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/Igniter/IgniterErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/Igniter/IgniterStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/LoadCell/LoadCellData.h
${CMAKE_CURRENT_SOURCE_DIR}/LoadCell/LoadCellErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/LoadCell/LoadCellPacket.h
${CMAKE_CURRENT_SOURCE_DIR}/LoadCell/LoadCellStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/Magnetometer/MagnetometerData.h
${CMAKE_CURRENT_SOURCE_DIR}/Magnetometer/MagnetometerErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/Magnetometer/MagnetometerPacket.h
${CMAKE_CURRENT_SOURCE_DIR}/Magnetometer/MagnetometerStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/PressureSensor/PressureSensorData.h
${CMAKE_CURRENT_SOURCE_DIR}/PressureSensor/PressureSensorErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/PressureSensor/PressureSensorPacket.h
${CMAKE_CURRENT_SOURCE_DIR}/PressureSensor/PressureSensorStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/Rocket/AvionicsSensors.h
${CMAKE_CURRENT_SOURCE_DIR}/Rocket/RocketErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/Rocket/RocketPacket.h
${CMAKE_CURRENT_SOURCE_DIR}/Rocket/RocketStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/Storage/StorageErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/Storage/StoragePacket.h
${CMAKE_CURRENT_SOURCE_DIR}/Storage/StorageStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/Telecommunication/TelecommunicationErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/Telecommunication/TelecommunicationHeader.h
${CMAKE_CURRENT_SOURCE_DIR}/Telecommunication/TelecommunicationPacket.h
${CMAKE_CURRENT_SOURCE_DIR}/Telecommunication/TelecommunicationStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/TemperatureSensor/TemperatureSensorData.h
${CMAKE_CURRENT_SOURCE_DIR}/TemperatureSensor/TemperatureSensorErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/TemperatureSensor/TemperatureSensorPacket.h
${CMAKE_CURRENT_SOURCE_DIR}/TemperatureSensor/TemperatureSensorStatus.h

${CMAKE_CURRENT_SOURCE_DIR}/Valve/ValveData.h
${CMAKE_CURRENT_SOURCE_DIR}/Valve/ValveErrorStatus.h
${CMAKE_CURRENT_SOURCE_DIR}/Valve/ValvePacket.h
${CMAKE_CURRENT_SOURCE_DIR}/Valve/ValveState.h
${CMAKE_CURRENT_SOURCE_DIR}/Valve/ValveStatus.h
)