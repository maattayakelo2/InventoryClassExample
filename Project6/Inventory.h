#pragma once
#include <iostream>
#include <string>
using namespace std;

class Inventory
{
private:
	int identifier;
	string name;
	double cost;
	int quantity;
public:
	Inventory();
	Inventory(int i, string n, double c, int q);
	int getIdentifier();
	string getName();
	double getCost();
	int getQuantity();
	void setIdentifier(int i);
	void setName(string n);
	void setCost(double c);
	void setQuantity(int q);
	void getInventoryInput();
	friend ostream& operator<<(ostream &output, Inventory &i);
}; // end class

