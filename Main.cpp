// ArithmeticFactory.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include "Factory/MathematicalOperationFactory.h"
#include "Operations/AbstractMathematicalOperation.h"

void generateResults(std::string filename)
{
	std::ofstream fs;
	fs.open(filename);

	std::shared_ptr<MathematicalOperationFactory> factory(new MathematicalOperationFactory());
	std::shared_ptr<AbstractMathematicalOperation> ptr;

	fs << "Operation;A;B;Result;\n";
	for (int i = 1; i <= 10; ++i)
	{
		int a = i * 3;
		int b = i * 1;
		ptr.reset(factory->getOperation(ADDITION, a, b));
		fs << ptr->getClassName() << ';' << a << ';' << b << ';' << ptr->proceed() << ';' << std::endl;

		ptr.reset(factory->getOperation(DIVISION, a, b));
		fs << ptr->getClassName() << ';' << a << ';' << b << ';' << ptr->proceed() << ';' << std::endl;

		ptr.reset(factory->getOperation(MULTIPLICATION, a, b));
		fs << ptr->getClassName() << ';' << a << ';' << b << ';' << ptr->proceed() << ';' << std::endl;

	}
	fs.close();
}

int main()
{
	generateResults("results.csv");
}