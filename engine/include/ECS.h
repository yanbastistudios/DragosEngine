#pragma once
#include <cstdint>
#include <vector>
#include <unordered_map>

using Entity = uint32_t;

struct ComponentBase { virtual ~ComponentBase() = default; };

class ECS {
public:
    Entity CreateEntity();
    void DestroyEntity(Entity e);

    template<typename T>
    void AddComponent(Entity e, T component);

    template<typename T>
    T* GetComponent(Entity e);

private:
    Entity nextEntity_ = 1;
    std::unordered_map<Entity, std::unordered_map<size_t, std::unique_ptr<ComponentBase>>> components_;
};