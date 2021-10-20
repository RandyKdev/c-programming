#define LEN_BOARD 8

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

Square chessboard[LEN_BOARD][LEN_BOARD];