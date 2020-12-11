#include "inventory.h"
#include <iostream>


Inventory::Inventory()
{
	m_value = 0;   //power value
	m_size=0.0f; //how much iinventory takes up  
	m_weight=0.0f;		//how much of strengh needed
	std::string item_name;   //sword
	std::string m_description;
	std::cout << " inventory item created"<<std::endl;
}

Inventory::~Inventory()
{
	std::cout << " inventory item deleted" <<std::endl;
}

void Inventory::Sell()
{
	//coins value decresices when selling here
}

void Inventory::Display_Stats()
{
	std::cout << "power of item" < m_power << std::endl;
}

void Inventory::Display_Name()
{
	std::cout << "descriction of item" < m_description << std::endl;
}

void Inventory::SetPower(int power)
{
	m_power = power;
}

void Inventory::SetValue(int value)
{
}

void Inventory::SetSize(int size)
{
}

void Inventory::SetWeight(int weight)
{
}

void Inventory::SetName(std::string name)
{
}