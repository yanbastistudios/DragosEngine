#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "../engine/include/ResourceManager.h"

TEST_CASE("Load missing texture returns null") {
    ResourceManager rm;
    auto t = rm.LoadTexture("nonexistent.png");
    REQUIRE(t == nullptr);
}