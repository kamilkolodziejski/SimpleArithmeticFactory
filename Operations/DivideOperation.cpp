#include "DivideOperation.h"

DivideOperation::DivideOperation(int a, int b) : a(a), b(b), AbstractMathematicalOperation("Devide operation")
{
}


DivideOperation::~DivideOperation()
{
}

std::string DivideOperation::proceed()
{
	auto result = a / b;
	return std::to_string(result);
}

