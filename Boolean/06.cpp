/*
 * Boolean6. Даны три целых числа: A, B, C. Проверить истинность высказыва-
 * ния: «Справедливо двойное неравенство A < B < C».
 */

#include <iostream>

int Boolean_06() {
    int A, B, C;

    std::cout << "Enter A B and C : ";
    std::cin >> A >> B >> C;

    bool result = (A < B) && (B < C);
    std::string resultString = result ? "true" : "false";

    std::cout << "Statement A < B < C is " + resultString << std::endl;

    system("pause");
    return 0;
}