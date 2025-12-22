#include <iostream>
#include <string>

using namespace std;
int main() {
  string name = "";
  int age = 0;

  cout << "What is your full name? ";
  getline(cin >> ws, name);

  cout << "\n";
  cout << "What is your ages? ";
  cin >> age;

  cout << "Hello " << name << ',';
  cout << " you are " << age << " years old." << '\n';
  return 0;
}