/*
 * Integer3. Дан размер файла в байтах. Используя операцию деления нацело,
 * найти количество полных килобайтов, которые занимает данный файл
 * (1 килобайт = 1024 байта).
 */
#include <iostream>

int Integer_03() {
    int Bytes;
    std::cout << "Enter bytes : ";
    std::cin >> Bytes;

    int KB = Bytes / 1024;

    std::cout << "KiloBytes : " << KB << std::endl;

    system("pause");
    return 0;
}