#include <iostream>
#include <fstream>
#include <iomanip>

#include "utility.hpp"


void print_binary_file_hex(const std::string &file_name) {
    std::ifstream file(file_name, std::ios::binary);

    if (!file) {
        std::cerr << "Failed to open file.\n";
        return;
    }

    unsigned char byte;

    size_t count_bytes = 0;

    while (file.read(reinterpret_cast<char*>(&byte), 1)) {
        count_bytes++;
        std::cout   << std::hex
                    << std::setw(2)
                    << std::setfill('0')
                    << static_cast<int>(byte);

        if (count_bytes % 8 == 0) {
            std::cout << std::endl;
        } else {
            std::cout << " ";
        }
    }

    std::cout << std::dec;
    std::cout << std::endl;

    std::cout << "Read " << count_bytes << " bytes";
}
