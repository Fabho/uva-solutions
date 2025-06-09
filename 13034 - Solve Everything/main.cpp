#include <cstdio>

int main()
{
    int sets, teams;
    bool consider;
    scanf("%d", &sets);

    for (int i = 0; i < sets; i++)
    {
        consider = true;
        for (int j = 0; j < 13; j++)
        {
            scanf("%d", &teams);

            if (!teams && consider)
                consider = false;
        }

        if (consider)
            printf("Set #%d: Yes\n", i + 1);
        else
            printf("Set #%d: No\n", i + 1);
    }
    return 0;
}