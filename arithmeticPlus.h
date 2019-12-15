#pragma once

#ifndef ARITHMETICPLUS_H
#define ARITHMETICPLUS_H

#include "arithmetic.h"

class arithmeticPlus : public arithmetic
{
public:
    arithmeticPlus(size_t inputSize = 2);
    ~arithmeticPlus() override;

    virtual void op(const data_array& inputs) override;
private:

};
#endif // ARITHMETICPLUS_H
