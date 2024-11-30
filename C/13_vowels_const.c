#include<stdio.h>
int main(){
    char a;
    printf("enter any char ");
    scanf("%c",&a);
    switch(a){
        case 'a':
        printf("%c is vowels",a);
        break;
        case 'e':
        printf("%c is vowels",a);
        break;
        case 'o':
        printf("%c is vowels",a);
        break;
        case 'i':
        printf("%c is vowels",a);
        break;
        case 'u':
        printf("%c is vowels",a);
        break;
        default :
        printf("%c is consonent",a);
    }
    return 0;
    }