#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    vector<string> websites;
    int cases, score, maxScore;
    string url;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        maxScore = -1;

        for (int j = 0; j < 10; j++)
        {
            cin >> url >> score;

            if (score > maxScore)
            {
                maxScore = score;
                websites.erase(websites.begin(), websites.end());
                websites.push_back(url);
            }
            else if (score == maxScore)
                websites.push_back(url);
        }

        printf("Case #%d:\n", i + 1);

        for (int k = 0; k < websites.size(); k++)
            cout << websites[k] << '\n';

        websites.erase(websites.begin(), websites.end());
    }

    return 0;
}