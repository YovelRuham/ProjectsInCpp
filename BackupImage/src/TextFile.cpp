#include "../include/TextFile.h"
#include <iostream>


TextFile::TextFile() {
    type = "txt";
}

void File::setLocation(const std::string& loc) {
    location = loc;
}

void TextFile::printDetails() {
    std::cout << "Location: " << location << std::endl;
    std::cout << "Type: " << type << std::endl;
}
