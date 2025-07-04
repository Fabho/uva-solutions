#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

map<char, int> keyMap = {
    {'a', 1}, {'b', 2}, {'c', 3}, {'d', 1}, {'e', 2}, {'f', 3}, {'g', 1}, {'h', 2}, {'i', 3}, {'j', 1}, {'k', 2}, {'l', 3}, {'m', 1}, {'n', 2}, {'o', 3}, {'p', 1}, {'q', 2}, {'r', 3}, {'s', 4}, {'t', 1}, {'u', 2}, {'v', 3}, {'w', 1}, {'x', 2}, {'y', 3}, {'z', 4}, {' ', 1}};

int main()
{
    int messages, result;
    string message;

    scanf("%d", &messages);
    getline(cin, message);

    for (int i = 0; i < messages; i++)
    {
        getline(cin, message);
        result = 0;

        for (int j = 0; j < message.length(); j++)
            result += keyMap[message[j]];

        printf("Case #%d: %d\n", i + 1, result);
    }

    return 0;
}