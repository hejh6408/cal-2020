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

void arithmetic::setArithmeticInputSize(const std::size_t inputsize)
{
    this->m_inputSize = inputsize;
}

std::size_t arithmetic::getArithmeticInputSize() const
{
    return this->m_inputSize;
}
