#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int cols, cubes, height, moves, set = 1;

    while (scanf("%d", &cols) && cols)
    {
        vector<int> walls(cols);
        cubes = moves = 0;

        for (int i = 0; i < cols; ++i)
        {
            scanf("%d", &walls[i]);
            cubes += walls[i];
        }

        height = cubes / cols;

        for (int i = 0; i < cols; ++i)
            if (walls[i] > height)
                moves += walls[i] - height;

        printf("Set #%d\n", set++);
        printf("The minimum number of moves is %d.\n\n", moves);
    }

    return 0;
}