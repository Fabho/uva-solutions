#include <cstdio>
#define MAX_BUDGET 500001

int main()
{

    int participants, budget, hotels, weeks, personPrice, beds, hotelPrice, bestPrice;

    while (scanf("%d %d %d %d", &participants, &budget, &hotels, &weeks) != EOF)
    {

        bestPrice = MAX_BUDGET;

        for (int i = 0; i < hotels; i++)
        {

            scanf("%d", &personPrice);

            for (int j = 0; j < weeks; j++)
            {
                scanf("%d", &beds);

                if (beds >= participants)
                {
                    hotelPrice = participants * personPrice;

                    if (hotelPrice <= budget)
                    {
                        if (hotelPrice < bestPrice)
                            bestPrice = hotelPrice;
                    }
                }
            }
        }

        if (bestPrice == MAX_BUDGET)
            printf("stay home\n");
        else
            printf("%d\n", bestPrice);
    }

    return 0;
}