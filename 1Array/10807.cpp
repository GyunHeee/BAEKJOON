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
    int target;
    cin >> target;

    int count = 0;

    for (int i = 0; i < num; i++)
    {
        if (target == arr[i])
        {
            count++;
        }
    }

    cout << count;
}