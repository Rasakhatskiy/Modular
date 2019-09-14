/*
 * Boolean26. Даны числа x, y. Проверить истинность высказывания: «Точка с ко-
 * ординатами (x, y) лежит в четвертой координатной четверти».
 */

#include <iostream>

int Boolean_26() {
    int x, y;

    std::cout << "Enter x and y : ";
    std::cin >> x >> y ;

    bool result = (x > 0) && (y < 0);
    std::string resultString = result ? "true" : "false";

    std::cout << "Statement \"The point with coordinates (x, y) lies in the fourth coordinate quarter\" is " + resultString << std::endl;

    system("pause");
    return 0;
}