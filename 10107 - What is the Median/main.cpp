#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> numbers;

int getMedian()
{
    if (numbers.size() % 2 == 0)
        return (numbers[numbers.size() / 2] + numbers[numbers.size() / 2 - 1]) / 2;
    else
        return numbers[numbers.size() / 2];
}

int main()
{
    int input, median;

    while (scanf("%d", &input) != EOF)
    {
        numbers.push_back(input);
        sort(numbers.begin(), numbers.end());
        median = getMedian();
        printf("%d\n", median);
    }

    return 0;
}