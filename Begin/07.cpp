/*
 * Begin7°. Найти длину окружности L и площадь круга S заданного радиуса R:
 * L = 2·π·R, S = π·R2
 * В качестве значения π использовать 3.14.
 */
#include <iostream>
#include <cmath>
#include "Begin.h"

int Begin_07() {
    double R, S, L;
    const float Pi = 3.14;

    std::cout << "Enter radius : ";
    std::cin >> R;

    S = Pi * std::pow(R, 2);
    L = 2 * Pi * R;

    std::cout << "Length : " << L << std::endl;
    std::cout << "Square : " << S << std::endl;
    system("pause");
    return 0;
}