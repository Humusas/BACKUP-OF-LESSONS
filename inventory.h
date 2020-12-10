#pragma once
#pragma once

#include <string>

class Inventory
{

public:

	Inventory(int quantity = 0, int power = 0, float size = 0, float weight = 0);
	~Inventory();

	void DisplayName();
	void DisplayStats();

	void SetPower(int power);
	void SetSize(float size);
	void SetQuantity(int quantity);
	void SetWeight(float weight);
	void SetName(std::string name);
	void SetDescription(std::string description);

	void SetStats(std::string name, std::string description,
		int quantity, int power, float size, float weight);

private:

	int m_quantity;
	int m_power;
	float m_size;
	float m_weight;
	std::string m_name;
	std::string m_description;

};