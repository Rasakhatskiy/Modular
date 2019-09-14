/*
 * Integer12. Дано трехзначное число. Вывести число, полученное при прочтении
 * исходного числа справа налево.
 */
#include <iostream>

int Integer_12() {
    int number;
    std::cout << "Enter 3-digit number : ";
    std::cin >> number;

    int firstDigit, secondDigit, thirdDigit;

    firstDigit = number / 100;
    number %= 100;

    secondDigit = number / 10;
    number %= 10;

    thirdDigit = number;

    int reversed = thirdDigit * 100 + secondDigit * 10 + firstDigit;

    std::cout << "Reversed number : " << reversed << std::endl;

    system("pause");
    return 0;
}