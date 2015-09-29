#pragma once
#include <exception>
#include <string>
#include "StackWalker.h"

class Exeption : std::exception, StackWalker
{
public:
	Exeption(const char* exceptionString);
	virtual void OnOutput(const char* szText);
	const char* what();
	const char* getStackTrace();
private:
	std::string exceptionString;
	std::string stackTrace;

};

