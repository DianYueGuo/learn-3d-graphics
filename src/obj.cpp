#include "obj.hpp"

#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cctype>


bool read_vertex_geometry(std::string trimmed_line, std::vector<Vector3D> &vertex_geometries) {
    trimmed_line.erase(0, 2);

    std::istringstream input_string_stream(trimmed_line);

    Vector3D vertex_geometry;

    if (input_string_stream >> vertex_geometry.x >> vertex_geometry.y >> vertex_geometry.z) {
        vertex_geometries.push_back(vertex_geometry);

        return true;
    } else {
        return false;
    }
}

void read_obj_file(const std::string &file_name, std::vector<Vector3D> &vertex_geometries) {
    std::ifstream input_file_stream (file_name, std::fstream::in);

    std::string read_line;

    while (std::getline(input_file_stream, read_line)) {
        std::cout << read_line << std::endl;

        read_line.erase(
            read_line.begin(),
            std::find_if(
                read_line.begin(), read_line.end(),
                [](unsigned char c){ return !std::isspace(c); }
            )
        );

        if (read_line.rfind("v ") == 0) {
            read_vertex_geometry(read_line, vertex_geometries);
        }
    }

    input_file_stream.close();
}
