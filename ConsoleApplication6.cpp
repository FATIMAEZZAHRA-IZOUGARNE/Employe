// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Employe.h"
#include "Responsable.h"
#include "Commercial.h"
using namespace std;
using namespace Entreprise;

int main()
{
        //=================== Création des employés via creator() ===================
        Employe e1 = Employe::creator("Ali", 10);
        Employe e2 = Employe::creator("Sara", 12);
        Employe e3 = Employe::creator("Youssef", 8);

        cout << "\n--- Informations des employés ---\n";
        e1.afficherEmploye();
        e2.afficherEmploye();
        e3.afficherEmploye();

        cout << "\nSalaire de Ali : " << e1.calculerSalaire() << " DH\n";
        cout << "Salaire de Sara : " << e2.calculerSalaire() << " DH\n";
        cout << "Salaire de Youssef : " << e3.calculerSalaire() << " DH\n";

        //=================== Responsable ===================
        Responsable r1("Fatima", 20, 5);

        r1.ajouterSubordonne(&e1);
        r1.ajouterSubordonne(&e2);
        r1.ajouterSubordonne(&e3);

        cout << "\n--- Subordonnés directs de Fatima ---\n";
        r1.afficherSub_Direct();

        //=================== Commercial ===================
        Commercial c1("Omar", 15, 0.05);
        c1.mettreAjourVentes(20000);

        cout << "\n--- Informations du commercial ---\n";
        c1.afficher();

        cout << "\nProgramme terminé avec succès \n";

        return 0;

       
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

