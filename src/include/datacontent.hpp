#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdint>

namespace physics_program
{
    enum content_type
    {
        _string,
        _integer,
        _number,
        _complex,
        _time,
    };
    
    class datacontent
    {
    private:
        std::string innerstring;
        content_type type;
    
    
    public:
        datacontent(std::string get);
    };
}