#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    int maxRepetitions;

    while (getline(cin, input))
    {
        map<char, int> repetitions;
        maxRepetitions = 0;

        for (int i = 0; i < input.size(); i++)
        {
            if (isalpha(input[i]))
            {
                repetitions[input[i]]++;
                maxRepetitions = max(maxRepetitions, repetitions[input[i]]);
            }
        }

        for (auto it = repetitions.begin(); it != repetitions.end(); it++)
        {
            if (it->second == maxRepetitions)
                printf("%c", it->first);
        }

        printf(" %d\n", maxRepetitions);
    }
    return 0;
}