#include <cstdio>
#include <cmath>

int main()
{
    int cases;
    long long warriors, rows;

    scanf("%lld", &cases);

    while (cases--)
    {
        scanf("%lld", &warriors);
        rows = (-1 + sqrt(1 + 8 * warriors)) / 2;
        printf("%lld\n", rows);
    }
    return 0;
}