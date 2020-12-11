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
	quantity = z; 
	power = x;		
	size = c;		
	weight = v;		
}

cars::~cars(void)
{



}