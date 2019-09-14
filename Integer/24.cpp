/*
 * Integer24. Дни недели пронумерованы следующим образом: 0 — воскресенье,
 * 1 — понедельник, 2 — вторник, …, 6 — суббота. Дано целое число K, ле-
 * жащее в диапазоне 1–365. Определить номер дня недели для K-го дня года,
 * если известно, что в этом году 1 января было понедельником.
 */
#include <iostream>

int Integer_24() {
    int day;
    std::cout << "Enter day number (1-365) : ";
    std::cin >> day;

    int dayOfTheWeek = day % 7;

    std::string dayName;

    switch (dayOfTheWeek)
    {
        case 0: dayName = "Sunday"; break;
        case 1: dayName = "Monday"; break;
        case 2: dayName = "Tuesday"; break;
        case 3: dayName = "Wednesday"; break;
        case 4: dayName = "Thursday"; break;
        case 5: dayName = "Friday"; break;
        case 6: dayName = "Saturday"; break;
        default: dayName = "Doomsday"; break;
    }

    std::cout << "This day is " << dayName << std::endl;

    system("pause");
    return 0;
}