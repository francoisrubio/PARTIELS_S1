#include <iostream>
using namespace std;
int main() {
  const float coutHoraire = 4.0;
  int velosDispos = 20;
  int capacite = 20;
  int choix;
  do {
    cout << "\n\n******* Gestion d'une station Vélô ********" << endl << endl;
    cout << "------------------------------------------- " << endl;
    cout << "Vélos disponibles : " << velosDispos << endl;
    cout << "Point d'attache disponibles : " << capacite-velosDispos  << endl;
    cout << "------------------------------------------- " << endl << endl;
    cout << "1.Emprunter un vélô électrique" << endl;
    cout << "2. Restituer un vélô électrique" << endl;
    cout << "3. Estimer le coût de la location" << endl;
    cout << "4. Quitter l'application" << endl;

    cout << "Quel est votre choix?";
    cin >> choix;

    switch (choix) {

    case 1:
      cout << "Vous avez choisi le choix Emprunter un vélô électrique\n";
      cout << "Nombre de vélos disponibles ";
      if (velosDispos > 0) {
        velosDispos--;
      }
      
      break;

    case 2:
      cout << "Vous avez choisi le choix Restituer un vélô électrique\n";
      cout << "Nombre de vélos disponibles ";
      if (velosDispos < 20) {
        velosDispos++;
      
      }
      break;

    case 3:
      cout << "Vous avez choisi le choix Estimer le coûde la location\n";
      cout << "Estimation du coût de cette location " << coutHoraire << "euros";
      break;

    case 4:
    default:
      cout << "Au revoir";
    }
  } while (choix < 4);

  return 0;
}
