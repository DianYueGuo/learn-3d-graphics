cmake_minimum_required()

project(3d-graphics-app)

add_executable(
    app
    src/main.cpp
    src/obj.cpp
    src/utility.cpp
)

include_directories(${CMAKE_SOURCE_DIR}/include)


include(FetchContent)
FetchContent_Declare(
  glfw
  GIT_REPOSITORY https://github.com/glfw/glfw.git
  GIT_TAG        3.3.10
)
FetchContent_MakeAvailable(glfw)
target_link_libraries(app PRIVATE glfw)
