#include <iostream>

using namespace std;
int main() {
  cout << "hello" << '\n';
  int x, y, z;
  x = 0;
  y = 0;
  z = 0;
  x = y = z = 4;
  cout << x + y + z << '\n';

  double weight, height;
  weight = 35;
  height = 1.6;
  double BMI = weight / (height * height);
  cout << BMI << '\n';

  return 0;
}