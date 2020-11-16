#include<iostream>
#include<string>

void +();
void -();
void *();
void /();
void ^();




int main()
{	int number1;
	int number2;

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
	std::cout << "1.+" << std::endl;
	std::cout << "2.-" << std::endl;
	std::cout << "3.*" << std::endl;
	std::cout << "4./" << std::endl;
	std::cout << "5.^" << std::endl;
	std::cout << "please enter your chosen function symbol" << std::endl;
	std::cin >> dir ;
	dir = toupper(dir);

	switch (dir)
	{
	case'+':
		+();
		break;
	case'-':
		-();
		break;
	case'*':
		*();
		break;
	case '/':
		/ ();
		break;
		case ^ () :
			^ ();
			break;
		default:
			std:: cout<< "please choose from DA list" << std::endl;
			break;
	}

	system("pause");
}
	void +()
	{
		int sum;
		int sum = number1 + number2;
		std::cout << "sum of numbers is " << sum << std::endl;
		std::cout << std::endl;
		}

	void -()
	{
		int dif;
		int dif = number1 - number2;
		std::cout << "difference of numbers is " << dif << std::endl;
		std::cout << std::endl;
		}
	void *()
	{
		int times;
		int times = number1 * number2;
		std:: << "total number is " << times << std::endl;
		std::cout << std::endl;
	}



	system("pause");
	return 0;


}