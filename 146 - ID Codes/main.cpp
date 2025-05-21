#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string code;

    while (cin >> code)
    {
        if (code == "#")
            break;

        bool hasNextPermutation = next_permutation(code.begin(), code.end());
        hasNextPermutation ? cout << code << endl : cout << "No Successor" << endl;
    }

    return 0;
}