#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    int cases, instructions, position, previousInstruction;
    string instruction, nestedInstruction;
    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d", &instructions);
        vector<string> instructionsLog;
        position = 0;

        for (int i = 0; i < instructions; i++)
        {
            cin >> instruction;

            if (instruction == "LEFT")
            {
                position--;
                instructionsLog.push_back(instruction);
            }
            else if (instruction == "RIGHT")
            {
                position++;
                instructionsLog.push_back(instruction);
            }
            else
            {
                string tmp;
                cin >> tmp >> previousInstruction;
                instructionsLog.push_back(to_string(previousInstruction));

                if (instructionsLog[previousInstruction - 1] == "LEFT")
                    position--;
                else if (instructionsLog[previousInstruction - 1] == "RIGHT")
                    position++;
                else
                {
                    do
                    {
                        nestedInstruction = instructionsLog[previousInstruction - 1];

                        if (nestedInstruction == "LEFT")
                            position--;
                        else if (nestedInstruction == "RIGHT")
                            position++;
                        else
                        {
                            previousInstruction = stoi(nestedInstruction);
                        }

                    } while (nestedInstruction != "LEFT" && nestedInstruction != "RIGHT");
                }
            }
        }

        printf("%d\n", position);
    }

    return 0;
}