#include<iostream>
#include"myClass_Otomobile.h" // include our class header like a hardware driver's header file
#include"Hayvan.h"	// Hayvanlar için main class
#include"Kedi.h"	// Kedi, Hayvanlar ana class ýnýn bir alt class ýdýr.
#include"kopek.h"
#include"Kuslar.h"
using namespace std;


int main() {
	/* We create our objects */
		//Otomobile Porshe;
		//Otomobile Ferrari;

	/************************************/

	// Ýf you are using C prog.language , you have to write as shown below first part in here
	// But we are developing C++ program, we use constructor for using less line, and clean code as shown second part in here

	/*// First Part Begin //*/

			/*
			Porshe.renk  = "Blue";
			Porshe.beygirGucu = 122;
			Porshe.Modeli = "Sedan";

			Ferrari.renk = "Green";
			Ferrari.beygirGucu = 144;
			Ferrari.Modeli = "Sport";
			*/

	/*// First Part End //*/

	/*// Second Part Begin //*/


	/**
	* Class member larým private olsa bile bu constructor class ýn public üyesi olduðu için eriþebilir. Çünkü private olanlara
	* sadece class içinde .h .cpp lerinde eriþim saðlayýp deðiþtirebiliyorsun
	* 
	* *Burada class ýmýzdan CONSTRUCTOR ÝLE Porshe ile Ferrari objelerini türetiyoruz*
	*/
		//Otomobile Porshe("Blue", 144, "Sedan",2);
		//Otomobile Ferrari("Green", 120, "Formula",2);

		//*(Porshe.pkapiSayisi) = 3;
		//cout << *(Porshe.pkapiSayisi) << endl;



	/*Dýþarýndan arkaþdaþým da bir class geliþtirirken yahut bir algoritma yazarken geçiçi olarak kullandýðý obje fonksiyonlarý*/
		//Porshe.degistirOtoBeygirGuc(125);
		//Porshe.degistirOtoModel("Roadaster");
		//Porshe.degistirOtoRenk("MetalicGrey");
		//Porshe.degistirOtoModelYil(2002);

		//Porshe.otomobilYear = 2002; // ==> Bu kýsým hata vermez çünkü otomobilYear public bir üye, son haliyle comment atýlmýþ
		//Porshe.renk = "Blue" // ==> Bu kýsým hata verir çünkü private olanlara böyle eriþemezsin, bunun son hali de böyle

	/*// Second Part End //*/

	/************************************/

	
	/*Now we show the car's information by just a single class's method*/
		//Porshe.ruhsatBilgileriniGoster();
		//Ferrari.ruhsatBilgileriniGoster();

		//cout << "Porche kapi sayisi : " << *(Porshe.pkapiSayisi);
		//cout << endl;


	/*If i want to see just selected otomobile's color*/
		//cout << Porshe.justGetColorInfo() << endl;
		//cout << Porshe.justGetModelInfo() << endl;
		//cout << Porshe.justGetPowerInfo() << endl;
		//cout << Porshe.justGetModelyiliInfo() << endl;
		//cout << endl;


	/*******************How to use pointer with class to ACCESS our OBJECTS ?************************/
	/*

			// First of all , identfy pointer with class name
				Otomobile *myPointer;

			// Secondly, we write Porche's first variable adress into the myPointer
				myPointer = &Porshe;
			// Finally if we ask car information or accessing other thing, use ' -> ' symbol  like as shown below
				myPointer->ruhsatBilgileriniGoster();

			// We you choose other car, just put it adress
				myPointer = &Ferrari;
				myPointer->ruhsatBilgileriniGoster();

				delete myPointer;
				cout << endl << endl;
	*/
	/*******************How to use pointer with class to ACCESS our OBJECTS ?************************/


	/*******************How to CREATE an OBJECT with pointer ?************************/

	/*
			// Create pointer on the RAM, but this is a object pointer, don't forget
			// color, power, type of car information will be saved by RAM on the free byte area
			// but myPointerForCreateObject_Car_BMW keeps the first address of the Otomobile Object
				Otomobile *myPointerForCreateObject_Car_BMW = new Otomobile("Metalic_Red", 122, "Muscle",4);
	
			// Access other class's methods
				//myPointerForCreateObject_Car_BMW->degistirOtoRenk("Beyaz");
				
			// access ruhsatBilgileriniGoster with pointer
				myPointerForCreateObject_Car_BMW->ruhsatBilgileriniGoster();
				cout << "Kapi sayisi BMW : " << *(myPointerForCreateObject_Car_BMW->pkapiSayisi);

				cout << endl;
			//Clean memory blocks
				delete myPointerForCreateObject_Car_BMW;				//==> Destructor u otomatik çaðýrýr
			//Set our pointer not to point any address of Ram
				myPointerForCreateObject_Car_BMW = NULL;
	*/

	/*******************How to CREATE an OBJECT with pointer ?************************/
	
		//Hayvan h("Boncuk");	
		//h.sayimiz = 12; //==> Ana hayvan class ýndan
		////golden.sayimiz; //==> hayvan classýnýn alt classý kopek den eriþti, 
		// 
		// 
		//h.beslen();
		//h.uyu();
		//h.setHayvanIsim("Pasa");
		//cout << "Yeni hayvan ismi : " << h.getHayvanIsim() << endl;

		Kedi brithish("British");
		brithish.beslen();//Beslen ve uyu metodlarý hayvan classýna ait olmasýna raðmen kedi classý içinde de kullandýk, kalýttýk
		brithish.uyu();
		brithish.setHayvanIsim("Tekir");
		cout << "Ismi : " << brithish.getHayvanIsim() << endl;
		brithish.fareYakala();
		
	
	/*********************************************************/

		//Kopek golden("goldenblue");	//kopek objesi oluþturduk ve isim verdik(constructor)
		//Kopek elmas("ELMAS");
		//Kopek karabas("Karabas");
		//Kopek* kopekPointer = new Kopek("John");

		////cout << "Kopek class indan turetilen nesne adeti : " << Kopek::kopekSayisi << endl;
		//cout << "Kopek classinda turetilen adet :" <<  Kopek::getKopekSayisi() << endl; //Class ý yazarak ulaþýyor
		////Kopek::beslen(); // hata verir çünkü hangi obje bu ?
		//golden.beslen();   // elinde bir obje var bu obje artýk metodlara ulaþýyor.

		//delete kopekPointer;
		////cout << "Kopek class indan turetilen nesne adeti : " << Kopek::kopekSayisi << endl;
		//cout << "Kopek classinda turetilen adet :" << Kopek::getKopekSayisi() << endl;
		//		//golden.beslen();
		//		//golden.uyu();
		//		//golden.havla();
		

	/**********************************************************/
		//Kus papagan("AfrikaTozu");
		//papagan.beslen();
		//papagan.uyu();
		//papagan._ucur();
		//papagan.setHayvanIsim("MaviYazmalim");
		//cout << papagan.getHayvanIsim() << " ismi degisti" << endl;



	cout << endl;
	return 0; //==> çýkmadan önce de porche ce ferrari için iki tane daha destructor çaðýrýr
}
