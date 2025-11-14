#include <iostream>

#include <vector>

#include "utility.hpp"
#include "obj.hpp"


int main()
{
    std::vector<Vector3D> vertex_geometries;
    read_obj_file("cube-Body.obj", vertex_geometries);

    return 0;
}
