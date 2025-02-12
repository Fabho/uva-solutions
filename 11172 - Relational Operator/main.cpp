#include <cstdio>

int main()
{

    int cases, numberOne, numberTwo;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d %d", &numberOne, &numberTwo);

        if (numberOne > numberTwo)
            printf(">\n");
        else if (numberOne < numberTwo)
            printf("<\n");
        else
            printf("=\n");
    }

    return 0;
}