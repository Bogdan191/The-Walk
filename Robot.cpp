#include "pch.h"
#include "Robot.h"
#include <iostream>

Robot::Robot()
{
	p.first = 0;
	p.second = 0;
	GameOver = false;
	HasItem = false;
	NrOfItems = 0;

}
int Robot::GetTipRobot()
{
	return tipRobot;
}
pair<int, int>Robot::GetPosition()
{
	return p;
}
pair<int, int>Robot::SetPosition(pair<int, int> T)
{
	p.first = T.first;
	p.second = T.second;
	return p;

}
int Robot::GetNrOfItems()
{
	return NrOfItems;
}
void Robot::SetNrOfItems(int x)
{
	NrOfItems = x;
}
void Robot::SetGameOver(bool T)
{
	GameOver = T;
}
bool Robot::GetGameOver()
{
	return GameOver;

}
Robot::~Robot()
{
}
