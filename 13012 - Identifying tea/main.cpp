#include <cstdio>

int main()
{

    int selectedTea, userGuess, rightAnswers;

    while (scanf("%d", &selectedTea) != EOF)
    {

        rightAnswers = 0;

        for (int i = 0; i < 5; i++)
        {

            scanf("%d", &userGuess);

            if (userGuess == selectedTea)
                rightAnswers++;
        }

        printf("%d\n", rightAnswers);
    }

    return 0;
}