#pragma once
#include <string>

enum OperationType { ADDITION, DIVISION, MULTIPLICATION };

class AbstractMathematicalOperation
{
private:
	std::string operationName;
public:
	AbstractMathematicalOperation(std::string name);
	~AbstractMathematicalOperation();

	std::string getClassName();
	virtual std::string proceed()=0;
};

 