#pragma once

#ifndef ARITHMETICMULTIPLY_H
#define ARITHMETICMULTIPLY_H

#include "arithmetic.h"

class arithmeticMultiply;

typedef std::shared_ptr<arithmeticMultiply> pArithmeticMultiply;

class arithmeticMultiply : public arithmetic
{
public:
    arithmeticMultiply();
    ~arithmeticMultiply() override;

    virtual void op(data& result, const data input) override;
private:

};

#endif // ARITHMETICMULTIPLY_H
