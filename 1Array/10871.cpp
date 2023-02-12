#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int num, target;
    cin >> num;
    cin >> target;

    vector<int> arr;
    arr.resize(num);

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] < target)
        {
            cout << arr[i] << " ";
        }
    }
}