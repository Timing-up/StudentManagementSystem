#include "CClasssports.h"
#include <iostream>

void CClasssports::WriteList(CList* list)
{
	cout << "CClasssports::WriteList" << endl;
}

CClasssports::CClasssports()
{
}

CClasssports::CClasssports(string name, string stuID, string sex, int age, string major, int classNum, string works)
	:CClassCadre(name, stuID, sex, age, major, classNum,works)
{
}

CClasssports::~CClasssports()
{
}

