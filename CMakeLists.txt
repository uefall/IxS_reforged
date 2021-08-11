cmake_minimum_required(VERSION 3.7)

project(Ixs)

message(${PROJECT_SOURCE_DIR})
message(${PROJECT_NAME})

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/src/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/inc)

file(GLOB DEMO_FILE ${PROJECT_SOURCE_DIR}/demo/*.cpp)


# 生成静态库
add_library(${PROJECT_NAME}
            STATIC
            ${SRC_FILES})

add_executable( demo
                ${DEMO_FILE})

target_link_libraries(  demo
                        ${PROJECT_NAME})
