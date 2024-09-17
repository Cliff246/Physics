#include <iostream>
#include <cstdint>

#include "include/cell.hpp"

using namespace physics_program;

int32_t main(int32_t argc, char **argv)
{
    cell *dp[10];


    for(int i = 0; i < 10; i++)
    {
        dp[i] = new cell();
        std::cout << "test\n";
        std::cout << id_counter << " -> id_counter\n";
        dp[i]->print_to_terminal();
    }
 







    for(int x = 0; x < 10; x++)
	{
		delete dp[x];
	}
    return 0;
}