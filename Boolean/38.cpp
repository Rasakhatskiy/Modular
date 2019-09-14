/*
 * Boolean38. Даны координаты двух различных полей шахматной доски x1, y1,
 * x2, y2 (целые числа, лежащие в диапазоне 1–8). Проверить истинность вы-
 * сказывания: «Слон за один ход может перейти с одного поля на другое».
 */

#include <iostream>

int Boolean_38() {
    int x1, y1, x2, y2;

    std::cout << "Enter x1 and y1 : ";
    std::cin >> x1 >> y1 ;

    std::cout << "Enter x2 and y2 : ";
    std::cin >> x2 >> y2 ;

    bool result = std::abs(x1 - x2) == std::abs(y1 - y2);
    std::string resultString = result ? "true" : "false";

    std::cout << "Statement \"The bishop can move from one square to another in one move\" is " + resultString << std::endl;

    system("pause");
    return 0;
}