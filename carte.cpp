#include "carte.h"
#include <string>
using namespace std;

Carte::Carte(string nom, int mana): nom{nom}, mana{mana} { }

string Carte::getNom() const {
  return nom;
}

void Carte::valeurMana(int valeur) {
  mana = (mana - valeur <= 0) ? 0 : mana - valeur;
}

int Carte::getMana() const {
  return mana;
}

void Carte::setJoueur(Mage *nouveauJoueur) {
  joueur = nouveauJoueur;
}