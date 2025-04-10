#include <cstdio>
#include <algorithm>
using namespace std;

int countRight(int current, int target)
{
    int count = 0;
    while (current != target)
    {
        current++;
        count++;
        if (current > 99)
            current = 0;
    }

    return count;
}

int countLeft(int current, int target)
{
    int count = 0;
    while (current != target)
    {
        current--;
        count++;
        if (current < 0)
            current = 99;
    }

    return count;
}

int main()
{
    int current, target, right, left;

    while (scanf("%d %d", &current, &target))
    {
        if (current == -1 && target == -1)
            break;

        right = countRight(current, target);
        left = countLeft(current, target);

        printf("%d\n", min(right, left));
    }
    return 0;
}