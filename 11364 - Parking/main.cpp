#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int cases, stores, store, distance;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d", &stores);
        vector<int> positions(stores);

        for (int i = 0; i < stores; i++)
            scanf("%d", &positions[i]);

        sort(positions.begin(), positions.end());
        distance = 2 * (positions[stores - 1] - positions[0]);

        printf("%d\n", distance);
    }

    return 0;
}