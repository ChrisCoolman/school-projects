// Chris C
// Noah propmt
// 9/24/2024
// Extra: Toddler

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "How old are you? ";
    cin >> age;
    if(age <= 2)
    {
        cout << "Toddler";
    }
    else if(age < 13)
    {
        cout << "Child";
    }
    else if(age <= 19)
    {
        cout << "Teenager";
    }
    else if(age <= 63)
    {
        cout << "adult";
    }
    else
    {
        cout << "Senior";
    }


    return 0;
}
