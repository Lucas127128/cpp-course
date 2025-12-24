#include <cmath>
#include <iostream>

using namespace std;
int main() {
  double a = 0;
  double b = 0;
  double c = 0;
  cout << "What is the length of side A in the triangle? ";
  cin >> a;
  cout << "\n";

  cout << "What is the length of side B in the triangle? ";
  cin >> b;

  c = sqrt(pow(a, 2) + pow(b, 2));
  cout << c << "\n";

  return 0;
}