#ifndef CARTE_CPP
#define CARTE_H

#include <string>

class Mage;

class Carte {
  std::string nom;
  int mana;
 
 public:
  void valeurMana(int valeur);
  Carte(std::string nom, int mana);
  void setJoueur(Mage *);
  std::string getNom() const;
  int getMana() const;

};
#endif