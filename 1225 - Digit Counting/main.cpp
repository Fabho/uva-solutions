#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int cases, input, tmpNumber;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d", &input);
        vector<int> digits(10, 0);

        for (int i = 1; i <= input; i++)
        {
            tmpNumber = i;

            while (tmpNumber > 0)
            {
                digits[tmpNumber % 10]++;
                tmpNumber /= 10;
            }
        }

        printf("%d %d %d %d %d %d %d %d %d %d\n", digits[0], digits[1], digits[2], digits[3], digits[4], digits[5], digits[6], digits[7], digits[8], digits[9]);
    }
    return 0;
}