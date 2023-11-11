#include "CClassstudy.h"
#include <iostream>

CClassstudy::CClassstudy()
{
}

CClassstudy::CClassstudy(string name, string stuID, string sex, int age, string major, int classNum, string works)
	:CClassCadre(name, stuID, sex, age, major, classNum,works)
{
}

CClassstudy::~CClassstudy()
{
}

void CClassstudy::SetWorks(string works)
{
	this->works = works;
}

string CClassstudy::GetWorks()
{
	return this->works;
}

			//void CClassstudy::WriteList(CList* list)
			//{
			//	cout << "CClassstudy::WriteList" << endl;
			//}
