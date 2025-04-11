#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    // Step 1: Grade Calculation using ternary operator
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    // Step 2: Additional Comments using switch-case
    
    printf("Your grade is %c. ", grade);

    switch (grade) {
        case 'A':
            printf("Excellent work! ");
            break;
        case 'B':
            printf("Very good! ");
            break;
        case 'C':
            printf("Good effort! ");
            break;
        case 'D':
            printf("You passed! ");
            break;
        case 'E':
            printf("Needs improvement. ");
            break;
        case 'F':
            printf("Better luck next time. ");
            break;
        default:
            printf("Invalid grade. ");
    }

    // Step 3: Eligibility Check using if-else
    if (grade != 'F') {
        printf("You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}
