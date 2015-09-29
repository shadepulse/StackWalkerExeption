#include <iostream>
#include "Exeption.h"

using namespace std;

void naked() {
	throw Exeption("Naked Exeption");
}

void funcy() {
	naked();
}

void got() {
	funcy();
}

void dioner() {
	got();
}

void walker() {
	dioner();
}

int main(int argc, char** args) {
	try {
		walker();
	}catch(Exeption& ex) {
		cout << ex.getStackTrace() << endl;
		cout << ex.what() << endl;
	}
	system("pause");
	return 1;
}