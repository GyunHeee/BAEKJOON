#include <iostream>

using namespace std;

int main(void)
{
    int number1;
    int number2;

    cin >> number1; // 수를 입력받음
    cin >> number2; 

    int num1[3];
    int num2[3];

    for (int i=0;i<3;i++)
    {
        // 수를 int형 배열로 쪼개는 과정
        num1[2] = number1 % 10;
        num1[1] = number1 % 100 - num1[2];
        num1[0] = number1 % 1000 - (num1[1] + num1[2]);
    }

    for (int i=0;i<3;i++)
    {
        num2[2] = number2 % 10;
        num2[1] = number2 % 100 - num2[2];
        num2[0] = number2 % 1000 - (num2[1] + num2[2]);
    }

    //곱셈 연산과정
    int result1 = (num1[0] * num2[2]) + (num1[1] * num2[2]) + (num1[2] * num2[2]); 
    int result2 = (num1[0] * num2[1]) + (num1[1] * num2[1]) + (num1[2] * num2[1]);
    int result3 = (num1[0] * num2[0]) + (num1[1] * num2[0]) + (num1[2] * num2[0]);

    // 최종 곱셈 값
    int FinalResult = result1 + result2 + result3;

    cout << result1 << endl; 
    cout << result2 / 10 << endl; 
    cout << result3 / 100<< endl; 

    cout << FinalResult; 
}

