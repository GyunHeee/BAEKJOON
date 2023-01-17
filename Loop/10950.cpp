#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int num; 
    cin >> num;

    int n1, n2;

    for (int i=0; i<num;i++)
    {
        scanf("%d %d", &n1, &n2);
        cout << n1 + n2 << endl;
    }
}