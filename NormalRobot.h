#pragma once
#include "Robot.h"
#include "Trap.h"
#include "Item.h"
class NormalRobot :
	public Robot
{
public:
	NormalRobot();
	virtual void GetInTrap(Trap *trap);
	virtual void GetItem(Item* item);

	~NormalRobot();
};

