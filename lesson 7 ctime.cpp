#include<iostream>
#include<string>
#include<ctime>


int main()
{	
	std::string s;

	std::cout << "Please enter a string : " << std::endl;

	getline(std::cin, s);

	std::cout << s << std::endl;
	system("pause");

	return 0;


	time_t init, final;
	double dif;
	std::string sentence;


	
	std::cout << "type: abracadabra mom" << std::endl;
	system("pause");

	time(&init);
	//getline(std::cin >> sentence);
	time(&final);

	if (sentence == "abracadabra mom")
	{
		//when correct sentence written
		
		dif = difftime(final, init);
		std::cout << "you took" << dif << " seconds"<<std::endl;

	}
	else
	{ //wrong sentence
		
		dif = difftime(final, init);

		std::cout << "you took" << dif << "seconds" << std::endl;;

		std::cout << "sorry" << std::endl;



	}
	system("pause");
}
