#pragma once
#include <iostream>
#include <string>
#include <map>

using namespace std;

//�ɼ��࣬���ڼ�¼ѧ���ĳɼ��ͳɼ�����
class CGrade
{
	friend class CStudent;
private:
	double math;
	double english;
	double programming;


public:
	CGrade();
	CGrade(double math, double english, double programming);
	~CGrade();
	void setMath(double math);
	void setEnglish(double english);
	void setProgramming(double programming);
	double getMath();
	double getEnglish();
	double getProgramming();




};

