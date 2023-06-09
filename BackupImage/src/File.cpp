#include "../include/File.h"

#include <iostream>

std::string File::getLocation() const {
    return location;
}

void File::setLocation(const std::string& loc) {
    location = loc;
}

std::string File::getType() const {
    return type;
}

void File::setType(const std::string& t) {
    type = t;
}
