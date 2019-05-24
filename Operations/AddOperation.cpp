#include "AddOperation.h"



AddOperation::AddOperation(int a, int b) : a(a), b(b), AbstractMathematicalOperation("Add operation")
{
}


AddOperation::~AddOperation()
{
}


std::string AddOperation::proceed()
{
	auto result = this->a + this->b;
	return std::to_string((int)result);
}