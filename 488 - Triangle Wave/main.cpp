#include <cstdio>

void printTriangle(int amplitude)
{

    for (int i = 1; i <= amplitude; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }

    for (int i = amplitude - 1; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
            printf("%d", i);
        printf("\n");
    }
}

int main()
{

    int cases, amplitude, frequency;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d", &amplitude);
        scanf("%d", &frequency);

        for (int i = 0; i < frequency; i++)
        {
            printTriangle(amplitude);

            if (i < frequency - 1)
                printf("\n");
        }

        if (cases)
            printf("\n");
    }

    return 0;
}