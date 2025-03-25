#include <cstdio>

int main()
{

    int cases, initialTemperature, temperatureChange;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d %d", &initialTemperature, &temperatureChange);
        printf("Case %d: %.2f\n", i + 1, initialTemperature + (temperatureChange * 5.0 / 9.0));
    }
    return 0;
}