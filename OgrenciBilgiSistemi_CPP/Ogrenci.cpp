#include "Ogrenci .h"

//We create constructor 
student::student(string is_name, int is_Id, int is_Score) {

	student::name  = is_name;
	student::Id	   = is_Id;
	student::Score = is_Score;
	
}

/*We need to write setter&getter functions for encapsulation technique*/
//The setter functions are shown below.
void student::set_Id(int is_Id) {
	student::Id = is_Id;
}
void student::set_name(string is_Name) {
	student::name = is_Name;
}
void student::set_Score(int is_Score) {
	student::Score = is_Score;
}


//The getter functions are shown below.
int		student::get_Id() {
	return student::Id;
}
string  student::get_Name() {
	return student::name;
}
int		student::get_Score() {
	return student::Score;

}


void student::printfAllStudentInfo() {
	cout << "Id :" << student::Id << " Name : " << student::name << " Score : " << student::Score << endl;
}