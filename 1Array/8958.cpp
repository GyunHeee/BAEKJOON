#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    // int num;
    // cin >> num;

    char arr[81];

    int sum = 0;
    int count = 0;

    int num = 0;
    cin >> num;


    for (int j=0; j< num; j++) {
        scanf("%s", arr);
        for (int i=0; i<81; i++) {
            if (arr[i] == 'O') {
                count++;
                sum = sum + count;
                // cout << sum << endl;
            }
            else if (arr[i] == 'X') {
                count = 0;
            }
            else {
                break;
            }
        }
        cout << sum << endl;
        sum = 0;
        count = 0;
    }
}