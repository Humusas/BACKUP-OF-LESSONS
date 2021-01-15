#include "car.h"

car::car(void)
{
	m_quantity = 0;
	m_power = 0;
	size = 0;
	weight = 0;
}

float car::acceleration()
{
	return(weight/power);
}

void car::set_values(int z, float x, int c, float v)
{
	quantity = z; 
	power = x;		
	size = c;		
	weight = v;		
}

car::~car(void)
{



}

void car::Drive()
{
}

void car::ChangeGear()
{
}

void car::PlayMusic()
{
}
