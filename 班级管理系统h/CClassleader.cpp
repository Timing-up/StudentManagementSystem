#include "CClassleader.h"
#include <iostream>

CClassleader::CClassleader()
{
}



CClassleader::CClassleader(string name, string stuID, string sex, int age, string major, int classNum,string works)
	:CClassCadre(name,stuID,sex,age,major,classNum,works)
{
}

CClassleader::~CClassleader()
{
}

string CClassleader::GetName()
{
	return string();
}

void CClassleader::SetName(string name)
{
	this->name = name;
}

void CClassleader::PublishNotice(CNotice* cno)
{
	cout << cno->GetID() << " " << cno->showNotice() << endl;


}

//void CClassleader::WriteMList(CMoveList* cl)
//{
//}

string CClassleader::GetWorks()
{
	return this->works;
}

void CClassleader::SetWorks(string work)
{
	this->works = work;
}

	//void CClassleader::WriteList(CList* list)
	//{
	//	cout<< "CClassleader:: WriteList" << endl;
	//}

