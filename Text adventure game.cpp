#include<iostream>
#include<string>

void home();		//1 
void garage();		//2
void racetrack();	//3
void highscores();	//4


int main()
{
	int Location;

	std::cout << "Hello traveller, to continue our journey please pick where you want to go next " << std::endl;

	std::cout << "For the sea press [1], for the sky [2], for the spaceship [3], for the forest [4]" << std::endl;
	std::cin >> Location;
	Location = toupper(Location);

	switch (Location)
	{
	case'1':
		std::cout << "you chose the sea" << std::endl;
		sea();
		system("pause");
		break;

	case'2':
		std::cout << "you chose the sky" << std::endl;
		sky();
		system("pause");
		break;
	case '3':
		std::cout << "You chose the spaceship" << std::endl;
		spaceship();
		break;
	case '4':
		std::cout << "You chose th forest" << std::endl;
		forest();
		break;
	default:
		std::cout << "oh c'mon" << std::endl;
		break;
	}
	system("pause");
	return 0;
}

void sea() //1
{
	std::cout << "You are swimming in the sea" << std::endl;
	system("pause");
}
void sky() //2
{
	std::cout << "You are falling from the sky into the sea" << std::endl;
	system("pause");
}
void spaceship() //3
{
	std::cout << "You are standing in the spaceship" << std::endl;
	system("pause");
}
void forest() //4
{
	std::cout << "You are standing in the forest" << std::endl;
	system("pause");
}
