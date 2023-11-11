#pragma once
#include <iostream>
#include <string>
#include <map>

using namespace std;

//成绩类，用于记录学生的成绩和成绩管理
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

