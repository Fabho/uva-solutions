#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int items, val;
    bool flag = false;

    while (scanf("%d", &items) && items)
    {
        if (flag)
            printf("\n");
        else
            flag = true;

        vector<int> subset;

        for (int i = 0; i < items; i++)
        {
            scanf("%d", &val);
            subset.push_back(val);
        }

        for (int a = 0; a < subset.size(); a++)
            for (int b = a + 1; b < subset.size(); b++)
                for (int c = b + 1; c < subset.size(); c++)
                    for (int d = c + 1; d < subset.size(); d++)
                        for (int e = d + 1; e < subset.size(); e++)
                            for (int f = e + 1; f < subset.size(); f++)
                                printf("%d %d %d %d %d %d\n", subset[a], subset[b], subset[c], subset[d], subset[e], subset[f]);
    }
    return 0;
}