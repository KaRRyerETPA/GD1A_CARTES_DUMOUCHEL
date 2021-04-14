#ifndef MONSTRE_H
#define MONSTRE_H

#include "carte.h"
#include "mage.h"

class Monstre: public Carte {
    int attaque, vie, fatigue;

 public:
    int getAttaque() const;
    void attaque(Mage &);
    void attaque(Monstre *);
    void valeurAttaque(int valeur);
    void valeurVie(int valeur);
    void valeurFatigue(int valeur);
    bool mort();
    void verifierMort();


 Monstre(std::string nom, int mana, int attaque, int vie, int fatigue);

};
#endif