#include <cstdio>

int main()
{
    int cases, walls, wallHeight, highJumps, lowJumps, currentWallHeight;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d", &walls);

        highJumps = lowJumps = 0;

        for (int j = 0; j < walls; j++)
        {
            scanf("%d", &wallHeight);

            if (j == 0)
            {
                currentWallHeight = wallHeight;
                continue;
            }

            if (wallHeight > currentWallHeight)
                highJumps++;
            else if (wallHeight < currentWallHeight)
                lowJumps++;

            currentWallHeight = wallHeight;
        }

        printf("Case %d: %d %d\n", i + 1, highJumps, lowJumps);
    }
    return 0;
}