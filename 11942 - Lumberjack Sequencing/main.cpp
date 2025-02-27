#include <cstdio>
#include <vector>
using namespace std;

bool isSorted(vector<int> data)
{
    bool sorted = false;

    for (int i = 0, j = 1; j < data.size(); i++, j++)
    {
        if (data[i] >= data[j])
            sorted = true;
        else
        {
            sorted = false;
            break;
        }
    }

    if (!sorted)
    {
        for (int i = 0, j = 1; j < data.size(); i++, j++)
        {
            if (data[i] <= data[j])
                sorted = true;
            else
            {
                sorted = false;
                break;
            }
        }
    }

    return sorted;
}

int main()
{

    int groups, beardLength;
    bool beardsSorted;

    scanf("%d", &groups);

    printf("Lumberjacks:\n");

    while (groups--)
    {
        vector<int> lumberjacks;

        for (int i = 0; i < 10; i++)
        {
            scanf("%d", &beardLength);
            lumberjacks.push_back(beardLength);
        }

        beardsSorted = isSorted(lumberjacks);

        beardsSorted ? printf("Ordered\n") : printf("Unordered\n");
    }

    return 0;
}