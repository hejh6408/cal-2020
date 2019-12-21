#pragma once

#ifndef ARITHMETICPLUS_H
#define ARITHMETICPLUS_H

#include "arithmetic.h"

class arithmeticPlus;

typedef std::shared_ptr<arithmeticPlus> pArithmeticPlus;

class arithmeticPlus : public arithmetic
{
public:
    arithmeticPlus();
    ~arithmeticPlus() override;

    virtual void op(data& result, const data input) override;
private:

};
#endif // ARITHMETICPLUS_H
