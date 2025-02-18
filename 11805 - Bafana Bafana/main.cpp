#include <cstdio>

int main()
{

    int cases, players, initialPosition, passes;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {

        scanf("%d %d %d", &players, &initialPosition, &passes);

        for (int j = 0; j < passes; j++)
        {
            initialPosition++;
            if (initialPosition > players)
                initialPosition = 1;
        }

        printf("Case %d: %d\n", i + 1, initialPosition);
    }

    return 0;
}