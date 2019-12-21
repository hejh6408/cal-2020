#include "arithmeticConst.h"
#include <cassert>

arithmeticConst::arithmeticConst()
    : arithmetic(1)
{

}

arithmeticConst::~arithmeticConst()
{

}

void arithmeticConst::op(data& result, const data input)
{
    result = input;
}
