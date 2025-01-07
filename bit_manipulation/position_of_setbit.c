#include <stdio.h>
void position(int n)
{
    int pos = 0;
    // considering first position as 1
    printf("Enter a number with only set bit");
    while (n != 0)
    {
        if (n & 1)
        {
            break;
        }
        pos++;
        n = n >> 1;
    }
    printf(" The position of setbit :%d", pos);
}
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    position(n);

    return 0;
}
