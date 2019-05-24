#pragma once
#include "../Operations/AbstractMathematicalOperation.h"
#include "../Operations/AddOperation.h"
#include "../Operations/DivideOperation.h"
#include "../Operations/MultiplyOperation.h"

class MathematicalOperationFactory
{
public:
	MathematicalOperationFactory();
	~MathematicalOperationFactory();
	AbstractMathematicalOperation* getOperation(OperationType operationType, int a, int b);

private:
	AbstractMathematicalOperation* getAddOperation(int a, int b);
	AbstractMathematicalOperation* getDivideOperation(int a, int b);
	AbstractMathematicalOperation* getMultiplyOperation(int a, int b);
};

