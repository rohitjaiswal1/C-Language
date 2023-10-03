#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any value");
    scanf("%d", &n);
    
    if(n>0){
        printf("you have entered postive number.");
    }
    else if(n<0){
        printf("negative.");
    }
    else if(n==0){
        printf("you have entered nutrel value.");
    }
    else{
        printf("you have entered wrong thing.");
    }

    return 0;
}