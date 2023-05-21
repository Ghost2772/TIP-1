#include <iostream>
#include "set.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    Set set;
    int value = 10;

    try
    {
        bool containsValue = set.contains(value);
        std::cout << "Набор содержит значение " << value << ": " << containsValue << std::endl;
    }
    catch (const SetException& e)
    {
        std::cout << "Произошло исключение: " << e.what() << std::endl;
    }

    return 0;
}
