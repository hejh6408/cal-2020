#pragma once

#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "definition.h"

class arithmetic
{
public:
    arithmetic(const size_t inputSize);
    virtual ~arithmetic();

    virtual void op(const data_array& inputs) = 0;

    void setArithmeticResult(data result);
    data getArithmeticResult(void) const;

    void setArithmeticInputSize(const std::size_t inputsize);
    std::size_t getArithmeticInputSize(void) const;
private:
    std::size_t m_inputSize;
    data m_result;
};

#endif // ARITHMETIC_H
