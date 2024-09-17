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
		_nothing,
    };

    class datacontent
    {
    private:
        std::string *innerstring;
        content_type type = _nothing;


    public:
        datacontent(std::string get);

        std::string& get_display_string();
		
		void get_as();
    };
}