#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    int groups, groupSize;

    while (scanf("%d", &groups) && groups)
    {
        cin >> str;

        groupSize = str.size() / groups;

        string::iterator it = str.begin();

        while (it != str.end())
        {
            reverse(it, it + groupSize);
            it += groupSize;
        }

        cout << str << '\n';
    }
    return 0;
}