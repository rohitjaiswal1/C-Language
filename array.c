#include<stdio.h>
void main(){
int a[10];
int i,j;
printf("enter the number how many you want to store in array");
scanf("%d",&j);
for(i=0;i<=j;i++){
    printf("%d enter the value in array",i);
    scanf("%d",&a[i]);

}
for(i=0;i<=j;i++){
    printf("data in index %d = %d \n ",i,a[i]);
}

}