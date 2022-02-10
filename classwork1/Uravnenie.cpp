#include <iostream>
#include <cmath>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    double D = ( b * b - 4 * a *c);
    std::cin >> a >> b >> c;
    if (a == 0) {
        if  (b != 0) {
            double x1 = - c / b;
            std::cout << x1;
        } else {
        if (c != 0)
            std::cout << '\n';
        else
            std::cout << "any R";
        }
    } else if ( D >= 0 ) {
        double x1 = ( - b + std::sqrt ( D ) ) / 2 / a ;
        double x2 = ( - b - std::sqrt ( D ) ) / 2 / a ;
        if ( D ==0 )
            std::cout << x1;
        else
            std::cout << x1 << x2;
    } else
        std::cout << '\n';
    return 0;
}
