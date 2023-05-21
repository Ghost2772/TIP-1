#include <iostream>
#include "division.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    float numerator, denominator, result;
    numerator = 12.5;
    denominator = 0;

    try
    {
        result = Division::Divide(numerator, denominator);
        std::cout << "Частное равно " << result << std::endl;
    }
    catch (std::runtime_error& e)
    {
        std::cout << "Произошло исключение: " << e.what();
    }

    return 0;
}
