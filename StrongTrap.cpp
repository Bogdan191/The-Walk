#include "pch.h"
#include "StrongTrap.h"


void StrongTrap::GetInTrap(StrongRobot &R)
{
	
	if (R.GetNrOfItems() > 0) // daca intra in capcana, pierde un item si se intoarce la inceput
	{
		int x = R.GetNrOfItems();
		x--;
		R.SetNrOfItems(x);
		std::pair<int, int> pos = R.GetPosition();
		std::pair<int, int> p;
		p.first = 0;
		p.second = 0;
		R.SetPosition(p);
	}
	else
	{
		R.SetGameOver(true);
	}
	
}
void StrongTrap::GetInTrap(NormalRobot &R)
{
	std::cout << "Capcana incompatibila cu tipul de robot(tip robot acutal: " << R.GetTipRobot() << ")\n";
}
void StrongTrap::GetInTrap(WeakRobot &R)
{
	std::cout << "Capcana incompatibila cu tipul de robot(tip robot acutal: " << R.GetTipRobot() << ")\n";
}
