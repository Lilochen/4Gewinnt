#include "Spielfeld.h"
#include <iostream>

using namespace std;


CSpielfeld::CSpielfeld(void)
{
	//Spielfeld initialisieren
	for(int i = 0; i < 7; i++)
		for(int j = 0; j < 9;j++)
			feld[i][j] = '#';
		
}


CSpielfeld::~CSpielfeld(void)
{
}

void CSpielfeld::show()
{
	for(int i = 0; i < 7; i++)
		for(int j = 0; j < 7; j++)
		{
			cout<<" | "<<feld[i][j];
			if (9 == j) cout<<" | "<<endl;
		}
}