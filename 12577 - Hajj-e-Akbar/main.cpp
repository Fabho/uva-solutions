#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    int cases = 1;
    string input;

    while (cin >> input && input != "*")
    {
        if (input == "Hajj")
            printf("Case %d: Hajj-e-Akbar\n", cases++);
        else
            printf("Case %d: Hajj-e-Asghar\n", cases++);
    }
    return 0;
}