#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int AllPrice;
    cin >> AllPrice;

    int type;
    cin >> type;
    int price;
    int num;

    int sum = 0;

    for (int i=0; i<type; i++)
    {
        cin >> price;
        cin >> num;
        sum = sum + price * num;
    }
    if (sum == AllPrice)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}