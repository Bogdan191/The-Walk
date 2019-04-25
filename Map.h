#pragma once
#include <iostream>
#include "Objects.h"
using namespace std;

class Map
{
	Objects **map;
	int nr_rows, nr_columns;
	typedef pair<int, int> Position;
	Position destination;
	

public:
	Map(int, int);
	void MakeMap();
	void ShowMap(int, int);
	pair<int, int>NextPosition(int, int);
	pair<int, int>GetDestination();
	Objects GetObject(pair<int, int>);
	Objects* operator[](int) const;
	~Map();

};

