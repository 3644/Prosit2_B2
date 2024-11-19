#include "Chiffrement.h"

std::string chiffrementCesar(const std::string &texte, int cle, bool decrypter) {
    std::string resultat;
    int decalage = decrypter ? -cle : cle;
    for (char c : texte) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            resultat += (c - base + decalage + 26) % 26 + base;
        } else {
            resultat += c;
        }
    }
    return resultat;
}

std::string chiffrementXOR(const std::string &texte, char cle) {
    std::string resultat = texte;
    for (char &c : resultat) {
        c ^= cle;
    }
    return resultat;
}

std::string appliquerChiffrement(const std::string &texte, int niveau, int cleCesar, char cleXOR, bool decrypter) {
    switch (niveau) {
        case 1: // César 
            return chiffrementCesar(texte, cleCesar, decrypter);
        case 2: // XOR 
            return chiffrementXOR(texte, cleXOR);
        case 3: // Les deux
            return chiffrementCesar(chiffrementXOR(texte, cleXOR), cleCesar, decrypter);
        default:
            return texte;
    }
}