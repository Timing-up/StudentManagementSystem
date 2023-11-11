#pragma once
#include "CTeacher.h"
#include "CClassroom.h"
#include "CClassstudy.h"
#include "CClasssports.h"
#include "CClassleader.h"
#include"CGuidanceCounselor.h"
#include <fstream>
#include <sstream> 
using namespace std;


class Management
{

	public:
		Management();
		~Management();

		void run();
		void showAll();
		void showAllStudent();
		void showAllTeacher();
		void InsertStudent();
		void InsertTeacher();
		void EraseStudent();
		void ModifyStudent();
		void FindStudent();
		void FindTeacher();
		void ViewGrade();
		void Exit();


private:
	//CTeacherBase *teacher1;
	CClassroom classroom;
	vector<CTeacherBase*> teachers;


};

