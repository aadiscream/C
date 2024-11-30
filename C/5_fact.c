#include <stdio.h>
int fact(int a)
{
    while (a == 0)
    {
        return 1;
    }
    return a * fact(a - 1);
}
int main()
{
    int no;
    printf("enter any no =");
    scanf("%d", &no);
    printf("fact of %d = %d", no, fact(no));
    return 0;
}