#pragma once
#include "Compte.h"
class CompteEpargne : public Compte
{
private :
	double tauxInter = 23;
public :
	CompteEpargne(Devise solde);
	void calculInteret();
	bool  retirerArgent(Devise somme) override;
};

