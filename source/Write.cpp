//
// Created by Павло Гончарук on 13.03.2021.
//

#include "../include/Write.h"

void Write::WriteStructToFile(const char *ptr, uint sizeBytes, string &&filename)
{
    std::fstream file(string(DB_PATH) + "/" + filename,std::ios::app);
    if(file.is_open()) {
        file.write(ptr, sizeBytes);
        file.close();
    }
    else
    {
        std::cerr << "File was not opened\n";
    }
}
