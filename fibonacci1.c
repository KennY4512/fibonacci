#include <stdio.h>

int main()
{
    long a = 0;
    long b = 1;
    long c = 0;

    printf("%ld\n%ld\n", a, b);

    while (c < 999999999999999999)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%ld\n", c);
    }
}