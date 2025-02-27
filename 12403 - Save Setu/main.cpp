#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    string instruction;
    int operations, amount, collected = 0;

    scanf("%d", &operations);

    for (int i = 0; i < operations; i++)
    {
        cin >> instruction;
        if (instruction == "donate")
        {
            scanf("%d", &amount);
            collected += amount;
        }
        else
            printf("%d\n", collected);
    }
    return 0;
}