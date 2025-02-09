#pragma once

#include <iostream>

using namespace std;

class myErrorClass {

private:
	string errorCode;

public:

	myErrorClass(string isErrorCode);

	string getErrorCode();

};