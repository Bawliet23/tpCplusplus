#include <iostream>
#include "Operation.h"
#include "Client.h"
#include "CompteCourant.h"
#include "CompteEpargne.h"
#include "ComptePayant.h"

int main()
{
	Client mohamed("Mohamed");
	

	CompteCourant* cc = new CompteCourant(Devise(10000, "MAD"), Devise(2000, "MAD"));
	CompteEpargne* ce = new CompteEpargne(Devise(10000, "MAD"));
	ComptePayant* cp = new ComptePayant(Devise(10000, "MAD"));
	CompteCourant ct(Devise(10000, "MAD"), Devise(2000, "MAD"));

	mohamed.ajoutCompte(cc);
	mohamed.ajoutCompte(ce);
	mohamed.ajoutCompte(cp);

	mohamed.affCompte();

	Devise d(1000, "MAD");

	//retirer
	mohamed.retireCompteById(1, d);
	mohamed.retireCompteById(2, d);
	mohamed.retireCompteById(3, d);
	
	cout << endl <<  "apres le retrait" << endl;

	mohamed.affCompte();

	//deposer
	mohamed.DeposerCompteById(1, d);
	mohamed.DeposerCompteById(2, d);
	mohamed.DeposerCompteById(3, d);

	cout << endl << "apres le deposition " << endl;

	mohamed.affCompte();


	//transferer 
	mohamed.transfererArgentDuCompteById(1, ct ,d);
	mohamed.transfererArgentDuCompteById(2, ct ,d);
	mohamed.transfererArgentDuCompteById(3, ct ,d);

	cout << endl << "apres le transfer " << endl;

	mohamed.affCompte();
	ct.consulterSolde();

	//il ne peut pas retirer car  il veut retire un somme superieur a le decouvert
	Devise d4(3000, "MAD");
	mohamed.retireCompteById(1, d4);

	//calcul interet pour le compte Epargne
	cout << endl << "calcul interet pour le compte Epargne" << endl;
	ce->calculInteret();
	ce->consulterSolde();

   // aff operations
	cout << endl << "afficher operation par Copmte" << endl;
	mohamed.affCompteOperations();

}
