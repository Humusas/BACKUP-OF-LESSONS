#pragma once
class cars
{
public:

	cars(void);
	~cars(void);

	int quantity;	//how many i got of these
	float power;	//AG or horse power
	int size;		//engine bay size
	float weight;	//in kilos

	float acceleration();
	void set_values(int, float, int, float);


/*items[1].SetStats("Toyota  Supra A80",
	"Fourth generation produced 1993-2002.",
	0, 0, 1, 1000);

items[3].SetStats("Ford SVT Lightning",
	"American truck produced 1999-2004.",
	0, 0, 2, 1500);*/

};
