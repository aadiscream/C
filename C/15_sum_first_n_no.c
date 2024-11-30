#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("entr any no  = ");
    scanf("%d",&n);
int copy=n;
for(;n>0;n--){
    sum=sum+n;
}
printf("sum of first %d no is = %d",copy,sum);
return 0;
}
