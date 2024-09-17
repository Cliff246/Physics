#include <string>
#include <iostream>
#include <cstdint>

#include "include/table.hpp"
#include "include/cell.hpp"
#include "include/datacontent.hpp"



physics_program::datacontent::datacontent(std::string get)
{
    innerstring = new std::string(get);
}


std::string& physics_program::datacontent::get_display_string()
{

    return *innerstring;
}
