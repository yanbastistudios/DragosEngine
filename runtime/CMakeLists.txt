project(DragosRuntime LANGUAGES C CXX)

add_library(DragosNative SHARED
    native_bindings/CSharpBridge.cpp
)

target_include_directories(DragosNative PUBLIC native_bindings)
target_compile_definitions(DragosNative PRIVATE DRAGOS_NATIVE)