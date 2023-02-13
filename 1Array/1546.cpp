#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int num;
    cin >> num;

    vector<int> arr;
    arr.resize(num);

    for (int i=0; i<num; i++) {
        cin >> arr[i];
    }

    int max = -1;

    for (int i=0; i<num; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    
    double average = 0;

    double sum = 0;

    for (int i=0; i<num;i++) {
        sum = sum + (double)arr[i]/max*100;
    }

    average = sum / num;
    cout << average;
}