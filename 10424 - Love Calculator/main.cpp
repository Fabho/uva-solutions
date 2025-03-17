#include <iostream>
#include <cstdio>
#include <cctype>
#include <string>
using namespace std;

int getIntegerValue(string str)
{
    int result = 0, charValue;
    char character;

    for (int i = 0; i < str.size(); i++)
    {
        character = str[i];

        if (isalpha(character))
        {
            if (isupper(character))
                character = tolower(character);

            charValue = (int)character - 96;
            result += charValue;
        }
    }

    return result;
}

int getSingleValue(int val)
{

    int result = 0;

    while (val > 0)
    {
        result = result + (val % 10);
        val /= 10;
    }

    if (result >= 10)
        return getSingleValue(result);
    else
        return result;
}

int main()
{
    string firstName, secondName;
    int firstNameValue, secondNameValue;
    double answer;

    while (getline(cin, firstName))
    {
        getline(cin, secondName);

        firstNameValue = getIntegerValue(firstName);
        secondNameValue = getIntegerValue(secondName);
        firstNameValue = getSingleValue(firstNameValue);
        secondNameValue = getSingleValue(secondNameValue);

        if (firstNameValue > secondNameValue)
            answer = (double)secondNameValue / (double)firstNameValue * 100;
        else
            answer = (double)firstNameValue / (double)secondNameValue * 100;

        printf("%.2f %%\n", answer);
    }

    return 0;
}