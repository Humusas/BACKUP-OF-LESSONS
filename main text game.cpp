#include <iostream>
#include <string>
#include <ctime>
#include "inventory.h"
#include "cars.h"

std::string nickname;

//different screens, locations
void instructions();
void menu();
void garage_loc();		//location 1
void engine_loc();		//location 2
void body_loc();		//location 3
void tune_loc();		//location 4
void boss_loc();		//location 5
void high_score();		//location 6
void travel(int i);	//travel between locations

//playing
void minigame1();			//location 2 minigame for the car engines
void minigame2();			//location 3 minigame for the car bodies
void wins_body();
void wins_engine();

//pair of extra hands
void inventorisation();
void ford_merge();
void toyota_merge();

int myLocation;		//keep track of where the player is
int ford_engine;		//car parts to collect. for quantity counting
int toyota_engine;
int ford_body;
int toyota_body;
int garage_en_space;
int garage_bo_space;

/*int* f_engine = &ford_engine;		//random pointers to car parts for quantity counting, or stats improvement. not working
int* t_engine = &toyota_engine;
int* f_body = &ford_body;
int* t_body = &toyota_body;*/

char THEanswer;
char car_body;
char picker;
			//Ford car
bool lightning = false;
bool f_body = false;
bool f_engine = false;
			//Toyota car
bool supra = false;
bool s_body = false;
bool s_engine = false;

std::string sentence1;
std::string nothing;

int main()
{	
	instructions();
	system("clear");

	ford_body = 0;
	toyota_body = 0;
	ford_engine = 0;
	toyota_engine = 0;
	garage_en_space=2;
	garage_bo_space=2;

	std::cout << std::endl;
	std::cout << "Dear player welcome to the game"<<std::endl;
	std::cout << "Please enter your Nickname" << std::endl;
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
	std::cout << "Only, once you have won it, you will be recognised by your neighbours."<<std::endl;
	std::cout << "Do you want to start? [Y/N]"<<std::endl;
	std::cin >> THEanswer;
	THEanswer = toupper(THEanswer);

		if (THEanswer == 'Y') //start the game
		{
			system("clear");
			std::cout << "Congratz. Garage unlocked." << std::endl;
			std::cout << "Play wise. You are allowed to have 2 car engines or bodies at same time." << std::endl;
			system("pause");
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


//NOT A FAN OF ASCII ART
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

	inventorisation();
	toyota_merge();
	ford_merge();

	system("clear");
	menu();
	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);
}

void engine_loc()		//location 2 where you win engine
{
	system("clear");
	std::cout << "You have decited to pick up an engine" << std::endl;
	std::cout << "The local spare engines departament asks you to name the stuff you need." << std::endl;
	std::cout << "You will have to tell them exactly what you want."<<std::endl;

	minigame1();		//minigame for engine

	system("clear");
	menu();
	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);
}

void body_loc()   //location 3
{
	system("clear");
	std::cout << "You have decited to find a shell of your project." << std::endl;
	std::cout << "Task is simple:" << std::endl;
	std::cout << "I will give you a random number. Guess if the next will be bigger or smaller one."<<std::endl;
	std::cout << "The second number is also random." << std::endl;

	minigame2();
	
	system("clear");
	menu();
	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);
}

void tune_loc()		//location 4
{
	system("clear");
	std::cout << "You decided to tune your car." << std::endl;
	std::cout<<std::endl;
	std::cout << "This part of garage is under construction." << std::endl;
	std::cout << "Extra pair of hands and physicist are needed." << std::endl;
	menu();
	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);
}

void boss_loc()		//location 5
{
	system("clear");
	std::cout << "You are going to fight a boss" << std::endl;

	if (supra==true || lightning==true) //at least one is true
	{
		std::cout << "The big day is today..." << std::endl;
		std::cout << "You have Your ride ready..." << std::endl;
		std::cout << "1/4 mile track in front of You is waiting..." << std::endl;
		system("pause");
		std::cout << "3!" << std::endl;
		std::cout << "2!" << std::endl;
		std::cout << "1!" << std::endl;
		std::cout << "GO!!!" << std::endl;
		system("pause");

		std::cout << "You have reached 88, 88 MPH (143, 04 KPH)..." << std::endl;
		system("pause");
		system("clear");
		std::cout << "You went back in time. Don't ask why. . . " << std::endl;
		std::cout << "There must be something wrong with Your tune." << std::endl;
	}
	else
	{
		std::cout << "You need a car to participate in a drag race" << std::endl;
		menu();
		std::cout << "Where are you going next?" << std::endl;
		std::cin >> myLocation;
		travel(myLocation);
	}
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
	std::cout << "I am not able to do zis wright meow" << std::endl;
}

void wins_body()
{
	system("clear");
	std::cout << "You can pick one of the car bodies you want to take to garage[T/F]" << std::endl;
	std::cout << "Toyota  Supra A80 (fourth gen) 1993-2002" << std::endl;
	std::cout << "Or" << std::endl;
	std::cout << "Ford SVT Lightning (1999-2004)" << std::endl;

	std::cin >> car_body;
	car_body = toupper(car_body);

	if (car_body == 'T')
	{
		++toyota_body;
		cars toyota;
			toyota.set_values(1,0,1,1500);
			std::cout << "a true JDM fan over here" << std::endl;
		-- garage_bo_space;
	}
	else //picked ford
	{
		++ford_body;
		cars ford;
			ford.set_values(1,0,2,2000);
			std::cout << "you took american pick-up" << std::endl;
		--garage_bo_space;
	}
}

//TAKE A LOOK. TYPING MINIGAME
void minigame1()
{
	time_t init;
	time_t final;
	double dif;
	std::cout << "Tell them, that you want: Porsche Panamera Sport Turismo Turbo S E-Hybrid" << std::endl;
	//needs extra list of car names for random pick of sentence. array of names should do the trick
	system("pause");
	std::cout << "3.2.1. GO!" << std::endl;
	getline(std::cin, nothing); std::cout << std::endl;
	time(&init);				//starts counting time
	getline(std::cin, sentence1);
	time(&final);				//stops counting time 
	dif = difftime(final, init);
	std::cout << "fin" << std::endl;
	std::cout << "You took " << dif << " seconds" << std::endl;
	system("pause");

	if (sentence1 == "Porsche Panamera Sport Turismo Turbo S E-Hybrid") // - full task
	{//when correct sentence written
		if (dif < 20)
		{//if less then 20 secs
			std::cout << "Congratulations. You can have an engine!" << std::endl;
			if (garage_en_space > 0) //if you have space for engine
			{
				wins_engine();
			}
			else
			{
				std::cout << "No more space for extra engine" << std::endl;
			}
		}
		else
		{//more then 20 secs
			std::cout << "Sorry, we already sold that." << std::endl;
			std::cout << "Come back later :)" << std::endl;
			system("pause");
		}
	}
	else         //when wrong sentence written
	{
		std::cout << "Sorry, we don't have that." << std::endl;
		std::cout << "Come back later :)" << std::endl;;
		system("pause");
	}
}

void wins_engine()
{
	cars ford;
	std::cout << "Ford engine has 610 Nm of torque" << std::endl; //ford.acceleration() << std::endl; 
	cars toyota;
	std::cout << "Toyota engine has 431 Nm of torque" << std::endl; //toyota.acceleration() << std::endl;

	std::cout << "Pick one. [F/T]" << std::endl;
	std::cin >> picker;
	picker = toupper(picker);

	if (picker == 'F')
	{
		int* f_engine = &ford_engine;		//pointers to car parts for quantity counting
		int* t_engine = &toyota_engine;
		++ford_engine;
		cars ford;
		std::cout << "You got 5.4 L 2V Triton Supercharged Intercooled V8. " << std::endl;

		ford.set_values(1, 276, 0, 250);
		std::cout << "you have " <<ford_engine<< " engine(s)"<< std::endl;
		--garage_en_space;
		system("pause");
	}

	else //picked T
	{
		std::cout << "You got 2JZ - GTE twin turbo." << std::endl;
		++toyota_engine;
		cars toyota;
		
		std::cout << "a true JDM fan over here" << std::endl;
		--garage_en_space;

		toyota.set_values(2, 380, 0, 350);
		system("pause");
	}
}

//TAKE A LOOK. I DID RANDOM NUMBERS MINIGAME
void minigame2()
{	
	char random_guess;
	int number1;
	int number2;

		srand(time(0));				//first time
		number1 = rand() % 100 + 1;	//creates random number from 1 to 100
		std::cout << number1 << std::endl;
		std::cout << "first number is " << number1 << std::endl;
		std::cout << "Take a guess if the next number is bigger or smaller [B/S]" << std::endl;
		std::cin >> random_guess;
		random_guess = toupper(random_guess);

		srand(time(0));					//second random number
		number2 = rand() % 100 + 1;
		std::cout << number2 << std::endl;

		bool gold = number1 < number2;	//true

		if (gold)	//if true
		{
			if (random_guess == 'B')
			{
				std::cout << "Winner, dinner" << std::endl;
				if (garage_bo_space > 0)
				{
					wins_body();
				}
				else
				{
					std::cout << "No garage space left" << std::endl;
				}
			}
			else //guessed S
			{
				std::cout << "Wrong guess. Try again." << std::endl;
			}
		}
		else // not gold
		{
			if (random_guess == 'S')
			{
				std::cout << "Winner, dinner" << std::endl;
				if (garage_bo_space > 0)
				{
					wins_body();
				}
				else
				{
					std::cout << "No garage space left" << std::endl;
				}
			}
			else // B
			{
				std::cout << "Try Your luck next time" << std::endl;
			}
			std::cout << std::endl;
		}
	system("pause");
}	

void inventorisation()
{
	if (ford_body > 0) //player has some f bodies
	{
		std::cout << "You have " << ford_body << " Ford bodies laying around in your garage" << std::endl;
	}
	else //
	{
		//std::cout << "no truck found" << std::endl;
	}
	if (toyota_body > 0) //player has toyota body
	{
		std::cout << "You have " << toyota_body << " Toyota bodies laying around in your garage" << std::endl;
	}
	else //
	{
		//std::cout << "no car found" << std::endl;
	}
	if (ford_engine > 0) //player has some f engine(s)
	{
		std::cout << "You have " << ford_engine << " Ford engine(s) laying around in your garage" << std::endl;
	}
	else //
	{
		//std::cout << "no engine found" << std::endl;
	}
	if (toyota_engine > 0) //player has toyota engine
	{
		std::cout << "You have " << toyota_engine << " Toyota engine(s) laying around in your garage" << std::endl;
	}
	else //
	{
		//std::cout << "no engine found" << std::endl;
	}
	system("pause");
}

void instructions()
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "                       ====================================================" << std::endl;
	std::cout << "                         *                  INSTRUCTIONS                *" << std::endl;
	std::cout << "                       ====================================================" << std::endl;
	std::cout << "                          In this game you need to read and type in what" << std::endl;
	std::cout << "                          You are asked for. Game is not prepared for" << std::endl;
	std::cout << "                          unexpected input. [] - is used to show You" << std::endl;
	std::cout << "                          what is requared from You to write. In other" << std::endl;
	std::cout << "                          cases, read and figure out by Yourself." << std::endl;
	std::cout << "                          Happy gaming," << std::endl;
	std::cout << "                          Humusas" << std::endl;
	std::cout << "                       ****************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	system("pause");
}

void ford_merge()
{
	if (ford_body > 0 && ford_engine > 0) //if both are true
	{
		lightning = true;
	}
	else
	{
		lightning = false;
	}

	if (lightning == true)
	{
		std::cout << "You have FORD LIGHTNING" << std::endl;
		--ford_engine;
		--ford_body;
	}
	else //no lightning
	{
		std::cout << std::endl;
		std::cout << "Go get some more Ford parts" << std::endl;
		std::cout << std::endl;
	}
	system("pause");
}

void toyota_merge()
{
	if (toyota_body > 0 && toyota_engine > 0)
	{
		supra = true;
	}
	else
	{
		supra = false;
	}

	if (supra == true)
	{
		std::cout << "You have TOYOTA SUPRA" << std::endl;
		--toyota_engine;
		--toyota_body;
	}
	else //no supra
	{
		std::cout << std::endl;
		std::cout << "Go get some more toyota parts" << std::endl;
		std::cout << std::endl;

	}
	system("pause");
}





// had to do inventory or class thingy, but got lost in space...
/*
Inventory::Inventory(int quantity, int power, float size, float weight)
{
	m_quantity = quantity;	//how many you got
	m_power = power;	//power output
	m_size = size;		//engine bay size
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
*/


