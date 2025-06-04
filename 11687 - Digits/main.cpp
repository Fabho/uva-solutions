#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string input, current, next;

    while (cin >> input && input != "END")
    {

        int index = 0;
        current = input;

        while (1)
        {
            next = to_string(current.length());
            if (next == current)
                break;
            current = next;
            index++;
        }
        printf("%d\n", index + 1);
    }
    return 0;
}