#include "mage.h"
#include "monstre.h"
#include <iostream>

using namespace std;

Mage::Mage(string nom, string deck, int vie, int fatigue):
  nom{nom}, deck{deck}, attaque{attaque}, vie{vie} { }
}

string Mage::getNom() const {
  return nom;
}

string Mage::getDeck() const {
  return deck;
}

int Mage::getVie() const {
  return vie;
}

int Mage::getFatigue() const {
    return fatigue;
}