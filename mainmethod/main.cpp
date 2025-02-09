#include<iostream>		// C++ kütüphaneleri ekler 

using namespace std; 



/*! CPU ilk burayý çalýþtýrýr, 
	yorum satýrýna alýnca içi boþ bile olsa
	çözüm hatasý veriyor, ilk main i arýyor
 */
int main()			
{

	string name = "Emre";
	int age = 13;
	float avaragePoint = 3.24f;		// sonuna f kullarsýnsan derleyici double olarak  kaydetmekten vazgeçer float yani 4 byte kadar yer açar
	bool isSuccesful = true;
	char letterNote = 65;		//65 yazsan bile char olduðu için ascii deki karakter olarak ne aldýysa(A harfiini alýyormuþ) onu yazar. 
								//char veri tipini int ile toplasan chardaki decimal karþýlýðý toplar 
	char number = '5';

	int not1 = 13.0f;			//.f kullan ki float diye tanýmladýðýný double olarak ram a yazmasýn 
	int not2 = 14.0f;
	//float ort = (not1 + not2) / 2;	//Cast etme iþlemi yapmazsan sað tarafa göre solu eþitler
	float ort = (float)(not1 + not2) / 2;	//cast ettiðimiz için noktadab sonraki deðerleri de alýrýz 

	/*
	cout << "Once upon a time there is a younger boy who named as " << name << endl <<
		"And he is " << age << " years old And his avarage point is " << avaragePoint << endl;
	cout << "The student passed the class ? " << isSuccesful << endl;
	cout << "letter note " << letterNote << endl;
	cout << " char " << number << endl;
	*/
	//cout << "Not ortalamasi " << ort << endl;

	// % mod oparatörü 
	cout << 12 % 5 << endl;


	return 0;	//exe dosyasý artýk kapanýr
}