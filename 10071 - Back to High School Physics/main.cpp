#include <cstdio>

int main()
{
    int velocity, time;

    while (scanf("%d %d", &velocity, &time) != EOF)
    {
        printf("%d\n", 2 * velocity * time);
    }
    return 0;
}