#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int values, input;
    bool isJollyJumper;

    while (scanf("%d", &values) != EOF)
    {
        vector<int> sequence, output;
        isJollyJumper = false;

        for (int i = 0; i < values; i++)
        {
            scanf("%d", &input);
            sequence.push_back(input);
        }

        for (int i = 0, j = 1; j < sequence.size(); i++, j++)
            output.push_back(abs(sequence[i] - sequence[j]));

        sort(output.begin(), output.end());

        if (sequence.size() == 1)
            isJollyJumper = true;
        else
        {
            for (int i = 0; i < output.size(); i++)
            {
                if (output[i] != i + 1)
                {
                    isJollyJumper = false;
                    break;
                }
                else
                    isJollyJumper = true;
            }
        }

        isJollyJumper ? printf("Jolly\n") : printf("Not jolly\n");
    }
    return 0;
}