#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int cases, salaryOne, salaryTwo, salaryThree, answer;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d %d %d", &salaryOne, &salaryTwo, &salaryThree);
        vector<int> salaries;
        salaries.push_back(salaryOne);
        salaries.push_back(salaryTwo);
        salaries.push_back(salaryThree);

        sort(salaries.begin(), salaries.end());

        printf("Case %d: %d\n", i + 1, salaries[1]);
    }

    return 0;
}