#include <iostream>

namespace First {
    int x=1;
}

namespace Second {
    int x=2;
}

int main() {
    using namespace First;

    //int x=0;
    std::cout << x << '\n';
    std::cout << First::x << '\n';
    std::cout << Second::x << '\n';

    return 0;
}