#include<stdio.h>

void myFunction(char name[],int age) {
    printf("Hello %s, You are %d year old\n",name ,age);
}
int main() {
    myFunction("Gautam",30);
    myFunction("Rahul",25);
    myFunction("Rajan",23);
    myFunction("Rohit",20);
    myFunction("Ritik", 17);
}