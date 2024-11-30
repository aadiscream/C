#include<stdio.h>
#include<string.h>
int main(){
int n;
char alpha[20],temp;
printf("enter any string : ");
scanf("%s",alpha);
n=strlen(alpha);
for(int i=0;i<n-1; i++){
    for(int j=i+1;j<n;j++){
        if(alpha[i]>alpha[j]){
            temp=alpha[i];
        alpha[i]=alpha[j];
        alpha[j]=temp;
        }
    }
}
printf("after sorting it will be = %s",alpha);
return 0; 
}
