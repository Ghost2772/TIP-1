#include <iostream>
#include "array.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    try
    {
        int size = 5;
        Array arr(size);
        arr.setElement(0, 10);
        arr.setElement(1, 20);
        arr.setElement(2, 30);
        arr.setElement(3, 40);
        arr.setElement(4, 50);
        int index1 = -1;
        int index2 = 10;

        std::cout << "Элемент по индексу " << index1 << ": " << arr.getElement(index1) << std::endl;
        std::cout << "Элемент по индексу " << index2 << ": " << arr.getElement(index2) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Произошло исключение: " << e.what() << std::endl;
    }

    return 0;
}
