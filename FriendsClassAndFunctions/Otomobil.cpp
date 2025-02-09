#include <iostream>

using namespace std;

class Otomobil {

private:
	string marka;

public:

	int yil;

	Otomobil(string _marka, int _yil) { //constructor oluþturuyorsan obje oluþtururken buna uygun yazýcan
		marka = _marka;
		yil = _yil;
	}

	/*Friend keyword u ile class dýsýndaki method  cagirilinca o dýþarýda kalan metodun
	eriþemediði üyelere bu friend keywordü ile tanýmlanan fonksiyon üzerinden eriþiyor*/
	friend void bilgileriGoster(Otomobil oto);

};

void bilgileriGoster(Otomobil oto){					//private olan markaya eriþemezsin
	//cout << "Otomobil yili :" << oto.yil << endl;  Burada daha friend keyword ü tanýmlamamýþken yazýldý
	cout << "Otomobil yili :" << oto.yil << " Otomobil markasi :" << oto.marka << endl;
}

/*
int main() {

	Otomobil otomobil1("Opel", 2007);
	bilgileriGoster(otomobil1);


}
*/