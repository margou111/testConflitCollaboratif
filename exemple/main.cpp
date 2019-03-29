#include <string>
#include <conio.h>
#include <iostream>
#include "..\screen\screen.h"
using namespace std;

//pour utiliser une classe il faut inclure sa d�finition
#include "animal.h" 

//section des prototypes des fonctions
void adopterMonAnimal();
void decrireUnAnimal(Animal);
//void decrireUnAnimal(Animal, int ligne, int colonne);

//fonction qui re�oit un param�tre par r�f�rence
//void initialiserAnimal(Animal&);
//section des variables globales
//cr�ation d'OBJET: il s'agit d'une VARIABLE du type d'une classe
Animal monAnimalPrefere;

//programme principal

void fonction1();
void fonction2();
void fonction3();
void fonction4();
void fonctionTestConflit();

void main()
{
	Animal tonAnimal;

	adopterMonAnimal();
	cout << "Cours 1 \n";
	decrireUnAnimal(monAnimalPrefere);
	cout << "\n";
	_getch();

	Animal sonAnimal(monAnimalPrefere);
	sonAnimal.Crier();
	cout << "\n";
	_getch();

}

void fonctionTestConflit()
{
	cout << "compte2git\n";
}

void fonction1()
{//margou
	cout << "etape2 margou" << endl;
}

void fonction2()
{
	cout << "etape1 compteCegep" << endl;
	cout << "etape3 compteCegep" << endl;
}

void fonction3()
{//margou
	cout << "etape5 margou" << endl;
	cout << "etape7 margou" << endl;
	cout << "etape9 margou" << endl;
}

void fonction4()
{
	cout << "etape4 compteCegep" << endl;
	cout << "etape6 compteCegep" << endl;
	cout << "etape8 compteCegep" << endl;
}
//------------------------------------------------------------------------------------
void adopterMonAnimal()
{
	string type, nom, cri;
	ClrScr();
	cout << "type d'animal desire: ";
	cin >> type;
	cout << "nom de l'animal: ";
	cin >> nom;
	cout << "cri de cet animal:";
	cin >> cri;
	monAnimalPrefere.setType(type);
	monAnimalPrefere.ChangerNom(nom);
	monAnimalPrefere.setCri(cri);
}

void decrireUnAnimal(Animal inAnimal)
{
	ClrScr();
	cout << "Voici les donn�es de mon animal:\n\n";
	inAnimal.AfficherAnimal();
	cout << "\nSon cri est: ";
	inAnimal.Crier();
	_getch();
}

//aussi, on aurait pu faire l'instruction suivante
//cout << inAnimal.getType() << " qui se nomme " << inAnimal.getNomFamilier();


//cours 4
//fonction recevant un param�tre par R�F�RENCE
void initialiserAnimal(Animal& inAnimal)
{
	string type, nom, cri;
	ClrScr();
	cout << "type d'animal: ";
	cin >> type;
	cout << "som nom: ";
	cin >> nom;
	cout << "son cri:";
	cin >> cri;
	inAnimal.setType(type);
	inAnimal.ChangerNom(nom);
	inAnimal.setCri(cri);
}

//fonction surcharg�e
//fonction qui porte le m�me nom qu'une autre fonction
//le compilateur ex�cute la bonne fonction en se basant sur le nombre et le type des param�tres
void decrireUnAnimal(Animal inAnimal, int inLigne, int inColonne)
{
	ClrScr();
	Gotoxy(inColonne, inLigne);
	inAnimal.AfficherAnimal();
	inAnimal.Crier(3);
	_getch();
}
