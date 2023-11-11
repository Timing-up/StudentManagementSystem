#pragma once
#include <string>
#include <map>
#include "CGrade.h"


using namespace std;
class CStudent
{
protected:
	int classNum;
	string name;
	int age;
	string sex;
	string stuID;
	string idNumber;
	long long stu_ID;
	string Date;
	string major;
	CGrade grade;



public:
	CStudent();
	//���캯��
	CStudent(string name, string stuID, string sex, int age, string major, int classNum);
	CStudent(string name,string stuID,string sex,int age,string major,int classNum,double math,double english,double programming);
	//CStudent(string name, int age, string sex, string idNumber, long long stuID, string Date);
	virtual ~CStudent();


	//virtual void WriteList(CList* list);
	//void SendList(CList* list);
	//
	//void AddScore(const string& subject, int score);
	//int GetScore(const string& subject);
	//map<string, int> GetAllScores(); 
	//int GetHighestScore();
	//int GetLowestScore();
	//int CalculateTotalScore();
	//float GetAverageScore();




	//��ѧ����������Ϣ��ʽ�����ַ���
	string formatInfo();
	void formatWrite(const std::string& str);

	void showInfo();

	void SetName(string name);
	string GetName();

	string GetstuID();
	void SetstuID(string stuID);

	string Getsex();
	void Setsex(string sex);

	void Setage(int age);
	int Getage();

	void Setmajor(string major);
	string Getmajor();

	void SetclassNum(int classNum);
	int GetclassNum();

	double Getmath();
void Setmath(double math);

	double Getenglish();
void Setenglish(double english);

	double Getprogramming();
void Setprogramming(double programming);

	//�����ƽ���ɼ�����߷֣���ͷ֣��ܷ�
	double GetTotalGrade();


	double GetAverageGrade();
	double GetMaxGrade();
	double GetMinGrade();




};

