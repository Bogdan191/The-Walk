#include "pch.h"
#include "StrongRobot.h"


StrongRobot::StrongRobot()
{
	tipRobot = 3;
}
void StrongRobot::GetInTrap(Trap *t)
{
	t->GetInTrap(*this);
}
void StrongRobot::GetItem(Item *item)
{
	item->GetItem(*this);
}
StrongRobot::~StrongRobot()
{
}
