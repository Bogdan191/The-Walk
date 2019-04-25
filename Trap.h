#pragma once
class WeakRobot;
class NormalRobot;
class StrongRobot;
class Trap
{
public:
	
	virtual void GetInTrap(WeakRobot &R) { }
	virtual void GetInTrap(NormalRobot &R) { }
	virtual void GetInTrap(StrongRobot &R) { }
	

};

