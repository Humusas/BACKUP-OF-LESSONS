#include<iostream>
#include<string>
#include<ctime>


int main()
{
	int i_wanna_play;
	int random_number;
	int guess;
	std::cout << "hello user. i'm gonna get a random number from 1 to 6." << std::endl;
	std::cout<<"then you gonna guess it, until you get it right. gotcha?"<< std::endl;
	std::cout << "do you wanna play?" << std::endl;
	std::cin >> i_wanna_play;
	if (i_wanna_play==1)

		
		{
			srand(time(0));
			random_number = rand() % 6 + 1;	//produces number between 0 and 5 then add 1

			std::cout << "i got a random number" << std::endl;
			std::cout << "take a guess" << std::endl;


		}

	else
	{

	return 0;

	}





	system ("pause");
	return 0;
}