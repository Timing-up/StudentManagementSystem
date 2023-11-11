#pragma once
#include <string>
#include <vector>
#include "CClassleader.h"
#include "CClasssports.h"
#include "CStudent.h"
#include "CTeacher.h"


using namespace std;

class CClassroom
{
	public:
	string name;
	CStudent* stu[100];
//	CStudent stu;
	vector<CStudent*> vec_stu;
	vector<CClassCadre*> vec_clsCadre;
	CTeacherBase* teacher;  // 声明老师对象指针
	int nCount;//当前学生的人数
public:
	CClassroom();
	CClassroom(string nm);
	~CClassroom();
	int GetNCount();
//	void SetStudent(CStudent* stu, int i);//把学生送到数组里面，父类指针可以指向子类
	CTeacherBase* GetTeacher() const;  // 添加获取老师的方法
	void SetTeacher(CTeacherBase* t);  // 添加设置老师的方法
//	CStudent* GetStudent(int i);
	// 新增方法：获取班级的最高分、最低分、平均分
	int GetClassHighestTotalScore();
	int GetClassLowestTotalScore();
	float GetClassAverageTotalScore();
//	void SortStudentsByScore();
//	std::vector<std::tuple<std::string, int, std::map<std::string, int>>> GetSortedStudentsInfo();
//	vector<int> GetStudentsTotalScores();
};