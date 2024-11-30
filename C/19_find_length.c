#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    int count=0;
    printf("enter any string : ");
    scanf("%s",name);
    for(int i=0;name[i]!='\0';i++){
count++;
    }
    printf("length of string is = %d",count);
    return 0;
}