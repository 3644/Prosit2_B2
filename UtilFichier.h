#ifndef UTIL_FICHIER_H
#define UTIL_FICHIER_H

#include <string>

// Déclaration des fonctions utilitaires pour la gestion des fichiers
std::string lireFichier(const std::string &nomFichier);
void ecrireFichier(const std::string &nomFichier, const std::string &contenu);

#endif // UTIL_FICHIER_H