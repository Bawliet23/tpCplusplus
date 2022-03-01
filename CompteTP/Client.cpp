
#include "Client.h"
int Client::count = 1;

Client::Client(string name) : id(Client::count++)
{
	this->name = name;
}

void Client::ajoutCompte(Compte* compte)
{
	this->comptes.push_back(compte);
}

void Client::affCompte() const
{
	cout << "NOM Client  : " << this->name << endl;
	for (int i = 0; i < comptes.size(); i++)
	{
		comptes[i]->consulterSolde();
	}
}

void Client::affCompteOperations()
{
	cout << "NOM Client  : " << this->name << endl;
	for (int i = 0; i < comptes.size(); i++)
	{
		comptes[i]->consulterSolde();
		comptes[i]->affOperations();
	}
}

void Client::retireCompteById(int id, Devise d)
{
	for (int i = 0; i < comptes.size(); i++)
	{
		if (comptes[i]->checkId(id) )
		{
			comptes[i]->retirerArgent(d);
		}
	}
}

void Client::DeposerCompteById(int id, Devise d)
{
	for (int i = 0; i < comptes.size(); i++)
	{
		if (comptes[i]->checkId(id))
		{
			comptes[i]->deposerArgent(d);
		}
	}
}

void Client::transfererArgentDuCompteById(int id, Compte& compte, Devise d)
{

	for (int i = 0; i < comptes.size(); i++)
	{
		if (comptes[i]->checkId(id))
		{
			if (comptes[i]->retirerArgent(d)) {
				compte.deposerArgent(d);
			}
		}
	}
}
