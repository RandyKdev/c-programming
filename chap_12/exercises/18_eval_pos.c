#include <ctype.h>
#include <stdbool.h>

int evaluate_position(char board[8][8]);
bool isWhite(char piece);
bool isBlack(char piece);
int getPieceValue(char piece);

int main(void) {
    char board[8][8];

    evaluate_position(board);
    return 0;
}

int evaluate_position(char board[8][8]) {
    int sumWhite = 0, sumBlack = 0;
    
    for(char *p = board[0]; p < board[8]; p++) {
        if(isWhite(*p)) {
            sumWhite += getPieceValue(*p);
        } else if(isBlack(*p)) {
            sumBlack += getPieceValue(*p);
        }
    }

    return sumWhite - sumBlack;
}

bool isWhite(char piece) {
    if(tolower(piece) != piece) {
            return true;
    }

    return false;
}

bool isBlack(char piece) {
    if(toupper(piece) != piece) {
            return true;
    }

    return false;
}

int getPieceValue(char piece) {
    piece = tolower(piece);

    if(piece == 'q') return 9;
    if(piece == 'r') return 5;
    if(piece == 'b') return 3;
    if(piece == 'n') return 3;
    if(piece == 'p') return 1;
}