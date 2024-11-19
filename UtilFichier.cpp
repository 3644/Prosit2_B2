#include "UtilFichier.h"
#include <iostream>
#include <fstream>

std::string lireFichier(const std::string &nomFichier) {
    std::ifstream fichier(nomFichier);
    if (!fichier) {
        std::cerr << "Erreur lors de l'ouverture du fichier en lecture.\n";
        return "";
    }
    return {std::istreambuf_iterator<char>(fichier), std::istreambuf_iterator<char>()};
}

void ecrireFichier(const std::string &nomFichier, const std::string &contenu) {
    std::ofstream fichier(nomFichier);
    if (!fichier) {
        std::cerr << "Erreur lors de l'ouverture du fichier en écriture.\n";
        return;
    }
    fichier << contenu;
}