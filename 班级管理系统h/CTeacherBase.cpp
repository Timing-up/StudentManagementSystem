#include "CTeacherBase.h"
#include <iostream>
using namespace std;

CTeacherBase::CTeacherBase() {
	// 默认构造函数的实现
}





CTeacherBase::CTeacherBase(const string& teacherName,const string& works)
    : name(teacherName), works(works) {
    // 基类构造函数的实现
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
    	// 基类中不实现
}

string CTeacherBase::GetTeacherSubject()
{
    // 基类中不实现
		return "";
}



void CTeacherBase::PublishNotice(CNotice* cno)
{
    	cno->showNotice();
}


