//Joe McCallister
//Jan 2 2018
//Programming Discussion - information about class/tet redacted.
//Program to ask for total amount of milk produced, and figure the cost as well as profit for production. Number of cartons needed must be a whole number. 

#include <iostream>

using namespace std;

int main()
{
	//declarations
	//using float to conserve memory allocation - use LPC constant to convert total liters produced
	const double LITERS_PER_CARTON = 3.78;
	const double COST = .38;
	const double PROFIT = .27;

	int milk; //used int to pop the decimal so it becomes a whole integer

	//print the following and accept input to place as the milk variable
	cout << "Please enter total amount, in Liters, of milk produced and press enter." << endl;
	cin >> milk;

	//take input of milk to declare and initialize cartons variable
	int cartons = milk / LITERS_PER_CARTON;

	//output the total cartons, total cost, total profit
	cout << "Cartons needed to hold milk: " << cartons << endl;	
	cout << "Total cost of production = $" << COST * cartons << endl;
	cout << "Total profit = $" << PROFIT * cartons << endl;

	//keep cmd open until user acts
		system("pause");
		return 0;
}