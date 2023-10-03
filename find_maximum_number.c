#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers");
    scanf("%d %d",&num1,&num2);

    
    if(num1 > num2)
    {
        printf("num 1 is greater then number 2");
    }
    else
    printf("number two is greater then number 1");
}