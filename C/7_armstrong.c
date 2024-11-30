#include <stdio.h>
#include <math.h>
int main()
{
    int copy1 = 0, num, power, copy;
    printf("enter any no = ");
    scanf("%d", &num);
    copy = num;
    power = 0;
    while (copy > 0)
    {
        power++;
        copy /= 10;
    }
    copy = num;
    while (copy > 0)
    {
        copy1 += pow((copy % 10), power);
        copy /= 10;
    }
    if (num == copy1)
    {
        printf("%d is an armstrong no ", num);
    }
    else
    {
        printf("%d is not an armstrong no ", num);
    }
}
