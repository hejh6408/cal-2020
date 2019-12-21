#pragma once

#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "definition/definition.h"

#include <memory>
#include <cstdbool>
class arithmetic;

typedef std::shared_ptr<arithmetic> pArithmetic;

class arithmetic
{
public:
    arithmetic(const size_t size);
    virtual ~arithmetic();

    void intializeResult(const data result);

    virtual void op(data& result, const data input) = 0;

    void setDataArraySize(const size_t size);
    size_t getDataArraySize() const;

    void setDataByIndex(const data& _data, const size_t index);

    void setDataValidityByIndex(const size_t index, bool validity);

    virtual void calculate();
    void resetData();

    data getResult() const;
private:
    dataArray m_dataArray;
    std::vector<bool> m_isIndexDataValid;
    bool m_arithmethValidity;

    data m_result;
};

#endif // ARITHMETIC_H
