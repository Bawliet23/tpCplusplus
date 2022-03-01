#include "ComptePayant.h"

ComptePayant::ComptePayant(Devise solde) :Compte(solde) {

}

bool ComptePayant::retirerArgent(Devise somme)
{
    Devise t = (somme * this->taux) / 100;
    somme += t;
   return this->Compte::retirerArgent(somme);
}




