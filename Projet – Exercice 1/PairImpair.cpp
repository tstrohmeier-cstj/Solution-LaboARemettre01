//But: Programme qui lit un entier et qui détermine et affiche s’il s’agit d’un entier pair ou d’un entier impair
//Auteur: Tom Strohmeier
//Date: 2021-09-01

#include <iostream>
#include <string>

void main()
{
	//Variables programme:
		int nombreEntier;
		int resultat;
		int operation;
		int resteDivision;


	//Demande un nombre entier à l'utilisateur
	std::cout << "Veuillez entrer un nombre entier: ";

	//Place le input utilisateur dans la variable nombreEntier
	std::cin >> nombreEntier;

			/*
			Test programme(ok)
			std::cout << nombreEntier;
			*/

	//Opération pour connaitre le restant de l'ôpération 
	operation = nombreEntier / 2;
	resteDivision = nombreEntier % 2;

			/*
			Test programme(ok)
			std::cout << "Le resultat de " << nombreEntier << " / 2 = " << operation << std::endl;
			std::cout << "Le restant de " << nombreEntier << " modulus 2 = " << resteDivision << std::endl;
			system("pause");
			*/

	//Vérification du input utilisateur pour savoir si le nombre est pair ou impair. Si pair, un message affiche,
	//si impair, un message affiche
	//Explication: 
	//Si le Modulus de l'opération est 0, le chiffre est pair, si il y a un reste, le chiffre est impair
	if (resteDivision == 0)
	{
		std::cout << nombreEntier << " est un nombre pair.";
	}
	else
	{
		std::cout << nombreEntier << " est un nombre impair.";
	}

	/*
		-Test effectués aux étapes test en commentaires utilisant -1, 0, 1
		-Test effectués en fin de programme avec les valeurs suivantes :
			56: 56 est un nombre pair
			-48: -48 est un nombre pair
			33: 33 est un nombre pair
			-249: -249 est un nombre impair
			1: 1 est un nombre impair
			0: 0 est un nombre pair
			-1: -1 est un nombre impair
	*/

}