cmake_minimum_required(VERSION 3.24) 
project(main)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(SRC "src")
# set(DS "datastructures")

# disable warnings
add_definitions(-w)

find_package(json-c CONFIG)

include_directories(include)
# include_directories(src/datastructures)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(${PROJECT_NAME} 
        ${SRC}/main.c
        )

target_link_libraries(${PROJECT_NAME} 
        -lcurl 
        -lpthread
        )
