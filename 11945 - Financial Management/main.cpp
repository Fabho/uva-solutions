#include <cstdio>
typedef long long ll;
int main()
{

    int cases;
    double monthBalance, total, num;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        total = 0.0;

        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &monthBalance);
            total += monthBalance;
        }

        total /= 12.00;
        long long totalInt = total;
        long long mod = totalInt % 1000;
        totalInt /= 1000;

        num = total - ll(total);
        printf("%d $", i + 1);

        if (totalInt > 0)
            printf("%lld,", totalInt);

        printf("%.2lf\n", mod + num);
    }

    return 0;
}