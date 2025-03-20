#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int cases, termOne, termTwo, final, attendance, classTestOne, classTestTwo, classTestThree, testGrade, finalGrade;
    char grade;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d %d %d %d %d %d %d", &termOne, &termTwo, &final, &attendance, &classTestOne, &classTestTwo, &classTestThree);

        vector<int> classTests = {classTestOne, classTestTwo, classTestThree};
        sort(classTests.begin(), classTests.end());

        testGrade = (classTests[1] + classTests[2]) / 2;
        finalGrade = termOne + termTwo + final + attendance + testGrade;

        if (finalGrade >= 90)
            grade = 'A';
        else if (finalGrade >= 80)
            grade = 'B';
        else if (finalGrade >= 70)
            grade = 'C';
        else if (finalGrade >= 60)
            grade = 'D';
        else
            grade = 'F';

        printf("Case %d: %c\n", i + 1, grade);
    }
    return 0;
}