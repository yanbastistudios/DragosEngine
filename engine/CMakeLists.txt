project(DragosEngineCore LANGUAGES CXX)

add_library(DragosEngineCore STATIC
    src/Engine.cpp
    src/ResourceManager.cpp
    src/main.cpp
)

target_include_directories(DragosEngineCore PUBLIC include)
target_compile_definitions(DragosEngineCore PRIVATE DRAGOS_ENGINE_CORE)

# Example: link third party libraries later
# target_link_libraries(DragosEngineCore PUBLIC assimp physx box2d)