#pragma once
#include "Trap.h"
#include "WeakRobot.h"
#include "NormalRobot.h"
#include "StrongRobot.h"
class NormalTrap :
	public Trap
{
public:
	virtual void GetInTrap(NormalRobot &R);
	virtual void GetInTrap(StrongRobot &R);
	virtual void GetInTrap(WeakRobot &R);
};

