#include "Employe.h"
#include "Responsable.h"


//initialiser les variables static 
int Entreprise::Employe::icount = 0;
int Entreprise::Employe::nbrIstance = 0;
float Entreprise::Employe::valeurIndice = 50.0;

//constructeur
Entreprise::Employe::Employe(string name, float indice)
{
	icount++;
	nbrIstance++;
	this->matricule = icount;
	this->nom = name;
	this->indiceSalarial = indice;
}


//calculer le salaire
float Entreprise::Employe::calculerSalaire() const
{
	return indiceSalarial * valeurIndice;
}


//methode afficher
void Entreprise::Employe::afficherEmploye() const
{
	cout << "-------------- Les infos d'un employe-------------" << endl;
	cout << "Matricule :" << this->matricule << endl;
	cout << "Nom :" << this->nom << endl;
}

//methode creator
Entreprise::Employe Entreprise::Employe::creator(string name, float indice)
{
	if (nbrIstance < 5) {
		return Employe(name, indice);
	}
	else {
		cout << "impossible d'instancer un autre client !!" << endl;
		exit;
	}
	
}

//destructeur
Entreprise::Employe::~Employe()
{
	nbrIstance--;
}



