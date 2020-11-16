#include<iostream>
#include<string>

void goNorth();
void goSouth();

int main()
{
	int age;
	char dirrection;
	std::cout << "please enter your age" << std::endl;
	std::cin >> age ;

	std::cout << "Where are we going today " << age<<"-year old traveller? \n " << std::endl;
	std::cout << "For North press [N], for South [S] \n" << std::endl;
	std::cin >> dirrection;
	dirrection = toupper(dirrection);

	switch (dirrection)
	{
	case'N':
		std::cout << "you chose North" << std::endl;
		goNorth();
		system("pause");
		break;

	case'S':
		std::cout << "you chose South" << std::endl;
		goSouth();
		system("pause");

		break;

	default:
		std::cout << "please don't lie" << std::endl;
		break;
	}
	system("pause");
	return 0;
}

void goNorth()
{
	std::cout << "travelling north" << std::endl;

}


void goSouth()
{
	std::cout << "travelling south" << std::endl;
}
