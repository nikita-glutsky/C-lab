#include <iostream>
#include <cmath>

int delta(int a, int b) {
    int c = std::abs(a - b);
    return c;
}

int main()
{
    int a, b = 0;
    std::cin >> a >> b;
    while (a != b) {
        if (a >= b)
            a = delta(a, b);
        else
            b = delta(a, b);
    }
    std::cout << a;
}
