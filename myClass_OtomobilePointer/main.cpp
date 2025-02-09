#include<iostream>

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

			/*Class member larým private olsa bile bu constructor class ýn public üyesi olduðu için eriþebilir. Çünkü private olanlara
			sadece class içinde .h .cpp lerinde eriþim saðlayýp deðiþtirebiliyorsun*/
	Otomobile Porshe("Blue", 144, "Sedan");
	Otomobile Ferrari("Green", 120, "Muscle");

	/*Dýþarýndan arkaþdaþým da bir class geliþtirirken yahut bir algoritma yazarken geçiçi olarak kullandýðý obje fonksiyonlarý*/
	Porshe.degistirOtoBeygirGuc(125);
	Porshe.degistirOtoModel("Roadaster");
	Porshe.degistirOtoRenk("MetalicGrey");
	Porshe.degistirOtoModelYil(2002);

	//Porshe.otomobilYear = 2002; // ==> Bu kýsým hata vermez çünkü otomobilYear public bir üye
	//Porshe.renk = "Blue" // ==> Bu kýsým hata verir çünkü private olanlara böyle eriþemezsin

	/*// Second Part End //*/

	/************************************/


	/*Now we show the car's information by just a single class's method*/
	Porshe.ruhsatBilgileriniGoster();
	Ferrari.ruhsatBilgileriniGoster();
	cout << endl;
	/*If i want to see just selected otomobile's color*/

	cout << Porshe.justGetColorInfo() << endl;
	cout << Porshe.justGetModelInfo() << endl;
	cout << Porshe.justGetPowerInfo() << endl;
	cout << Porshe.justGetModelyiliInfo() << endl;
	//cout << Porshe.otomobilYear << endl;


}
