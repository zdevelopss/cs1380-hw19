/* Demonstrates 1D and 2D arrays for intramural scores. */

#include <stdio.h>
#include "scores.h"

int main(void)
{
    /* Create a one-dimensional array of scores. */
    int scores[] = {12, 8, 15, 10, 9};

    /* Calculate the number of elements in main. */
    int n = sizeof(scores) / sizeof(scores[0]);

    /* Print the original scores. */
    print_scores(scores, n);

    printf("n (sizeof) = %d\n", n);

    /* Test valid and invalid array indexes. */
    printf("score_at 2 = %d\n", score_at(scores, n, 2));
    printf("score_at 9 = %d\n", score_at(scores, n, 9));

    /* Calculate sum, maximum, and threshold count. */
    printf("sum = %d\n", sum_scores(scores, n));
    printf("max = %d\n", max_score(scores, n));

    int count = count_at_least(scores, n, 10);
    printf("count >= 10: %d\n", count);

    /* Create a two-dimensional scoreboard. */
    int board[][GAMES] = {
        {12, 8, 15, 10},
        {9, 11, 7, 14},
        {13, 6, 16, 8}
    };

    int nteams = sizeof(board) / sizeof(board[0]);

    /* Print the scoreboard and calculate its sum. */
    print_board(board, nteams);

    printf("board sum = %d\n", board_sum(board, nteams));

    /* Test NULL pointer handling. */
    print_scores(NULL, 5);
    print_board(NULL, 3);

    return 0;
}
