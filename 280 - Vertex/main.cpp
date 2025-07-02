#include <cstdio>
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
    // dfs_num[u] = VISITED;
    for (auto &[v, w] : AL[u])
    {
        if (dfs_num[v] == UNVISITED)
        {
            dfs_num[v] = VISITED; // Mark as visited
            dfs(v);
        }
    }
}

int main()
{
    int nodes, parentNode, node, queries;

    while (scanf("%d", &nodes) && nodes)
    {
        AL.assign(nodes, vii());

        while (scanf("%d", &parentNode) && parentNode)
        {
            while (scanf("%d", &node) && node)
            {
                AL[parentNode - 1].emplace_back(node - 1, 0);
            }
        }

        scanf("%d", &queries);

        while (queries--)
        {
            scanf("%d", &node);
            dfs_num.assign(nodes, UNVISITED);
            dfs(node - 1);

            int notReach = 0;
            vector<int> out;
            for (int x = 0; x < dfs_num.size(); x++)
            {
                if (dfs_num[x] == UNVISITED)
                {
                    notReach++;
                    out.push_back(x + 1);
                }
            }

            if (notReach == 0)
                printf("0\n");
            else
                printf("%d ", notReach);

            for (int x = 0; x < out.size(); x++)
            {
                if (x == out.size() - 1)
                    printf("%d\n", out[x]);
                else
                    printf("%d ", out[x]);
            }
        }
    }

    return 0;
}