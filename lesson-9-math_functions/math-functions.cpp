#include <cmath>
#include <iostream>

using namespace std;
int main() {
  double x = 4;
  double y = 5;
  double z;

  z = max(x, y);
  cout << z << '\n';

  z = min(x, y);
  cout << z << '\n';

  z = pow(2, 12);
  cout << z << '\n';

  z = sqrt(144);
  cout << z << '\n';

  z = abs(-12);
  cout << z << '\n';

  double π = 3.14159265;
  z = round(π);
  cout << z << '\n';

  z = ceil(π);
  cout << z << '\n';

  z = floor(π);
  cout << z << '\n';

  cout << "\n";
  return 0;
}