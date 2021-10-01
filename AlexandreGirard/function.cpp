

// Inclusion des biblitothèques dont celle des fonctions
#include<iostream>
using namespace std;
#include "function.h"

// Fonction calculer la moyenne qui prend un nombre de note en integer et qui ressort la moyenne en double
double calculerMoyenne(int nbNotes)
{
   // Déclaration des variables
   double note;
   double temp;
   double moyenne;

   // For qui va compter de la 1er note jusqu'à la dernière note
   for (int i = 0; i < nbNotes; i++)
   {
      // Si la fonction se trouver à la première note
      if (i==0)
      {  // Demande la première note à l'usager
         cout << "Veuillez entrer la " << i+1 << " er note : ";
         cin >> note;
         // Tant que la note demandé ne se trouve pas entre 0 et 100, celle-ci sera redemandé à l'usager
         while (note>100||note<0)
         {
            cout << "Veuillez entrer une note valide : ";
            cin >> note;
         }
         // Initialise la variable temp à la première note
         temp = note;
      }
      // Pour toutes les autres note que la première
      else
      {  // Demande la ie note à l'usager
         cout << "Veuillez entrer la " << i+1 << " e note : ";
         cin >> note;
         // Tant que la note demandé ne se trouve pas entre 0 et 100, celle-ci sera redemandé à l'usager
         while (note > 100 || note < 0)
         {
            cout << "Veuillez entrer une note valide : ";
            cin >> note;
         }
         // Addition les notes ensemble
         temp = temp + note;
      }
 
      
   }

   // Calcule la moyenne de toutes les notes en divisant le total des notes soit temp par le nombre de note nbNotes
   moyenne = temp / nbNotes;

   // Renvoie comme résultat de la fonction moyenne
   return moyenne;
}

// Fonction qui valide la date en renvoyant un true or false et qui prend 3 variables integer en entrer soit jour, mois et annee
bool validerDate(int jour, int mois, int annee)
{
   // Déclaration de la variable valide
   bool valide;

   // Si l'annee est supérieur à 1952 on poursuit
   if (annee >= 1592) {
      // Si mois est un mois de 31 jour
      if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12)
      {
         // Si le jour se situe entre le 31 et 1er inclusivement
         if (jour <= 31 && jour > 0)
         {  // Date valide
            valide = 1;
         }
         // Si le jour ne se situe pas entre le 31 et 1er inclusivement
         else
         {  // Date non valide
            valide = 0;
         }
      }
      // Si mois est un mois de 30 jour
      else if (mois == 4 || mois == 6 || mois == 9 || mois == 11)
      {
         // Si le jour se situe entre le 30 et 1er inclusivement
         if (jour <= 30 && jour > 0)
         {  // Date valide
            valide = 1;
         }
         // Si le jour ne se situe pas entre le 30 et 1er inclusivement
         else
         {  // Date non valide
            valide = 0;
         }
      }
      // Si le mois est février
      else if (mois == 2)
      {  // Si l'année est bixestile
         if (annee % 4 == 0)
            // Si le jour se situe entre le 29e du mois ou le 1er inclusivement
            if (jour <= 29 && jour > 0)
            {  // Date est valide
               valide = 1;
            }
            // Si le jour ne se situe pas entre le 29e du mois ou le 1er inclusivement
            else
            {  // Date non valide
               valide = 0;
            }
         // Si l'année est non bixestile
         else
         {  // Si le jour se situe entre le 28e jour du mois et le 1er inclusivement
            if (jour <= 28 && jour > 0)
            {  // Date est valide
               valide = 1;
            }
            // Si le jour ne se situe pas entre le 28e jour du mois et le 1er inclusivement
            else
            {  // Date non valide
               valide = 0;
            }
         }

      }
      // Si le mois n'existe pas 
      else
      {  // Date non valide
         valide = 0;
      }
   }
   // Si l'année est inférieur à 1952 on renvoie que la date est non valide
   else
   {  // Date non valide 
      valide = 0;
   }

   // Retourne comme résultat de la fonction en booléen si le résultat est valide ou non
   return valide;
}

// Fonciton qui va dessiner un rectangle à partir de trois variables dont 2 en integer soit largeur et hauteur et une en booléen soit plein
void dessinerRectangle(int largeur, int hauteur, bool plein)
{
   // For qui calcule la hauteur de la fonction
   for (int i = 0; i < hauteur; i++)
   {
      // Si la hauteur de la boucle for est la première ligne ou la dernière ligne 
      if (i==0||i==hauteur-1)
      {  // For qui va compter la largeur
         for (int j = 0; j < largeur; j++)
         {  // Si le compte de la largeur n'est pas rendu au dernier caractère 
            if (j<largeur-1)
            {  // Affiche un "#"
               cout << "#";
            }
            // Si le compte de la largeur est rendu au dernier caractère
            else
            {  // Affiche un "#" et saute la ligne
               cout << "#" << endl;
            }
         }
      }
      // Si la fonction n'est pas à la première ou dernière ligne
      else
      {
         // For qui compte la largeur 
         for (int j = 0; j < largeur; j++)
         {  // Si le compte de la largeur est à la première colonne 
            if (j == 0)
            {  // Affiche un "#"
               cout << "#";
            }
            // Si le compte de la largeur est rendu à la dernière colonne 
            else if ( j == largeur - 1)
            {  // Affiche un "#" et saute une ligne
               cout << "#"<<endl;
            }
            // Si l'utilisateur voulait le rectangle plein
            else if (plein)
            {  // Affiche des "*" à l'intérieur du rectangle
               cout << "*";
            }
            // Si l'utilisateur voulait le rectangle vide
            else
            {  // Affiche des " " à l'intérieur du rectangle
               cout << " ";
            }
         }
      }
 
   }

}
