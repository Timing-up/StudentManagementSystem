#pragma once
#include "CStudent.h"
#include "CNotice.h"
#include "CList.h"
#include <string>
#include "CClassCadre.h"
class CClasssports :public CClassCadre
{
public:
	void WriteList(CList* list);


	CClasssports();
	CClasssports(string name, string stuID, string sex, int age, string major, int classNum, string works);
	~CClasssports();

private:
	string works;

};

