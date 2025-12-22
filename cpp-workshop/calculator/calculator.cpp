#include <iostream>

using namespace std;

int main() {
  string Operator = "";
  int number1 = 0;
  int number2 = 0;
  int results = 0;
  cin >> Operator;

  if (Operator == "Add") {
    cin >> number1;
    cin >> number2;
    results = number1 + number2;
    cout << results << '\n';
  } else if (Operator == "Minus") {
    cin >> number1;
    cin >> number2;
    results = number1 - number2;
    cout << results << '\n';
  } else if (Operator == "Multiply") {
    cin >> number1;
    cin >> number2;
    results = number1 * number2;
    cout << results << '\n';
  } else if (Operator == "Divide") {
    cin >> number1;
    cin >> number2;
    results = number1 / number2;
    cout << results << '\n';
  }
  return 0;
}