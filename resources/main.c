#include "structs.h"
#include "math_functions.h"
#include "rendering.h"
#include "initialization.h"

static Hero spin(Hero hero, const uint8_t* key);
static Hero move(Hero hero, const char** const walling, const uint8_t* key);
static uint32_t color(const int tile);
static Wall project(const int xres, const int yres, const float focal, const Point corrected);
static Line viewport(const float focal);
static Hero born(const float focal);
static Map build();

int main(int argc, char* argv[])
{
    (void) argc;
    (void) argv;
    const Gpu gpu = setup(700, 400, true);
    const Map map = build();
    Hero hero = born(0.8f);
    while (!done())
    {
        const uint8_t* key = SDL_GetKeyboardState(NULL);
        hero = spin(hero, key);
        hero = move(hero, map.walling, key);
        render(hero, map, gpu);
    }
    cleanup(gpu);
    return 0;
}

