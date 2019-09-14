/*
 * Begin16. Найти расстояние между двумя точками с заданными координатами
 * x1 и x2 на числовой оси: |x2 – x1|.
 */
#include <iostream>
#include "Begin.h"


int Begin_16() {
    double x1, x2, d;

    std::cout << "Enter X1 and X2 : ";
    std::cin >> x1 >> x2;
    d = std::abs(x2 - x1);
    std::cout << "Distance : " << d << std::endl;
    system("pause");
    return 0;
}