#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{

    int cases, maxAppearance;
    string line;

    scanf("%d", &cases);
    getline(cin, line);

    while (cases--)
    {
        getline(cin, line);
        maxAppearance = -1;

        map<char, int> characters;

        for (int i = 0; i < line.size(); i++)
        {
            if (isalpha(line[i]))
            {
                characters[tolower(line[i])]++;
                maxAppearance = max(maxAppearance, characters[tolower(line[i])]);
            }
        }

        for (map<char, int>::iterator it = characters.begin(); it != characters.end(); it++)
        {
            if (it->second == maxAppearance)
                cout << it->first;
        }

        printf("\n");
    }
    return 0;
}