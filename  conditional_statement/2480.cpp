#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int first, second, third;

    cin >> first;
    cin >> second;
    cin >> third;

    if (first == second && second == third && first == third)
    {
        cout << 10000 + first * 1000;
    }
    else if (first == second)
    {
        cout << 1000 + first * 100;
    }
    else if (third == second)
    {
        cout << 1000 + second * 100;
    }
    else if (third == first)
    {
        cout << 1000 + first * 100;
    }
    else
    {
        if (first >= second && first >= third)
        {
            cout << first * 100;
        }
        else if (second >= first && second >= third)
        {
            cout << second * 100;
        }
        else if (third >= first && third >= second)
        {
            cout << third * 100;
        }
    }
}