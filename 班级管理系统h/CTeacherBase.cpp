#include "CTeacherBase.h"
#include <iostream>
using namespace std;

CTeacherBase::CTeacherBase() {
	// Ĭ�Ϲ��캯����ʵ��
}





CTeacherBase::CTeacherBase(const string& teacherName,const string& works)
    : name(teacherName), works(works) {
    // ���๹�캯����ʵ��
}

CTeacherBase::~CTeacherBase()
{
}

void CTeacherBase::SetTeacherName(const std::string& name) {
    this->name = name;
}



std::string CTeacherBase::GetTeacherName(){
    return name;
}

void CTeacherBase::SetTeacherWorks(const string& works)
{
    this->works = works;
}

string CTeacherBase::GetTeacherWorks()
{
    	return works;
   
}

void CTeacherBase::SetTeacherSubject(const string& subject)
{
    	// �����в�ʵ��
}

string CTeacherBase::GetTeacherSubject()
{
    // �����в�ʵ��
		return "";
}



void CTeacherBase::PublishNotice(CNotice* cno)
{
    	cno->showNotice();
}


