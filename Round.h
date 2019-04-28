#pragma once
#include "Map.h"
#include "Robot.h"
class Round
{
	Map M;
	Robot* R;
	static Round* instance;


public:
	Round();
	void Play();									// functie care deruleaza o runda de joc
	static Round* GetInstance()
	{
		return instance;
	}
	~Round();
};

