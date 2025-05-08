#include <stdio.h>

int cube(int *num) {
    return (*num) * (*num) * (*num);
}

int main() {
    int arr[10][10];
    int size;
    int i, j;

    printf("Enter array's size (e.g., 2 for 2x2 matrix): ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nCubes of all elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", cube(&arr[i][j]));  
        }
        printf("\n");
    }
    return 0;
}