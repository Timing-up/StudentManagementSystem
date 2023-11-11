#include "CTeacher.h"
#include "CNotice.h"
#include <iostream>


CTeacher::CTeacher()
{
}

CTeacher::CTeacher(const std::string& teacherName, const std::string& works, const std::string& subject): CTeacherBase(teacherName, works), subject(subject)
{
}



CTeacher::~CTeacher()
{
}

void CTeacher::SetTeacherSubject(const std::string& subject)
{
		this->subject = subject;
}

string CTeacher::GetTeacherSubject()
{
		return subject;
	
}

void CTeacher::showInfo()
{
	cout << "教师姓名：" << name << endl;
	cout << "教师职务：" << works << endl;
	cout << "教师科目：" << subject << endl;
}






