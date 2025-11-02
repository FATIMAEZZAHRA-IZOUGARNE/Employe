#pragma once
#include <iostream>
using namespace std;
namespace Entreprise{
	class Employe
	{
	protected:
		static int icount; // pour auto incrementer la matricule
		static int nbrIstance; // combien d'employe on a
		static float valeurIndice; // la valeur est fixe , change en cas d'augmentation

		int matricule; //unique et non NULL
		string nom;
		float indiceSalarial; //l'indice depend du poste de salarie

	public:
		Employe(string name ="", float indice=0.0);
		float calculerSalaire() const;
		void afficherEmploye() const;
		static Employe creator(string, float);
		~Employe();
	};
}


