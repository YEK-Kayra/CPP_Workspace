#include <iostream>

using namespace std;

class Otomobil {

private:
	string marka;

public:

	int yil;

	Otomobil(string _marka, int _yil) { //constructor olu�turuyorsan obje olu�tururken buna uygun yaz�can
		marka = _marka;
		yil = _yil;
	}

	/*Friend keyword u ile class d�s�ndaki method  cagirilinca o d��ar�da kalan metodun
	eri�emedi�i �yelere bu friend keyword� ile tan�mlanan fonksiyon �zerinden eri�iyor*/
	friend void bilgileriGoster(Otomobil oto);

};

void bilgileriGoster(Otomobil oto){					//private olan markaya eri�emezsin
	//cout << "Otomobil yili :" << oto.yil << endl;  Burada daha friend keyword � tan�mlamam��ken yaz�ld�
	cout << "Otomobil yili :" << oto.yil << " Otomobil markasi :" << oto.marka << endl;
}

/*
int main() {

	Otomobil otomobil1("Opel", 2007);
	bilgileriGoster(otomobil1);


}
*/