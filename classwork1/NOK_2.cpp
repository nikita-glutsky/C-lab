#include <iostream>
# include <cmath>

int ostatok(int k, int p) {
    return k % p;
}

int main()
{
    int a, b = 0;
    int m = 1;
    std::cin >> a >> b;
    while ((ostatok(m, a) != 0) or (ostatok(m, b) != 0))
        m++;
    std::cout << m;
}
