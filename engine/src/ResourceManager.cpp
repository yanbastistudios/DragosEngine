#include "ResourceManager.h"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <iostream>

Texture::~Texture() {
    if (data) stbi_image_free(data);
}

ResourceManager::~ResourceManager() {
    textures_.clear();
}

std::shared_ptr<Texture> ResourceManager::LoadTexture(const std::string& path) {
    int w,h,channels;
    unsigned char* data = stbi_load(path.c_str(), &w, &h, &channels, 4);
    if (!data) {
        std::cerr << "Failed to load texture: " << path << "\n";
        return nullptr;
    }
    auto tex = std::make_shared<Texture>();
    tex->width = w; tex->height = h; tex->data = data;
    textures_[path] = tex;
    return tex;
}

std::shared_ptr<Texture> ResourceManager::GetTexture(const std::string& name) {
    auto it = textures_.find(name);
    if (it != textures_.end()) return it->second;
    return nullptr;
}