#include <stdio.h>
int main()
{
    int target = 100, no1 = 1, no2 = 2, no3;
    while (target > no1)
    {
        printf("%d \n", no1);
        no3 = no1 + no2;
        no1 = no2;
        no2 = no3;
        target--;
    }
    return 0;
}