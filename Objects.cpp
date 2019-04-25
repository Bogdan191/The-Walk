#include "pch.h"
#include "Objects.h"


Objects::Objects() : hasItem(false), hasTrap(false)
{
	trap = NULL;
}
Objects::Objects(const Objects &newObject)
{
	*this = newObject;
}
Objects& Objects::operator=(const Objects &newObject)
{
	hasItem = newObject.hasItem;
	hasTrap = newObject.hasTrap;
	///de completat cu selectarea item-urilor

	///selectarea capcanelor
	if (hasTrap && newObject.trap != NULL)
	{
		if (dynamic_cast<WeakTrap*>(newObject.trap) != NULL)
			trap = new WeakTrap();
		if (dynamic_cast<StrongTrap*>(newObject.trap) != NULL)
			trap = new StrongTrap();
		else
		{
			trap = NULL;                ///de completat cu al 3 lea tip de robot

		}
	}

	return *this;
}
void Objects::SetTrap(int trapNR)
{
	if (trapNR == 1)
		trap = new WeakTrap();
	if (trapNR == 2)
		trap = new NormalTrap();
	if (trapNR == 3)
		trap = new StrongTrap();



}
void Objects::SetItem(int itemNR)
{
	if (itemNR == 1)
		item = new  WeakItem();
	if (itemNR == 2)
		item = new Normaltem();
	if (itemNR == 3)
		item = new StrongItem();


}
void Objects::SetDestination(bool D)
{
	isDestination = D;
}
bool Objects::IsDestination()
{
	return isDestination;
}
bool Objects::HasItem()
{
	return hasItem;
}
bool Objects::HasTrap()
{
	return hasTrap;
}
void Objects::SetHasTrap(bool V)
{
	hasTrap = V;
}
void Objects::SetHasItem(bool V)
{
	hasItem = V;
}
Trap* Objects::GetTrap()
{
	return trap;
}
Item* Objects::GetItem()
{
	return item;
}
Objects::~Objects()
{
}
