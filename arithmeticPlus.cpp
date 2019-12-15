#include "arithmeticPlus.h"


arithmeticPlus::arithmeticPlus(size_t inputSize)
    : arithmetic(inputSize)
{

}

arithmeticPlus::~arithmeticPlus()
{

}

void arithmeticPlus::op(const data_array& inputs)
{
    data result = 0;

    for(const data& data : inputs)
        result += data;

    arithmetic::setArithmeticResult(result);
}
