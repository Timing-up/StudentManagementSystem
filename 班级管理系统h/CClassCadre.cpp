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
        cout << "������" << this->name << endl;
        cout << "ѧ�ţ�" << this->stuID << endl;
        cout << "�Ա�: " << this->sex << endl;
        cout << "����: " << this->age << endl;
        cout << "רҵ: " << this->major << endl;
        cout << "�༶: " << this->classNum << endl;
        cout << "ְ��: " << this->works << endl;
    
}
