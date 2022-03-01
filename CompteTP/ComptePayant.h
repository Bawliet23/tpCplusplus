#pragma once
#include "Compte.h"
class ComptePayant :public Compte
{
private:
	double taux = 5;
public :
	ComptePayant(Devise solde);
	bool  retirerArgent(Devise somme) override;
};

