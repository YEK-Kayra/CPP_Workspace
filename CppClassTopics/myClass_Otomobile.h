#pragma once	//Buraya bir kez gir anlam�nda, #ifndef header guard� gibi 

#include <iostream>

using namespace std;

class Otomobile {

public: // Access from all .h .cpp files in the myClass_Otomobile project

	/*Class members*/
	//string renk;
	//int beygirGucu;
	//string Modeli;

	//int otomobilYear; // ==> Encapsulation konusuna g�re public member yapmak yanl��t�r, 
					  //  ya client �n bir �ey yaparken yanl��l�kla kullan�r ve g�remezse ? 
					  //  O y�zden Encapsulation der ki metodlar�n� de�il memberlar�n� sarmala yani private yap
					  //  client ya da developer eri�mek isterse metodlar�nla okuyup yazabilsin
 
	/*Class methods*/


	/*Main kodda objenin elini kolunu olu�tururken 6 sat�r harcamamak i�in bu �ekilde bir yap�c� metod (constructor) tan�mlad�k */
	
	//CONSTRUCTOR METHOD
	Otomobile(string _renk, int _beygirGucu, string _Modeli, int kp);
	//DESTRUCTOR METHOD
	~Otomobile(); 


	/*Tek bir metodda g�r�nt�lememizi sa�layacak*/
	void ruhsatBilgileriniGoster();

	/*Bunlar da benim d��ar�dan private class memberlar�ma ilgili objede de�i�iklik yapmak i�in eri�mek isterlerse kullanabilirler.*/
	void degistirOtoRenk(string _renk);
	void degistirOtoBeygirGuc(int _beygirGucu);
	void degistirOtoModel(string _Model);
	void degistirOtoModelYil(int _ModelYili);

	string justGetColorInfo();
	string justGetModelInfo();
	int	   justGetPowerInfo();
	int	   justGetModelyiliInfo();


	int* pkapiSayisi;

private: // Access just from .h and cpp of myClass_Otomobile , not other ones

	string cantModeli;	//Otomobile constructor u eri�ebilir.	
						//ruhsatBilgileriniGoster metodu da eri�ebilir
						//ama main.c den eri�im olmaz, Yani .h .cpp dosyas�(bu class i�in) eri�ebilir di�er .h .cpp ler eri�emez


		/*Class members*/ /* Buras� �undan dolay� var
						   * ben class geli�tiriyorum, bir ba�kas� benim de�i�kenlerimi yanl��l�kla kullanmas�n diye bende 
						   * private olarak sakl�yorum
						   */
		string renk;
		int beygirGucu;
		string Modeli;

		int otomobilYear;
};
