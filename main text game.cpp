#include <iostream>
#include <string>
#include <ctime>

std::string nickname;

void menu();

void garage_loc();		//location 1
void engine_loc();		//location 2
void body_loc();		//location 3
void tune_loc();		//location 4
void boss_loc();		//location 5

//void minigame1();			//location 2 minigame


void travel(int i);	//travel between rooms

int myLocation;		//keep track of where the player is

char THEanswer;

int main()
{	
	
	
	std::cout << "Dear player welcome to the game"<<std::endl;
	std::cout << "Please enter your nickname" << std::endl;
	getline(std::cin, nickname);
		if (nickname=="Vesta")
		{std::cout << "AWW. Beibis. :*" << std::endl;}
		else
		{std::cout << "Hello, " << nickname << ". Nice to meet you." << std::endl;}
	system("pause");
	system("clear");
	std::cout << "The story goes like this:" << std::endl;
	std::cout << "You want to impress your neighbours. I'm here to help you, so listen." << std::endl;
	std::cout << "To achieve this impossible magic trick you need the following:" << std::endl;
	std::cout << "A car" << std::endl;
	std::cout << "But not any car. THE car." << std::endl;
	std::cout << "I can't just give THE car. Offcourse, you will have to travel arround local shops and collect the parts for your car." << std::endl;
	std::cout << "The adventure doesn't end there. There is an upcoming drag event and you going there. Try to win it. Goodluck" << std::endl;
	std::cout << "Only, once you have reached 88,88 MPH (143,04 KPH) you will be able to travel back in time."<<std::endl;
	std::cout << "Do you want to start?[Y/N]"<<std::endl;
	std::cin >> THEanswer;
	THEanswer = toupper(THEanswer);

		if (THEanswer == 'Y') //start the game
		{
			system("clear");
			
			std::cout << "Congratz. Garage unlocked" << std::endl;
			

			travel(1);		//arriving at garage
			
			//has to be 1 to 5 number else starts reading this line
			
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

	std::cout << "Goodbye " <<nickname<<". Game is over" << std::endl;


	system("pause");


}		//  GAME ENDS HERE. PROGRAM SHUTS

void menu()
{
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
	}

}




void garage_loc()		//location 1
{
	system("clear");
	std::cout << "You are in garage" << std::endl;



	menu();
	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);



}

void engine_loc()		//location 2
{
	system("clear");
	std::cout << "You have decited to pick up an engine" << std::endl;
	std::cout << "The local spare engines departament asks you to name the stuff you need" << std::endl;
	std::cout << "You will have 15 seconds to tell them exactly what you want"<<std::endl;

	//minigame1();

	time_t init, final;
	double dif;
	std::string sentence1;

 //Sport Turismo Turbo S E-Hybrid
	std::cout << "Tell them, that you want: Porsche Panamera"<<std::endl; 
	system("pause");
	std::cout << "3.2.1. GO!"<< std::endl;
	
	time(&init);				//starts counting time
	getline(std::cin, sentence1);
	time(&final);				//stops counting time 
	dif = difftime(final, init);
	std::cout << "fin" << std::endl;
	std::cout << "You took" << dif << " seconds" << std::endl;
	system("pause");
//Sport Turismo Turbo S E-Hybrid
	
	if (sentence1 == "Porsche Panamera") 
	{//when correct sentence written
		
		if (dif < 20)
		{//if less then 20 secs
			std::cout << "Congratulations. You have an engine" << std::endl;
		}
		else
		{//more then 20 secs
			std::cout << "Sorry, we don't have that" << std::endl;
			std::cout << "Come back later :)"<<std::endl;
			system("pause");
		}
	}
	else         //when wrong sentence written
	{
		std::cout << "Sorry, we don't have that" << std::endl;
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
	std::cout << "You have dicited to find a shell of your project" << std::endl;
	
	

	menu();
	std::cout << "Where are you going next?" << std::endl;
	std::cin >> myLocation;
	travel(myLocation);

}

void tune_loc()		//location 4
{
	system("clear");
	std::cout << "You are on a hunt for tranny" << std::endl;
	

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

//void minigame1()
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
			std::cin>>guess
			if (guess==random_number)
			{
			you won
			}

			else
			{
			repeat with new number
			}



		}

	else
	{

	return 0;

	}

	}


*/

