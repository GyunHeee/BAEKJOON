#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int hour, min;
    int second;
    cin >> hour;
    cin >> min;
    cin >> second;
    int count = 0;

    int sum = min + second;

    if (sum < 60)
    {
        cout << hour << " " << sum;
    }
    else 
    {
        while (sum>= 0)
        {
            sum = sum - 60;
            count++;
        }

        if (hour + count -1  <= 23)
        {
            cout << hour + count - 1 << " " << sum + 60;
        }
        else 
        {
            cout << hour - 23 + count - 2 << " " << sum + 60;
        }
    }
}