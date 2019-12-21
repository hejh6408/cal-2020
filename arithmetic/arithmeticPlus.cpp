#include "arithmeticPlus.h"


arithmeticPlus::arithmeticPlus(const size_t size)
    : arithmetic(size)
{

}

arithmeticPlus::~arithmeticPlus()
{

}

void arithmeticPlus::op(data& result, const data input)
{
    result += input;
}

void arithmeticPlus::calculate()
{
    arithmetic::intializeResult(0);

    arithmetic::calculate();
}
