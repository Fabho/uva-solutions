#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{

    map<string, string> dictionary;
    string line, english, foreign, query;

    while (getline(cin, line))
    {

        if (line != "")
        {

            for (int i = 0; i < line.size(); i++)
            {
                if (line[i] == ' ')
                {
                    english = line.substr(0, i);
                    foreign = line.substr(i + 1, line.size() - i - 1);
                    dictionary[foreign] = english;
                    break;
                }
            }
        }
        else
        {
            while (cin >> query)
            {
                if (dictionary.find(query) != dictionary.end())
                    cout << dictionary[query] << endl;
                else
                    cout << "eh" << endl;
            }
        }
    }

    return 0;
}