#pragma once

#ifndef ARITHMETICCONST_H
#define ARITHMETICCONST_H

#include "arithmetic.h"

class arithmeticConst : public arithmetic
{
public:
    arithmeticConst(size_t inputSize = 1);
    ~arithmeticConst() override;

    virtual void op(const data_array& inputs) override;
private:

};
#endif // ARITHMETICCONST_H
