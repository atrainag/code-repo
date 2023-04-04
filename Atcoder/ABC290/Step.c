#include <stdio.h>
#include <assert.h>

#define BOARD_LENGTH 8
#define PIECE_RED 'R'
#define PIECE_BLACK 'B'
#define PIECE_EMPTY ' '
#define TYPE_KING 1
#define TYPE_NORMAL 0
struct board_square {
    int type;
    char piece_color;
};

void print_checkerboard(struct board_square board[BOARD_LENGTH][BOARD_LENGTH]);

int main(void) {
    struct board_square checkerboard[BOARD_LENGTH][BOARD_LENGTH];

    int i = 0;
    while (i < BOARD_LENGTH) {
        int j = 0;
        while (j < BOARD_LENGTH) {
            checkerboard[i][j].piece_color = PIECE_EMPTY;
            checkerboard[i][j].type = TYPE_NORMAL;
            j++;
        }
        i++;
   }

    int row, col, type;
    char color;
    printf("Please enter pieces:\n");
    while (scanf("%d %d %c %d", &row, &col, &color, &type) !=EOF) {
        checkerboard[row][col].piece_color = color;
        checkerboard[row][col].type = type;

    }
    print_checkerboard(checkerboard);
    return 0;
}

void print_checkerboard(struct board_square board[BOARD_LENGTH][BOARD_LENGTH]) {
    int row_index = 0;
    while (row_index < BOARD_LENGTH) {
        printf("+-----+-----+-----+-----+-----+-----+-----+-----+\n");
        printf("|");

        int column_index = 0;
        while (column_index < BOARD_LENGTH) {
            assert(
                board[row_index][column_index].piece_color == PIECE_RED ||
                board[row_index][column_index].piece_color == PIECE_BLACK ||
                board[row_index][column_index].piece_color == PIECE_EMPTY
            );

            assert(
                board[row_index][column_index].type == TYPE_KING ||
                board[row_index][column_index].type == TYPE_NORMAL
            );

            if (board[row_index][column_index].type == TYPE_KING) {
                printf(" %c-K |", board[row_index][column_index].piece_color);
            } else {
                printf("  %c  |", board[row_index][column_index].piece_color);

            }

            column_index++;
        }

        printf("\n");
        row_index++;
    }
    printf("+-----+-----+-----+-----+-----+-----+-----+-----+\n");

    return;
}
