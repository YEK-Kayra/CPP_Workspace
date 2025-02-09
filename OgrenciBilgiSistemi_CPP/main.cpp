#include <iostream>
#include <list>

#include "Ogrenci .h"

/**
* Imagine that you're software engineer, and you are working on KIZILELMA
* There are many buckup same sensor in a wareflight right?
* For instance bno055 sensor give us many data like gyro of axis, acceleration of axis, speed ..., 
* If they want you to collect them and list and many...
* This fundamental application would be very valuable to us
* */

using namespace std;

void initiateSelectionScreen() {

	cout << endl;
	cout << "****************\n";
	cout << "*              *\n";
	cout << "*     MENU     *\n";
	cout << "*              *\n";
	cout << "****************\n";

	cout << "1. Add new student record " << endl;
	cout << "2. Show all records" << endl;
	cout << "3. Delete student record by ID" << endl;
	cout << "4. Search student" << endl;
	cout << "5. Exit" << endl;
	

}

void addNewStudent(list<student>* myLst) {

	int id;
	int score;
	string name_1,name_2,surname,FullName;


	cout << "Please enter student ID :";
	cin >> id;

	cout << "Please enter stundent Name and Surname (if you dont second name put '-') :";
	cin >> name_1 >> name_2 >> surname;
	FullName = name_1 + " " + name_2 + " " + surname;

	cout << "please enter student Score :";
	cin >> score;

	student newStudent(FullName, id, score); //We are creating a new student object with the provided information.
	myLst->push_back(newStudent);		 //We are adding the student object into myLst container.

}


void showsAllRecord(list<student>* myLst) {

	list<student>::iterator myIterator;	//We are creating an iterator to traverse the container's objects.

	cout << "*---------Student List------------*" << endl;
	for (myIterator = myLst->begin(); myIterator != myLst->end(); myIterator++) {
		
		myIterator->printfAllStudentInfo();		//Our iterator points to the specific addresses of the objects and can access their public methods.
		
	}
	cout << endl;

}

void deleteStudentRecord(list<student>* myLst) {
	int student_id;
	list<student>::iterator myIterator;	//We are creating an iterator to traverse the container's objects.
	
	cout << "Please enter student number that will be deleted from the system :";
	cin >> student_id;



	for (myIterator = myLst->begin(); myIterator != myLst->end(); myIterator++) {

		
		if (myIterator->get_Id() == student_id) {
			break;
		}
	}

	if (myIterator == myLst->end()) {
		cout << "the entered id does not exist in our system. Please enter true id!" << endl;
	}
	else {
		myLst->erase(myIterator);
	}
}

void searchStudent(list<student>* myLst) {

	int student_id;
	list<student>::iterator myIterator;	//We are creating an iterator to traverse the container's objects.

	cout << "Please enter student number that will be searched from the system :";
	cin >> student_id;

	for (myIterator = myLst->begin(); myIterator != myLst->end(); myIterator++) {


		if (myIterator->get_Id() == student_id) {

			break;
		}
	}

	if (myIterator == myLst->end()) {
		cout << "the entered id does not exist in our system. Please enter true id!" << endl;
	}
	else {
		cout << "That's the searched student's information ==> ";
		myIterator->printfAllStudentInfo();
		
	}


}
int main() {

	list<student>* studentList = new list<student>();	//We create a containter that holds objects of the student type. But we use call by referance that's the thing we use pointer :)

	int userChoice;

	do {
		initiateSelectionScreen();
		cout << "Please enter what do you want :";
		cin >> userChoice;

		if (userChoice == 1)
			addNewStudent(studentList);
		else if (userChoice == 2)
			showsAllRecord(studentList);
		else if (userChoice == 3)
			deleteStudentRecord(studentList);
		else if (userChoice == 4)
			searchStudent(studentList);
		else if (userChoice == 5)
			break;

	} while (userChoice != 5);

	delete studentList;	//We have to clean pointer from our RAM


	return 0;
}