#include <cstdio>
#include <map>

using namespace std;

int main()
{

    int volunteers, returned, id, counter;

    while (scanf("%d %d", &volunteers, &returned) != EOF)
    {

        map<int, bool> survivors;

        for (int i = 1; i <= volunteers; i++)
            survivors[i] = false;

        for (int i = 0; i < returned; i++)
        {
            scanf("%d", &id);
            survivors[id] = true;
        }

        if (volunteers == returned)
            printf("*\n");
        else
        {
            for (auto it = survivors.begin(); it != survivors.end(); ++it)
            {
                if (!it->second)
                    printf("%d ", it->first);
            }

            printf("\n");
        }
    }

    return 0;
}