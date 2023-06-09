#ifndef FILE_H
#define FILE_H

#include <string>

class File {
protected:
    std::string location;
    std::string type;

public:
    virtual void printDetails() = 0;

    std::string getLocation() const;
    void setLocation(const std::string& loc);

    std::string getType() const;
    void setType(const std::string& t);

    virtual ~File() = default;
};

#endif  // FILE_H
