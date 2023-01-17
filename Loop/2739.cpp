#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int num;
    cin >> num;

    for (int i=1; i<10;i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}