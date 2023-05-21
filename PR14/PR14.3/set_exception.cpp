#include "set_exception.h"

const char* SetException::what() const noexcept
{
    return "SetException: Набор пуст";
}
