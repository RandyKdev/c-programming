enum {NORTH, SOUTH , EAST, WEST} direction;

int x, y;

int main() {
    switch(direction) {
        case NORTH:
            y--;
            break;
        case EAST:
            x++;
            break;
        case WEST:
            x--;
            break;
        case SOUTH: 
            y++;
            break;
        default: printf("Illegal direction\n");
    }

    return 0;
}