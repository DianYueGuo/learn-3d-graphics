cmake_minimum_required()

project(3d-graphics-app)

add_executable(
    app
    src/main.cpp
    src/obj.cpp
    src/utility.cpp
)

include_directories(${CMAKE_SOURCE_DIR}/include)
