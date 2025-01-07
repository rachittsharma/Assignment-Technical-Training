#include <stdio.h>

void count(int n)
{
    int c = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            c++;
        }
        n = n >> 1;
    }
    printf("%d", c);
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    count(n);

    return 0;
}
