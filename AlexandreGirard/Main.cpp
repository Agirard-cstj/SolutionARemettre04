// But : Faire un programme qui va demander à l'utilisateur un nombre de note pour une moyenne. Par la suite, une fonction va demander les notes à 
// l'utilisateur pour calculer une moyenne et par la suite renvoyer le résultat au Main qui lui va afficher le résultat.
// Nom : Alexandre Girard
// Date : 2021-09-30


// Inclusion des biblitothèques dont celle des fonctions
#include <iostream>
#include "function.h"
using namespace std;


// Ouverture du Main
int main() {
   // SetLocal afin de permettre les caractères spéciaux
   setlocale(LC_ALL, "fr");

   // Exercice 1:

  /*
  

   // Création des variables
   int nbNotes;
   double moyenne;

   // Demande à l'usager le nombre de note voulu et lui demande de rentrer le caractère
   cout << "Veuillez entrer le nombre de note pour la moyenne : ";
   cin >> nbNotes;

   // Envoie la variable du nombre de note à la fonction et enregistre le résultat sous moyenne.
   moyenne = calculerMoyenne(nbNotes);

   // Affiche la moyenne du groupe sur l'écran
   cout << "La moyenne du groupe est de : " << moyenne << endl;

   // Met le système en pause afin que l'usager puisse voir le résultat obtenue.
   system("pause");

   // Retourne 0, car le main est en int. 
   return 0;



   //  Plan de test
   // nbNote     note                               résultat
   //   3       3, 5, 7                                  5
   //   2        5, 6                                   5.5
   //   a                                               erreur
   //   4      -5, 10, 20, 30, 40.5                     25.125
   //   3      5 , a                                  erreur moy = 1.66667
   //
   //
   */
  


   // Exercice 2:

  /* 
  
  // Création des variables pour le problème
  
   int jour;
   int mois;
   int annee;
   bool Date;


   // Demande à l'usager le jour, le mois et l'année à l'usager et enregistre les valeurs rentré

   cout << "Veuillez entrer un jour : ";
   cin >> jour;
   cout << "Veuillez entrer un mois : ";
   cin >> mois;
   cout << "Veuillez entrer une année : ";
   cin >> annee;

   // Enregistre la valeur obtenue par la fonction afin de savoir si la date est valide ou pas

   Date = validerDate( jour,  mois,  annee);

   // Une boucle while qui va redemander à l'usager une date valide tant que celle-ci ne le sera pas
   while ((!Date)) {

      // Affiche que la date est non valide
      cout << "Votre Date est non valide veuillez réessayer"<<endl;

      // Redemande à l'usager le jour, le mois et l'année à l'usager et enregistre les valeurs rentré
      cout << "Veuillez entrer un jour : ";
      cin >> jour;
      cout << "Veuillez entrer un mois : ";
      cin >> mois;
      cout << "Veuillez entrer une année : ";
      cin >> annee;

      // Envoi les information à la fonction afin de valider si celle-ci est valide
      Date = validerDate(jour, mois, annee);

   }

   // Affiche à l'usager que la date est valide
   cout << " Votre date est valide"<<endl;

   // Met le système en pause afin que l'usager puisse voir le résultat
   system("pause");

   // Retourne 0, car le main est en integer
   return0;


   //  Plan de test
   // jour        mois        annee       resultat
   // 5           10          1997           valide
   // 29          2           2016           valide
   // 29          2           1997           non valide
   // a                                      erreur
   // 31          09          1658           non valide  
   // -1          06          1775           non valide
   // 25          13          1600          non valide
   // 25          8           1400           non valide      
   //
   */


   // Exercice 3:

  /* 
   
   // Déclaration des variables
   int largeur;
   int hauteur;
   bool plein;

   // Demande à l'usager les informations requis pour dessiner un rectangle et enregistre les valeurs
   cout << "Veuillez entrer la largeur du rectangle : ";
   cin >> largeur;
   cout << "Veuillez entrer la hauteur du rectangle : ";
   cin >> hauteur;
   cout << "Est ce que le rectangle est plein Y=1 N=0: ";
   cin >> plein;

   // Appel la fonction afin de dessiner le rectangle
   dessinerRectangle(largeur, hauteur, plein);

   // Met le system en pause afin de pouvoir voir le résultat
   system("pause");

   // Retourne 0 au main, car il est en integer
   return 0;

   //  Plan de test
   // largeur 3 hauteur 3 plein 
   //  ###
   //  #*#
   //  ###
   // largeur 4 hauteur 3 vide 
   //  ####
   //  #  #
   //  ####
   // largeur 6 hauteur 4 plein 
   //  ######
   //  #****#
   //  #****#
   //  ######

   */

   


}

