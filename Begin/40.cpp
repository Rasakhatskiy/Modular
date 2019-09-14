/*
 * Begin40. Найти решение системы линейных уравнений вида
 * A1·x + B1·y = C1,
 * A2·x + B2·y = C2,
 * заданной своими коэффициентами A1, B1, C1, A2, B2, C2, если известно, что
 * данная система имеет единственное решение. Воспользоваться формулами
 * x = (C1·B2 – C2·B1)/D, y = (A1·C2 – A2·C1)/D,
 * где D = A1·B2 – A2·B1.
*/

#include <iostream>
#include "Begin.h"


int Begin_40() {
    double A1, B1, C1, A2, B2, C2;

    std::cout << "Enter A1, B1 and C1 : ";
    std::cin >> A1 >> B1 >> C1;

    std::cout << "Enter A2, B2 and C2 : ";
    std::cin >> A2 >> B2 >> C2;

    double D = A1 * B2 - A2 * B1;
    double x = (C1 * B2 - C2 * B2) / D;
    double y = (A1 * C2 - A2 * C1) / D;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    system("pause");
    return 0;
}