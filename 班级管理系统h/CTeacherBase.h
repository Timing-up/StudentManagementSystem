#pragma once
#include <string>
#include "CNotice.h"
using namespace std;
class CTeacherBase {


public:
    CTeacherBase();
 
    CTeacherBase(const string& teacherName,const string& works);

    virtual ~CTeacherBase();
    virtual void SetTeacherName(const string& name);
   
    virtual string GetTeacherName();
    virtual void SetTeacherWorks(const string& works);
    virtual string GetTeacherWorks();
    virtual void SetTeacherSubject(const string& subject);
    virtual string GetTeacherSubject();
    virtual void PublishNotice(CNotice* cno);

    virtual void showInfo()=0;



protected:
    string name;
    string works;
};

