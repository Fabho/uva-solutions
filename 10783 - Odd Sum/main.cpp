#include <cstdio>

int main()
{
    int cases, minNum, maxNum, sum;
    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d %d", &minNum, &maxNum);
        sum = 0;

        for (int j = minNum; j <= maxNum; j++)
            if (j % 2 != 0)
                sum += j;

        printf("Case %d: %d\n", i + 1, sum);
    }
    return 0;
}