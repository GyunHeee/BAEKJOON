#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int num;
    cin >> num;

    for (int i=0; i<num;i++)
    {
        for (int j=0; j<num; j++)
        {
            if (i >= j)
                cout << '*';
        }
        cout << endl;
    }
}