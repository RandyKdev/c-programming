#include <math.h>

#define RECTANGLE 0
#define CIRCLE 1

struct point {
    int x, y;
};

struct shape {
    int shape_kind;      // RECTANGLE = 0 or CIRCLE = 1
    struct point center; // coordinates of center
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
};

double area_shape(struct shape s) {
     if(s.shape_kind == RECTANGLE) {
         return s.u.rectangle.width * s.u.rectangle.height;
     }

     return (22/7) * s.u.circle.radius * s.u.circle.radius;
}

struct shape move_shape(struct shape s, int x, int y) {
    s.center.x += x;
    s.center.y += y;

    return s; 
}

struct shape scale_shape(struct shape s, double c) {
    if(s.shape_kind == CIRCLE) {
        s.u.circle.radius *= c;
        return s;
    }

    s.u.rectangle.height *= c;
    s.u.rectangle.width *= c;
    return s;
}