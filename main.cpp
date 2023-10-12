#include <iostream>
#include "Personne.h"
using namespace std;

int main ()
{
Personne flanby("HOLLANDE","François",67,"Fonctionnaire"); // Création de 4 objets de type Personne, créé par leurs surnoms carlita.marier("SARKOZY"); // Carla BRUNI se marie avec Nicolas SARKOZY bibi.marier("MACRON"); // Brigitte se marie avec Emmanuel MACRON
Personne sego("ROYAL","Segolene",68,"Ministre");
Personne jeanmimi("BLANQUER","Jean-Michel",57,"Ministre");
Personne aure("DEVOS","Aurelia",42,"Magistrate");

cout << "On affiche les informations des 4 personnages avant l'utilisation des objets" << endl;
flanby.afficher();
sego.afficher();
jeanmimi.afficher();
aure.afficher();

flanby.changer_travail("Retraite");  
sego.changer_travail("Retraite");
aure.marier("BLANQUER");
sego.anniversaire();
jeanmimi.anniversaire();
sego.marier("ROYAL");
aure.marier("DEVOS");


cout << "On affiche les informations des 4 personnages apres l'utilisation des objets" << endl;
flanby.afficher();
sego.afficher();
jeanmimi.afficher();
aure.afficher();

return 0;
}