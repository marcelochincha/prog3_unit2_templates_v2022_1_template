cmake_minimum_required(VERSION 3.20)
project(prog3_unit2_templates_v2022_1_test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/${OUTPUT_DEBUG})
if(UNIX AND NOT APPLE)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
endif()

# Work Folders
include_directories(.)
include_directories(tests)
include_directories(../tools/catch)

# Project files
file(GLOB project_files
        tests/catch_test_*/*.cpp
        tests/*.h
        tests/*.cpp
        ../src/*.h
        ../src/*.cpp
        )

add_executable(${PROJECT_NAME}
        ${project_files}
    )

if(UNIX AND NOT APPLE)
    find_package(TBB)
    target_link_libraries(${PROJECT_NAME} TBB::tbb)
endif()

# Test files
file(GLOB test_files
        tests/catch_test_*/*.in
    )
foreach(full_test_file_name ${test_files})
    configure_file(${full_test_file_name} ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
endforeach(full_test_file_name)