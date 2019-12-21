#include "arithmeticPlus.h"


arithmeticPlus::arithmeticPlus()
    : arithmetic()
{

}

arithmeticPlus::~arithmeticPlus()
{

}

void arithmeticPlus::op(data& result, const data input)
{
    result += input;
}
