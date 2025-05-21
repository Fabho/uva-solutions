#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

enum
{
    UNVISITED = -1,
    VISITED = -2
};

vector<vii> AL;
vi dfs_num;

void dfs(int u)
{
    dfs_num[u] = VISITED;
    for (auto &[v, w] : AL[u])
        if (dfs_num[v] == UNVISITED)
            dfs(v);
}

int main()
{
    int cases, nodes;
    char largestNode;
    string edge;

    scanf("%d", &cases);

    while (cases--)
    {
        cin >> largestNode;
        nodes = largestNode - 65;
        AL.assign(nodes + 1, vii());
        dfs_num.assign(nodes + 1, UNVISITED);
        getline(cin, edge);

        while (getline(cin, edge) && edge != "")
        {
            int u = edge[0] - 65;
            int v = edge[1] - 65;

            AL[u].emplace_back(v, 0);
            AL[v].emplace_back(u, 0);
        }

        int numCC = 0;
        for (int u = 0; u < AL.size(); ++u)
            if (dfs_num[u] == UNVISITED)
            {
                ++numCC;
                dfs(u);
            }

        printf("%d\n", numCC);
        if (cases)
            printf("\n");
    }

    return 0;
}