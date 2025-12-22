#include <iostream>

using namespace std;

int main() {
    int quantityOfNumber=0;
    cin >> quantityOfNumber;
    int firstOne=0;
    int secondOne=1;
    long int a [50] = {0,1};
    for (int i=2; i<50;i++){
        a[i]=a[i-1]+a[i-2];
    }
    int QantityOfNumber=quantityOfNumber-1;
    for (int i = 0;i<=QantityOfNumber;i++) {
        cout << a[i] << '\n';
    }
    cout << '\n';
    return 0;
}