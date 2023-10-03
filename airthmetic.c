#include<stdio.h>
int main()
{
    int a = 21;
    int b = 10;
    int c;
    c = a + b;
    printf("%d\n", c);
    c = a - b;
    printf("%d\n", c);
    c = a * b;
    printf("%d\n", c);
    c = a / b;
    printf("%d\n", c);
    c = a % b;
    printf("%d\n", c);
    c = a++;
    printf("%d\n", c);
    c = a--;
    printf("%d\n", c);
    c = ++a;
    printf("%d\n", c);
    c = --a;
    printf("%d\n", c);
}