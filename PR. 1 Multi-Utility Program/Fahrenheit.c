#include<stdio.h>
int main(){
    float C;
    printf("Enter your value in Fahrenheit => ");
    scanf("%f", &C);

    float F = ((9.0 / 5.0) * C) + 32; // Ensure floating-point division
    printf("%f", F);
    
    return 0;
}