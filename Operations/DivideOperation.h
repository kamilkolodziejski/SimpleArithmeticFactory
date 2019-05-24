#pragma once
#include "AbstractMathematicalOperation.h"

class DivideOperation :
	public AbstractMathematicalOperation
{
private:
	int a, b;
public:
	DivideOperation(int a, int b);
	~DivideOperation();

	std::string proceed() override;
};

