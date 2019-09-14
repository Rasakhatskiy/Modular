/*
 * Integer19. С начала суток прошло N секунд (N — целое). Найти количество
 * полных минут, прошедших с начала суток.
 */
#include <iostream>

int Integer_19() {
    int seconds;
    std::cout << "Enter number of seconds : ";
    std::cin >> seconds;

    int minutes = seconds / 60;

    std::cout << "Minutes : " << minutes << std::endl;

    system("pause");
    return 0;
}