#include <cstdio>

int f91(int n)
{
    if (n <= 100)
        return f91(f91(n + 11));
    else
        return n - 10;
}

int main()
{
    int input;

    while (scanf("%d", &input) && input)
    {
        printf("f91(%d) = %d\n", input, f91(input));
    }

    return 0;
}