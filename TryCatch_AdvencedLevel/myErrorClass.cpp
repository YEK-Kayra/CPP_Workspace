#include"myErrorClass.h"

myErrorClass::myErrorClass(string isError) {
	myErrorClass::errorCode = isError;
}

string myErrorClass::getErrorCode() {
	return errorCode;
}