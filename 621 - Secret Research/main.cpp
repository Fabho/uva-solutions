#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int cases;
    string input;

    scanf("%d", &cases);

    while (cases--)
    {
        cin >> input;

        if (input == "1" || input == "4" || input == "78")
        {
            printf("+\n");
        }
        else if (input.size() > 2 && input[input.size() - 2] == '3' && input[input.size() - 1] == '5')
        {
            printf("-\n");
        }
        else if (input.size() > 2 && input[0] == '9' && input[input.size() - 1] == '4')
        {
            printf("*\n");
        }
        else if (input.size() > 3 && input[0] == '1' && input[1] == '9' && input[2] == '0')
        {
            printf("?\n");
        }
        else
            printf("?\n");
    }
    return 0;
}