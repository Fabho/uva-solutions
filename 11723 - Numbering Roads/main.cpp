#include <cstdio>

int main()
{
    int roads, intAllocations, caseNumber = 1, suffixes;

    while (scanf("%d %d", &roads, &intAllocations) == 2 && roads && intAllocations)
    {
        if (roads > intAllocations * 27)
            printf("Case %d: impossible\n", caseNumber++);
        else
        {
            suffixes = 0;

            while ((intAllocations * (1 + suffixes)) < roads && suffixes <= 26)
                suffixes++;

            printf("Case %d: %d\n", caseNumber++, suffixes);
        }
    }
    return 0;
}