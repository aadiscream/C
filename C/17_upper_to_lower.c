#include<stdio.h>
#include<string.h>
int main(){
    char name[10],copy[10];
    printf("enter any char = ");
    scanf("%s",name);
    strcpy(copy,name);
    printf("lower to upper of %s is %s",copy,strlwr(name));
    return 0;
    }