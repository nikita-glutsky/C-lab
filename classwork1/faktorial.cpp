#include <iostream>

int main()
{
    int r = 1;
    int n = 0;
    std::cin >> n;
    for ( int i = 1; i <= n; i++) {
        r = r * i;
    }
    std::cout << r;
}
