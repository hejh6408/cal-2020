#include "arithmetic.h"

#include <cassert>

arithmetic::arithmetic(const size_t size)
    : m_dataArray(size, false), m_isIndexDataValid(size, false), m_arithmethValidity(false), m_result(0)
{

}

arithmetic::~arithmetic()
{

}

void arithmetic::intializeResult(const data result)
{
    this->m_result = result;
}

void arithmetic::setDataArraySize(const size_t size)
{
    this->m_dataArray.reserve(size);

    this->m_isIndexDataValid.reserve(size);
}

size_t arithmetic::getDataArraySize() const
{
    return this->m_dataArray.size();
}

void arithmetic::setDataByIndex(const data &_data, const size_t index)
{
    assert(index >= this->m_dataArray.size());

    this->m_dataArray[index] = _data;

    setDataValidityByIndex(index, true);
}

void arithmetic::setDataValidityByIndex(const size_t index, bool validity)
{
    this->m_isIndexDataValid[index] = validity;
}

void arithmetic::calculate()
{
    bool arithmethValidity = true;

    for(size_t i = 0, dataSize = this->m_dataArray.size(); i < dataSize; ++i)
    {
        if(this->m_isIndexDataValid[i] == false)
        {
            arithmethValidity = false;
            break;
        }

        op(this->m_result, this->m_dataArray[i]);
    }

    this->m_arithmethValidity = arithmethValidity;
}

void arithmetic::resetData()
{
    this->m_isIndexDataValid.assign(this->m_isIndexDataValid.size(), false);
}

data arithmetic::getResult() const
{
    return this->m_result;
}
