#include "pch.h"
#include "NormalRobot.h"


NormalRobot::NormalRobot()
{
	tipRobot = 2;

}
void NormalRobot::GetInTrap(Trap *trap)
{
	trap->GetInTrap(*this);
}
void NormalRobot::GetItem(Item *item)
{
	item->GetItem(*this);
}
NormalRobot::~NormalRobot()
{
}
