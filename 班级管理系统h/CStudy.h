#pragma once
#include "CStudent.h"
#include"CClassCadre.h"
class CStudy :public CClassCadre
{
	string works;
public:
	// CStudy(string name, int age, string sex, string idNumber, long long stuID, string Date);
	string GetWorks();
	void SetWorks(string works);
	void WriteList(CList* list);
};
