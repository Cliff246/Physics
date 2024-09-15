#include <string>
#include <iostream>
#include <cstdint>

#include "include/cell.hpp"
#include "include/datacontent.hpp"


int32_t id_counter = 0;



cell::cell()
{
    id = id_counter++;    
}