#include <cstdio>

int main()
{
    int cases, input;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d", &input);

        input *= 567;
        input /= 9;
        input += 7492;
        input *= 235;
        input /= 47;
        input -= 498;

        input /= 10;

        if (input < 0)
            input *= -1;

        printf("%d\n", input % 10);
    }
    return 0;
}