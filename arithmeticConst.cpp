#include "arithmeticConst.h"
#include <cassert>

arithmeticConst::arithmeticConst(size_t inputSize)
    :arithmetic(inputSize)
{
    arithmetic::setArithmeticResult(0);
}

arithmeticConst::~arithmeticConst()
{

}

void arithmeticConst::op(const data_array &inputs)
{
    assert((inputs.empty() == true) || (inputs.size() > 1));

    arithmetic::setArithmeticResult(inputs.front());
}
