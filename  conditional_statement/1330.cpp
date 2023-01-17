#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int A, B;
    cin >> A;
    cin >> B;
    if (A > B){
        cout << '>';
    }
    else if (A < B)
    {
        cout << '<';
    }
    else
    {
        cout << "==";
    }
}