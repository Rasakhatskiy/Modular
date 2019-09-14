/*
 * If17. Даны три переменные вещественного типа: A, B, C. Если их значения упо-
 * рядочены по возрастанию или убыванию, то удвоить их; в противном слу-
 * чае заменить значение каждой переменной на противоположное. Вывести
 * новые значения переменных A, B, C.
 */

#include <iostream>
#include "If.h"

void If_17()
{
    double A, B, C;

    std::cout << "Enter three numbers : ";
    std::cin >> A >> B >> C;

    if((A > B && B > C) || (A < B && B < C))
    {
        A *= 2;
        B *= 2;
        C *= 2;
    }
    else
    {
        A = 0 - A;
        B = 0 - B;
        C = 0 - C;
    }

    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;
    std::cout << "C = " << C << std::endl;
}