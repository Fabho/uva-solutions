#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

    string input, map = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    int index;

    while (getline(cin, input))
    {
        for (int i = 0; i < input.size(); i++)
        {
            index = map.find(tolower(input[i]));

            if (index != string::npos)
                cout << map[index - 2];
            else
                cout << input[i];
        }

        cout << "\n";
    }

    return 0;
}