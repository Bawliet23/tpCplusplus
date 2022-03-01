#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Compte.h"
#include <iostream>
using namespace std;
using namespace std;
class Client
{
private :
	const int id;
	static int count;
	string name;
	vector<Compte*> comptes = vector<Compte*>();
	;
public:
	Client(string name);
	void ajoutCompte(Compte* compte);
	void affCompte() const;
	void affCompteOperations();
	void retireCompteById(int id , Devise d);
	void DeposerCompteById(int id , Devise d );
	void transfererArgentDuCompteById(int id , Compte& compte ,Devise d);
	

};
