#include <cstdio>

int main()
{

    int events, eventValue, reasonsCount, treatsCount, cases = 1;

    while (scanf("%d", &events) && events)
    {
        reasonsCount = treatsCount = 0;

        for (int i = 0; i < events; i++)
        {
            scanf("%d", &eventValue);
            eventValue ? reasonsCount++ : treatsCount++;
        }

        printf("Case %d: %d\n", cases++, reasonsCount - treatsCount);
    }
    return 0;
}