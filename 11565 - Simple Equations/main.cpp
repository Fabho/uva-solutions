#include <cstdio>

using namespace std;

int main()
{
    int cases, A, B, C;
    bool hasAnswer;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d %d %d", &A, &B, &C);
        hasAnswer = false;

        for (int x = -100; x <= 100 && !hasAnswer; x++)
            for (int y = -100; y <= 100 && !hasAnswer; y++)
                for (int z = -100; z <= 100 && !hasAnswer; z++)
                    if (x != y && x != z && y != z)
                    {
                        if (x + y + z == A && x * y * z == B && x * x + y * y + z * z == C)
                        {
                            printf("%d %d %d\n", x, y, z);
                            hasAnswer = true;
                            break;
                        }
                    }

        if (!hasAnswer)
            printf("No solution.\n");
    }
    return 0;
}