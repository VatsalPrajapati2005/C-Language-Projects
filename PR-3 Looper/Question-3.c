#include <stdio.h>

int main() {
    int num, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    first = num;

    sum = first + last;

    printf("Sum of first and last Digits = %d\n", sum);

    return 0;
}