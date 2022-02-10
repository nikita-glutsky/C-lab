#include <iostream>
#include <cmath>

int main()
{
    int a, b = 0;
    std::cin >> a >> b;
    while (a != b) {
        if (a >= b)
            a = std::abs(a - b);
        else
            b = std::abs(a - b);
    }
    std::cout << a;
}
