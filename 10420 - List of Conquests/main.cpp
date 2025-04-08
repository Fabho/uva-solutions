#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main()
{
    int rows;
    string line, country;
    map<string, int> countries;

    scanf("%d", &rows);
    getline(cin, line);

    while (rows--)
    {
        cin >> country;
        getline(cin, line);
        countries[country]++;
    }

    for (map<string, int>::iterator it = countries.begin(); it != countries.end(); it++)
        cout << it->first << " " << it->second << '\n';

    return 0;
}