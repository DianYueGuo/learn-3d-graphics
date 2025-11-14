#include "obj.hpp"

#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cctype>


void read_obj_file(const std::string &file_name, std::vector<Vector3D> &vertex_geometries) {
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

        if (read_line.rfind("v ") == 0) {
            read_line.erase(0, 2);

            std::istringstream input_string_stream(read_line);

            Vector3D vertex_geometry;

            if (input_string_stream >> vertex_geometry.x >> vertex_geometry.y >> vertex_geometry.z) {
                vertex_geometries.push_back(vertex_geometry);
            }
        }
    }

    input_file_stream.close();
}
