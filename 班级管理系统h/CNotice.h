#pragma once
#include <string>
#include <vector>
using namespace std;
class CNotice
{
	int ID;

	string content;
public:
	CNotice();
	int GetID();
	void SetID(int id);
	void SetContent(string content);
	string showNotice();
};


