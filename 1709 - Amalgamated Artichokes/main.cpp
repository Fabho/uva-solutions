#include <cstdio>
#include <cmath>

int main()
{
    int p, a, b, c, d, n;
    double price, decline;

    while (scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n) != EOF)
    {
        double maxPrice = 0, maxDecline = 0;

        for (int k = 1; k <= n; k++)
        {
            price = p * (sin(a * k + b) + cos(c * k + d) + 2);

            if (k == 1)
                maxPrice = price;
            else
            {
                if (price < maxPrice)
                {
                    decline = maxPrice - price;
                    if (decline > maxDecline)
                        maxDecline = decline;
                }
                else
                    maxPrice = price;
            }
        }

        printf("%.6f\n", maxDecline);
    }
    return 0;
}