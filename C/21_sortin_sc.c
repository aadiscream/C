#include<stdio.h>
int main(){
    int temp,arr[5];
printf("enter any no = ");
for(int i=0; i<5; i++){
    scanf("%d",&arr[i]);
}
for(int i=0; i<5; i++){
if(arr[i]>arr[i+1]){
    temp = arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
}

printf("enter any no = ");
for(int i=0; i<5; i++){
    printf("%d\n",arr[i]);
}
return 0;
}