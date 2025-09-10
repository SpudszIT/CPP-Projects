// week01_cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float bill = 88.67;
	float taxRate = 0.0675;
	double tipRate = 0.2;
	double taxAmount = bill * taxRate; 
	double tipAmount = bill * (1 + taxRate) * tipRate;
	double finalAmount = bill + taxAmount + tipAmount; 
	
	cout << "Meal Cost: $" << bill << endl;
	cout << "Tax Amount: $" << bill * taxRate << endl;
	cout << "Tip Amount: $" << bill * (1 + taxRate) * tipRate << endl;
	cout << "Final Amount: $" << finalAmount << endl;
}

