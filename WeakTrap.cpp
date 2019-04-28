#include "pch.h"
#include "WeakTrap.h"





void WeakTrap::GetInTrap(WeakRobot &R)
{

	
	if (R.GetNrOfItems() >= 3)  // pierde 3 item-uri daca are si se intoarce la inceput, altfel pierde runda
	{
		int x = R.GetNrOfItems();
		x -= 3;
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
void WeakTrap::GetInTrap(NormalRobot &R)
{
	std::cout << "Capcana incompatibila cu tipul de robot(tip robot acutal: " << R.GetTipRobot() << ")\n";
}
void WeakTrap::GetInTrap(StrongRobot &R)
{
	std::cout << "Capcana incompatibila cu tipul de robot(tip robot acutal: " << R.GetTipRobot() << ")\n";
}
