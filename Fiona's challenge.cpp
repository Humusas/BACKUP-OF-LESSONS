#include<iostream>
#include<string>

void sea(); 
void sky();
void spaceship();
void forest();


int main()
{char Location;

std::cout << "Hello traveller, to continue our journey please pick where you want to go next " << std::endl;

std::cout << "For the sea press [S], for the sky [Y], for the spaceship [space], for the forest [F]" << std::endl;
std::cin >> Location;
Location = toupper(Location);

switch (Location)
{
case'S':
	std::cout << "you chose the sea" << std::endl;
	sea();
	system("pause");
	break;

case'Y':
	std::cout << "you chose the sky" << std::endl;
	sky();
	system("pause");
	break;
case ' ':
	std::cout << "You chose the spaceship" << std::endl;
	spaceship();
	break;
case 'F':
	std::cout << "You chose th forest" << std::endl;
	break;
default:
	std::cout << "oh c'mon" << std::endl;
	break;
}
system("pause");
return 0;
}

void sea()
{
	std::cout << "You are swimming in the sea"<<std::endl;
}


void sky()
{
	std::cout << "You are falling from the sky into the sea" << std::endl;

}
void spaceship()
{
	std::cout << "You are standing in the spaceship" << std::endl;
}
void forest()
{
	std::cout << "You are standing in the forest" << std::endl;
}
