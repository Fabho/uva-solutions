#include <cstdio>
#include <set>
using namespace std;

int main()
{
    int days, dayBills, bill;
    long long totalCost;

    while (scanf("%d", &days) && days)
    {
        multiset<int> bills;
        totalCost = 0;

        for (int i = 0; i < days; i++)
        {
            scanf("%d", &dayBills);
            for (int j = 0; j < dayBills; j++)
            {
                scanf("%d", &bill);
                bills.insert(bill);
            }

            auto highestPay = bills.begin();
            auto lowestPay = --bills.end();
            totalCost += (*lowestPay - *highestPay);
            bills.erase(highestPay);
            bills.erase(lowestPay);
        }

        printf("%lld\n", totalCost);
    }
    return 0;
}