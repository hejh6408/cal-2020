#pragma once

#ifndef ARITHMETICCONST_H
#define ARITHMETICCONST_H

#include "arithmetic.h"

class arithmeticConst;

typedef std::shared_ptr<arithmeticConst> pArithmeticConst;

class arithmeticConst : public arithmetic
{
public:
    arithmeticConst();
    ~arithmeticConst() override;

    virtual void op(data& result, const data input) override;
private:

};
#endif // ARITHMETICCONST_H
