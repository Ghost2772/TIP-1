#include "division.h"
#include <stdexcept>

float Division::Divide(float num, float den)
{
    if (den == 0)
    {
        throw std::runtime_error("�������������� ������: ������� ��������� �� ����\n");
    }
    return (num / den);
}
