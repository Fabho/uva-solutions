#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string input, language;
    int counter = 1;

    while (cin >> input)
    {
        if (input == "#")
            break;

        if (input == "HELLO")
            language = "ENGLISH";
        else if (input == "HOLA")
            language = "SPANISH";
        else if (input == "HALLO")
            language = "GERMAN";
        else if (input == "BONJOUR")
            language = "FRENCH";
        else if (input == "CIAO")
            language = "ITALIAN";
        else if (input == "ZDRAVSTVUJTE")
            language = "RUSSIAN";
        else
            language = "UNKNOWN";

        cout << "Case " << counter++ << ": " << language << '\n';
    }

    return 0;
}