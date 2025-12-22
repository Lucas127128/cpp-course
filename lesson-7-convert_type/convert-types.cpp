#include <iostream>

using namespace std;
int main() {
  int correct = 5;
  int question = 10;
  double score = (double)correct / question * 100;
  cout << typeid(correct).name() << '\n';
  cout << score << '%';

  return 0;
}