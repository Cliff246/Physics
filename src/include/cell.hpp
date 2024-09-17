#pragma once
#include <iostream>
#include <cstdint>
#include <string>

#include "datacontent.hpp"

namespace physics_program
{

    extern int32_t id_counter;

    class cell
    {
    private:
        int32_t id;
        datacontent *content;
        int32_t x, y;
    public: 
       
        void print_to_terminal();
    	cell();
        ~cell();
    };
}