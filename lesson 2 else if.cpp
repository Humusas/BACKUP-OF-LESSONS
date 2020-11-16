#include <iostream>
#include <string>


int main()
{
	int age;

		std::cout << "hello user, please type your age" << std::endl;
		std::cin >> age ;

	if (age <= 0)
	{
			std::cout << "your age is invalid" << std::endl;
	}
	else if ( age < 10)
	{
		std::cout << "please call somebody that is at least 18 years old"<<std::endl;
	}

	else if ( age <19)
	{
		std::cout << "parent control activated" << std::endl;
	}
	else if ( age < 30)
	{
		std::cout << "what's up?" << std::endl;
	}
	else if ( age <= 50)
	{
		std::cout << "Hello middle age user" << std::endl;
	}
	else if (age<=75)
	{
		std::cout << "How are family and kids?" << std::endl;
	}
	else if ( age <= 150)
	{
		std::cout << "Hello wise person" << std::endl;
	}
	else
	{
		std::cout << "is it possible?" << std::endl;
	}
	system("pause");
	return 0;

}