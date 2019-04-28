#include "pch.h"
#include "NormalTrap.h"


void NormalTrap::GetInTrap(NormalRobot &R)
{
	if (R.GetNrOfItems() >= 2) // pierde 2 item-uri daca are si se intoarce la inceput, altfel pierde runda
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
void NormalTrap::GetInTrap(StrongRobot &R)
{
	std::cout << "Capcana incompatibila cu tipul de robot(tip robot acutal: " << R.GetTipRobot() << ")\n";
}
void NormalTrap::GetInTrap(WeakRobot &R)
{
	std::cout << "Capcana incompatibila cu tipul de robot(tip robot acutal: " << R.GetTipRobot() << ")\n";
}
