// Name: Joe Herrera
// Class: CS104 Problem Solving Concepts with C++
// Filename: Assignment 5 Program.cpp

#include <iostream>
#include <string>
using namespace std;

void main()
{
	//declare variables
	double employee_number, hours_worked, hourly_rate, total_pieces, piece_rate,
		total_sales, sales_rate, salary, total_pay;
	char pay_type;
	string employee_name;

	//inputs and outputs (Employee Number)
	cout << "Please enter employee number: ";
	cin >> employee_number;

	while (employee_number != 0)
	{
		cout << "Please enter your employee name: ";
		cin >> employee_name;
		cout << endl;

		//inputs and outputs (Pay Type)
		cout << "H - Hourly" << endl;
		cout << "P - Piece Rate" << endl;
		cout << "C - Commision" << endl;
		cout << "S - Salary" << endl << endl;
		cout << "Please enter your pay type: ";
		cin >> pay_type;
		cout << endl;

		//case structure
		switch (pay_type)
		{
		case 'H':
			cout << "Please enter total hours worked: ";
			cin >> hours_worked;
			cout << "Please enter hourly rate: ";
			cin >> hourly_rate;
			cout << endl;
			//hourly calculation
			total_pay = hours_worked * hourly_rate;
			break;

		case 'P':
			cout << "Please enter total number of pieces: ";
			cin >> total_pieces;
			cout << "Please enter piece rate: ";
			cin >> piece_rate;
			cout << endl;
			//piece rate calculation
			total_pay = total_pieces * piece_rate;
			break;

		case 'C':
			cout << "Please enter total number of sales: ";
			cin >> total_sales;
			cout << "Please enter sales commission (%): ";
			cin >> sales_rate;
			//commission calculation
			total_pay = (total_sales * sales_rate) / 100;
			break;

		case 'S':
			cout << "Please enter salary: ";
			cin >> salary;
			total_pay = salary;
			break;

		default:
			cout << "That was not a valid pay type selection. Please enter correct pay type." << endl << endl;
			break;
		}//End of Switch

		if (pay_type == 'H' || pay_type == 'P' || pay_type == 'C' || pay_type == 'S')
		{
			cout << "Your total pay is: $" << total_pay << endl << endl;
			cout << "Please enter employee number: ";
			cin >> employee_number;
		}
	}//End of While Loop

}//End of Program

/*
Please enter employee number: 1
Please enter your employee name: Joe

H - Hourly
P - Piece Rate
C - Commision
S - Salary

Please enter your pay type: H

Please enter total hours worked: 40
Please enter hourly rate: 25

Your total pay is: $1000

Please enter employee number: 2
Please enter your employee name: Bob

H - Hourly
P - Piece Rate
C - Commision
S - Salary

Please enter your pay type: P

Please enter total number of pieces: 100
Please enter piece rate: 10

Your total pay is: $1000

Please enter employee number: 3
Please enter your employee name: Bill

H - Hourly
P - Piece Rate
C - Commision
S - Salary

Please enter your pay type: C

Please enter total number of sales: 2500
Please enter sales commission (%): 25
Your total pay is: $625

Please enter employee number: 4
Please enter your employee name: John

H - Hourly
P - Piece Rate
C - Commision
S - Salary

Please enter your pay type: S

Please enter salary: 1600
Your total pay is: $1600

Please enter employee number: 0
Press any key to continue . . .

Please enter employee number: 5
Please enter your employee name: Mark

H - Hourly
P - Piece Rate
C - Commision
S - Salary

Please enter your pay type: W

That was not a valid pay type selection. Please enter correct pay type.
*/