#pragma once
#include "Item.h"
#include "StrongRobot.h"
#include "NormalRobot.h"
#include "WeakRobot.h"

class StrongItem :
	public Item
{
public:
	virtual void GetItem(StrongRobot &R);
	virtual void GetItem(NormalRobot &R);
	virtual void GetItem(WeakRobot &R);

};

