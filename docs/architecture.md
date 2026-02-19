# Architecture Overview

- Core (C++): rendering, resource manager, ECS, physics abstraction.
- Runtime (.NET): managed scripting layer, bindings.
- Editor (Qt): scene editor, asset browser, inspector.
- Tools: asset importer, packer.

Abstraction layers:
- Renderer API abstraction (DX12 / Metal / Vulkan)
- Physics abstraction (PhysX / Box2D)