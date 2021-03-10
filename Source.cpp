/*
Name: Nicholas Mireles
Lab: Chapter 2
Discription: This program displays and finds the average of three test scores.
Algorithm:*
	I. Declare constant integer for the number of tests as NUM_TESTS.
	II. Declare three double variables for the individual test results(88.8, 99.9, 100).
	III. Declare double integer variable for the average of the scores.
	IV. Display the test scores and the average on the screen.*/

#include <iostream>
using namespace std;

void extra()
{
	string fname = "Laura";
	string lname = "Croft";
	int sharesOfStock = 1000;
	double pricePerShare = 35.00;
	double commissionRate = .02;
	double subtotal;
	double totalCommission;
	double totalPaid;

	subtotal = sharesOfStock * pricePerShare;
	totalCommission = subtotal * commissionRate;
	totalPaid = subtotal + totalCommission;

	cout << fname << " " << lname << " paid...\n";
	cout << subtotal << " for " << sharesOfStock << " shares, at a price of " << pricePerShare << " per share.\n";
	cout << "She paid " << totalCommission << " in commission.\n";
	cout << "Her total for the purchase including commission was " << totalPaid << "." << endl;
}

const int NUM_TESTS = 3;

int main()
{
	double test1 = 88.8;
	double test2 = 99.9;
	double test3 = 100;

	double testAvg = (test1 + test2 + test3) / NUM_TESTS;

	cout << "Test one results: " << test1 << endl;
	cout << "Test two results: " << test2 << endl;
	cout << "Test three results: " << test3 << endl <<endl;
	cout << "The average of the three tests is:  " << testAvg << endl << endl;

	cout << "=====Extra Credit=====\n\n";
	extra();

	return 0;
}


