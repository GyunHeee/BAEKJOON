#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    vector<int> arr;
    arr.resize(10000);

    for (int j = 1; j <= 10000; j++)
    {
        int num;
        if (j == 10000)
        {
            ;
        }
        else if (j < 10000 && j >= 1000)
        {
            num = j + (j % 10) + (j % 100) / 10 + (j % 1000) / 100 + (j / 1000);
            // 7654      4          5             6                    7
        }
        else if (j < 1000 && j >= 100)
        {
            num = j + (j % 10) + (j % 100) / 10 + (j / 100);
        }
        else if (j < 100 && j >= 10)
        {
            num = j + (j % 10) + (j / 10);
        }
        else
        {
            num = j + (j % 10);
        }
        for (int i = 0; i < 100000; i++)
        {
            if (num == i)
            {
                arr[i] = 1;
            }
        }
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
        }
    }
}