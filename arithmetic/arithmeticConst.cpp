#include "arithmeticConst.h"
#include <cassert>

arithmeticConst::arithmeticConst()
    : arithmetic()
{
}

arithmeticConst::~arithmeticConst()
{

}

void arithmeticConst::op(data& result, const data input)
{
    result = input;
}
