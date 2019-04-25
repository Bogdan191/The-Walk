#pragma once
#include "Trap.h"
#include "StrongRobot.h"
#include "NormalRobot.h"
#include "WeakRobot.h"

class StrongTrap :
	public Trap
{
public:

	virtual void GetInTrap(StrongRobot &R);
	virtual void GetInTrap(NormalRobot &R);
	virtual void GetInTrap(WeakRobot &R);
};

