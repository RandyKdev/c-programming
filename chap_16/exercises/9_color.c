#include <stdbool.h>

struct color {
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue) {
    if(red < 0) red == 0;
    if(green < 0) green == 0;
    if(blue < 0) blue == 0;
    if(red > 255) red == 255;
    if(green > 255) green == 255;
    if(blue > 255) blue == 255;

    return (struct color) {.red = red, .green = green, .blue = blue};
}

int getRed(struct color c) {
    return c.red;
}

bool equal_color(struct color color1, struct color color2) {
    if(color1.red == color2.red && color1.blue == color2.blue && color1.green == color2.green) {
        return true;
    }
    return false;
}

struct color brighter(struct color c) {
    if(c.red == 0 && c.blue == 0 && c.green == 0) {
        return (struct color) {3, 3, 3};
    }

    if(c.red > 0 && c.red < 3) c.red = 3;
    if(c.blue > 0 && c.blue < 3) c.blue = 3;
    if(c.green > 0 && c.green < 3) c.green = 3;

    c.red = (int) (c.red / 0.7);
    c.blue = (int) (c.blue / 0.7);
    c.green = (int) (c.green / 0.7);

    if(c.red > 255) c.red = 255;
    if(c.blue > 255) c.blue = 255;
    if(c.green > 255) c.green = 255;

    return c;
}