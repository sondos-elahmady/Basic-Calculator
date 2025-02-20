#include <iostream>
using namespace std;
void operate(int num1, int num2, char sign)
{
	switch (sign)
	{
	case '+': cout << "Sum of " << num1 << " + " << num2 << " = " << num1 + num2; break;
	case '-': cout << "Subtraction of " << num1 << " - " << num2 << " = " << num1 - num2; break;
	case '*': cout << "Multiplication of " << num1 << " * " << num2 << " = " << num1 * num2; break;
	case '/': cout << "Divison of " << num1 << " / " << num2 << " = " << num1 / num2; break;
	}
}
void main()
{
	int num1, num2;
	char sign;
	cout << "Please input 2 numbers.\n";
	cin >> num1 >> num2;
	cout << "Please chose the operation (+,-,*,/)\n";
	cin >> sign;
	operate(num1, num2, sign);
}
