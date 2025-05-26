#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool cmp(char a, char b)
{
    if (tolower(a) == tolower(b))
        return a < b;

    return tolower(a) < tolower(b);
}

int main()
{
    int cases;
    string word;

    scanf("%d", &cases);

    while (cases--)
    {
        cin >> word;
        sort(word.begin(), word.end(), cmp);

        do
        {
            cout << word << endl;
        } while (next_permutation(word.begin(), word.end(), cmp));
    }

    return 0;
}