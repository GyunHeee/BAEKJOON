#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int num;
    cin >> num;

    int count = 0;

    if (num < 100)
    {
        cout << num;
    }
    else if (num >= 100 && num < 1000)
    {
        for (int i = 100; i <= num; i++)
        {
            // 123
            // (i % 10) + (i % 100) / 10 + (i / 100);
            if (((i % 100) / 10) * 2 == (i % 10) + (i / 100))
            {
                count++;
            }
        }
        cout << count + 99;
    }
    else
    {
        cout << 144;
    }
}