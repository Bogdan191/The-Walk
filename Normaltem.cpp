#include "pch.h"
#include "Normaltem.h"


void Normaltem::GetItem(NormalRobot &R)
{
	int x = R.GetNrOfItems() + 1;
	R.SetNrOfItems(x);
}
void Normaltem::GetItem(WeakRobot &R)
{
	std::cout << "Item de tip weak incompatibil cu tipul robotului acual(tip robot " << R.GetTipRobot() << ")\n";
}
void Normaltem::GetItem(StrongRobot &r)
{
	std::cout << "Item de tip weak incompatibil cu tipul robotului acual(tip robot " << r.GetTipRobot() << ")\n";
}
