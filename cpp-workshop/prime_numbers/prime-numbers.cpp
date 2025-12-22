#include <iostream>

using namespace std;

int main() {
  int n = 0;
  cin >> n;
  // cout << n;
  for (int i = 1; i <= n; i++) {
    if (i == 1) {
      continue;
    }
    if (i % 2 == 0 && i != 2) {
      continue;
    } else if (i % 3 == 0 && i != 3) {
      continue;
    } else if (i % 5 == 0 && i != 5) {
      continue;
    } else if (i % 7 == 0 && i != 7) {
      continue;
    } else {
      cout << i;
      cout << ' ';
    }
  }
  cout << '\n';
  return 0;
}