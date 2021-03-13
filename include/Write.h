//
// Created by Павло Гончарук on 13.03.2021.
//

#ifndef DATABASE_WRITE_H
#define DATABASE_WRITE_H

#include "Base.h"
#include <fstream>
typedef unsigned int uint;
class Write : public Base
{
private:

public:
    Write()=default;
    ~Write()=default;

    void WriteStructToFile(const char* ptr, uint sizeBytes, string && filename);

};


#endif //DATABASE_WRITE_H
