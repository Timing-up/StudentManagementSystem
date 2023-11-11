#include "CClassCadre.h"
#include <iostream>
#include "CClassCadre.h"

CClassCadre::CClassCadre()
{
}

CClassCadre::CClassCadre(string name, string stuID, string sex, int age, string major, int classNum, string works)
    :CStudent(name, stuID, sex, age, major, classNum), works(works)
{
}

CClassCadre::~CClassCadre()
{
}

void CClassCadre::showInfo()
{
        cout << "姓名：" << this->name << endl;
        cout << "学号：" << this->stuID << endl;
        cout << "性别: " << this->sex << endl;
        cout << "年龄: " << this->age << endl;
        cout << "专业: " << this->major << endl;
        cout << "班级: " << this->classNum << endl;
        cout << "职务: " << this->works << endl;
    
}
