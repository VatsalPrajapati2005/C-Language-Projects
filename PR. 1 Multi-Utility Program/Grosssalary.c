#include<stdio.h>

int main(){
     float baseSalary, hraPercent, daPercent, taPercent, grossSalary;

    // Taking user input
    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);
    
    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercent);
    
    printf("Enter DA percentage: ");
    scanf("%f", &daPercent);
    
    printf("Enter TA percentage: ");
    scanf("%f", &taPercent);

    // Calculating gross salary
    grossSalary = baseSalary + (baseSalary * hraPercent / 100) + 
                  (baseSalary * daPercent / 100) + 
                  (baseSalary * taPercent / 100);

    // Displaying output
    printf("Gross Salary: Rs. %.2f\n", grossSalary);

}