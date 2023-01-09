#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int king, queen, look, bs, knight, p;

    cin >> king;
    cin >> queen;
    cin >> look;
    cin >> bs;
    cin >> knight;
    cin >> p;

    cout << 1-king << " " << 1-queen << " " << 2-look << " " << 2-bs << " ";
    cout << 2-knight << " " << 8-p;
}