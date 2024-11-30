#include<stdio.h>
#include<string.h>
int main(){
    char first[10], last[10];
    int i,j;
    printf("enter two strings = ");
    scanf("%s%s",first,last);
    int filen=strlen(first);
int laslen=strlen(last);
for(i=filen-1,j=0;i<filen+laslen; j++,i++){
    first[i]=last[j];
}
printf("after merging = %s",first);
return 0;
}