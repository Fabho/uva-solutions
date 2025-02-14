#include <iostream>
#include <cstdio>
using namespace std;

int getDigitsSum(int number)
{
    int sum = 0;

    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main()
{
    int input, sum;

    while (scanf("%d", &input) && input != 0)
    {
        int sum = input;
        do
        {
            sum = getDigitsSum(sum);
        } while (sum >= 10);

        printf("%d\n", sum);
    }
    return 0;
}