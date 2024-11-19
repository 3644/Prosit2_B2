#include <iostream>
#include "Chiffrement.h"
#include "UtilFichier.h"

int main() {
    std::string fichierSource, fichierDestination;
    int niveauSecurite;
    bool decrypter;

    std::cout << "Entrez le nom du fichier source : ";
    std::cin >> fichierSource;
    std::cout << "Entrez le nom du fichier de destination : ";
    std::cin >> fichierDestination;
    std::cout << "Choisissez le niveau de sécurité (1 = César, 2 = XOR, 3 = César + XOR) : ";
    std::cin >> niveauSecurite;
    std::cout << "Voulez-vous décrypter le fichier ? (1 = oui, 0 = non) : ";
    std::cin >> decrypter;

    std::string contenu = lireFichier(fichierSource);
    if (contenu.empty()) return 1;

    std::string resultat = appliquerChiffrement(contenu, niveauSecurite, 3, 'K', decrypter);
    ecrireFichier(fichierDestination, resultat);

    std::cout << (decrypter ? "Décryptage" : "Cryptage") << " terminé.\n";
    return 0;
}