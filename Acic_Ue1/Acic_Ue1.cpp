// Acic_Ue1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "UE1_Graser.cpp"

int main()
{
	String myString("Hello");

	myString.Concatenate("World");

	myString.Concatenate(myString);
	String otherString(myString);
	String yetAnotherString("AnotherWorld");

	std::cout << otherString.c_str << " || " << yetAnotherString.c_str << std::endl;

	otherString = yetAnotherString;

	//const char* cStr = myString.c_str();
	//std::cout << cStr << std::endl;
	//std::cout << myString.GetLength() << std::endl;

	std::cout << otherString.c_str << " || " << yetAnotherString.c_str << std::endl;
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
