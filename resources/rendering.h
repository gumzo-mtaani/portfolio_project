// Place the rendering-related functions in this file

#include <SDL2/SDL.h>

static void present(const Gpu gpu);
static Display lock(const Gpu gpu);
static void put(const Display display, const int x, const int y, const uint32_t pixel);
static void unlock(const Gpu gpu);
static void render(const Hero hero, const Map map, const Gpu gpu);

