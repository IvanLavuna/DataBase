#include<iostream>
#include "Write.h"
#include "structs.h"

using namespace std;
int main()
{
    Employer employer{};
    employer.id = 20;
    strcpy(employer.name,"Pavlos");
    strcpy(employer.status, "Trainee");
    employer.salary = 300;
    Write write;
    write.WriteStructToFile((const char *)&employer,sizeof employer,"Employer");

}
