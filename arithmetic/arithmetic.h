#pragma once

#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "definition/definition.h"

#include <memory>

class arithmetic;

typedef std::shared_ptr<arithmetic> pArithmetic;

class arithmetic
{
public:
    arithmetic();
    virtual ~arithmetic();

    virtual void op(data& result, const data input) = 0;

    void setDataArraySize(size_t size);
    size_t getDataArraySize() const;

    void setDataByIndex(const data& _data, const size_t index);
private:
    dataArray m_dataArray;
};

#endif // ARITHMETIC_H
