cmake_minimum_required(VERSION 3.7)

project(Ixs)

find_package(OpenCV REQUIRED)

message(${PROJECT_SOURCE_DIR})
message(${PROJECT_NAME})
message(${OpenCV_LIBS})

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/src/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/inc)
include_directories(${OpenCV_INCLUDE_DIRS})

file(GLOB DEMO_FILE ${PROJECT_SOURCE_DIR}/demo/*.cpp)


# 生成静态库
add_library(${PROJECT_NAME}
            STATIC
            ${SRC_FILES})

add_executable( demo
                ${DEMO_FILE})

target_link_libraries(  demo
                        ${PROJECT_NAME}
                        ${OpenCV_LIBS})
