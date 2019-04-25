#pragma once
#include "WeakTrap.h"
#include "StrongTrap.h"
#include "NormalTrap.h"
#include "WeakItem.h"
#include "Normaltem.h"
#include "StrongItem.h"

class Objects
{
	bool hasItem;
	bool hasTrap;
	Trap *trap;
	Item* item;
	bool isDestination;

public:
	Objects();
	Objects(const Objects&);
	bool HasItem();
	bool HasTrap();
	Objects& operator = (const Objects&); \
	void SetTrap(int);
	void SetItem(int);
	void SetHasTrap(bool);
	void SetHasItem(bool);
	void SetDestination(bool);
	bool IsDestination();
	Trap* GetTrap();
	Item* GetItem();


	~Objects();
};

