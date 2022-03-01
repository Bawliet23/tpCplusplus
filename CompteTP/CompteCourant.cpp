 #include "CompteCourant.h"

CompteCourant::CompteCourant(Devise solde, Devise decouvert) :Compte(solde)
{
	this->decouvert = decouvert;
}

bool CompteCourant::retirerArgent(Devise somme)
{
	if ((this->getSolde() / 2) >= somme && this->decouvert >= somme) {
		this->Compte::retirerArgent(somme);
		return true;
	}
	return false;
}
