#include <iostream>

using namespace std;

int factorial(int number) {
    int Number = 1;
    for(int i=1; i <= number; i++) {
        Number*=i;
    }
    return Number;
}
int main() {
    int n=0;
    cin >> n;
    for(int i=1; i <= n; i++) {
        for(int k=0; k <=i; k++) {
            // This would calculate C(i, k)
            int I_fact = factorial(i);
            int K_fact = factorial(k);
            int i_Minus_k_fact = factorial(i-k);
            int result = I_fact / (K_fact * i_Minus_k_fact);
            cout << result;
        }
        cout << '\n';
    }

    return 0;
}