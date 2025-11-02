#include <iostream>

int main() {
    //integer value
    int x=5;
    int y=6;
    int sum = x+y;

    //numbers with decimal place
    double temperature = 40.0;
    double gpa = 1.0;

    //Single character
    char grade[2] = "A";
    char dollarSign = '$';

    //boolean value(true or false)
    bool student = false;
    bool power = true;

    //objects that represents multiple characters
    std::string name = "Lucas";

    std::cout << sum << '\n';
    std::cout << temperature << '\n';
    std::cout << grade << '\n';
    std::cout << "Hello " << name << '\n';
    
    return 0;
}