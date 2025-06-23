#include <cstdio>

int main()
{
    int cases, emptyBottles, foundBottles, requiredBottles;
    int total, consumed;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d %d %d", &emptyBottles, &foundBottles, &requiredBottles);

        total = emptyBottles + foundBottles;
        consumed = 0;

        while (total >= requiredBottles)
        {
            consumed += total / requiredBottles;
            total = (total / requiredBottles) + (total % requiredBottles);
        }

        printf("%d\n", consumed);
    }

    return 0;
}