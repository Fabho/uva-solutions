#include <cstdio>

int main()
{
    int cases, rows, cols;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d %d", &rows, &cols);
        printf("%d\n", (rows / 3) * (cols / 3));
    }
    return 0;
}