#include<stdio.h>
#include<conio.h>

int main(){

    int age;

    printf("Enter you age: ");
    scanf("%d",&age);

    if(age<18){
        printf("You are not eligble for driving.");
    }
    else if(age>=18){
        printf("You are eligble for driving.");
    }

    return 0;

}