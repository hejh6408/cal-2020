#pragma once

#ifndef ARITHMETICMULTIPLY_H
#define ARITHMETICMULTIPLY_H

#include "arithmetic.h"

class arithmeticMultiply;

typedef std::shared_ptr<arithmeticMultiply> pArithmeticMultiply;

class arithmeticMultiply : public arithmetic
{
public:
    arithmeticMultiply(const size_t size = 2);
    ~arithmeticMultiply() override;

    virtual void op(data& result, const data input) override;
private:

};

#endif // ARITHMETICMULTIPLY_H
