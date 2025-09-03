#include <iostream>

void f() {
    int x;
}

int main() {
    int x;
    std::cin >> x;
    f();
    std::cout << "Hello world" << std::endl;
    std::getchar();
    return 0;
}