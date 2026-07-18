#include <iostream>
#include "MyInputLib.h"
#include "MyMathLib.h"
using namespace std;
using namespace MyInputLib;
using namespace MyMathLib;
int main()
{
	int number1 = ReadPositiveNumber("Enter Positive Number?\n");
	int number2 = ReadPositiveNumber("Enter Positive Number?\n");
	cout << "Sum of "
		<< number1
		<< " and "
		<< number2 << " = "
		<< Sum(number1, number2);
	return 0;
}

