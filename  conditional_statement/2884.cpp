#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int hour, min;
    cin >> hour;
    cin >> min;

    if (min >= 45)
    {
        cout << hour << " " << min - 45;
    }
    else if (min < 45 && hour != 0)
    {
        cout << hour - 1 << " " << min + 60 - 45;
    }
    else if (min < 45 && hour == 0)
    {
        cout << 23 << " " << min + 60 - 45;
    }
}