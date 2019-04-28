#pragma once
#include <iostream>
#include "Objects.h"
using namespace std;

class Map
{
	Objects **map;									// harta jocului reprezentata dintr-o matrice de obiecte
	int nr_rows, nr_columns;						// dimensiunile hartii de joc
	typedef pair<int, int> Position;				
	Position destination;							// pozitia destinatiei
	

public:
	Map(int, int);		
	void MakeMap();									// creeaza harta	
	void ShowMap(int, int);							// afiseaza harta
	pair<int, int>NextPosition(int, int);			// functie ce returneaza urmatoare pozitie a robotului
	pair<int, int>GetDestination();					// returneaza coordonatele destinatiei
	Objects GetObject(pair<int, int>);		 
	Objects* operator[](int) const;					// supraincarcarea operatorului []
	~Map();											// destructorul care elibereaza memoria alocata dinamic

};

