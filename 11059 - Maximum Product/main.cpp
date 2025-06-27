#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int items, cases = 1;

    while (scanf("%d", &items) != EOF)
    {
        vector<int> data(items);
        long long maxProduct = 0, product;

        for (int i = 0; i < items; i++)
            scanf("%d", &data[i]);

        for (int i = 0; i < items; i++)
        {
            product = 1;
            for (int j = i; j < items; j++)
            {
                product *= data[j];
                maxProduct = max(maxProduct, product);
            }
        }

        printf("Case #%d: The maximum product is %lld.\n\n", cases++, maxProduct);
    }
    return 0;
}