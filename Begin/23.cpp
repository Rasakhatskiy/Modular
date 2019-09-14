/*
 * Begin23. Даны переменные A, B, C. Изменить их значения, переместив содержимое
 * A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.
 */
#include <iostream>
#include "Begin.h"


int Begin_23() {
    int A, B, C;

    std::cout << "Enter A, B and C : ";
    std::cin >> A >> B >> C;

    int Buffer = C;
    C = B;
    B = A;
    A = Buffer;

    std::cout << "A : " << A << std::endl;
    std::cout << "B : " << B << std::endl;
    std::cout << "C : " << C << std::endl;

    system("pause");
    return 0;
}