#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    vector<int> arr;
    arr.resize(10);

    for (int i=0; i<10; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<10; i++) {
        arr[i] = arr[i] % 42;
    }

    int target = 0;

    for (int i=0; i<10; i++) {
        int count = 0;
        for (int j=i+1; j<10; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 0) {
            target++;
        }
    }

    cout << target;
}
