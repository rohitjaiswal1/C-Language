#include<stdio.h>

void myFunction(char name[]) {
    printf("Hello %s\n", name);
}

int main() {
    myFunction("Gautam");
    myFunction("Rahul");
    myFunction("Rajan");
    myFunction("Rohit");
    myFunction("Ritik");
    return 0;
}