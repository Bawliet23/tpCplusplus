
#include "Compte.h"
#include <iostream>

using namespace std;


int Compte::count = 0;
Compte::Compte(Devise solde) : id(++Compte::count)
{
	this->solde = solde;
}

bool Compte::retirerArgent(Devise somme)
{
	if (this->solde >= somme) {
		this->solde -= somme;
		this->addOperation(Operation("-"+somme.toString()));
		return true;
	}
	return false;
}

void Compte::deposerArgent(Devise somme)
{
	this->solde += somme;
	this->addOperation(Operation("+" + somme.toString()));
}

void Compte::consulterSolde() const
{
	cout << "Compte Numero : " << this->id << endl;
	cout << "Votre Solde : " + this->solde.toString() << endl;
}

bool Compte::transfererArgent(Devise somme, Compte& compte)
{
	if (this->retirerArgent(somme))
	{
		compte.deposerArgent(somme);
		return true;
	}
	return false;
}

Devise Compte::getSolde() const
{
	return this->solde;
}

void Compte::addOperation(Operation op)
{
	this->operations.push_back(op);
}

void Compte::affOperations() const
{
	for (int i = 0; i < operations.size(); i++)
	{
		operations[i].aff();
	}
}

bool Compte::checkId(int id)
{
	return this->id==id;
}
