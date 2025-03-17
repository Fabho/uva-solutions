#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int cases, groupSize, age;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {

        scanf("%d", &groupSize);
        vector<int> ages;

        for (int j = 0; j < groupSize; j++)
        {
            scanf("%d", &age);
            ages.push_back(age);
        }

        printf("Case %d: %d\n", i + 1, ages[groupSize / 2]);
    }

    return 0;
}
