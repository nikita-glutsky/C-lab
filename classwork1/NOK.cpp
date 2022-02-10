#include <iostream>
# include <cmath>

int main()
{
    int a, b = 0;
    int m = 1;
    std::cin >> a >> b;
    while (( m % b != 0) or ( m % a != 0))
        m++;
    std::cout << m;
}
