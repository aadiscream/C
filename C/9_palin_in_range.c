#include <stdio.h>
int palindrome(int org)
{
    int copy1 = 0, copy = org;
    while (copy > 0)
    {
        copy1 = copy1 * 10 + (copy % 10);
        copy /= 10;
    }
    return (org == copy1);
}
int main()
{
    int num = 1, range;
    printf("enter range = ");
    scanf("%d", &range);
    while (num < range)
    {
        if (palindrome(num))
        {
            printf("%d\n", num);
        }
        num++;
    }
    return 0;
}