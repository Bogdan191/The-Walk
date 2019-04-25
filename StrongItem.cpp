#include "pch.h"
#include "StrongItem.h"


void StrongItem::GetItem(StrongRobot &R)
{
	int x = R.GetNrOfItems() + 1;
	R.SetNrOfItems(x);
}
void StrongItem::GetItem(NormalRobot &R)
{
	std::cout << "Item de tip weak incompatibil cu tipul robotului acual(tip robot " << R.GetTipRobot() << ")\n";
}
void StrongItem::GetItem(WeakRobot &R)
{
	std::cout << "Item de tip weak incompatibil cu tipul robotului acual(tip robot " << R.GetTipRobot() << ")\n";
}