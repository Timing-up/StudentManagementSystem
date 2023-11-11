#include "CNotice.h"

CNotice::CNotice()
{
	this->ID = 1;
	this->content = "运动会要来了，请班上同学填运动信息表";

}

int CNotice::GetID()
{
	return this->ID;
}

void CNotice::SetID(int id)
{
	this->ID = id;
}

void CNotice::SetContent(string content)
{
	this->content = content;
}

string CNotice::showNotice()
{
	return content;
}
