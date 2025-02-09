#include<iostream>
#include<list> // STL Library

using namespace std;


void printMyLIST(list<int> mylst) {
	list<int>::iterator myITR; // bir tane yineleyici, ram üstündeki gezici, oluþturmuþ olduk

	for (myITR = mylst.begin(); myITR != mylst.end(); myITR++) { // itaratörümüz liste baþýndan baþlayýp liste sonuna gelene kadar +1 þeklinde(4byte) ram üstünde ilerleyecek

		cout << *myITR << "  ";		// *myITR demek , bir pointer olan myITR nin iþaret ettiði adresin içeriðini göstermesini söyler

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

	mylist.push_back(5);	//listenin sonuna veri eklemek için kullanýlýr push_front da önüne ekler
	mylist.push_back(8);

	//printMyLIST(mylist); // listeme elemanlarý ardý ardýna ekledikten sonra bastýrmak adýna gönderiyorum ==> 5 8
	//cout << endl;

	mylist.push_front(2);	//ardý ardýna ne eklesen de 2 en baþa eklenecek diðerleri kaydýrýlacak
	printMyLIST(mylist);	//==> 2 5 8 
	cout << endl;

	//mylist.pop_back(); // sondaki elemaný siler yani 8 i silecektir
	//printMyLIST(mylist);	//==> 2 5 
	//cout << endl;

	//mylist.pop_front();	// öndeki elemaný siler 
	//printMyLIST(mylist);	//==>  5 
	//cout << endl;
	//return 0;

	/*Eðer ben 5 8 7 2  yapmak isteseydim yani 8 ile 2 nin arasýna 7 yi eklemek isteseydim tekrardan pushbackler ile uðraþacaðýma 
	bir iterator yani liste pointerý tanýmlayýp ilgili indise getirip 7 yi ekleyebilirdim.
	*/


	list<int>::iterator myITR; // bir tane yineleyici, ram üstündeki gezici, oluþturmuþ olduk
	myITR = mylist.begin();    // iþaretçiyi listenin baþýna(baþlangýç adresine) gönderdik
	myITR++;
	myITR++;		//iþaretçi ilk baþ 2'in adresinitutuyordu 2 birim ilerledi 8 in adresini tutuyor
	mylist.insert(myITR, 7);	// 7 yi iteratör bilgisini de al ve array a insert et. 
	printMyLIST(mylist);		// 2 5 7 8 oldu
	cout << endl;

	//Diyelim ki 2 5 7 6 6 6 8 yapmak istiyorum 
	myITR = mylist.begin();    // iþaretçiyi listenin baþýna(baþlangýç adresine) gönderdik
	myITR++;
	myITR++;
	myITR++;
	mylist.insert(myITR, 3, 6);	// 5 in arkasýna 3 tane 6 ekle diyoruz.
	printMyLIST(mylist);			
	cout << endl;


	// 2 5 7 6 6 6 8 olacak ama ben 7 i kaldýrmak istiyorum
		//myITR = mylist.begin();
		//myITR++;
		//myITR++;
		//mylist.erase(myITR);
		//printMyLIST(mylist);			// 2 5 6 6 6 8 olacak
		//cout << endl;

	listemdenElemanSil(&mylist);		//listeden eleman kaldýrýlmaz çünkü referansý ile göndermedin

	printMyLIST(mylist);





}