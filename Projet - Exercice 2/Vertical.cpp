//But:	�crivez un programme qui prend comme entr�e un nombre de cinq chiffres. Le programme v�rifie qu'il y a bien 
//		5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la premi�re ligne, le
//		deuxi�me chiffre sur la deuxi�me ligne, ainsi de suite.
//Auteur: Tom Strohmeier
//Date: 2021-09-01

#include <iostream>

void main()
{
	//Variables programme:
	int userInput;
	int n1;
	int n2;
	int n3;
	int n4;
	int n5;

	
	//Demande � l'utilisateur un nombre de cing chiffre
	std::cout << "Veuillez entrer un nombre de cinq chiffres: ";
	
	//Place le input utilisateur dans la variable userInput
	std::cin >> userInput;

			/*
			Test programme(ok)
			std::cout << userInput;*/

	//Si le input de l'utilisateur contient 5 chiffres, il doit se trouver entre 9999 et 10 000, sinon il ne contient pas 5 chiffres.
	//Si 5 chiffres, les chiffres sont affich�s verticalement sinon, un message d'erreur affiche.
	if (userInput <= 9999)
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres.";
	}
	else if (userInput >= 100000)
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres.";
	}
	else
	{	
		//UserInput divis� par 10 000, affiche l'unit� 5 chiffres avant la virgule donc chiffre 1
		n1 = userInput / 10000;
		std::cout << n1 << std::endl;

		//UserInput divis� par 1000, m�morise les entiers. Modulo par 10, affiche modulo donc chiffre 2
		n2 = userInput / 1000;
		n2 = n2 % 10;
		std::cout << n2 << std::endl;

		//UserInput divis� par 100, m�morise les entiers. Modulo par 10, affiche moudulo donc chiffre 3
		n3 = userInput / 100;
		n3 = n3 % 10;
		std::cout << n3 << std::endl;

		//UserInput divis� par 10, m�morise les entiers. Modulo par 10, affiche moudulo donc chiffre 4
		n4 = userInput / 10;
		n4 = n4 % 10;
		std::cout << n4 << std::endl;

		//Userinput modulo 10 et affiche le chiffre 5
		n5 = userInput % 10;
		std::cout << n5 << std::endl;


		/*
		-Test effectu�s aux �tapes test en commentaires utilisant -1, 0, 1
		-Test effectu�s en fin de programme avec les valeurs suivantes :
			-12345
				1
				2
				3
				4
				5
			-478902
				4
				7
				8
				9
				0
				2
			-3456
				Ce nombre ne contient pas 5 chiffres.
			-100000
				Ce nombre ne contient pas 5 chiffres.
			- abdjfk
				Ce nombre ne contient pas 5 chiffres.
			- -12486
				Ce nombre ne contient pas 5 chiffres.
	*/
	}
			

			





}