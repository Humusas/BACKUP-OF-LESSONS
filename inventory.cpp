#include "inventory.h"
#include <iostream>


inventory::Inventory()
{

	m_value = 0;   //power value
	m_size=0.0f; //how much iinventory takes up  
	m_weight=0.0f;		//how much of strengh needed
	std::string item_name;   //sword
	std::string m_desciption;



	std::cout << " inventory item created"std::endl;

	



}

inventory::~Inventory()
{
	std::cout << " inventory item deleted" std::endl;

}

void inventory::sell()
{
	//coins value decresices when selling here


}

void inventory::display_stats()
{

	cout power of item<m_power<



}

void inventory::display_name()
{

	cout "descriction of item"<m_descirtion<


}

void inventory::setpower(int power)
{
	m_power = power;

}

void inventory::setvalue(int value)
{
}

void inventory::setsize(int size)
{
}

void inventory::setweight(int weight)
{
}

void inventory::setname(std::string name)
{
}

void inventory::setpower(std::string description)
{



}
