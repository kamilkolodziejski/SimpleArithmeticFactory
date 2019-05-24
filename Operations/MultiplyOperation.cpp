#include "MultiplyOperation.h"


MultiplyOperation::MultiplyOperation(int a, int b) : a(a), b(b), AbstractMathematicalOperation("Multiply operation")
{
}


MultiplyOperation::~MultiplyOperation()
{
}

std::string MultiplyOperation::proceed()
{
	auto result = a * b;
	return std::to_string(result);
}