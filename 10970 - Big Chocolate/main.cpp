#include <cstdio>

int main()
{

    int rows, cols, cuts;

    while (scanf("%d %d", &rows, &cols) != EOF)
        printf("%d\n", rows * cols - 1);

    return 0;
}