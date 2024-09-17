#include <iostream>
#include <cstdint>
#include <vector>

#include "include/table.hpp"


physics_program::table::table(int32_t row, int32_t column)
{


    this->columns = column;
    this->rows = row;

    using vec_cell = std::vector<cell *>;
    std::vector<vec_cell *>vector_column(column);


    for(int i = 0; i < column; i++)
    {
        vec_cell *temp = new vec_cell(row);
        vector_column[i] = temp;
    }

}