#include <cstdio>

int main()
{
    int props, hunters, objects, remainingObjects;

    while (scanf("%d %d %d", &props, &hunters, &objects) != EOF)
    {
        remainingObjects = objects - props;

        if (remainingObjects < 0)
            remainingObjects = 0;

        if (remainingObjects)
        {
            hunters = hunters - remainingObjects;
            if (hunters < 0)
                hunters = 0;
        }

        props = props - hunters;
        if (hunters)
            printf("Hunters win!\n");
        else
            printf("Props win!\n");
    }

    return 0;
}