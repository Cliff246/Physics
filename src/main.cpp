#include <iostream>
#include <cstdint>

#include "include/cell.hpp"

using namespace physics_program;

int32_t main(int32_t argc, char **argv)
{
    cell *dp = new cell();
    std::cout << "test\n";
    std::cout << id_counter << " -> id_counter\n";
    delete dp;
    return 0;
}