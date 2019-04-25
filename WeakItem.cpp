#include "pch.h"
#include "WeakItem.h"


void WeakItem::GetItem(WeakRobot &R)
{
	int x = R.GetNrOfItems();
	x++;
	R.SetNrOfItems(x);

}

void WeakItem::GetItem(NormalRobot &R)
{
	std::cout << "Item de tip weak incompatibil cu tipul robotului acual(tip robot " << R.GetTipRobot() << ")\n";
}
void WeakItem::GetItem(StrongRobot &R)
{
	std::cout << "Item de tip weak incompatibil cu tipul robotului acual(tip robot " << R.GetTipRobot() << ")\n";
}
