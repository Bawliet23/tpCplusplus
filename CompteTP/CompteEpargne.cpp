#include "CompteEpargne.h"

CompteEpargne::CompteEpargne(Devise solde) : Compte(solde)
{
}

void CompteEpargne::calculInteret()
{
	this->deposerArgent((this->getSolde() * this->tauxInter) / 100);
}

bool CompteEpargne::retirerArgent(Devise somme)
{
	if ( (this->getSolde() / 2) >= somme) {
		this->Compte::retirerArgent(somme);
		return true;
	}
	return false;
}
