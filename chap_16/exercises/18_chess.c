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

chessboard = { 
    { 
        (Square) {ROOK, WHITE},
        (Square) {KNIGHT, WHITE}, 
        (Square) {BISHOP, WHITE}, 
        (Square) {QUEEN, WHITE}, 
        (Square) {KING, WHITE}, 
        (Square) {BISHOP, WHITE}, 
        (Square) {KNIGHT, WHITE}, 
        (Square) {ROOK, WHITE},
    },
    {
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
        (Square) {PAWN, WHITE},
    },
    {
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
    },
    {
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
    },
    {
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
    },
    {
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
        (Square) {EMPTY, BLACK},
    },
    {
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
        (Square) {PAWN, BLACK},
    },
    { 
        (Square) {ROOK, BLACK},
        (Square) {KNIGHT, BLACK}, 
        (Square) {BISHOP, BLACK}, 
        (Square) {QUEEN, BLACK}, 
        (Square) {KING, BLACK}, 
        (Square) {BISHOP, BLACK}, 
        (Square) {KNIGHT, BLACK}, 
        (Square) {ROOK, BLACK},
    },
};