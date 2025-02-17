#include <cstdio>
#include <map>
using namespace std;

int main()
{
    int jackDiscs, jillDiscs, discId, discs;

    while (scanf("%d %d", &jackDiscs, &jillDiscs) && jackDiscs && jillDiscs)
    {
        map<int, int> discsOfBoth;

        for (int i = 0; i < jackDiscs; i++)
        {
            scanf("%d", &discId);
            discsOfBoth[discId]++;
        }

        for (int i = 0; i < jillDiscs; i++)
        {
            scanf("%d", &discId);
            discsOfBoth[discId]++;
        }

        discs = 0;

        for (map<int, int>::iterator it = discsOfBoth.begin(); it != discsOfBoth.end(); it++)
            if (it->second >= 2)
                discs++;

        printf("%d\n", discs);
    }
    return 0;
}