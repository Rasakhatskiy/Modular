/*
 * If26°. Для данного вещественного x найти значение следующей функции f, при-
 * нимающей вещественные значения:
 *        { –x, если x ≤ 0,
 * f(x) = { x2, если 0 < x < 2,
 *        { 4, если x ≥ 2.
 */

#include <iostream>
#include "If.h"

void If_26()
{
    double x, f;

    std::cout << "Enter x : ";
    std::cin >> x;

    if(x <= 0) f = 0 - x;
    if(0 < x && x < 2) f = x * 2;
    if(x >= 2) f = 4;

    std::cout << "f = " << f << std::endl;
}

