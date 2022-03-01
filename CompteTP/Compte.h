#pragma once
#include <iostream>		
#include <string>
#include <vector>
#include "Operation.h"
#include "Devise.h"
class Compte
{
private :
	const int id;
	static int count;
	Devise solde;
	vector<Operation> operations = vector<Operation>();

public :
	Compte(Devise solde);
	bool virtual retirerArgent(Devise somme);
	void virtual deposerArgent(Devise somme);
	void consulterSolde() const;
	bool virtual transfererArgent(Devise somme, Compte& compte);
	Devise getSolde() const;
	void addOperation(Operation op);
	void affOperations() const;
	bool checkId(int id);
};



