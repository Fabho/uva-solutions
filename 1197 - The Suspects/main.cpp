#include <cstdio>
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
    int students, groups, members, member, previous;

    while (scanf("%d %d", &students, &groups) && (students || groups))
    {
        UnionFind uf(students);

        for (int i = 0; i < groups; ++i)
        {
            scanf("%d", &members);

            previous = -1;

            for (int j = 0; j < members; j++)
            {
                scanf("%d", &member);
                if (previous == -1)
                    previous = member;
                else
                {
                    uf.unionSet(previous, member);
                    previous = member;
                }
            }
        }

        printf("%d\n", uf.sizeOfSet(0));
    }

    return 0;
}