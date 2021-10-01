// But : Faire un programme qui va demander � l'utilisateur un nombre de note pour une moyenne. Par la suite, une fonction va demander les notes � 
// l'utilisateur pour calculer une moyenne et par la suite renvoyer le r�sultat au Main qui lui va afficher le r�sultat.
// Nom : Alexandre Girard
// Date : 2021-09-30


// Inclusion des biblitoth�ques dont celle des fonctions
#include <iostream>
#include "function.h"
using namespace std;


// Ouverture du Main
int main() {
   // SetLocal afin de permettre les caract�res sp�ciaux
   setlocale(LC_ALL, "fr");

   // Exercice 1:

  /*
  

   // Cr�ation des variables
   int nbNotes;
   double moyenne;

   // Demande � l'usager le nombre de note voulu et lui demande de rentrer le caract�re
   cout << "Veuillez entrer le nombre de note pour la moyenne : ";
   cin >> nbNotes;

   // Envoie la variable du nombre de note � la fonction et enregistre le r�sultat sous moyenne.
   moyenne = calculerMoyenne(nbNotes);

   // Affiche la moyenne du groupe sur l'�cran
   cout << "La moyenne du groupe est de : " << moyenne << endl;

   // Met le syst�me en pause afin que l'usager puisse voir le r�sultat obtenue.
   system("pause");

   // Retourne 0, car le main est en int. 
   return 0;



   //  Plan de test
   // nbNote     note                               r�sultat
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
  
  // Cr�ation des variables pour le probl�me
  
   int jour;
   int mois;
   int annee;
   bool Date;


   // Demande � l'usager le jour, le mois et l'ann�e � l'usager et enregistre les valeurs rentr�

   cout << "Veuillez entrer un jour : ";
   cin >> jour;
   cout << "Veuillez entrer un mois : ";
   cin >> mois;
   cout << "Veuillez entrer une ann�e : ";
   cin >> annee;

   // Enregistre la valeur obtenue par la fonction afin de savoir si la date est valide ou pas

   Date = validerDate( jour,  mois,  annee);

   // Une boucle while qui va redemander � l'usager une date valide tant que celle-ci ne le sera pas
   while ((!Date)) {

      // Affiche que la date est non valide
      cout << "Votre Date est non valide veuillez r�essayer"<<endl;

      // Redemande � l'usager le jour, le mois et l'ann�e � l'usager et enregistre les valeurs rentr�
      cout << "Veuillez entrer un jour : ";
      cin >> jour;
      cout << "Veuillez entrer un mois : ";
      cin >> mois;
      cout << "Veuillez entrer une ann�e : ";
      cin >> annee;

      // Envoi les information � la fonction afin de valider si celle-ci est valide
      Date = validerDate(jour, mois, annee);

   }

   // Affiche � l'usager que la date est valide
   cout << " Votre date est valide"<<endl;

   // Met le syst�me en pause afin que l'usager puisse voir le r�sultat
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
   
   // D�claration des variables
   int largeur;
   int hauteur;
   bool plein;

   // Demande � l'usager les informations requis pour dessiner un rectangle et enregistre les valeurs
   cout << "Veuillez entrer la largeur du rectangle : ";
   cin >> largeur;
   cout << "Veuillez entrer la hauteur du rectangle : ";
   cin >> hauteur;
   cout << "Est ce que le rectangle est plein Y=1 N=0: ";
   cin >> plein;

   // Appel la fonction afin de dessiner le rectangle
   dessinerRectangle(largeur, hauteur, plein);

   // Met le system en pause afin de pouvoir voir le r�sultat
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

