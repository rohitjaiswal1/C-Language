#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float p;
    printf("enter the 5 subject number");
    scanf("%d%d%d%d%d" ,&a,&b,&c,&d,&e);
    sum = a+b+c+d+e;
    printf("the sum of 5 subject marks is %d \n",sum);
    p = (sum*100)/500;
    printf("total percentage is %f",p);
}