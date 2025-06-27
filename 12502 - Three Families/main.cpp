#include <cstdio>

int main()
{
    int cases, aHours, bHours, payment;
    double hours, hoursPerFamily, extraHours;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d %d %d", &aHours, &bHours, &payment);

        hours = aHours + bHours;
        hoursPerFamily = hours / 3.0;
        extraHours = aHours - hoursPerFamily;

        printf("%.0lf\n", (extraHours * (double)payment) / hoursPerFamily);
    }

    return 0;
}