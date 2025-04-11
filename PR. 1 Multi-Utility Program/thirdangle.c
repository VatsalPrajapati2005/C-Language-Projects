#include<stdio.h>
int main(){
    int First_Angle;
    int Second_Angle;
    printf("Enter First_Angle Value => ");
    scanf("%d",&First_Angle);
    printf("Enter First_Angle Value => ");
    scanf("%d",&Second_Angle);

    int Total_Angle=180;
    int Final=Total_Angle-(First_Angle+Second_Angle);
    printf("%d",Final);
}