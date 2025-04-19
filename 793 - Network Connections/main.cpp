#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
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

int parseInt(string cad)
{
    int res = 0;
    for (int x = 0; x < cad.size(); x++)
    {
        if (x == 0)
            res = cad[x] - '0';
        else
            res = (res * 10) + (cad[x] - '0');
    }
    return res;
}

int main()
{
    int cases, computers, counter, computerOne, computerTwo, success, fail;
    string trash, str, data, query, strComputerOne, strComputerTwo;
    stringstream ss;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d", &computers);
        getline(cin, trash);
        UnionFind uf(computers);
        success = fail = 0;

        while (getline(cin, str))
        {
            if (str.size() == 0)
                break;

            ss << str;
            counter = 0;

            while (ss >> data)
            {
                if (counter == 0)
                    query = data;
                else if (counter == 1)
                    strComputerOne = data;
                else if (counter == 2)
                    strComputerTwo = data;
                counter++;
            }

            ss.clear();
            data.clear();
            str.clear();

            computerOne = parseInt(strComputerOne);
            computerTwo = parseInt(strComputerTwo);

            if (query == "c")
                uf.unionSet(computerOne - 1, computerTwo - 1);
            else
            {
                if (uf.isSameSet(computerOne - 1, computerTwo - 1))
                    success++;
                else
                    fail++;
            }
        }

        printf("%d,%d\n", success, fail);

        if (cases)
            printf("\n");
    }

    return 0;
}