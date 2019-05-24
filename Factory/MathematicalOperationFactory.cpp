#include "MathematicalOperationFactory.h"

MathematicalOperationFactory::MathematicalOperationFactory()
{
}


MathematicalOperationFactory::~MathematicalOperationFactory()
{
}

AbstractMathematicalOperation* MathematicalOperationFactory::getOperation(OperationType operationType, int a, int b)
{
	switch (operationType)
	{
	case ADDITION:
		return getAddOperation(a, b);
	case DIVISION:
		return getDivideOperation(a, b);
	case MULTIPLICATION:
		return getMultiplyOperation(a, b);
	default:
		return NULL;
	}
}

AbstractMathematicalOperation* MathematicalOperationFactory::getAddOperation(int a, int b)
{
	return new AddOperation(a, b);
}

AbstractMathematicalOperation* MathematicalOperationFactory::getDivideOperation(int a, int b)
{
	return new DivideOperation(a, b);
}

AbstractMathematicalOperation* MathematicalOperationFactory::getMultiplyOperation(int a, int b)
{
	return new MultiplyOperation(a, b);
}