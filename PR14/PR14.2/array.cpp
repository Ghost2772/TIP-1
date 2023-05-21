#include "array.h"
#include <stdexcept>

Array::Array(int size)
{
    if (size <= 0)
    {
        throw std::invalid_argument("Размер массива должен быть больше нуля");
    }

    this->size = size;
    this->data = new int[size];
}

Array::~Array()
{
    delete[] data;
}

int Array::getSize() const
{
    return size;
}

int Array::getElement(int index) const
{
    if (index < 0 || index >= size)
    {
        throw std::out_of_range("Недопустимый индекс");
    }

    return data[index];
}

void Array::setElement(int index, int value)
{
    if (index < 0 || index >= size)
    {
        throw std::out_of_range("Недопустимый индекс");
    }

    data[index] = value;
}
