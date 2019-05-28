// ArithmeticFactory.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <ctime>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Factory/MathematicalOperationFactory.h"
#include "Operations/AbstractMathematicalOperation.h"

const int OPERATIONS_COUNT = 3;

std::string calculateRow(OperationType type, int a, int b)
{
	auto factory = MathematicalOperationFactory();
	std::shared_ptr<AbstractMathematicalOperation> ptr(factory.getOperation(type, a, b));

	std::stringstream ss;
	ss << ptr->getClassName() << ';' << a << ';' << b << ';' << ptr->proceed() << ';' << std::endl;
	return ss.str();
}

std::string generateCalculationRow(OperationType type)
{
	int a = (rand() % 20) + 1;
	int b = (rand() % 20) + 1;

	return calculateRow(type, a, b);

}

void generateResultsCsv(std::string filename, int n)
{
	std::ofstream fs;
	fs.open(filename);

	auto factory = new MathematicalOperationFactory();
	std::shared_ptr<AbstractMathematicalOperation> ptr;

	OperationType type = ADDITION;

	fs << "Id;Operation;A;B;Result;\n";
	for (int i = 0; i < n; ++i)
	{
		fs << i<<';'<<generateCalculationRow(type);
		type = static_cast<OperationType>( (type + 1) % OPERATIONS_COUNT );
	}
	fs.close();
}

int main()
{
	srand(time(0));
	generateResultsCsv("results.csv", 30);
}