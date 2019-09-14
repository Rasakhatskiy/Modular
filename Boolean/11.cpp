/*
 * Boolean11. Даны два целых числа: A, B. Проверить истинность высказывания:
 * «Числа A и B имеют одинаковую четность».
 */

#include <iostream>

int Boolean_11() {
    int A, B;

    std::cout << "Enter A and B : ";
    std::cin >> A >> B ;

    bool result = (A % 2) == (B % 2);
    std::string resultString = result ? "true" : "false";

    std::cout << "Statement \"The numbers A and B have the same parity\" is " + resultString << std::endl;

    system("pause");
    return 0;
}