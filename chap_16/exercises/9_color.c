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