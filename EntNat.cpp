/*
 * EntNat.cpp
 * Author: Benoit Exbrayat
 *
 */
using namespace std;
#include <iostream>
#include <string>
#include <cmath>
#include "EntNat.h"

#define DEBUG

//////////////////////////////////////////////////////////////////////////////
// Realisation des constructeur et destructeur de la classe

EntNat::EntNat(int laValeurInitiale)
{
#ifdef DEBUG
	cout << "  EntNat::Constructeur avec le parametre " << laValeurInitiale << endl;
#endif
	nombre = laValeurInitiale ;	
}

EntNat::~EntNat()
{
#ifdef DEBUG
	cout << "  EntNat::Destructeur" << endl;
#endif
}

//////////////////////////////////////////////////////////////////////////////
// Realisation des methodes de la classe

void EntNat :: Somme()
{
#ifdef DEBUG
	cout << "EntNat ::  Somme" << endl;
#endif
	int somme=0; 
	for( int i=1; i <=nombre; i++){
		somme += i; 
	}
	cout << "la somme jusqu' "<< nombre<< " vaut "<< somme << endl;
}


void EntNat :: Produit()
{
#ifdef DEBUG
    cout << "EntNat :: Produit" << endl;
#endif
	double prod =1;
	for( int i=1; i<= nombre; i++){
		prod = prod * i; 
	}
	cout << "le vectoriel jusqu' "<< nombre<< " vaut "<< prod << endl;
}

double EntNat :: Puissance(int exp)
{
#ifdef DEBUG
    cout << "EntNat :: Puissance" << endl;
#endif

	cout << ".... COMPLETER ICI...." << endl;
	return 0.0; 
}

void EntNat :: Suite()
{
#ifdef DEBUG
    	cout << "EntNat::Suite" << endl;
#endif
	float suite; 
	for (int i =1; i<= nombre; i++){
		suite += i%2==0?(1.0/i):( - 1.0/i);
	}

    	cout << "la suite jusqu' "<< nombre<< " vaut "<< suite << endl;
}

//....COMPLETER ICI.... Méthode qui retourne la valeur de l'entier naturel


//....COMPLETER ICI.... Méthode qui recherche les nombres premiers

void EntNat :: Premiers()
{
	for (int i =1; i<=nombre; i++){
		for(int j=2; j<i; j++){
			if(i%j==0){
				i++; 
			}
		}
		cout << i << " est premier"<< endl; 
	}
}

