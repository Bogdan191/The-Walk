#pragma once
#include <iostream>
using namespace std;
class Trap;
class Item;
class Robot
{
	typedef pair <int, int > Pos;					
	Pos p;											// pozitia robotului
	bool GameOver;								    // "true" daca robotul a pierdut
	bool HasItem;									
	
protected:
	int tipRobot;									// 1 - WeakRobot, 2 - NormalRobot, 3-StrongRobot
	int NrOfItems;									// retine numarul de item-uri pe care le are robotul
public:
	Robot();
	pair<int, int>GetPosition();					// furnizeaza pozitia robotului 
	int GetTipRobot();								// returneaza tipul robotului; 1, 2 sau 3
	pair<int, int>SetPosition(pair<int, int>);		// seteaza pozitia robotului
	virtual void GetInTrap(Trap * trap) = 0;		// functie virtuala pentru capcana
	virtual void GetItem(Item* item) = 0;			// functie virtuala pentru item
	int GetNrOfItems();								// returneaza numarul de item-uri ale robotului
	void SetGameOver(bool);							// seteaza valoarea lui "GameOver"
	bool GetGameOver();								// returneaza valoarea lui "GameOver"
	void SetNrOfItems(int);							// modifica numarul de item-uri ale robotului
	~Robot();
};

