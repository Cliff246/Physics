#pragma once
#include <iostream>
#include <cstdint>
#include <vector>

#include "cell.hpp"

class table
{
private:
    int32_t rows, columns;
public:
    std::vector<std::vector<cell *>>tablelist;

    table(int32_t row, int32_t column);
};