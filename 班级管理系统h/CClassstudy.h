#pragma once

#include"CClassCadre.h"

class CClassstudy :public CClassCadre
{
	string works;
public:
	CClassstudy();
	CClassstudy(string name, string stuID, string sex, int age, string major, int classNum, string works);
	~CClassstudy();
	void SetWorks(string works);
	string GetWorks();
//	void WriteList(CList* list);
};


