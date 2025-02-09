#pragma once

#include <iostream>

using namespace std;


class student {

private:
	string name;
	int Id;
	int Score;

public:

	//We create constructor 
	student(string is_name, int is_Id, int is_Score);

	/*We need to write setter&getter functions for encapsulation technique*/
	//The setter functions are shown below.
	void set_Id(int is_Id);
	void set_name(string is_Name);
	void set_Score(int is_Score);

	//The getter functions are shown below.
	int		get_Id();
	string  get_Name();
	int		get_Score();

	void printfAllStudentInfo();

};
