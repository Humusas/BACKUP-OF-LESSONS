#pragma once
class car  //blueprint for ALL cars in the game
{

public:  //BEHAVIOR of car !!

	car(void);
	~car(void);
	void Drive();
	void ChangeGear();
	void PlayMusic();

	void set_values(int, float, int, float);

private:  // STATE of car !!

	int m_quantity;	//how many i got of these

	float m_power;	//AG or horse power

	int m_totalGears; //how many gears there are
	int m_currentGear;
	
	float m_velocity;  // constant, but friction gets it lower. acceleration changes it over time
	float m_acceleration; //changes velocity
		float acceleration();
	
	float m_distanceTravelled;
	float m_fuelTankSize;
	
	bool m_isLightOn;
	bool m_isWiperOn;
	bool m_isHandbrakeOn;

	int m_size;		//engine bay size
	float m_weight;	//in kilos


};
