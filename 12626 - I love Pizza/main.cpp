#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int getMargaritas(map<char, int> ingredients)
{
    int margaritas = 0;

    while (true)
    {
        if (ingredients['M'] >= 1 && ingredients['A'] >= 3 && ingredients['R'] >= 2 && ingredients['G'] >= 1 && ingredients['I'] >= 1 && ingredients['T'] >= 1)
        {
            margaritas++;
            ingredients['M']--;
            ingredients['A'] -= 3;
            ingredients['R'] -= 2;
            ingredients['G']--;
            ingredients['I']--;
            ingredients['T']--;
        }
        else
            break;
    }

    return margaritas;
}

int main()
{
    string ingredients;
    int cases, total;

    scanf("%d", &cases);

    while (cases--)
    {
        map<char, int> ingredientsMap;

        cin >> ingredients;

        for (int i = 0; i < ingredients.size(); i++)
            ingredientsMap[ingredients[i]]++;

        total = getMargaritas(ingredientsMap);
        printf("%d\n", total);
    }
    return 0;
}