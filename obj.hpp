#ifndef OBJ_HPP
#define OBJ_HPP

#include <string>
#include <vector>


struct Vector3D {
    float x;
    float y;
    float z;
};

void read_obj_file(const std::string &file_name, std::vector<Vector3D> &vertex_geometries);

#endif
