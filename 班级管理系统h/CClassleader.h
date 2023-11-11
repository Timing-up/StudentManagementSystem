#pragma once
#include "CNotice.h"
#include "CMoveList.h"
#include"CClassCadre.h"


class CClassleader:public CClassCadre
{
    string name;
	int ID;
	string works;
public:
	CClassleader();

	CClassleader(string name, string stuID, string sex, int age, string major, int classNum,string works);
	~CClassleader();

	string GetName();
	void SetName(string name);
	void PublishNotice(CNotice* cno);
//	void WriteMList(CMoveList* cl);
	string GetWorks();
	void SetWorks(string work);
	//void WriteList(CList* list);

};

