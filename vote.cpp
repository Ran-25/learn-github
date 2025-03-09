#include<iostream>
using namespace std;

int main()
{
    int age, year;

    cout << "Enter your age: ";
    cin >> age;

    cout << "What year you study: ";
    cin >> year;

    if(age >= 18)
    {
        if(year <= 2 )
        {
            cout <<"You are eligible to vote" << endl;
        }
        else
        {
            cout << "You are not eligible to vote" << endl;
        }

    }

    else if(age < 18)
    {
        cout << "You are not eligible to vote" << endl;
    }

    else
    {
        cout << "Invalid" << endl;
    }



    return 0;
}