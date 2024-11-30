#include <stdio.h>
int main()
{
    int range = 50;
    for (int a = 2; a <= range; a++)
    {
        int prime = 1;
        for (int b = 2; b < a; b++)
        {
            if (a % b == 0)
            {
                prime = 0;
            }
        }
        if (prime == 1)
        {
            printf("%d \n", a);
        }
    }
    return 0;
}