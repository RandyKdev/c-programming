typedef enum {
    PAWN, 
    KNIGHT, 
    BISHOP, 
    ROOK, 
    QUEEN, 
    KING, 
    EMPTY,
} Piece;

typedef enum {
    BLACK,
    WHITE,
} Color;

typedef struct {
    Piece piece;
    Color color;
} Square;