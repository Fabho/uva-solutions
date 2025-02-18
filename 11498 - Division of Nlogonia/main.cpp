#include <cstdio>
#include <iostream>
using namespace std;

int main()
{

    int queries, xValue, yValue, xQuery, yQuery;
    string output;

    while (scanf("%d", &queries) && queries)
    {
        scanf("%d %d", &xValue, &yValue);

        for (int i = 0; i < queries; i++)
        {
            scanf("%d %d", &xQuery, &yQuery);

            if (xQuery == xValue || yQuery == yValue)
                output = "divisa";
            else if (xQuery > xValue && yQuery > yValue)
                output = "NE";
            else if (xQuery > xValue && yQuery < yValue)
                output = "SE";
            else if (xQuery < xValue && yQuery < yValue)
                output = "SO";
            else
                output = "NO";

            cout << output << '\n';
        }
    }

    return 0;
}