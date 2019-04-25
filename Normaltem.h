#pragma once
#include "Item.h"
#include "NormalRobot.h"
#include "WeakRobot.h"
#include "StrongRobot.h"

class Normaltem :
	public Item
{
public:
	virtual void GetItem(NormalRobot& R);
	virtual void GetItem(WeakRobot &R);
	virtual void GetItem(StrongRobot &R);


};

