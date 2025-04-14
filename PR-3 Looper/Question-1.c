#include <stdio.h>

int main() {
    char  alphabate= 'a';

    do {
        printf("%c ", alphabate);
        alphabate += 4;  
    } while (alphabate <= 'z');

    return 0;
}