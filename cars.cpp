#include "cars.h"

cars::cars(void)
{
	quantity = 0;
	power = 0;
	size = 0;
	weight = 0;
}

float cars::acceleration()
{
	return(weight/power);
}

void cars::set_values(int z, float x, int c, float v)
{
	quantity + z; 
	power + x;		
	size + c;		
	weight + v;		
}

cars::~cars(void)
{



}

/*
int quantity;	//how many i got of these
float power;	//AG or horse power
int size;		//engine bay size
float weight;	//in kilos
items[1].SetStats("Toyota  Supra A80",
	"Fourth generation produced 1993-2002.",
	0, 0, 1, 1000);

items[3].SetStats("Ford SVT Lightning",
	"American truck produced 1999-2004.",
	0, 0, 2, 1500);*/

