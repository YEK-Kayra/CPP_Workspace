#include<iostream>		// C++ k�t�phaneleri ekler 

using namespace std; 



/*! CPU ilk buray� �al��t�r�r, 
	yorum sat�r�na al�nca i�i bo� bile olsa
	��z�m hatas� veriyor, ilk main i ar�yor
 */
int main()			
{

	string name = "Emre";
	int age = 13;
	float avaragePoint = 3.24f;		// sonuna f kullars�nsan derleyici double olarak  kaydetmekten vazge�er float yani 4 byte kadar yer a�ar
	bool isSuccesful = true;
	char letterNote = 65;		//65 yazsan bile char oldu�u i�in ascii deki karakter olarak ne ald�ysa(A harfiini al�yormu�) onu yazar. 
								//char veri tipini int ile toplasan chardaki decimal kar��l��� toplar 
	char number = '5';

	int not1 = 13.0f;			//.f kullan ki float diye tan�mlad���n� double olarak ram a yazmas�n 
	int not2 = 14.0f;
	//float ort = (not1 + not2) / 2;	//Cast etme i�lemi yapmazsan sa� tarafa g�re solu e�itler
	float ort = (float)(not1 + not2) / 2;	//cast etti�imiz i�in noktadab sonraki de�erleri de al�r�z 

	/*
	cout << "Once upon a time there is a younger boy who named as " << name << endl <<
		"And he is " << age << " years old And his avarage point is " << avaragePoint << endl;
	cout << "The student passed the class ? " << isSuccesful << endl;
	cout << "letter note " << letterNote << endl;
	cout << " char " << number << endl;
	*/
	//cout << "Not ortalamasi " << ort << endl;

	// % mod oparat�r� 
	cout << 12 % 5 << endl;


	return 0;	//exe dosyas� art�k kapan�r
}