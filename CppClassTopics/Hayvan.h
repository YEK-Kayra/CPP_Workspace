#pragma once

#include <iostream>

using namespace std;

class Hayvan {

public:

	//Hayvan objesi yaratmak i�in constructor
	Hayvan(string isim);
	//Hayvan objesini kald�rmak i�in deconstructor
	~Hayvan();

	//Hayvanlar�n ortak �zelliklerinin metodlar�
	void beslen();
	void uyu();

	//Encapsulation yap�s�na uymak i�in set&get metodlar�n� yazal�m
	string getHayvanIsim();
	void   setHayvanIsim(string _ad);

	int sayimiz;

protected:	//E�er protected tan�mlarsan bu class ve de alt classlar� eri�ebilir ama onun haricinde yine eri�im yasakl�d�r.
			//private olarak kal�rsa alt classlar� ve de di�er alt olmayan classlar encapsulation yap�s�na uymak zorunda olacak
	
	string isim;	//di�er classlar ancak setIsim ve getIsim kullanarak eri�ebilirler, main de buna dahildir.
};