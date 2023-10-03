#include<stdio.h>
#include<conio.h>
int main(){

    int a, b;

    a = b = 4;
    b = a++;

    printf("%d %d %d %d",a++, --b, ++a, b--);

    // printf("%d",a);

    return 0;
} 