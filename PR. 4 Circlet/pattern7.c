#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 7; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 7) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (i = 1; i <= 4; i++) {
        printf("*\n");
    }
    return 0;
}
