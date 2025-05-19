#include <cstdio>
#include <algorithm>
using namespace std;

int getCycleLength(int n)
{

    int count = 1;

    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;

        count++;
    }

    return count;
}

int main()
{
    int lowLimit, upperLimit, outputLow, outputUpper, maxCycleLength;

    while (scanf("%d %d", &lowLimit, &upperLimit) != EOF)
    {
        outputLow = lowLimit;
        outputUpper = upperLimit;

        if (lowLimit > upperLimit)
            swap(lowLimit, upperLimit);

        maxCycleLength = -1;
        for (int i = lowLimit; i <= upperLimit; i++)
            maxCycleLength = max(maxCycleLength, getCycleLength(i));

        printf("%d %d %d\n", outputLow, outputUpper, maxCycleLength);
    }

    return 0;
}