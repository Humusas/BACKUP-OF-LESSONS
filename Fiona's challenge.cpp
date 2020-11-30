#include<iostream>
#include<string>



void sea();			//1 
void sky();			//2
void spaceship();	//3
void forest();		//4


int main()
{
	char Location;

std::cout << "Hello traveller, to continue our journey please pick where you want to go next " << std::endl;

std::cout << "For the sea press [a], for the sky [b], for the spaceship [c], for the forest [d]" << std::endl;
std::cin >> Location;
Location = toupper(Location); //for lower letters to make upper case

switch (Location)
{
case'A':
{
	std::cout << "you chose the sea" << std::endl;
	sea();
	system("pause");
	break;
}

case'B':
{
	std::cout << "you chose the sky" << std::endl;
	sky();
	system("pause");
	break;
}

case 'C':
{
	std::cout << "You chose the spaceship" << std::endl;
	spaceship();
	break;
}

case 'D':
{
	std::cout << "You chose th forest" << std::endl;
	forest();
	break;

}
default:
{
	std::cout << "oh c'mon" << std::endl;
	break;
}
}
system("pause");

}


void sea() //1
{
	std::cout << "You are swimming in the sea"<<std::endl;
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
