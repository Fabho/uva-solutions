#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int height, width, counter, current;

    while (scanf("%d %d", &height, &width))
    {
        if (!height && !width)
            break;

        vector<int> sculpture(width);

        for (int i = 0; i < width; i++)
            scanf("%d", &sculpture[i]);

        counter = height - sculpture[0];
        current = sculpture[0];

        for (int i = 1; i < width; i++)
        {
            if (sculpture[i] < current)
                counter += (current - sculpture[i]);

            current = sculpture[i];
        }

        printf("%d\n", counter);
    }
    return 0;
}