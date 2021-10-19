// NB: Considers that the plane is found in the positive x and y axis

#include <stdbool.h>

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

int area_rectangle(struct rectangle r) {
    int length =  r.lower_right.x - r.upper_left.x;
    int width = r.upper_left.y - r.lower_right.y;
    
    return length * width; 
}

struct point center_rectangle(struct rectangle r) {
    int length =  r.lower_right.x - r.upper_left.x;
    int width = r.upper_left.y - r.lower_right.y;
    
    struct point center;
    center.x = r.lower_right.x - (int) (length / 2);
    center.y = r.lower_right.y + (int) (width / 2);

    return center;
}

struct rectangle move_rectangle(struct rectangle r, int x, int y) {
    r.lower_right.x += x;
    r.lower_right.y += y;
    r.upper_left.x += x;
    r.upper_left.y += y;
    
    return r;
}

bool in_rectangle(struct rectangle r, struct point p) {
    if(p.x >= r.upper_left.x && p.x <= r.lower_right.x && p.y >= r.lower_right.y && p.y <= r.upper_left.y) {
        return true;
    }

    return false;
}