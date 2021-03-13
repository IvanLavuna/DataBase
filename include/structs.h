//
// Created by Павло Гончарук on 13.03.2021.
//

#ifndef DATABASE_STRUCTS_H
#define DATABASE_STRUCTS_H

#include <string>
using std::string;
struct Employer
{
    int id;
    char name[50];
    char status[50];
    int salary;
};

struct Project
{
    int id;
    char name[50];
    int cost;
    int company_id;
};
struct Company
{
    int id;
    char name[50];
};

struct Premie
{
    int id;
    int money;
    int project_id;
};

struct EmployerProject
{
    int employer_id;
    int project_id;
};
#endif //DATABASE_STRUCTS_H
