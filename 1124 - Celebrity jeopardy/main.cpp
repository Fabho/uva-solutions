#include <iostream>
#include <string>
using namespace std;

int main()
{
    string equation;
    while (getline(cin, equation))
    {
        cout << equation << "\n";
    }
    return 0;
}