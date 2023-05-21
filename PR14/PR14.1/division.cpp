#include "division.h"
#include <stdexcept>

float Division::Divide(float num, float den)
{
    if (den == 0)
    {
        throw std::runtime_error("Математическая ошибка: попытка разделить на ноль\n");
    }
    return (num / den);
}
