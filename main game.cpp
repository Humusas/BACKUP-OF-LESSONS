#include <iostream>
#include <string>
void garage();		//location 1
void engine();		//location 2
void body();		//location 3
void transmition(); //location 4
void travel(int i);	//travel between rooms
int myLocation;		//keep track of where the player is
char THEanswer;

int main()
{	
	
	std::string nickname;
	std::cout << "Dear player welcome to the game"<<std::endl;
	std::cout << "Please enter your nickname" << std::endl;
	getline(std::cin,nickname);
	std::cout << "Hello, "<<nickname<<". Nice to meet you."<<std::endl;
	system("pause");
	system("clear");
	std::cout << "The story goes like this:" << std::endl;
	std::cout << "You want to go back in time. Don't ask why. You want it. I'm here to help you, so listen." << std::endl;
	std::cout << "To achieve this impossible magic trick you need the following:" << std::endl;
	std::cout << "A car" << std::endl;
	std::cout << "But not any car. THE car." << std::endl;
	std::cout << "I can't just give THE car. Offcourse you will have to travel arround the world and collet the parts for your car." << std::endl;
	std::cout << "The adventure doesn't end there. You will have to tune it." << std::endl;
	std::cout << "Only, once you have reached 88,88 MPH (143,04 KPH) you will be able to travel back in time."<<std::endl;

	std::cout << "Do you want to start?[Y/N]"<<std::endl;
	std::cin >> THEanswer;
	THEanswer = toupper(THEanswer);

		if (THEanswer == 'Y') //start the game
		{
			system("clear");
			
			travel(1);
			

			system("pause");
			
		}
		
		else // end the game
		{
			std::cout << "Sorry, the party is over" << std::endl;
			
			//put the player on the highscore board
			//show the highscore board
			
			return 0;
			system("pause");

		}


	system("pause");


}

void garage()
{
	system("clear");
	std::cout << "You are in garage" << std::endl;

	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);


}

void engine()
{
	system("clear");
	std::cout << "You have dicited to pick up an engine" << std::endl;
	
	

	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);

}

void body()
{
	system("clear");
	std::cout << "You have dicited to find a shell of your project" << std::endl;
	
	
	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);

}

void transmition()
{
	system("clear");
	std::cout << "You are on a hunt for tranny" << std::endl;
	

	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);

}

void travel(int i)
{
	switch (i)
	{
	case 1:
	{
		garage();
	}
	break;
	case 2:
	{
		engine();
	}
	break;
	case 3:
	{
		body();
	}
	break;
	case 4:
	{
		transmition();
	}
	break;
	}

}
