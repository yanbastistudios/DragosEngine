cmake_minimum_required(VERSION 3.20)
project(DragosEngine VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Options
option(BUILD_EDITOR "Build the editor" ON)
option(BUILD_EXAMPLES "Build example projects" ON)

add_subdirectory(engine)
add_subdirectory(runtime)
if(BUILD_EDITOR)
  add_subdirectory(editor)
endif()
add_subdirectory(tools)
if(BUILD_EXAMPLES)
  add_subdirectory(examples)
endif()