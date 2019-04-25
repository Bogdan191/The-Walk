#pragma once
#include <iostream>
using namespace std;
class Trap;
class Item;
class Robot
{
	typedef pair <int, int > Pos;
	Pos p;
	bool GameOver;
	bool HasItem;
	
protected:
	int tipRobot;
	int NrOfItems;
public:
	Robot();
	pair<int, int>GetPosition();
	int GetTipRobot();
	pair<int, int>SetPosition(pair<int, int>);
	virtual void GetInTrap(Trap * trap) = 0;
	virtual void GetItem(Item* item) = 0;
	int GetNrOfItems();
	void SetGameOver(bool);
	bool GetGameOver();

	void SetNrOfItems(int);
	~Robot();
};

