#include <iostream>
#include <string>
using namespace std;

int main()
{

    string row;
    bool isLeftQuote = true;

    while (getline(cin, row))
    {
        for (int i = 0; i < row.size(); i++)
        {
            if (row[i] == '\"')
            {
                if (isLeftQuote)
                    cout << "``";
                else
                    cout << "''";

                isLeftQuote = !isLeftQuote;
            }
            else
                cout << row[i];
        }
        cout << '\n';
    }
    return 0;
}