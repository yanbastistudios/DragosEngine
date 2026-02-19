# third_party

Policy and instructions for third-party libraries used by DragosEngine.

Guidelines:
- Do not commit large binaries to the repo.
- Prefer package managers (vcpkg, conan) or CMake FetchContent to obtain dependencies.
- For libraries that cannot be redistributed (e.g., PhysX), include a README with manual download instructions and place prebuilt binaries in third_party/<lib>/prebuilt when available.
- Keep each library's license file in third_party/<lib>/LICENSE.