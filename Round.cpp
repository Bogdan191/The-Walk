#include "pch.h"
#include "Round.h"
#include "WeakRobot.h"
#include "StrongRobot.h"
#include "NormalRobot.h"
Round* Round::instance = new Round();

Round::Round() : R(NULL), M(18, 18)
{
	M.MakeMap();
}

void Round::Play()
{
	int option;
	int answer;
	pair <int, int> T, N;
	cout << "Pentru WeakRobot apasati tasta 1\n";
	cout << "Pentru RegularRobot apasati tasta 2\n";
	cout << "Pentru StrongRobot apasati tasta3\n";
	cout << "Introduceti optiunea aleasa: "; cin >> option;
	if(option == 1)
		R = new WeakRobot();
	if (option == 2)
		R = new NormalRobot();
	if (option == 3)
		R = new StrongRobot();
	cout << "Tip robot : " << R->GetTipRobot() << "\n";
	T = R->GetPosition();
	M.ShowMap(T.first, T.second);

	   R->GetPosition();
	  
	   while (true)
	   {
		   cout << "Continui jocul(1/0)? "; 
		   cin >> answer;
		   if (answer != 1)
			   break;

		   
			   T = R->GetPosition();

			   N = M.NextPosition(T.first, T.second);
			   R->SetPosition(N);
			   M.ShowMap(N.first, N.second);
			   if (N == M.GetDestination())
			   {
				   cout << "You Win!\n";
				   break;
			   }
			  
			   if (M[N.first][N.second].HasTrap())
				   R->GetInTrap(M[N.first][N.second].GetTrap());
			   if (M[N.first][N.second].HasItem())
			   {
				   int nr_items = R->GetNrOfItems();
				   R->GetItem(M[N.first][N.second].GetItem());
				   
					   M[N.first][N.second].SetHasItem(false);

			   }
			   if (R->GetGameOver() == true)
			   {
				   cout << "Game Over!!\n";
				   break;
			   }

	   }

	   cout << "Robotul de tip  "<<R->GetTipRobot() << " a terminat jocul cu " << R->GetNrOfItems() << " item-uri\n";
}

Round::~Round()
{
	delete R;
}
