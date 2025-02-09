#include "myClass_Otomobile.h" // < > �eklinde sistemin kendi k�t�phanesiymi� gibi dahil etmeyeceksin

// Class Constructors 
Otomobile::Otomobile(string _renk, int _beygirGucu, string _Modeli, int kp) {
	cout << "Constructor cagirildi" << endl;

	renk = _renk;
	beygirGucu = _beygirGucu;
	Modeli = _Modeli;
	pkapiSayisi = new int(kp);		// pkapiSayisi int tipi bir pointer , 4bytel�k bir alan g�stersin ve o alana da kp say�s�n� ne girildiyse onu yazs�n
									// is equal to ==> *pkapiSayisi = kp;

}

// Class Destructor
Otomobile::~Otomobile() {
	cout << Otomobile::Modeli <<" objesinin Destructor cagirildi" << endl;

	//E�er class i�inde bir �ekikde memory allocation yapt�ysan bir �ekilde, delete komutunu buraya yaz�p destruct etmen laz�m
	// Bu k�s�mda bir s�r� delete ler g�r�r�z profesyonel yaz�l�mlarda
	// Yoksa memory leak dedi�imiz olay meydana gelir, RAM herhangi bir uygulama a�t���nda bu k�s�mlar dolu oldu�u i�in yeni bir bilgi yazamaz , 
		delete pkapiSayisi;
}



/*Bu metod ile hangi ara� olursa olsun �a�r�ld���nda kaydedilenler t�k�r t�k�r ��kmal�*/
void Otomobile::ruhsatBilgileriniGoster() {

	cout << "Model : " << Otomobile::Modeli << ", ";
	cout << "Beygir Gucu : " << Otomobile::beygirGucu << ", ";
	cout << "Renk : " << Otomobile::renk << ", ";
	cout << "Kapi :" << *(Otomobile::pkapiSayisi);
	cout << endl;


	/*	access private class object 
	Otomobile::cantModeli = "Kormetal";
	cout << "Cant Modeli : " << Otomobile::cantModeli;
	*/
}



/*
* D��ar�ndan bir arkada��m illede eri�ip bir de�i�iklik yapmak isterse, 
* yahut ilgili olan� g�rmek isterse kullanmas� gereken fonksiyonlar
* 
*/
void Otomobile::degistirOtoRenk(string _renk) {
	renk = _renk;
}

void Otomobile::degistirOtoBeygirGuc(int _beygirGucu) {
	beygirGucu = _beygirGucu;
}

void Otomobile::degistirOtoModel(string _Model) {
	Modeli = _Model;
}

void Otomobile::degistirOtoModelYil(int _ModelYili) {
	otomobilYear = _ModelYili;
}



string Otomobile::justGetColorInfo() {
	return renk;
}

string Otomobile::justGetModelInfo() {
	return Modeli;
}
int Otomobile::justGetPowerInfo() {
	return beygirGucu;
}

int Otomobile::justGetModelyiliInfo() {
	return otomobilYear;
}