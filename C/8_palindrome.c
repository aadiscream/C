#include <stdio.h>
int main()
{
    int num, copy, copy1 = 0;
    printf("enter any no =");
    scanf("%d", &num);
    copy = num;
    while (copy > 0)
    {
        copy1 = copy1 * 10 + (copy % 10);
        copy /= 10;
    }
    if (copy1 == num)
    {
        printf("%d is palindrome no ", num);
    }
    else
    {
        printf("%d is not a palindrome no", num);
    }
    return 0;
}