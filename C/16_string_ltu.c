#include<stdio.h>
#include<string.h>
int main(){
    char name[30],copy[30];
    printf("enter any string = ");
    scanf("%s",name);
    strcpy(copy,name);
    printf("uppercase of %s is %s",copy,strupr(name));
    return 0;
}