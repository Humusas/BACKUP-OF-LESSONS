#include <iostream>
#include "inventory.h"

void createinventory()
{
	//instantiating an object 1
	inventory item1;	//human1
	inventory item2;	//human2
	inventory item3;	//human3
	inventory item4;	//human4
	inventory item5;
	inventory item6;

}

int main ()
{

	const int total_items;
	inventory items[total_items]  //all 5 items here are used for dealing damage to humans






	inventory sword;
	sword.setname("mighty sword");
	sword.setdescription("rusty sword causes severe blood infection used on humans");
	sword.setpower(1000);  //
	sword.setsize(1.3f); //
	sword.setvalue(4.5f); //pounds  f for float. i need double instead of float
	sword.setweight(5.4f); //kilos

	sword.display_name();
	sword.display_stats();


	createinventory();



	for (size_t i = 0; i < length; i++)
	{

		you have the following item
			items[i].displayname();
			items[i].displaystats();
			======================================




	}

	system("pause");
	return 0;


}