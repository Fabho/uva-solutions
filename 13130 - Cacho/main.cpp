#include <cstdio>

int main()
{
    int cases, dice1, dice2, dice3, dice4, dice5;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d %d %d %d %d", &dice1, &dice2, &dice3, &dice4, &dice5);

        if (dice1 + 1 == dice2 && dice2 + 1 == dice3 && dice3 + 1 == dice4 && dice4 + 1 == dice5)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}