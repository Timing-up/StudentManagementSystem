#include "CNotice.h"

CNotice::CNotice()
{
	this->ID = 1;
	this->content = "�˶���Ҫ���ˣ������ͬѧ���˶���Ϣ��";

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
