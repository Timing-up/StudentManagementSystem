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
	cout << "��ʦ������" << name << endl;
	cout << "��ʦְ��" << works << endl;
	cout << "��ʦ��Ŀ��" << subject << endl;
}






