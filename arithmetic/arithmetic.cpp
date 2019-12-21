#include "arithmetic.h"

#include <cassert>

arithmetic::arithmetic()
{

}

arithmetic::~arithmetic()
{

}

void arithmetic::setDataArraySize(size_t size)
{
    this->m_dataArray.reserve(size);
}

size_t arithmetic::getDataArraySize() const
{
    return this->m_dataArray.size();
}

void arithmetic::setDataByIndex(const data &_data, const size_t index)
{
    assert(index >= this->m_dataArray.size());

    this->m_dataArray[index] = _data;
}
