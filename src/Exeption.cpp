#include "Exeption.h"

Exeption::Exeption(const char* exceptionString) : StackWalker() {
	this->exceptionString = std::string(exceptionString);
#ifdef _DEBUG
	StackWalker::ShowCallstack();
#endif
}

void Exeption::OnOutput(const char* szText) {
	stackTrace += szText;
	StackWalker::OnOutput(szText);
}

const char* Exeption::what() {
	return this->exceptionString.c_str();
}

const char* Exeption::getStackTrace() {
	return this->stackTrace.c_str();
}