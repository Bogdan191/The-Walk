#pragma once
#include "Robot.h"
#include "Trap.h"
#include "Item.h"
class WeakRobot :
	public Robot
{
public:
	WeakRobot();
	virtual void GetInTrap(Trap *t);
	virtual void GetItem(Item* item);
	~WeakRobot();
};

