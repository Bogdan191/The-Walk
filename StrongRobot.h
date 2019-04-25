#pragma once
#include "Robot.h"
#include "Trap.h"
#include "Item.h"
class StrongRobot :
	public Robot
{
public:
	StrongRobot();
	virtual void GetInTrap(Trap *t);
	virtual void GetItem(Item* item);
	~StrongRobot();
};

