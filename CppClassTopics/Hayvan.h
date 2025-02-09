#pragma once

#include <iostream>

using namespace std;

class Hayvan {

public:

	//Hayvan objesi yaratmak için constructor
	Hayvan(string isim);
	//Hayvan objesini kaldýrmak için deconstructor
	~Hayvan();

	//Hayvanlarýn ortak özelliklerinin metodlarý
	void beslen();
	void uyu();

	//Encapsulation yapýsýna uymak için set&get metodlarýný yazalým
	string getHayvanIsim();
	void   setHayvanIsim(string _ad);

	int sayimiz;

protected:	//Eðer protected tanýmlarsan bu class ve de alt classlarý eriþebilir ama onun haricinde yine eriþim yasaklýdýr.
			//private olarak kalýrsa alt classlarý ve de diðer alt olmayan classlar encapsulation yapýsýna uymak zorunda olacak
	
	string isim;	//diðer classlar ancak setIsim ve getIsim kullanarak eriþebilirler, main de buna dahildir.
};