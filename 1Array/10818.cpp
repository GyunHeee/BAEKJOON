#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int num;
    cin >> num;

    vector<int> arr;
    arr.resize(num);

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    int min = 1000000;
    int max = -10000000;

    for (int i = 0; i < num; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }

    cout << min << " " << max;
}