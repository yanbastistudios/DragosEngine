# Getting Started

Prerequisites:
- Visual Studio 2022/2026 (Windows) or appropriate toolchain for target OS
- CMake >= 3.20
- Qt development kit (for editor)
- .NET runtime (for scripting)
- DirectX 12 SDK (Windows)

Build (Windows example):
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022" -A x64
cmake --build . --config Release

Notes:
- Use vcpkg or FetchContent to fetch third-party libs (Box2D, Assimp).
- For PhysX follow third_party/physx/README.md instructions.