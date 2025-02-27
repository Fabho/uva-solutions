#include <cstdio>

int main()
{
    int cases, allowedBags = 0;
    double length, width, depth, weight;
    bool isValid;

    scanf("%d", &cases);

    while (cases--)
    {

        isValid = false;

        scanf("%lf %lf %lf %lf", &length, &width, &depth, &weight);
        if ((length <= 56.0 && width <= 45.0 && depth <= 25.0 || length + width + depth <= 125.0) && weight <= 7.0)
        {
            isValid = true;
            allowedBags++;
        }

        printf("%d\n", isValid ? 1 : 0);
    }

    printf("%d\n", allowedBags);
    return 0;
}