#include <iostream>
int main() {
    int a = 1;
    int b = 2;

    int temp;

    temp = a;
    a = b;
    b = temp;

    std::cout << "a = " << a << "\n";
    std::cout <<  "b = " << b;
    return 0;
}