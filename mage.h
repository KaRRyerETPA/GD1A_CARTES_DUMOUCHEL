#ifndef MAGE_H
#define MAGE_H

#include <string>

class Monstre;

class Mage { 
  std::string nom;
  std::string deck;
  int vie = max_vie;
  
  Deck deck;
  
 public:
  Mage(std::string nom, std::string deck);
  std::string getNom() const;
  std::string getDeck() const;
  int getVie() const;
  void jouer(int); 
  void jouer(int, Mage &, int);
  void attaque(Mage &, int);  
  void subirDegat(int);
  void piocher(); 
  void melangerDeck();
};
#endif