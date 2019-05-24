#pragma once
#include "AbstractMathematicalOperation.h"

class MultiplyOperation :
	public AbstractMathematicalOperation
{
private:
	int a, b;
public:
	MultiplyOperation(int a1, int a2);
	~MultiplyOperation();

	std::string proceed() override;
};

