#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{

    string input;
    int queries, minIndex, maxIndex, cases = 0;
    bool allEqual;

    while (cin >> input)
    {

        scanf("%d", &queries);

        printf("Case %d:\n", ++cases);

        for (int i = 0; i < queries; i++)
        {

            scanf("%d %d", &minIndex, &maxIndex);

            if (minIndex > maxIndex)
                swap(minIndex, maxIndex);

            allEqual = true;

            for (int j = minIndex; j <= maxIndex; j++)
            {
                if (input[j] != input[minIndex])
                {
                    allEqual = false;
                    break;
                }
            }

            allEqual ? printf("Yes\n") : printf("No\n");
        }
    }

    return 0;
}