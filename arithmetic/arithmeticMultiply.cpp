#include "arithmeticMultiply.h"

arithmeticMultiply::arithmeticMultiply(const size_t size)
    : arithmetic(size)
{

}

arithmeticMultiply::~arithmeticMultiply()
{

}

void arithmeticMultiply::op(data& result, const data input)
{
    result *= input;
}
