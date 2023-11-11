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
	CTeacherBase* teacher;  // ������ʦ����ָ��
	int nCount;//��ǰѧ��������
public:
	CClassroom();
	CClassroom(string nm);
	~CClassroom();
	int GetNCount();
//	void SetStudent(CStudent* stu, int i);//��ѧ���͵��������棬����ָ�����ָ������
	CTeacherBase* GetTeacher() const;  // ��ӻ�ȡ��ʦ�ķ���
	void SetTeacher(CTeacherBase* t);  // ���������ʦ�ķ���
//	CStudent* GetStudent(int i);
	// ������������ȡ�༶����߷֡���ͷ֡�ƽ����
	int GetClassHighestTotalScore();
	int GetClassLowestTotalScore();
	float GetClassAverageTotalScore();
//	void SortStudentsByScore();
//	std::vector<std::tuple<std::string, int, std::map<std::string, int>>> GetSortedStudentsInfo();
//	vector<int> GetStudentsTotalScores();
};