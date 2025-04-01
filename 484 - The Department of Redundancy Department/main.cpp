#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    map<int, int> numbers;
    vector<int> order;
    int number;

    while (scanf("%d", &number) != EOF)
    {
        numbers[number]++;
        if (std::find(order.begin(), order.end(), number) == order.end())
            order.push_back(number);
    }

    for (int i = 0; i < order.size(); i++)
        printf("%d %d\n", order[i], numbers[order[i]]);

    return 0;
}
