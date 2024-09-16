#include <iostream>
#include <cstdint>
#include <vector>

#include "include/table.hpp"


physics_program::table::table(int32_t row, int32_t column)
{
    this->columns = column;
    this->rows = row;
}