#include <cstdio>

int main()
{
    int alice, beto, clara;
    char winner;

    while (scanf("%d %d %d", &alice, &beto, &clara) != EOF)
    {
        if (alice != beto && alice != clara && beto == clara)
            winner = 'A';
        else if (beto != alice && beto != clara && alice == clara)
            winner = 'B';
        else if (clara != alice && clara != beto && alice == beto)
            winner = 'C';
        else
            winner = '*';

        printf("%c\n", winner);
    }
    return 0;
}