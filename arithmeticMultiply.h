#pragma once

#ifndef ARITHMETICMULTIPLY_H
#define ARITHMETICMULTIPLY_H

#include "arithmetic.h"

class arithmeticMultiply : public arithmetic
{
public:
    arithmeticMultiply(size_t inputSize = 2);
    ~arithmeticMultiply() override;

    virtual void op(const data_array& inputs) override;
private:

};

#endif // ARITHMETICMULTIPLY_H
