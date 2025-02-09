#include"Ogrenci.h"

class Hesaplayici {

public:
	void OrtalamaHesapla(Ogrenci ogrenci) {
		int ortalamasi = ((ogrenci.not1 + ogrenci.not2) / 2);
		cout << ogrenci.Isim << " isimli ogrencinin not ortalamasi :" << ortalamasi << endl;
	}

};


int main() {

	Ogrenci ogrenci1("Nilsu Hayta", 90, 100);
	Ogrenci ogrenci2("Yunus Emre", 80, 100);

	Hesaplayici hesaplama1;

	hesaplama1.OrtalamaHesapla(ogrenci1);
	hesaplama1.OrtalamaHesapla(ogrenci2);

	hesaplama1.
}