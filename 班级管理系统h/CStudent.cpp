#include <iostream>
#include "CStudent.h"
#include<sstream>
#include<iomanip>
#include "CClassroom.h"




/*CStudent::CStudent(string name, int age, string sex, string idNumber, long long stuID, string Date)
{

    this->name = name;
    this->age = age;
    this->sex = sex;
    this->idNumber = idNumber;
    this->stu_ID = stuID;
    this->Date = Date;
}
*/

CStudent::CStudent()
{
}
CStudent::CStudent(string name, string stuID, string sex, int age, string major, int classNum):name(name), stuID(stuID), sex(sex), age(age), major(major), classNum(classNum)
{
}
CStudent::CStudent(string name, string stuID, string sex, int age, string major, int classNum,double math,double english,double programming):name(name),stuID(stuID),sex(sex),age(age),major(major),classNum(classNum),grade(math,english,programming)
{
   /* this->grade.math = math;
    this->grade.english = english;
    this->grade.programming = programming;*/
}
CStudent::~CStudent()
{
}

//把学生的所有信息格式化成字符串
string CStudent::formatInfo()
{
    stringstream ss;
    ss << this->name  << "\t" << this->age << "\t" << this->sex << "\t" << this->idNumber << "\t" << this->stu_ID << "\t" <<this->Date << endl;
    return ss.str();
  
}

void CStudent::formatWrite(const std::string& str)
{
    stringstream ss(str);
    ss << this->name << "\t" << this->age << "\t" << this->sex << "\t" << this->idNumber << "\t" << this->stu_ID << "\t" << this->Date << endl;
}

void CStudent::showInfo()
{
    cout<<"姓名："<<this->name<<endl;
    cout << "学号：" << this->stuID << endl;
    cout<<"性别: "<<this->sex<<endl;
    cout<<"年龄: "<<this->age<<endl;
    cout<<"专业: "<<this->major<<endl;
    cout<<"班级: "<<this->classNum<<endl;
    cout<<"数学成绩: "<<this->grade.math<<endl;
    cout<<"英语成绩: "<<this->grade.english<<endl;
    cout<<"编程成绩: "<<this->grade.programming<<endl;
    cout<<"最高分;"<<setiosflags(ios::fixed)<<setprecision(1)<<this->GetMaxGrade()<<endl;
    cout<<"最低分: "<<setiosflags(ios::fixed) << setprecision(1)<<this->GetMinGrade()<<endl;
    cout<<"平均成绩: "<<setiosflags(ios::fixed) << setprecision(1)<<this->GetAverageGrade()<<endl;
    cout << "总成绩: " <<setiosflags(ios::fixed) << setprecision(1)<< this->GetTotalGrade()<< endl;

}

void CStudent::SetName(string name)
{
    this->name = name;
}

string CStudent::GetName()
{
    return this->name;
}

string CStudent::GetstuID()
{
    return stuID;
}

void CStudent::SetstuID(string stuID)
{
    	this->stuID = stuID;
}

string CStudent::Getsex()
{
    return sex;
}

void CStudent::Setsex(string sex)
{
    this->sex = sex;
}

void CStudent::Setage(int age)
{
    this->age = age;
}

int CStudent::Getage()
{
    return age;
}

void CStudent::Setmajor(string major)
{
    this->major = major;
}

string CStudent::Getmajor()
{
    return major;
}

void CStudent::SetclassNum(int classNum)
{
    this->classNum = classNum;
}

int CStudent::GetclassNum()
{
    return classNum;
}

double CStudent::Getmath()
{
    return grade.getMath();
   
}

void CStudent::Setmath(double math)
{
    grade.setMath(math);
}

double CStudent::Getenglish()
{
return grade.getEnglish();
    
}

void CStudent::Setenglish(double english)
{
grade.setEnglish(english);
}

double CStudent::Getprogramming()
{
return grade.getProgramming();
}

void CStudent::Setprogramming(double programming)
{
       grade.setProgramming(programming);
}

double CStudent::GetTotalGrade()
{
    //计算总分
    int total = grade.getMath() + grade.getEnglish() + grade.getProgramming();
    return total;

  
}

double CStudent::GetAverageGrade()
{
//计算平均分
	double average = (grade.getMath() + grade.getEnglish() + grade.getProgramming()) / 3;
	return average;
    

}

double CStudent::GetMaxGrade()
{
    //计算最高分
double max = grade.getMath();
	if (max < grade.getEnglish())
	{
		max = grade.getEnglish();
	}
	if (max < grade.getProgramming())
	{
		max = grade.getProgramming();
	}
	return max;
 
}

double CStudent::GetMinGrade()
{
//计算最低分
double min = grade.getMath();
	if (min > grade.getEnglish())
	{
		min = grade.getEnglish();
	}
	if (min > grade.getProgramming())
	{
		min = grade.getProgramming();
	}
	return min;
}


