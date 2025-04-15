#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vi;

class UnionFind
{
private:
    vi p, rank, setSize;
    int numSets;

public:
    UnionFind(int N)
    {
        p.assign(N, 0);
        for (int i = 0; i < N; ++i)
            p[i] = i;
        rank.assign(N, 0);
        setSize.assign(N, 1);
        numSets = N;
    }

    int findSet(int i)
    {
        return (p[i] == i) ? i : (p[i] = findSet(p[i]));
    }

    bool isSameSet(int i, int j)
    {
        return findSet(i) == findSet(j);
    }

    int numDisjointSets()
    {
        return numSets;
    }

    int sizeOfSet(int i)
    {
        return setSize[findSet(i)];
    }

    void unionSet(int i, int j)
    {
        if (isSameSet(i, j))
            return;
        int x = findSet(i), y = findSet(j);
        if (rank[x] > rank[y])
            swap(x, y);
        p[x] = y;
        if (rank[x] == rank[y])
            ++rank[y];
        setSize[y] += setSize[x];
        --numSets;
    }
};

int main()
{
    int creatures, relations, maxSize;
    string creature, creatureOne, creatureTwo;

    while (1)
    {
        cin >> creatures >> relations;
        if (creatures == 0 && relations == 0)
            break;

        map<string, int> creaturesIndexes;

        UnionFind uf(creatures);

        for (int i = 0; i < creatures; i++)
        {
            cin >> creature;
            creaturesIndexes[creature] = i;
        }

        for (int i = 0; i < relations; i++)
        {
            cin >> creatureOne >> creatureTwo;
            uf.unionSet(creaturesIndexes[creatureOne], creaturesIndexes[creatureTwo]);
        }

        maxSize = -1;

        for (int i = 0; i < creatures; i++)
            maxSize = max(maxSize, uf.sizeOfSet(i));

        printf("%d\n", maxSize);
    }

    return 0;
}