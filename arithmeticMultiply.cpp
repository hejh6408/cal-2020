#include "arithmeticMultiply.h"

arithmeticMultiply::arithmeticMultiply(size_t inputSize)
    :arithmetic(inputSize)
{

}

arithmeticMultiply::~arithmeticMultiply()
{

}

void arithmeticMultiply::op(const data_array &inputs)
{
    data result = 1;

    for(const data& data : inputs)
        result *= data;

    arithmetic::setArithmeticResult(result);
}
