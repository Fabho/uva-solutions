#include <cstdio>

int main()
{

    int cases, farmers, farmSize, animals, envFriendliness, farmValue, budget;

    scanf("%d", &cases);

    while (cases--)
    {

        scanf("%d", &farmers);
        budget = 0;

        for (int i = 0; i < farmers; i++)
        {
            scanf("%d %d %d", &farmSize, &animals, &envFriendliness);
            farmValue = farmSize * envFriendliness;
            budget += farmValue;
        }

        printf("%d\n", budget);
    }
    return 0;
}