#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cases, students, answer, maxScore;

    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%d", &students);
        vector<int> scores(students);

        for (int i = 0; i < students; i++)
            scanf("%d", &scores[i]);

        answer = -150001;
        maxScore = scores[0];

        for (int x = 1; x < students; x++)
        {
            answer = max(answer, maxScore - scores[x]);
            maxScore = max(maxScore, scores[x]);
        }

        printf("%d\n", answer);
    }
    return 0;
}