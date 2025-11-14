#include "obj.hpp"

#include <fstream>
#include <iostream>
#include <algorithm>
#include <cctype>


void read_obj_file(const std::string &file_name) {
    std::ifstream input_file_stream (file_name, std::fstream::in);

    std::string read_line;

    while (input_file_stream.good()) {
        std::getline(input_file_stream, read_line);

        read_line.erase(
            read_line.begin(),
            std::find_if(
                read_line.begin(), read_line.end(),
                [](unsigned char c){ return !std::isspace(c); }
            )
        );
    }

    input_file_stream.close();
}
