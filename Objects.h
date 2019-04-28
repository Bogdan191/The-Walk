#pragma once
#include "WeakTrap.h"
#include "StrongTrap.h"
#include "NormalTrap.h"
#include "WeakItem.h"
#include "Normaltem.h"
#include "StrongItem.h"

class Objects
{
	bool hasItem;									// "true" daca obiectul are item sau false in caz contrar
	bool hasTrap;									// "true" daca obiectul are capcana sau false altfel
	Trap *trap;										
	Item* item;
	bool isDestination;								//este "true" daca obiectul este destinatie sau "false" altfel

public:
	Objects();
	Objects(const Objects&);
	bool HasItem();									// spune daca obiectul actual este item sau nu
	bool HasTrap();									// spune daca obiectul actual este capcana sau nu
	Objects& operator = (const Objects&);			// supraincarcarea operatorului "="
	void SetTrap(int);								// planteaza o capcana de tip 1, 2, 3(adica tipul robotului) pe obiectul actual
	void SetItem(int);								// ----------un item   ------------------------------------------------------
	void SetHasTrap(bool);							// schimba valoarea lui "hasTrap"
	void SetHasItem(bool);							// schimba valoarea lui "hasItem"=
	void SetDestination(bool);						// seteaza valoarea lui "isDestination"
	bool IsDestination();							// spune daca obiecutl este destinatie sau nu
	Trap* GetTrap();								// returneaza pointerul de tip "Trap"
	Item* GetItem();								// returneaza pointerul de tip "Item"


	~Objects();
};

