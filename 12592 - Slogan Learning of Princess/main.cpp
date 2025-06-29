#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int slogans, queries;
    string firstPart, secondPart, query;
    map<string, string> sloganMap;

    scanf("%d", &slogans);
    getline(cin, firstPart);

    for (int i = 0; i < slogans; i++)
    {
        getline(cin, firstPart);
        getline(cin, secondPart);
        sloganMap[firstPart] = secondPart;
    }

    scanf("%d", &queries);
    getline(cin, query);

    while (queries--)
    {
        getline(cin, query);
        cout << sloganMap[query] << '\n';
    }

    return 0;
}