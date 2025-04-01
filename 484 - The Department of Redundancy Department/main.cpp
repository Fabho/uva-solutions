#include <unordered_map>
#include <iostream>
using namespace std;

int main()
{
    // Initializer List
    unordered_map<string, int> unordered_map1 = {
        {"Ane", 0},
        {"Zne", -1},
        {"One", 1},
        {"Two", 2},
        {"Three", 3},
    };

    for (const auto &key_value : unordered_map1)
    {
        string key = key_value.first;
        int value = key_value.second;

        cout << key << " - " << value << endl;
    }
    return 0;
}