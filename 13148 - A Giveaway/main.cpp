#include <cstdio>
#include <set>

using namespace std;

int main()
{
    set<int> especialNumbers = {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
                                1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
                                47045881, 64000000, 85766121};
    int input;

    while (scanf("%d", &input) && input)
    {
        if (especialNumbers.find(input) != especialNumbers.end())
            printf("Special\n");
        else
            printf("Ordinary\n");
    }

    return 0;
}