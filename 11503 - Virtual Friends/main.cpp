#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;
typedef vector<int> vi;

struct Friendship
{
    string nameOne;
    string nameTwo;
};

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
    string nameOne, nameTwo;
    int cases, friendships;

    scanf("%d", &cases);

    while (cases--)
    {
        set<string> names;
        map<string, int> nameIndexes;
        vector<Friendship> friends;

        scanf("%d", &friendships);

        for (int i = 0; i < friendships; i++)
        {
            cin >> nameOne >> nameTwo;
            names.insert(nameOne);
            names.insert(nameTwo);

            Friendship f;
            f.nameOne = nameOne;
            f.nameTwo = nameTwo;
            friends.push_back(f);
        }

        int index = 0;
        for (auto it = names.begin(); it != names.end(); ++it)
            nameIndexes[*it] = index++;

        UnionFind uf(names.size());

        for (int i = 0; i < friends.size(); i++)
        {
            uf.unionSet(nameIndexes[friends[i].nameOne], nameIndexes[friends[i].nameTwo]);
            printf("%d\n", uf.sizeOfSet(nameIndexes[friends[i].nameOne]));
        }
    }

    return 0;
}