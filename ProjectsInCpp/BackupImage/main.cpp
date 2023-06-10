#include <iostream>
#include "src/TextFile.cpp"

int main() {
    // Create a TextFile object
    TextFile textFile;
    textFile.setLocation("path/to/file.txt");

    // Use the TextFile object
    textFile.printDetails();

    return 0;
}

