#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string input, sequence, reverseSequence;

    while (getline(cin, input))
    {
        if (input == "DONE")
            break;

        sequence = "";

        for (int i = 0; i < input.size(); i++)
            if (isalpha(input[i]))
                sequence += tolower(input[i]);

        reverseSequence = sequence;
        reverse(reverseSequence.begin(), reverseSequence.end());

        if (sequence == reverseSequence)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }

    return 0;
}