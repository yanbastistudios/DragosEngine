# PhysX (manual)

PhysX binaries are not included in this repository.

To obtain PhysX for local development:
1. Download PhysX SDK from NVIDIA or official distribution.
2. Place headers in: third_party/physx/include
3. Place libraries in: third_party/physx/lib/<platform>
4. Add a LICENSE file in third_party/physx/LICENSE with the PhysX license text or a link.

CMake hint:
- Set PHYSX_ROOT to the path above or provide a FindPhysX.cmake and link libraries in engine CMakeLists.