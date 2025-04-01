#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{

    set<string> words;
    string line, word;

    while (getline(cin, line))
    {
        word = "";
        for (int i = 0; i < line.size(); i++)
        {
            if (isalpha(line[i]))
            {
                word += tolower(line[i]);
            }
            else if (word.size() > 0)
            {
                words.insert(word);
                word = "";
            }
        }

        if (word.size() > 0)
            words.insert(word);
    }

    for (set<string>::iterator it = words.begin(); it != words.end(); it++)
    {
        cout << *it << '\n';
    }

    return 0;
}