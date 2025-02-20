#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int banks, debentures, reserve, debtorBank, creditBank, debentureValue;
    bool canPay;

    while (scanf("%d %d", &banks, &debentures) && banks && debentures)
    {
        vector<int> bankReserves;
        canPay = true;

        for (int i = 0; i < banks; i++)
        {
            scanf("%d", &reserve);
            bankReserves.push_back(reserve);
        }

        for (int i = 0; i < debentures; i++)
        {
            scanf("%d %d %d", &debtorBank, &creditBank, &debentureValue);
            bankReserves[creditBank - 1] += debentureValue;
            bankReserves[debtorBank - 1] -= debentureValue;
        }

        for (int i = 0; i < bankReserves.size(); i++)
        {
            if (bankReserves[i] < 0)
            {
                canPay = false;
                break;
            }
        }

        canPay ? printf("S\n") : printf("N\n");
    }
    return 0;
}