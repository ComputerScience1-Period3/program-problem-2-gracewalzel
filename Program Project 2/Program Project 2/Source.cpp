/*
Grace Walzel - 9.25.17 3
Program Problem 2
Create a new project to display to the user questions to take in data and create variables to store aformentioned data.
*/
// Libraries
#include <iostream> // gives access to cin, cout, cndl, <<, >> ,boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause ()
// Namespaces
using namespace std; //*
//Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// Main
void main() {
	//Display text
	int p = 3;
	cout << "Grace Walzel" << endl;
	cout << "Period " << 3 << endl;
	cout << "Hello World!" << endl;
	pause(); //pauses to see the displayed text

	//Define and Assign your variable(s)
	int classes;
	cout << "How many classes a day do you have? \n";
	char first_letter;
	cout << "What is the first letter of your first name? \n";
	bool clubs;
	cout << "Are you in any clubs (1) or not (0)? \n";
	double gpa;
	cout << "What is your GPA (in decimal form)? \n";

}
