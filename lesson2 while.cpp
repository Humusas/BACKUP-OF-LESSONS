#include<iostream>
#include<string>

int main()
{	int n = 1;
	int m = 1;

	while (n < 20)
	{
		std::cout << n << ", ";
		n++; //add one to n
	}
		std::cout<<std::endl;
		std::cout << std::endl;
		system("pause");

	do
	{	
		std::cout << m << ", ";
		m++;
	}while (m < 20);
	std::cout << std::endl;
	system("pause");
	
}