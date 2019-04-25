#pragma once
#include "Item.h"
#include "WeakRobot.h"
#include "NormalRobot.h"
#include "StrongRobot.h"
class WeakItem :
	public Item
{
public:

	virtual void GetItem(WeakRobot &R);
	virtual void GetItem(NormalRobot &R);
	virtual void GetItem(StrongRobot &R);
	
};

