#pragma once
#include "CTeacherBase.h"
#include <string>
class CTeacher :
    public CTeacherBase
{

    public:
	CTeacher();
	CTeacher(const std::string& teacherName,const std::string &works, const std::string& subject);
	~CTeacher();
	void SetTeacherSubject(const std::string& subject);
	string GetTeacherSubject();

	void showInfo();
	
	protected:
		string subject;

};

