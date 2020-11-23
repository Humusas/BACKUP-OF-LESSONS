#include<iostream>
#include<string>
#include<ctime>

int main()
{


	time_t init, final;
	double dif;
	std::string sentence;


	time(&init);
	std::cout << "type: abracadabra";
	std::cout << "\n\n";
	std::cin >> sentence;


	if (sentence == "abracadabra")
	{
		//when correct sentence written
		time(&final);
		dif = difftime(final, init);
		std::cout << "you took" << dif << "seconds";

	}
	else
	{
		std::cout << "sorry";



	}
	system("pause");
}
