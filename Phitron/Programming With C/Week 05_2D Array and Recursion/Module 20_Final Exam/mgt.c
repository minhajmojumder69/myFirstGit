#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int total = N + 5;  // height of the tree

    // PRINT TREE (top part)
    for (int i = 0; i < total; i++) {

        // spaces
        for (int s = 0; s < total - i - 1; s++) {
            printf(" ");
        }

        // stars (2*i + 1)
        for (int star = 0; star < 2 * i + 1; star++) {
            printf("*");
        }

        printf("\n");
    }

    // PRINT BASE (bottom part)
    for (int i = 0; i < 5; i++) {

        // spaces (center the base)
        for (int s = 0; s < total - (N / 2) - 1; s++) {
            printf(" ");
        }

        // print N stars
        for (int star = 0; star < N; star++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
