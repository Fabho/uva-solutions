#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    long armyOne, armyTwo;

    while (scanf("%ld %ld", &armyOne, &armyTwo) != EOF)

        printf("%ld\n", abs(armyOne - armyTwo));

    return 0;
}