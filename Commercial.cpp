#include "Commercial.h"
#include "Employe.h"


//constructeur
Entreprise::Commercial::Commercial(string name, float indice, float taux) :
	//appel au constructeur de la classe mere
	Employe(name, indice), tauxInteret(taux)
{
	this->montVentes = 0.0;
}


//mis ajour
void Entreprise::Commercial::mettreAjourVentes(float nouv_montantVendus)
{
	if (nouv_montantVendus >= 0) {
		this->montVentes = nouv_montantVendus;
	}
	else {
		cout << "montant de vente invalide !!" << endl;
	}
}

//calculer le salaire+ interet
float Entreprise::Commercial::calculerSalaire() const {
	float salaireFixe = this->indiceSalarial * this->valeurIndice;
	float interet = this->tauxInteret * this->montVentes;
	return salaireFixe + interet;
}

//afficher les infos
void Entreprise::Commercial::afficher() const
{
	cout << "--------------------- commercial : -------------" << endl;
	cout << "Nom :" << this->nom << endl;
	cout << "Matricule :" << this->matricule << endl;
	cout << "Indice De salarie :" << this->indiceSalarial << endl;
	cout << "Ventes du dernier mois :" << this->montVentes << "DH" << endl;
	cout << "taux d'interet :" << this->tauxInteret * 100 << "%" << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "Salaire total :" << calculerSalaire() << "DH" << endl;

}

Entreprise::Commercial::~Commercial()
{
	cout << "appel au destructeur la classe Commercial " << endl;
}
