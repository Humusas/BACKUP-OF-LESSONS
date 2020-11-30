#include<iostream>
#include<string>
#include<ctime>


int main()
{
	int where_am_i;

	int rand_treasure;

	srand(time(0));
	//prod number between 0 and 5 then add 1
	std::cout << rand() % 6 + 1 << std::endl;






	system("pause");
	return (0);
}