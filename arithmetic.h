#progma once

#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "definition.h"

class arithmetic
{
public:
    arithmetic();
    ~arithmetic();

    virtual data_array op(const data_array& inputs) const = 0;
private:

}


#endif // ARITHMETIC_H
