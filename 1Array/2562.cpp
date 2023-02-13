#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    vector<int> arr;
    arr.resize(9);


    for (int i=0;i<9;i++) {
        cin >> arr[i];
    }

    int max = 0;

    for (int i=0; i<9; i++ ){
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    cout << max << endl;
    for (int i=0; i<9; i++) {
        if (arr[i] == max) {
            cout << i + 1;
        }
    }
}