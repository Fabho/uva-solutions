#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int cases, relatives, position, median, distance;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d", &relatives);
        vector<int> relativesHouses(relatives);

        for (int j = 0; j < relatives; j++)
        {
            scanf("%d", &position);
            relativesHouses[j] = position;
        }

        sort(relativesHouses.begin(), relativesHouses.end());
        median = relativesHouses[relatives / 2];
        distance = 0;

        for (int k = 0; k < relatives; k++)
            distance += abs(relativesHouses[k] - median);

        printf("%d\n", distance);
    }

    return 0;
}