cmake_minimum_required(VERSION 3.10)

project(hum-git)

include_directories(./include)

aux_source_directory(./src SRC_LISTS)

add_executable(${PROJECT_NAME} ${SRC_LISTS})

