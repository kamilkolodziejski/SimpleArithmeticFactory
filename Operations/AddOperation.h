#pragma once
#include <string>
#include "AbstractMathematicalOperation.h"

class AddOperation : 
	public AbstractMathematicalOperation
{
private:
	int a, b;
public:
	AddOperation(int a1, int a2);
	~AddOperation();

	std::string proceed() override;
};

