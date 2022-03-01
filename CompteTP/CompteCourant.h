#pragma once
#include "Compte.h"
class CompteCourant :public Compte
{
private:
	Devise decouvert;
public:
	CompteCourant(Devise solde, Devise decouvert);
	bool  retirerArgent(Devise somme) override;
};

