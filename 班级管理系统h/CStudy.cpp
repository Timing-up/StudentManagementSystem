#include "CStudy.h"
#include <iostream>


string CStudy::GetWorks()
{
    return this->works;
}

void CStudy::SetWorks(string works)
{
    this->works = works;
}

void CStudy::WriteList(CList* list)
{
    cout << "CStudy::WriteList" << endl;
}
