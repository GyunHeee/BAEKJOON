#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int num;
    cin >> num;

    for (int i=0;i<num;i++) {
        vector<int> arr;
        int count;
        cin >> count;
        arr.resize(count);

        for (int j=0;j<count;j++) {
            cin >> arr[j];
        }

        double sum = 0;

        for (int k = 0; k<count; k++) {
            sum = sum + arr[k];
        }

        int sucess = 0;
        double average = 0;
        average = sum / count;
        
        

        for (int i=0; i<count; i++ ){
            if (arr[i] > average) {
                sucess++;
            }
        }
        printf("%.3f",double(sucess) / count * 100);
        cout << "%" << endl;

    }
}