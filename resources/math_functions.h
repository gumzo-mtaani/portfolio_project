// Place the math-related functions in this file

#include <math.h>
#include <stdbool.h>

static Point turn(const Point a, const float t);
static Point rag(const Point a);
static Point sub(const Point a, const Point b);
static Point add(const Point a, const Point b);
static Point mul(const Point a, const float n);
static float mag(const Point a);
static Point unit(const Point a);
static float slope(const Point a);
static int fl(const float x);
static int cl(const float x);
static Point sh(const Point a, const Point b);
static Point sv(const Point a, const Point b);
static int tile(const Point a, const char** const tiles);
static float dec(const float x);
static Hit cast(const Point where, const Point direction, const char** const walling);
static float pcast(const float size, const int yres, const int y);

