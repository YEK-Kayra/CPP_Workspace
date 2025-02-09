#pragma once	//Buraya bir kez gir anlamýnda, #ifndef header guardý gibi 

#include <iostream>

using namespace std;

class Otomobile {

public: // Access from all .h .cpp files in the myClass_Otomobile project

	/*Class members*/
	//string renk;
	//int beygirGucu;
	//string Modeli;

	//int otomobilYear; // ==> Encapsulation konusuna göre public member yapmak yanlýþtýr, 
					  //  ya client ýn bir þey yaparken yanlýþlýkla kullanýr ve göremezse ? 
					  //  O yüzden Encapsulation der ki metodlarýný deðil memberlarýný sarmala yani private yap
					  //  client ya da developer eriþmek isterse metodlarýnla okuyup yazabilsin
 
	/*Class methods*/


	/*Main kodda objenin elini kolunu oluþtururken 6 satýr harcamamak için bu þekilde bir yapýcý metod (constructor) tanýmladýk */
	
	//CONSTRUCTOR METHOD
	Otomobile(string _renk, int _beygirGucu, string _Modeli, int kp);
	//DESTRUCTOR METHOD
	~Otomobile(); 


	/*Tek bir metodda görüntülememizi saðlayacak*/
	void ruhsatBilgileriniGoster();

	/*Bunlar da benim dýþarýdan private class memberlarýma ilgili objede deðiþiklik yapmak için eriþmek isterlerse kullanabilirler.*/
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

	string cantModeli;	//Otomobile constructor u eriþebilir.	
						//ruhsatBilgileriniGoster metodu da eriþebilir
						//ama main.c den eriþim olmaz, Yani .h .cpp dosyasý(bu class için) eriþebilir diðer .h .cpp ler eriþemez


		/*Class members*/ /* Burasý þundan dolayý var
						   * ben class geliþtiriyorum, bir baþkasý benim deðiþkenlerimi yanlýþlýkla kullanmasýn diye bende 
						   * private olarak saklýyorum
						   */
		string renk;
		int beygirGucu;
		string Modeli;

		int otomobilYear;
};
