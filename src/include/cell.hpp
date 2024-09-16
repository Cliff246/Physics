#pragma once
#include <iostream>
#include <cstdint>
#include <string>

namespace physics_program
{
    
    extern int32_t id_counter;
    
    class cell
    {
    private:
        int32_t id;
    
    public: 
        double x, y;
    	cell();
    };
}