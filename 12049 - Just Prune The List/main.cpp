#include <cstdio>
#include <map>
#include <set>
#include <cmath>
using namespace std;

int main()
{
    int cases, groupOne, groupTwo, val, items;

    scanf("%d", &cases);

    while (cases--)
    {
        map<int, int> groupOneMap, groupTwoMap;
        set<int> keys;

        scanf("%d %d", &groupOne, &groupTwo);

        for (int i = 0; i < groupOne; i++)
        {
            scanf("%d", &val);
            groupOneMap[val]++;
            keys.insert(val);
        }

        for (int i = 0; i < groupTwo; i++)
        {
            scanf("%d", &val);
            groupTwoMap[val]++;
            keys.insert(val);
        }

        items = 0;

        for (auto it = keys.begin(); it != keys.end(); it++)
            items += abs(groupOneMap[*it] - groupTwoMap[*it]);

        printf("%d\n", items);
    }

    return 0;
}