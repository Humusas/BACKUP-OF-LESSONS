#include <iostream>
#include <string>
#include <ctime>
#include "inventory.h"

std::string nickname;

void menu();
void CreateInventory();


void garage_loc();		//location 1
void engine_loc();		//location 2
void body_loc();		//location 3
void tune_loc();		//location 4
void boss_loc();		//location 5
void high_score();		//location 6

//void minigame1();			//location 2 minigame for the engine


void travel(int i);	//travel between rooms

int myLocation;		//keep track of where the player is

char THEanswer;

int main()
{	
	std::cout << "Dear player welcome to the game"<<std::endl;
	std::cout << "Please enter your nickname" << std::endl;
	getline(std::cin, nickname);
	std::cout << "Hello, " << nickname << ". Nice to meet you." << std::endl;
	system("pause");
	system("clear");
	std::cout << "The story goes like this:" << std::endl;
	std::cout << "You want to impress your neighbours. I'm here to help you, so listen." << std::endl;
	std::cout << "To achieve this impossible magic trick you need the following:" << std::endl;
	std::cout << "A car" << std::endl;
	std::cout << "But not any car. THE car." << std::endl;
	std::cout << "I can't just give THE car. Offcourse, you will have to travel arround local shops and collect the parts for your car." << std::endl;
	std::cout << "The adventure doesn't end there. There is an upcoming drag event and you going there. Try to win it. Goodluck" << std::endl;
	std::cout << "Only, once you have won it you will be recognised by your neighbours."<<std::endl;
	std::cout << "Do you want to start?[Y/N]"<<std::endl;
	std::cin >> THEanswer;
	THEanswer = toupper(THEanswer);

		if (THEanswer == 'Y') //start the game
		{
			system("clear");
			std::cout << "Congratz. Garage unlocked" << std::endl;
			travel(1);		//arriving at garage. has to be 1 to 6 number while traeling. else starts reading next line
			system("pause");
		}
		else // ANY other -> end the game
		{
			system("clear");
			std::cout << "Sorry, the game is over" << std::endl;
			system("pause");
			travel(6);			//show the highscore board
			system("pause");
		}
	system("clear");
	std::cout << "Goodbye " <<nickname<<". Program shutting down" << std::endl;
	system("pause");
}		//  GAME ENDS HERE. PROGRAM SHUTS

void menu()
{
	std::cout << " " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "=====================" << std::endl;
	std::cout << "|                   |" << std::endl;
	std::cout << "| 1.GARAGE          |" << std::endl;
	std::cout << "| 2.LOOK FOR ENGINE |" << std::endl;
	std::cout << "| 3.LOOK FOR BODY   |" << std::endl;
	std::cout << "| 4.TUNE CAR        |" << std::endl;
	std::cout << "| 5.BOSS            |" << std::endl;
	std::cout << "| 6.HIGHSCORES      |" << std::endl;
	std::cout << "|                   |" << std::endl;
	std::cout << "=====================" << std::endl;

}

void travel(int i)
{
	switch (i)
	{
	case 1:
	{
		garage_loc();
	}
	break;
	case 2:
	{
		engine_loc();
	}
	break;
	case 3:
	{
		body_loc();
	}
	break;
	case 4:
	{
		tune_loc();
	}
	break;
	case 5:
	{
		boss_loc();
	}
	break;
	case 6:
	{
		high_score();
	}
	break;
	}
}

void garage_loc()		//location 1
{
	system("clear");
	std::cout << "You are in garage" << std::endl;
	

	//shows items that are won in minigames
		

	
	

	menu();
	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);



}

void engine_loc()		//location 2 where you win engine
{
	system("clear");
	std::cout << "You have decited to pick up an engine" << std::endl;
	std::cout << "The local spare engines departament asks you to name the stuff you need" << std::endl;
	std::cout << "You will have to tell them exactly what you want"<<std::endl;

	//minigame1();

	time_t init, final;
	double dif;
	std::string sentence1;
	std::string nothing;

 
	std::cout << "Tell them, that you want: Porsche Panamera Sport Turismo Turbo S E-Hybrid"<<std::endl; 
	system("pause");
	std::cout << "3.2.1. GO!"<< std::endl;
	getline(std::cin, nothing); std::cout<<std::endl;
	time(&init);				//starts counting time
	getline(std::cin, sentence1);
	time(&final);				//stops counting time 
	dif = difftime(final, init);
	std::cout << "fin" << std::endl;
	std::cout << "You took " << dif << " seconds" << std::endl;
	system("pause");

	
	if (sentence1 == "Porsche Panamera Sport Turismo Turbo S E-Hybrid") 
	{//when correct sentence written
		
		if (dif < 20)
		{//if less then 20 secs
			std::cout << "Congratulations. You have an engine!" << std::endl;


		//	Inventory Item0; quantity 0 + 1
		//Inventory::SetQuantity(1);
			//you can stack quantity of engines 


		}
		else
		{//more then 20 secs
			std::cout << "Sorry, we already sold that." << std::endl;
			std::cout << "Come back later :)"<<std::endl;
			system("pause");
		}
	}
	else         //when wrong sentence written
	{
		std::cout << "Sorry, we don't have that." << std::endl;
		std::cout << "Come back later :)" << std::endl;;
		system("pause");
	}
	
	

	menu();
	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);

}

void body_loc()   //location 3
{
	system("clear");
	std::cout << "You have decited to find a shell of your project" << std::endl;
	std::cout << "Task is simple." << std::endl;
	std::cout << "I will give you a number. Guess if you will get a bigger one"<<std::endl;
	

	menu();
	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);

}

void tune_loc()		//location 4
{
	system("clear");
	std::cout << "You decided to tune your car" << std::endl;
	

	menu();
	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);

}
void boss_loc()		//location 5
{
	system("clear");
	std::cout << "You are going to fight a boss" << std::endl;


	std::cout << "You have reached 88, 88 MPH (143, 04 KPH)..." << std::endl;
	system("pause");
	system("clear");
	std::cout << "You went back in time. Don't ask why. . . " << std::endl;
	system("pause");
}
void high_score()
{
	system("clear");
	std::cout << "=======================" << std::endl;
	std::cout << "    HIGHSCORE BOARD" << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Under construction" << std::endl;
	std::cout << "I am not able to zis wright meow" << std::endl;
}

//void minigame3()
/*{

std::string s;

std::cout << "Please enter a string : " << std::endl;

getline(std::cin, s);

std::cout << s << std::endl;
system("pause");

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

}
*/





/* minigame 2
void minigame2()
{

int i_wanna_play;
	int random_number;
	int guess;

	if (i_wanna_play==1)


		{
			srand(time(0));
			random_number = rand() % 6 + 1;	//produces number between 0 and 5 then add 1

			std::cout << "i got a random number" << std::endl;
			std::cout << "take a guess" << std::endl;
			std::cin>>guess
			if (guess==random_number)
			{
			you won
			}

			else
			{
			repeat with new number
			}
*/


Inventory::Inventory(int quantity, int power, float size, float weight)
{
	m_quantity = quantity;	//how many you got
	m_power = power;	//power output
	m_size = size;
	m_weight = weight; //how much item weights
	std::cout << "Inventory item created." << std::endl;
}

Inventory::~Inventory()
{
	std::cout << "Inventory item destroyed." << std::endl;
}

void Inventory::DisplayName()
{
	std::cout << "Name of item: " << m_name << std::endl;
	std::cout << "Desc of item: " << m_description << std::endl;
}

void Inventory::DisplayStats()
{
	std::cout << "Power of item: " << m_power << std::endl;
	std::cout << "Size of item: " << m_size << std::endl;
	std::cout << "Weight of item: " << m_weight << std::endl;
}

void Inventory::SetQuantity(int quantity)
{
	m_quantity = quantity;
}

void Inventory::SetPower(int power)
{
	m_power = power;
}

void Inventory::SetSize(float size)
{
	m_size = size;
}

void Inventory::SetWeight(float weight)
{
	m_weight = weight;
}

void Inventory::SetName(std::string name)
{
	m_name = name;
}

void Inventory::SetDescription(std::string description)
{
	m_description = description;
}

void Inventory::SetStats(std::string name, std::string description,
	int quantity, int power, float size, float weight)
{
	m_quantity = quantity; //how many you have of it
	m_power = power; //horse power
	m_size = size;		//how much space takes in engine bay 
	m_weight = weight;	//kilos
	m_name = name;
	m_description = description;
}
void CreateInventory()
{
	const int TOTAL_ITEMS = 4;
	Inventory items[TOTAL_ITEMS];

	items[0].SetStats("2JZ-GTE Twin Turbo",
		"JDM type of engine",
		0,276, 1, 150);
	items[1].SetStats("Toyota  Supra A80",
		"Fourth generation produced 1993-2002.",
		0,0, 1, 1000);
	items[2].SetStats("5.4 L 2V Triton Supercharged Intercooled V8",
		"V8 engine. No comments",
		0,380, 2, 300);
	items[3].SetStats("Ford SVT Lightning",
		"American truck produced 1999-2004.",
		0,0, 2, 1500);

	std::cout << "You own the following items..." << std::endl;

	int count = 1;

	for (int i = 0; i < TOTAL_ITEMS; i++)
	{
		std::cout << "Item #" << i + 1 << ":" << std::endl;
		items[i].DisplayName();
		items[i].DisplayStats();
	}
	system("pause");
}

