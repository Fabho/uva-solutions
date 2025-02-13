#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int cases, runners, speed, requiredSpeed;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d", &runners);
        requiredSpeed = -1;

        while (runners--)
        {

            scanf("%d", &speed);
            requiredSpeed = max(requiredSpeed, speed);
        }

        printf("Case %d: %d\n", i + 1, requiredSpeed);
    }
    return 0;
}