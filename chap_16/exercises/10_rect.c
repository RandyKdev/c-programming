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