#pragma once
#include <iostream>
#include <cstdint>
#include <vector>

#include "cell.hpp"

namespace physics_program
{

    class list
    {
    private:
        
    public:
        std::vector<cell *>list;
    };


    class table
    {
    private:
        int32_t rows, columns;
    public:
        std::vector<list>tablelist;

        table(int32_t row, int32_t column);
    };
}