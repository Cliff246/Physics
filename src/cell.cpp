#include <string>
#include <iostream>
#include <cstdint>

#include "include/cell.hpp"
#include "include/datacontent.hpp"


int32_t physics_program::id_counter = 0;



physics_program::cell::cell()
{
    id = id_counter++;    
    content = new datacontent("");
}

physics_program::cell::~cell()
{
    delete content;
}

void physics_program::cell::print_to_terminal()
{
    std::cout << x << "/" << y << " \"" << content->get_display_string() << "\"\n";
} 