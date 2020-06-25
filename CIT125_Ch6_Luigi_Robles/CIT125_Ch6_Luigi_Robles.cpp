// CIT125_Ch6_Luigi_Robles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Luigi Robles
// Ch.6 Pg.181 Figure 6-29
// 6-24-2020 Summer Term

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// declaring variables
	char size = ' ';
	char coupon = ' ';
	double price = 0.0;
	
	// input part of IPO
	cout << "M(edium) or L(arge) pizza? ";
	cin >> size;
	size = toupper(size);

	// multipe alternative selection structure
	if (size != 'M' && size != 'L')
		cout << "Please enter either M or L." << endl;
	else
	{
		if (size == 'M')
			price = 9.99;
		else
		{ //large pizza
			price = 12.99;
			cout << "$2 coupon (Y/N)? ";
			cin >> coupon;
			if (toupper(coupon) == 'Y')
				price -= 2;
			//end if
		} // end if
		cout << fixed << setprecision(2);
		cout << "Price: $" << price << endl;
	} //end if
	
	return 0;
} // end of main function