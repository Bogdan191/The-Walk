#include "pch.h"
#include "WeakRobot.h"
#include "Robot.h"

WeakRobot::WeakRobot()
{
	tipRobot = 1;
}
void WeakRobot::GetInTrap(Trap* t)
{
	t->GetInTrap(*this);
}
void WeakRobot::GetItem(Item* item)
{
	item->GetItem(*this);
}
WeakRobot::~WeakRobot()
{
}
