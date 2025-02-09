#include<iostream>

using namespace std;

int main() {
	/* We create our objects */
	//Otomobile Porshe;
	//Otomobile Ferrari;

	/************************************/

	// �f you are using C prog.language , you have to write as shown below first part in here
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

			/*Class member lar�m private olsa bile bu constructor class �n public �yesi oldu�u i�in eri�ebilir. ��nk� private olanlara
			sadece class i�inde .h .cpp lerinde eri�im sa�lay�p de�i�tirebiliyorsun*/
	Otomobile Porshe("Blue", 144, "Sedan");
	Otomobile Ferrari("Green", 120, "Muscle");

	/*D��ar�ndan arka�da��m da bir class geli�tirirken yahut bir algoritma yazarken ge�i�i olarak kulland��� obje fonksiyonlar�*/
	Porshe.degistirOtoBeygirGuc(125);
	Porshe.degistirOtoModel("Roadaster");
	Porshe.degistirOtoRenk("MetalicGrey");
	Porshe.degistirOtoModelYil(2002);

	//Porshe.otomobilYear = 2002; // ==> Bu k�s�m hata vermez ��nk� otomobilYear public bir �ye
	//Porshe.renk = "Blue" // ==> Bu k�s�m hata verir ��nk� private olanlara b�yle eri�emezsin

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
