#ifndef TEXTFILE_H
#define TEXTFILE_H

#include "File.h"

#include <string>

class TextFile : public File {
public:
    TextFile();

    void printDetails();
    
};
#endif  // TEXTFILE_H
