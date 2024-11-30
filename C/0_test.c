#include <stdio.h>
int main()
{
    int a = 10, b = 3, c = 13, d;
    d = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("The largest no = %d", d);
    return 0;
}