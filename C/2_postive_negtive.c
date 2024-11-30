#include<stdio.h>
int main(){
    int a;
    printf("enter any no =");
    scanf("%d",&a);
    if(a>0){
        printf("%d is positive no",a);
    }
    else{
        printf("%d is negative no ",a);
    }
    return 0;
}