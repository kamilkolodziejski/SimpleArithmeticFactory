#include "AbstractMathematicalOperation.h"


AbstractMathematicalOperation::AbstractMathematicalOperation(std::string name) : operationName(name)
{
}

AbstractMathematicalOperation::~AbstractMathematicalOperation()
{
}

std::string AbstractMathematicalOperation::getClassName()
{
	return this->operationName;
}
