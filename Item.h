#pragma once
class WeakRobot;
class NormalRobot;
class StrongRobot;

class Item
{
public:
	virtual void GetItem(WeakRobot &R) { }
	virtual void GetItem(NormalRobot &R) { }
	virtual void GetItem(StrongRobot &R) { }


};

