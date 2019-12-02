#include <iostream>
using namespace std;

int main(){
    long long number;
    do {
        cout << "輸入isbn：";
        cin >> number;
    } while (number < 1000000000 );

    int lastNumber = number % 10;
    int times = 0;

    number -= lastNumber;
    number /= 10;

    for (int i = 9; i > 0; i --){
        int variable = number % 10;
        times += i * variable;

        number -= number % 10;
        number /= 10;
        
        while (times > 11){
            times -= 11;
        }
    }
    if (times == lastNumber){
        cout << "正確";
    } else {
        cout << "錯誤";
    }
}
