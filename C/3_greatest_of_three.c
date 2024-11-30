#include<stdio.h>
int main (){
    int a,b,c;
    printf("enter any three no = ");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d is largest among three no",a>b?(a>c?a:c):(b>c?b:c));
    return 0;
}