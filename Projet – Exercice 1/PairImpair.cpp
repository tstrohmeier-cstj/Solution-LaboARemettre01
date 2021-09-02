//But: Programme qui lit un entier et qui d�termine et affiche s�il s�agit d�un entier pair ou d�un entier impair
//Auteur: Tom Strohmeier
//Date: 2021-09-01

//Instructions:
#include <iostream>

void main()
{
	//Variables programme:
		int nombreEntier;
		int resteDivision;

	//Demande un nombre entier � l'utilisateur
	std::cout << "Veuillez entrer un nombre entier: ";

	//Place le input utilisateur dans la variable nombreEntier
	std::cin >> nombreEntier;

			/*
			Test programme(ok)
			std::cout << nombreEntier;
			*/

	//Op�ration pour connaitre le restant de l'�p�ration 
	resteDivision = nombreEntier % 2;

	//V�rification du input utilisateur pour savoir si le nombre est pair ou impair. Si pair, un message affiche,
	//si impair, un message affiche
	//Explication: 
	//Si le Modulo de l'op�ration est 0, le chiffre est pair, si il y a un reste, le chiffre est impair
	if (resteDivision == 0)
	{
		std::cout << nombreEntier << " est un nombre pair.";
	}
	else
	{
		std::cout << nombreEntier << " est un nombre impair.";
	}

	/*
		-Test effectu�s aux �tapes test en commentaires utilisant -1, 0, 1
		-Test effectu�s en fin de programme avec les valeurs suivantes :
			56: 56 est un nombre pair
			-48: -48 est un nombre pair
			33: 33 est un nombre pair
			-249: -249 est un nombre impair
			1: 1 est un nombre impair
			0: 0 est un nombre pair
			-1: -1 est un nombre impair
	*/
}