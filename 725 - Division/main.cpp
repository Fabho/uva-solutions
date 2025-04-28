#include <cstdio>
#include <map>
using namespace std;

bool areDigitsUnique(int numerator, int denominator)
{
    map<int, int> digits;

    while (numerator != 0)
    {
        digits[numerator % 10]++;
        numerator /= 10;
    }

    while (denominator != 0)
    {
        digits[denominator % 10]++;
        denominator /= 10;
    }

    if (digits.size() != 10)
        return false;

    for (auto it = digits.begin(); it != digits.end(); it++)
        if (it->second > 1)
            return false;

    return true;
}

int main()
{
    int input, numerator, tmpNum, tmpDen;
    bool hasAnswer, printAnswer = false;

    while (scanf("%d", &input))
    {
        if (input == 0)
            break;

        if (!printAnswer)
            printAnswer = true;
        else
            printf("\n");

        hasAnswer = false;

        for (int i = 1234; i <= 98765; i++)
        {
            numerator = input * i;

            if (numerator > 98765)
                break;

            if (numerator < 10000)
                tmpNum = numerator * 10;
            else
                tmpNum = numerator;

            if (i < 10000)
                tmpDen = i * 10;
            else
                tmpDen = i;

            if (areDigitsUnique(tmpNum, tmpDen))
            {
                hasAnswer = true;
                if (numerator < 10000)
                    printf("0%d / %d = %d\n", numerator, i, input);
                else if (i < 10000)
                    printf("%d / 0%d = %d\n", numerator, i, input);
                else
                    printf("%d / %d = %d\n", numerator, i, input);
            }
        }

        if (!hasAnswer)
            printf("There are no solutions for %d.\n", input);
    }

    return 0;
}