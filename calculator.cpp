#include<iostream>
#include<string>

void add();
void minus();
void times();
void divide();
void square();

int number1;
int number2;



int main()
{	
	int action;

	std::cout << "Hello, please pick two numbers" << std::endl;
	std::cout << "Enter first number" << std::endl;
	std::cin >> number1;
	std::cout << "your first number is " << number1 << std::endl;
	std::cout << "enter your second number" << std::endl;
	std::cin >> number2;
	std::cout << "your second number is " << number2 << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "please pick a function from menu for your two numbers" << std::endl;
	std::cout << "1.ADD" << std::endl;
	std::cout << "2.MINUS" << std::endl;
	std::cout << "3.TIMES" << std::endl;
	std::cout << "4.DIVIDE" << std::endl;
	std::cout << "5.SQUARE" << std::endl;
	std::cout << "please enter your chosen function number" << std::endl;
	std::cin >> action ;
	action = toupper(action);

	switch (action)
	{
	case'1':
		add();
		break;
	case'2':
		minus();
		break;
	case'3':
		times();
		break;
	case'4':
		divide();
		break;
	case'5'():
		square();
		break;   
	default:
		std:: cout<< "please choose from DA list" << std::endl;
		break;
	}

	system("pause");
}
	

void add()
	{
		int sum;
		sum = number1 + number2;
		std::cout << "sum of numbers is " << sum << std::endl;
		std::cout << std::endl;
		system("pause");
	}
void minus()
	{
		int dif;
		dif = number1 - number2;
		std::cout << "difference of numbers is " << dif << std::endl;
		std::cout << std::endl;
		system("pause");
	}
void times()
	{
		int times;
		times = number1 * number2;
		std::cout << "total number is " << times << std::endl;
		std::cout << std::endl;
		system("pause");
	}
void divide()
{
	int divid;
	if (number2 == 0)
	{
		std::cout << "can not divide by 0" << std::endl;
		std::cout << std::endl;
		system("pause");
	}
	else
		divid = number1 / number2;
		std::cout << "difference of numbers is " << divid << std::endl;
		std::cout << std::endl;
		system("pause");
	}
void square()
{
	int square;
	for (number1; square = number1 * number1; number2--)
	{
		std::cout << "number1 raised " << number2<< " time(s) is "<< square<< std::endl;
		std::cout << std::endl;
	}
	system("pause");
}
