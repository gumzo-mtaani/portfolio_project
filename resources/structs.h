#include<SDL2/SDL.h>

// Place the structure definitions in this file

typedef struct
{
    float x;
    float y;
} Point;

typedef struct
{
    int tile;
    Point where;
} Hit;

typedef struct
{
    Point a;
    Point b;
} Line;

typedef struct
{
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    int xres;
    int yres;
} Gpu;

typedef struct
{
    uint32_t* pixels;
    int width;
} Display;

typedef struct
{
    int top;
    int bot;
    float size;
} Wall;

typedef struct
{
    Line fov;
    Point where;
    Point velocity;
    float speed;
    float acceleration;
    float theta;
} Hero;

typedef struct
{
    const char** ceiling;
    const char** walling;
    const char** floring;
} Map;

