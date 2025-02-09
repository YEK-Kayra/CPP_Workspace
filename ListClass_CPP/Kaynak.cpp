#include<iostream>
#include<list> // STL Library

using namespace std;


void printMyLIST(list<int> mylst) {
	list<int>::iterator myITR; // bir tane yineleyici, ram �st�ndeki gezici, olu�turmu� olduk

	for (myITR = mylst.begin(); myITR != mylst.end(); myITR++) { // itarat�r�m�z liste ba��ndan ba�lay�p liste sonuna gelene kadar +1 �eklinde(4byte) ram �st�nde ilerleyecek

		cout << *myITR << "  ";		// *myITR demek , bir pointer olan myITR nin i�aret etti�i adresin i�eri�ini g�stermesini s�yler

	}
	cout << endl;

}

void listemdenElemanSil(list<int>* pMylst) {
	
	list<int>::iterator myITR;
	myITR = pMylst->begin();
	myITR++;
	myITR++;
	pMylst->erase(myITR);

}


int main() {

	list<int>  mylist; // mylist bir int tipinde veri tutan liste objesidir. ==> 5 8

	mylist.push_back(5);	//listenin sonuna veri eklemek i�in kullan�l�r push_front da �n�ne ekler
	mylist.push_back(8);

	//printMyLIST(mylist); // listeme elemanlar� ard� ard�na ekledikten sonra bast�rmak ad�na g�nderiyorum ==> 5 8
	//cout << endl;

	mylist.push_front(2);	//ard� ard�na ne eklesen de 2 en ba�a eklenecek di�erleri kayd�r�lacak
	printMyLIST(mylist);	//==> 2 5 8 
	cout << endl;

	//mylist.pop_back(); // sondaki eleman� siler yani 8 i silecektir
	//printMyLIST(mylist);	//==> 2 5 
	//cout << endl;

	//mylist.pop_front();	// �ndeki eleman� siler 
	//printMyLIST(mylist);	//==>  5 
	//cout << endl;
	//return 0;

	/*E�er ben 5 8 7 2  yapmak isteseydim yani 8 ile 2 nin aras�na 7 yi eklemek isteseydim tekrardan pushbackler ile u�ra�aca��ma 
	bir iterator yani liste pointer� tan�mlay�p ilgili indise getirip 7 yi ekleyebilirdim.
	*/


	list<int>::iterator myITR; // bir tane yineleyici, ram �st�ndeki gezici, olu�turmu� olduk
	myITR = mylist.begin();    // i�aret�iyi listenin ba��na(ba�lang�� adresine) g�nderdik
	myITR++;
	myITR++;		//i�aret�i ilk ba� 2'in adresinitutuyordu 2 birim ilerledi 8 in adresini tutuyor
	mylist.insert(myITR, 7);	// 7 yi iterat�r bilgisini de al ve array a insert et. 
	printMyLIST(mylist);		// 2 5 7 8 oldu
	cout << endl;

	//Diyelim ki 2 5 7 6 6 6 8 yapmak istiyorum 
	myITR = mylist.begin();    // i�aret�iyi listenin ba��na(ba�lang�� adresine) g�nderdik
	myITR++;
	myITR++;
	myITR++;
	mylist.insert(myITR, 3, 6);	// 5 in arkas�na 3 tane 6 ekle diyoruz.
	printMyLIST(mylist);			
	cout << endl;


	// 2 5 7 6 6 6 8 olacak ama ben 7 i kald�rmak istiyorum
		//myITR = mylist.begin();
		//myITR++;
		//myITR++;
		//mylist.erase(myITR);
		//printMyLIST(mylist);			// 2 5 6 6 6 8 olacak
		//cout << endl;

	listemdenElemanSil(&mylist);		//listeden eleman kald�r�lmaz ��nk� referans� ile g�ndermedin

	printMyLIST(mylist);





}