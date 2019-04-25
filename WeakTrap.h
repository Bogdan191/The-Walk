#pragma once
#include "Trap.h"
#include "WeakRobot.h"
#include "NormalRobot.h"
#include "StrongRobot.h"

class WeakTrap :
	public Trap
{
public:
	virtual void GetInTrap(WeakRobot &R);
	virtual void GetInTrap(NormalRobot &R);
	virtual void GetInTrap(StrongRobot &R);
	
};

