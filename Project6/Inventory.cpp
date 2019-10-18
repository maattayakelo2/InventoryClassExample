#include <iostream>
#include <string>
#include "Inventory.h"
using namespace std;

Inventory::Inventory()
{
	identifier = 0;
	quantity = 0;
	cost = 0;
	name = "";
}
Inventory::Inventory(int i, string n, double c, int q)
{
	identifier = i;
	quantity = q;
	cost = c;
	name = n;
}
int Inventory::getIdentifier()
{
	return identifier;
}
string Inventory::getName()
{
	return name;
}
double Inventory::getCost()
{
	return cost;
}
int Inventory::getQuantity()
{
	return quantity;
}
void Inventory::setIdentifier(int i)
{
	identifier = i;
}
void Inventory::setName(string n)
{
	name = n;
}
void Inventory::setCost(double c)
{
	cost = c;
}
void Inventory::setQuantity(int q)
{
	quantity = q;
}

void Inventory::getInventoryInput()
{
	cout << "enter inventory identifier" << endl;
	cin >> identifier;
	cout << "enter quantity " << endl;
	cin >> quantity;
	cout << "enter cost " << endl;
	cin >> cost;
	cin.ignore();
	cout << "enter name" << endl;
	getline(cin, name, '\n');
}

ostream& operator<<(ostream &output, Inventory &i)
{
	output << "inventory: " << i.identifier << endl;
	output << "|" << i.cost << "|" << i.quantity << "|" << i.name << endl;
	return output;
}