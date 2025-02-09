#include "myClass_Otomobile.h" // < > þeklinde sistemin kendi kütüphanesiymiþ gibi dahil etmeyeceksin

// Class Constructors 
Otomobile::Otomobile(string _renk, int _beygirGucu, string _Modeli, int kp) {
	cout << "Constructor cagirildi" << endl;

	renk = _renk;
	beygirGucu = _beygirGucu;
	Modeli = _Modeli;
	pkapiSayisi = new int(kp);		// pkapiSayisi int tipi bir pointer , 4bytelýk bir alan göstersin ve o alana da kp sayýsýný ne girildiyse onu yazsýn
									// is equal to ==> *pkapiSayisi = kp;

}

// Class Destructor
Otomobile::~Otomobile() {
	cout << Otomobile::Modeli <<" objesinin Destructor cagirildi" << endl;

	//Eðer class içinde bir þekikde memory allocation yaptýysan bir þekilde, delete komutunu buraya yazýp destruct etmen lazým
	// Bu kýsýmda bir sürü delete ler görürüz profesyonel yazýlýmlarda
	// Yoksa memory leak dediðimiz olay meydana gelir, RAM herhangi bir uygulama açtýðýnda bu kýsýmlar dolu olduðu için yeni bir bilgi yazamaz , 
		delete pkapiSayisi;
}



/*Bu metod ile hangi araç olursa olsun çaðrýldýðýnda kaydedilenler týkýr týkýr çýkmalý*/
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
* Dýþarýndan bir arkadaþým illede eriþip bir deðiþiklik yapmak isterse, 
* yahut ilgili olaný görmek isterse kullanmasý gereken fonksiyonlar
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