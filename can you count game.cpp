#include <iostream>
#include <string>
#include <ctime>


void random_number(int &container);  //outside container goes inside void. modify this-&
//reference

int main()
{
	int number1;
	random_number(number1);
	int number2;
	random_number(number2);
	int answer;
	int correct_answer = number1 + number2;
	
	
	std::cout << "hello. do you think you can count?" << std::endl;
	std::cout<<"how much is" <<number1<<" +" << number2 <<"?" << std::endl;
	std::cin >> answer;

	while (answer != correct_answer)
	{
		std::cout << "the number do not match" << std::endl;
		std::cin >> answer;

	}
	std::cout << "that's right!" << std::endl;
	


	
	system("pause");

}


void random_number(int &container)
{
	srand(time(0));
	container=rand() % 6 + 1;

}