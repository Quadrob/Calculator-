//============================================================================
// Name        : mathCalculation.cpp
// Author      : Robert Zeelie
// Version     : 1.00.00
// Copyright   : Your copyright notice
// Description : A simple program that performs arithmetic division.
//				 The program uses two integers, a and b (obtained by the user)
//				 and will perform the division of a/b and store the result in
//				 another integer c and show the result of the division using cout.
//				 Similarly it will subtract, multiply, do modulo and power using
//				 integers a and b.The program asks the user which type of
//				 calculation it should do, then asks for the 2 integers, then runs
//				 the users selected calculation and outputs the result in a user
//				 friendly formatted manner.
//				 I broke the problem into subproblems and made a method for each
//				 operation so that its easier to understand and the switch case
//				 isnt too cluttered but each step is handled by a method.
//============================================================================

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//a simple method to collect the value of a
double numA (){

	//declare variable
	double a;

	//gets the value from the user
	cout << "\nPlease enter a value for a : ";
	cin >> a;

	return a;
}

//a simple method to collect the value of b
double numB (){

	//declare variable
	double b;

	//gets the value from the user
	cout << "Please enter a value for b : ";
	cin >> b;

	return b;
}

//a simple method to perform the addition
double addition (double a, double b){
	double temp = (a + b);
	return temp;
}


//a simple method to perform the multiplication
double multi (double a, double b){
	double temp = (a * b);
	return temp;
}


//a simple method to perform the subtraction
double subtraction (double a, double b){
	double temp = (a - b);
	return temp;
}


//a simple method to perform the division
double division (double a, double b){
	double temp = (a / b);
	return temp;
}

//a simple method to perform the modulus
double modu (int a, int b){
	double temp = (a % b);
	return temp;
}

//a simple method to perform the power
double power (double a, double b){
	double temp = pow(a, b);
	return temp;
}

//main method
int main(void) {

	//declare variables
	int choice;
	double answer, a, b;

	//Tell the user what the program is
	cout << "Calculator:" << endl;
	cout << setfill('-') << setw(100) << "-" << endl;

	//get what calculation the user wants to perform
	cout << "\n\t0 : Exit\n\n\t1 : Addition\n\t2 : Subtraction\n\t3 : Division\n\t4 : Multiplication\n\t5 : Modulus\n\t6 : Power" << endl;
	cout << "\nPlease choose a number of the calculation to perform: ";
	cin >> choice;

	//switch case it identify which operation to perform
	switch (choice) {

	case 0 :
		cout << "\nYou are exiting!" << endl;
		break;

	case 1 :
		//get numbers
		a = numA();
		b = numB();
		answer = addition(a, b);
		cout << "\n\tThe answer of a + b = " << answer << endl;
		break;

	case 2 :
		//get numbers
		a = numA();
		b = numB();
		answer = subtraction(a, b);
		cout << "\n\tThe answer of a - b = " << answer << endl;
		break;

	case 3 :
		//get numbers
		a = numA();
		b = numB();
		//prevent the user from dividing by zero
		if (b == 0) {
			cout << "\nYou cannot divide by 0!" << endl;
			break;
		}
		else {
			answer = division(a, b);
			cout << "\n\tThe answer of a / b = " << answer << endl;
			break;
		}

	case 4 :
		//get numbers
		a = numA();
		b = numB();
		answer = multi(a, b);
		cout << "\n\tThe answer of a × b = " << answer << endl;
		break;

	case 5 :
		cout << "\nPlease remember this computes the remainders when a is divided by b!\n" << endl;
		//get numbers
		a = numA();
		b = numB();
		//cast to int for modulus calculation
		a = int(a);
		b = int(b);
		//prevent the user from diving by zero
		if (b == 0) {
			cout << "\nYou cannot divide by 0!" << endl;
			break;
		}
		else {
			answer = modu(a, b);
			cout << "\n\tThe answer of a % b = " << answer << endl;
			break;
		}

	case 6 :
		//get numbers
		a = numA();
		b = numB();
		answer = power(a, b);
		cout << "\n\tThe answer of a ^ b = " << answer << endl;
		break;

	default :
		cout << "You entered an invalid option!" << endl;

	}

	cout << "\n\t\tGoodbye" << endl;
	return 0;
}

























