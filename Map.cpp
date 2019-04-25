#include "pch.h"
#include "Map.h"
#include <iostream>
#include <utility>
#include <time.h>
using namespace std;

Map::Map(int L, int C) : nr_rows(L), nr_columns(C)
{
	int i;
	map = new Objects*[nr_rows];
	for (i = 0; i < nr_rows; i++)
		map[i] = new Objects[nr_columns];

}
void Map::MakeMap()
{
	int i;
	int r, c;
	srand(time(NULL));
	///seteaza destinatia
	destination.first = rand() % nr_rows;
	destination.second = rand() % nr_columns;
	while (destination.first == 0 && destination.second == 0)
	{
		destination.first = rand() % nr_rows;
		destination.second = rand() % nr_columns;
	}
	map[destination.first][destination.second].SetDestination(true);
	
	///planteaza 15 de cpacane in harta
	for (i = 0; i < 15; i++)
	{
		r = rand() % 17;
		c = rand() % 17;
		while (map[r][c].IsDestination() == true)
		{
			r = rand() % 17;
			c = rand() % 17;
		}
		
		map[r][c].SetHasTrap(true);
		int trapNr = (rand() % 3) + 1; ///aleg un numar random intre 1 si 3, corespndent cu tipul robotului
		map[r][c].SetTrap(trapNr);
	}

	///incerc sa plantez maxim 45 de item-uri in harta
	for (i = 0; i < 45; i++)
	{
		r = rand() % 17;
		c = rand() % 17;
		while (map[r][c].IsDestination() == true || map[r][c].HasTrap() == true)
		{
			r = rand() % 17;
			c = rand() % 17;
		}
		map[r][c].SetHasItem(true);
		int itemNr = (rand() % 3) + 1;    ///aleg un numar random intre 1 si 3, corespondent cu tipul robotului
		map[r][c].SetItem(itemNr);

	}
	
}
void Map::ShowMap(int x, int y)
{
	int i, j;
	for (i = 0; i < nr_rows; i++)
	{
		for (j = 0; j < nr_columns; j++)
			if (i == x && j == y)
				cout << "R  ";
			else if (map[i][j].HasTrap())
				cout << "T  ";
			else if (map[i][j].HasItem())
				cout << "I  ";
				else if (i == destination.first && j == destination.second)
					cout << "X  ";
			else cout <<  "0  ";
		cout << "\n";
	}
}
pair<int, int>Map::GetDestination()
{
	return destination;
}

pair<int, int>Map::NextPosition(int x, int y)
{
	pair<int, int> NewPos;

	///verificam daca avem intem-uri in vecini
	if (map[x + 1][y].HasItem() == true && x <= 18)
	{
		NewPos.first = x + 1;
		NewPos.second = y;
		return NewPos;
	}
	if (x > 0 && map[x - 1][y].HasItem())
	{
		NewPos.first = x - 1;
		NewPos.second = y;
		return NewPos;
	}
	if (map[x][y + 1].HasItem()&& y <= 18)
	{
		NewPos.first = x;
		NewPos.second = y + 1;
		return NewPos;
	}
	if (y > 0 && map[x][y - 1].HasItem())
	{
		NewPos.first = x;
		NewPos.second = y - 1;
		return NewPos;
	}
	if (x < destination.first)
	{
		NewPos.first = x + 1;
		NewPos.second = y;
		return NewPos;
	}
	if (x > destination.first)
	{
		NewPos.first = x - 1;
		NewPos.second = y;
		return NewPos;

	}
	if (y < destination.second)
	{
		NewPos.first = x;
		NewPos.second = y + 1;
		return NewPos;

	}
	if (y > destination.second)
	{
		NewPos.first = x;
		NewPos.second = y - 1;
		return NewPos;
	}

	return NewPos;
}
Objects Map::GetObject(pair<int, int>Position)
{
	return map[Position.first][Position.second];

}
Objects* Map::operator [](int r) const
{
	return map[r];
}
Map::~Map()
{
	
	for(int i = 0; i < nr_rows; i++)
		for (int j = 0; j < nr_columns; j++)
		{
			map[i][j].SetHasItem(false);
			map[i][j].SetHasTrap(false);
			map[i][j].SetDestination(false);
		}
	for (int i = 0; i < nr_rows; i++)
		delete map[i];
	delete[] map;
}
