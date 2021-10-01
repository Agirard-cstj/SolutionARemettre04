

// Inclusion des biblitoth�ques dont celle des fonctions
#include<iostream>
using namespace std;
#include "function.h"

// Fonction calculer la moyenne qui prend un nombre de note en integer et qui ressort la moyenne en double
double calculerMoyenne(int nbNotes)
{
   // D�claration des variables
   double note;
   double temp;
   double moyenne;

   // For qui va compter de la 1er note jusqu'� la derni�re note
   for (int i = 0; i < nbNotes; i++)
   {
      // Si la fonction se trouver � la premi�re note
      if (i==0)
      {  // Demande la premi�re note � l'usager
         cout << "Veuillez entrer la " << i+1 << " er note : ";
         cin >> note;
         // Tant que la note demand� ne se trouve pas entre 0 et 100, celle-ci sera redemand� � l'usager
         while (note>100||note<0)
         {
            cout << "Veuillez entrer une note valide : ";
            cin >> note;
         }
         // Initialise la variable temp � la premi�re note
         temp = note;
      }
      // Pour toutes les autres note que la premi�re
      else
      {  // Demande la ie note � l'usager
         cout << "Veuillez entrer la " << i+1 << " e note : ";
         cin >> note;
         // Tant que la note demand� ne se trouve pas entre 0 et 100, celle-ci sera redemand� � l'usager
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

   // Renvoie comme r�sultat de la fonction moyenne
   return moyenne;
}

// Fonction qui valide la date en renvoyant un true or false et qui prend 3 variables integer en entrer soit jour, mois et annee
bool validerDate(int jour, int mois, int annee)
{
   // D�claration de la variable valide
   bool valide;

   // Si l'annee est sup�rieur � 1952 on poursuit
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
      // Si le mois est f�vrier
      else if (mois == 2)
      {  // Si l'ann�e est bixestile
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
         // Si l'ann�e est non bixestile
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
   // Si l'ann�e est inf�rieur � 1952 on renvoie que la date est non valide
   else
   {  // Date non valide 
      valide = 0;
   }

   // Retourne comme r�sultat de la fonction en bool�en si le r�sultat est valide ou non
   return valide;
}

// Fonciton qui va dessiner un rectangle � partir de trois variables dont 2 en integer soit largeur et hauteur et une en bool�en soit plein
void dessinerRectangle(int largeur, int hauteur, bool plein)
{
   // For qui calcule la hauteur de la fonction
   for (int i = 0; i < hauteur; i++)
   {
      // Si la hauteur de la boucle for est la premi�re ligne ou la derni�re ligne 
      if (i==0||i==hauteur-1)
      {  // For qui va compter la largeur
         for (int j = 0; j < largeur; j++)
         {  // Si le compte de la largeur n'est pas rendu au dernier caract�re 
            if (j<largeur-1)
            {  // Affiche un "#"
               cout << "#";
            }
            // Si le compte de la largeur est rendu au dernier caract�re
            else
            {  // Affiche un "#" et saute la ligne
               cout << "#" << endl;
            }
         }
      }
      // Si la fonction n'est pas � la premi�re ou derni�re ligne
      else
      {
         // For qui compte la largeur 
         for (int j = 0; j < largeur; j++)
         {  // Si le compte de la largeur est � la premi�re colonne 
            if (j == 0)
            {  // Affiche un "#"
               cout << "#";
            }
            // Si le compte de la largeur est rendu � la derni�re colonne 
            else if ( j == largeur - 1)
            {  // Affiche un "#" et saute une ligne
               cout << "#"<<endl;
            }
            // Si l'utilisateur voulait le rectangle plein
            else if (plein)
            {  // Affiche des "*" � l'int�rieur du rectangle
               cout << "*";
            }
            // Si l'utilisateur voulait le rectangle vide
            else
            {  // Affiche des " " � l'int�rieur du rectangle
               cout << " ";
            }
         }
      }
 
   }

}
