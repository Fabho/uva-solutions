#include <cstdio>
#include <iostream>
using namespace std;

bool isOne(string word)
{
    if (word.size() == 3)
        if ((word[0] == 'o' && word[1] == 'n') || (word[0] == 'o' && word[2] == 'e') || (word[1] == 'n' && word[2] == 'e'))
            return true;

    return false;
}

bool isTwo(string word)
{
    if (word.size() == 3)
        if ((word[0] == 't' && word[1] == 'w') || (word[0] == 't' && word[2] == 'o') || (word[1] == 'w' && word[2] == 'o'))
            return true;

    return false;
}

int main()
{

    string word;
    int cases;

    scanf("%d", &cases);

    while (cases--)
    {
        cin >> word;

        if (isOne(word))
            printf("1\n");
        else if (isTwo(word))
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}