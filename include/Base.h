//
// Created by Павло Гончарук on 13.03.2021.
//

#ifndef DATABASE_BASE_H
#define DATABASE_BASE_H

#include <string>
#define DB_PATH "~/CLionProjects/DataBase/filesDB"
using std::string;
class Base
{
private:

public:
    Base();
    ~Base();
    /// generates file in filesDB
    void GenerateFile(string&& filename);
    /// destroys file from filesDB
    void DestroyFile(string&& filename);
};

#endif //DATABASE_BASE_H
