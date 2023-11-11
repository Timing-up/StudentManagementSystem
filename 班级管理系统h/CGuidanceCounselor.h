#pragma once
#include "CTeacher.h"
#include "CNotice.h"
class CGuidanceCounselor : public CTeacherBase
{
	public:
	CGuidanceCounselor();
	CGuidanceCounselor(const string& teacherName, const string& works);
	~CGuidanceCounselor();
	void showInfo();
	


};


