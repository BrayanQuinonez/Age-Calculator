#include <iostream>

int main()
{
    int d1, m1, y1, d2, m2, y2;
    std::cout << "Enter your date of birth";
    std::cout << "\nDate: ";
    std::cin >> d1;
    std::cout << "Month: ";
    std::cin >> m1;
    std::cout << "Year: ";
    std::cin >> y1;
    std::cout << "\nAge at the date of: ";
    std::cout << "\nDate: ";
    std::cin >> d2;
    std::cout << "Month: ";
    std::cin >> m2;
    std::cout << "Year: ";
    std::cin >> y2;

    std::cout << "\n\n\t\t\t\tCalculating your age.....";
    char x = 219;
    std::cout << "\n";
    for (int i = 0; i <= 27; i++)
    {
        std::cout << x;
    }

    int year, month, day;
    year = y2 - y1;

    if (m1 <= m2)
    {
        month = m2 - m1;
    }
    else if (m2 < m1)
    {
        year = year - 1;
        m2 = m2 + 12;
        month = m2 - m1;
    }

    if (d1 <= d2)
    {
        day = d2 - d1;
    }
    else if (d2 < d1)
    {
        month = month - 1;
        d2 = d2 + 30;
        day = d2 - d1;
    }

    std::cout << "You are " << year << " years " << month << " months and " << day << " days old." << std::endl;

    system("pause");
    return 0;


}


