//============================================================================
// Name        : TEntier.cpp
// Author      : Bexbrayat
//============================================================================

#include <iostream>
using namespace std;
#include "EntNat.h"

//////////////////////////////////////////////////////////////////////////////
// Programmes de test

void TestMethodesSimples()
{
	EntNat nb1;
	nb1.Somme();
	nb1.Produit();
	nb1.Suite();

	EntNat nb2(100);
	nb2.Somme();
	nb2.Produit();
	nb2.Suite();

	int entier;
	do
	{
		cout <<"Veuillez entrer un nombre positif :" ;
		cin >> entier;
	}  while (entier < 0);

	EntNat nb3(entier);
	nb3.Somme();
	nb3.Produit();
	nb3.Suite();
	nb3.Premiers(); 
}


void TestAutresMethodes()
{
	EntNat nb(8);
	int exp;
	do
	{
		cout <<"Veuillez entrer un exposant positif :" ;
		cin >> exp;
	}  while (exp < 0);

	cout << "Les puissances du nombre de 0 a "<< exp << "sont : " << endl;
	for (int i=0;i <= exp; ++i)
	{
		cout << "\t" <<nb.Puissance(i) << "\t|" <<endl;
	}



}


int main() {

	cout << "!!! Hello World 2024 !!!  " << endl;

	TestMethodesSimples();

	TestAutresMethodes();

	cout << "!!! Fin des tests 2024 !!!" << endl;

	return 0;
}
