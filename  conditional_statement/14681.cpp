#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int x,y;
    cin >> x;
    cin >> y;

    if (x> 0 && y> 0)
    {
        cout << '1';
    }
    else if (x<0 && y>0)
    {
        cout << '2';
    }
    else if (x<0 && y<0)
    {
        cout << '3';
    }
    else
    {
        cout << '4';
    }
}