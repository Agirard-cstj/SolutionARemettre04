#pragma once


// Fonction calculerMoyenne qui ressort le r�sultat en double en prenant une variable integer. 
// Cette fonction permet de calculer la moyenne d'un nombre de note fournis par l'usager
double calculerMoyenne(int nbNotes);

// Fonction qui valide la date qui va ressortir un r�sultat true ou false et qui prend en entrer 3 variables integer, soit jour, mois et ann�es
// Cette fonction va valider si le jour choisi par l'usager existe ou pas
bool validerDate(int jour, int mois, int annee);


// Fonction qui va dessiner un rectangle (et donc qui ne renvoie aucun valeur au main) � partir de trois donn�es en integer soit la largeur, la hauteur 
// et plein ou non.
// Cette fonction dessine le contour en "#" et le centre si plein en "*" ou si vide en " "
void dessinerRectangle(int largeur, int hauteur, bool plein);