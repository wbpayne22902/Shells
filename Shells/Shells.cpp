// Shells.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using std::cout, std::endl;
int main() {
	hoo e(22);
	e.setHappy(true);
	hoo n("Queen");
	hoo* l = new hoo("Pope");
	hoo* pope = new hoo("Sir Poopy Pants of Charlottesville Virginia USA", 22, false);
	e.setName("King");
	l->setAge(98);
	l->Poop();
	cout << "Hello World!" << endl;
	cout << "The e's name is " << e.getName() << endl;
	cout << "The n's name is " << n.getName() << endl;
	cout << "The l's name is " << l->getName() << " and age is " << l->getAge() << endl;
#ifdef _WIN32
	ShellAboutW(NULL, L"My App#Cool", L"Welcome to my app.", NULL);
#endif
	if (e.getHappy()) {
		cout << "e is happy" << endl;
	} else {
		cout << "e is not happy!" << endl;
	}
	e.toggleHappy();
	if (e.getHappy()) {
		cout << "e is happy!" << endl;
	} else {
		cout << "e is not happy." << endl;
	}
	delete l;
	delete pope;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
