#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

struct Person
{
    string name;
    int day, month, year;
};

bool personComparator(Person a, Person b)
{
    if (a.year != b.year)
        return a.year < b.year;
    if (a.month != b.month)
        return a.month < b.month;
    return a.day < b.day;
}

int main()
{
    vector<Person> personsCollection;
    int persons, day, month, year;
    string name;

    scanf("%d", &persons);

    for (int i = 0; i < persons; i++)
    {
        cin >> name >> day >> month >> year;

        Person person = {name, day, month, year};
        personsCollection.push_back(person);
    }

    sort(personsCollection.begin(), personsCollection.end(), personComparator);

    cout << personsCollection[personsCollection.size() - 1].name << '\n';
    cout << personsCollection[0].name << '\n';

    return 0;
}