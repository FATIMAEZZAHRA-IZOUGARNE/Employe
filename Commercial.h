#pragma once
#include "Employe.h"
#include <iostream>
using namespace std;
namespace Entreprise {
    class Commercial :
        public Employe
    {
    private:
        float montVentes; //montant des ventes du dernier mois
        float tauxInteret;//exemple 5%
    public:
        Commercial(string name = "", float indice = 0.0, float taux = 0.05); //constructeur
        void mettreAjourVentes(float nouv_montantVendus);//mis ajour les ventes de dernier mois
        float calculerSalaire() const;//redefinire le calcul du salaire
        void afficher() const; //methode afficher
        ~Commercial(); //destructeur

    };
}

