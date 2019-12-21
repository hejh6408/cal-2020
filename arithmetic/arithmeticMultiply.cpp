#include "arithmeticMultiply.h"

arithmeticMultiply::arithmeticMultiply()
    : arithmetic()
{

}

arithmeticMultiply::~arithmeticMultiply()
{

}

void arithmeticMultiply::op(data& result, const data input)
{
    result *= input;
}
