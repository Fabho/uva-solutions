#include <cstdio>

int main()
{
    int cases, length, width, height;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d %d %d", &length, &width, &height);

        if (length <= 20 && width <= 20 && height <= 20)
            printf("Case %d: good\n", i + 1);
        else
            printf("Case %d: bad\n", i + 1);
    }

    return 0;
}