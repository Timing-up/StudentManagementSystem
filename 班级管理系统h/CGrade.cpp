#include "CGrade.h"

CGrade::CGrade()
{
}

CGrade::CGrade(double math, double english, double programming)
    : math(math), english(english), programming(programming)
{
}

CGrade::~CGrade()
{
}

void CGrade::setMath(double math)
{
	this->math = math;
}

void CGrade::setEnglish(double english)
{
	this->english = english;
}

void CGrade::setProgramming(double programming)
{   
this->programming = programming;
}

double CGrade::getMath()
{
    return math;
}

double CGrade::getEnglish()
{
    return english;
}

double CGrade::getProgramming()
{
    return programming;
}












