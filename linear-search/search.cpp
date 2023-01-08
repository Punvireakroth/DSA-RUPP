#include <iostream>
using namespace std;

int main() {
    int myArr[] = {1, 4, 7, 2, 6, 5, 3, 65, 40, 22, 0, 23};
    int arrLen = sizeof(myArr) / sizeof(myArr[0]);
    cout << "What number you want to search: " << endl;
    int num;
    cin >> num;
    for(int i = 0; i < arrLen; i++) {
        if(myArr[i] == num) {
            cout << "Your number is found at " << i + 1 << " index of array" << endl; 
        }
    }
    return 0;
}