cmake_minimum_required(VERSION 3.14)
cmake_policy(VERSION 2.8.3...3.24)

project(indi-qt-test VERSION 0.2.1 LANGUAGES CXX C)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules" ${CMAKE_MODULE_PATH})

find_package(INDI 2.0 REQUIRED)
find_package(Qt5 5.4 REQUIRED COMPONENTS Core)

include_directories( ${INDI_INCLUDE_DIR} )
include_directories(
    Qt5::Core
)

add_executable(${PROJECT_NAME} main.cpp client.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE
    ${INDI_CLIENT_QT_LIBRARIES}
    Qt5::Core
)
IF (UNIX AND NOT APPLE)
    target_link_libraries(${PROJECT_NAME} PRIVATE -lpthread)
ENDIF ()
