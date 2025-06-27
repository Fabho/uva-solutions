#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    string input;

    while (getline(cin, input))
    {

        for (int i = 0; i < input.size(); i++)
        {
            char ch = input[i] - 7;
            cout << ch;
        }
        printf("\n");
    }
    return 0;
}