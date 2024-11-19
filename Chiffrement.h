#ifndef CHIFFREMENT_H
#define CHIFFREMENT_H

#include <string>

std::string chiffrementCesar(const std::string &texte, int cle, bool decrypter = false);
std::string chiffrementXOR(const std::string &texte, char cle);
std::string appliquerChiffrement(const std::string &texte, int niveau, int cleCesar = 3, char cleXOR = 'K', bool decrypter = false);

#endif // CHIFFREMENT_H