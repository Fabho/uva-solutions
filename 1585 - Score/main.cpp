#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string score;
    int cases, rightAnswers, cumulativeScore;

    scanf("%d", &cases);

    while (cases--)
    {
        cin >> score;
        rightAnswers = cumulativeScore = 0;

        for (int i = 0; i < score.length(); i++)
        {
            if (score[i] == 'O')
            {
                rightAnswers++;
                cumulativeScore += rightAnswers;
            }
            else
                rightAnswers = 0;
        }

        printf("%d\n", cumulativeScore);
    }
    return 0;
}