/*
 * EntNat.h
 * Author: pcoquard
 *
 */

#ifndef EntNat_H_
#define EntNat_H_

class EntNat
{
	public:
		EntNat(int n = 0);
		~EntNat();
		void Somme();
		void Produit();
		void Suite();
		double Puissance(int i);
		void Premiers(); 

	private:
		////////////////////////////////////////////////////////////
		// attribut de la classe
		unsigned int nombre;
};

#endif /* EntNat_H_ */
