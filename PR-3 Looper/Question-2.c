#include <stdio.h>

int main() {
    int Number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &Number);

    if (Number == 0) {
        count = 1;
    } else {
        if (Number < 0) {
            Number = -Number;
        }

        while (Number != 0) {
            Number /= 10;
            count++;
        }
    }

    printf("Total number of Digits: \n%d", count);

    return 0;
}