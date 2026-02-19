#pragma once
#include <string>
#include <unordered_map>
#include <memory>

class Texture {
public:
    int width{0}, height{0};
    unsigned char* data{nullptr};
    ~Texture();
};

class ResourceManager {
public:
    ResourceManager() = default;
    ~ResourceManager();

    std::shared_ptr<Texture> LoadTexture(const std::string& path);
    std::shared_ptr<Texture> GetTexture(const std::string& name);

private:
    std::unordered_map<std::string, std::shared_ptr<Texture>> textures_;
};