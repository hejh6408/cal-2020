#include "arithmetic.h"

arithmetic::arithmetic(const size_t inputSize)
    :m_inputSize(inputSize)
{

}

arithmetic::~arithmetic()
{

}

void arithmetic::setArithmeticResult(data result)
{
    this->m_result = result;
}

data arithmetic::getArithmeticResult() const
{
    return this->m_result;
}
