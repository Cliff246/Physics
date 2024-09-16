#include <string>
#include <iostream>
#include <cstdint>

#include "include/cell.hpp"
#include "include/datacontent.hpp"


int32_t physics_program::id_counter = 0;



physics_program::cell::cell()
{
    id = id_counter++;    
}