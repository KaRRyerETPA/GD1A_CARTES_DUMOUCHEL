#define MONSTRE_CPP

#include "Monstre.h"
#include <iostream>
#include <string>
using namespace std; 

Monstre::Monstre(string nom, int mana, int attaque, int vie, int fatigue):
    attaque{attaque}, vie{vie}, fatigue{fatigue} { }

void Monstre::attaque(Monstre *ennemi) {
    ennemi->valeurVie(attaque);
    valeurVie(ennemi->getAttaque());
    verifierMort();
}

void Monstre::valeurAttaque(int valeur) {
    attaque = (attaque-valeur<=0) ? 0 : attaque - valeur;
}

void Monstre::valeurVie(int valeur) {
    vie = (vie-valeur<=0) ? 0 : vie - valeur;
    verifierMort();
}

void Monstre::valeurFatigue(int valeur) {
    fatigue = (fatigue-valeur<=0) ? 0 : fatigue - valeur;
}

bool Monstre::mort() {
    return vie == 0;
}

int Monstre::getAttaque() const {
    return attaque;
}


    