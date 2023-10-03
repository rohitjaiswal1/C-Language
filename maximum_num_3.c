#include<stdio.h>
int main()
{
    int num1, num2,num3;
    printf("enter the three number");
    scanf("%d%d%D", &num1, &num2,&num3);
    if(num1>num2 && num1>num3)
    printf("1 number is maximum");
    if(num2>num1 && num2>num3)
    printf("2 number is maximum");
    if(num3>num2 && num3>num1)
    printf("3 number is maximux");
}