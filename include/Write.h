//
// Created by Павло Гончарук on 13.03.2021.
//

#ifndef DATABASE_WRITE_H
#define DATABASE_WRITE_H

#include "Base.h"

typedef unsigned int uint;
class Write : public Base
{
private:

public:
    Write();
    ~Write();

    void WriteStructToFile(const char* ptr, uint sizeBytes, string && filename);

};


#endif //DATABASE_WRITE_H
