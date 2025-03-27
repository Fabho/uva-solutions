#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

int main()
{
    int cases, firstLanguageWords, secondLanguageWords;
    string word;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d %d", &firstLanguageWords, &secondLanguageWords);
        getline(cin, word);

        vector<string> firstLanguage, secondLanguage;

        for (int j = 0; j < firstLanguageWords; j++)
        {
            getline(cin, word);
            firstLanguage.push_back(word);
        }

        for (int j = 0; j < secondLanguageWords; j++)
        {
            getline(cin, word);
            secondLanguage.push_back(word);
        }

        set<string> concatenatedWords;

        for (int k = 0; k < firstLanguageWords; k++)
            for (int l = 0; l < secondLanguageWords; l++)
                concatenatedWords.insert(firstLanguage[k] + secondLanguage[l]);

        printf("Case %d: %d\n", i + 1, concatenatedWords.size());
    }

    return 0;
}