cmake_minimum_required(VERSION 3.0)

# lib name
project (beshell)

# gcc additional arguments
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11")

# include dir paths
include_directories( "${CMAKE_CURRENT_SOURCE_DIR}/include" )

# source dir paths
aux_source_directory(source SRC_LIST)

# create shared library
add_library(${PROJECT_NAME} SHARED ${SRC_LIST})

# installation instructions
install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)
