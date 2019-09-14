/*
 * If8°. Даны два числа. Вывести вначале большее, а затем меньшее из них.
 */

#include <iostream>
#include "If.h"

void If_08()
{
    int N1, N2;

    std::cout << "Enter two numbers : ";

    std::cin >> N1 >> N2;

    if(N1 >= N2)
        std::cout << N1 << " " << N2 << std::endl;
    else
        std::cout << N2 << " " << N1 << std::endl;

}