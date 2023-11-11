#pragma once
#include "CStudent.h"
class CClassCadre :
    public CStudent
{
protected:
    string works;

public:
    CClassCadre();
    CClassCadre(string name, string stuID, string sex, int age, string major, int classNum, string works);
    ~CClassCadre();
   
    void showInfo();
};

