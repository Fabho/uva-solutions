#include <cstdio>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int cases, paidCharacters, value, lines;
    string line;
    char character;
    double answer;

    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d", &paidCharacters);
        map<char, int> charactersMap;

        for (int i = 0; i < paidCharacters; i++)
        {
            cin >> character >> value;
            charactersMap[character] = value;
        }

        answer = 0.0;
        scanf("%d", &lines);
        getline(cin, line);

        for (int j = 0; j < lines; j++)
        {
            getline(cin, line);

            for (int k = 0; k < line.size(); k++)
                answer += charactersMap[line[k]];
        }

        printf("%.2f$\n", answer / 100.0);
    }

    return 0;
}