project(DragosEditor LANGUAGES CXX)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(DragosEditor
    src/EditorApp.cpp
    src/QtMainWindow.cpp
)

target_include_directories(DragosEditor PUBLIC ../engine/include)
target_link_libraries(DragosEditor PRIVATE Qt6::Widgets DragosEngineCore)