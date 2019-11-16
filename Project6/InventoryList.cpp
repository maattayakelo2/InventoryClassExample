#include <iostream>
#include <string>
#include <fstream>
#include "Inventory.h"
#include "InventoryList.h"
using namespace std;

InventoryList::InventoryList()
{
	numItems = 0;
	totalInventory = 0;
}
void InventoryList::AddItem()
{
	items[numItems].getInventoryInput();
	totalInventory += items[numItems].getQuantity();
	numItems++;

}
void InventoryList::showList()
{
	int i;
	for (i = 0; i < numItems; i++)
	{
		cout << items[i];
	}
	cout << "total quantity of all item is" << totalInventory << endl;
}

int InventoryList::writeToFile(string filename)
{
	int i;  
	ofstream outputFile;
	outputFile.open(filename, ios::app);
	if (!outputFile)
	{
		cout << "ERRROR - file open failed!" << endl;
		return -2;
	}
	for (i = 0; i < numItems; i++)
	{
		outputFile << items[i].getIdentifier() << "|";
		outputFile << items[i].getName() << "|";
		outputFile << items[i].getCost() << "|";
		outputFile << items[i].getQuantity() << "|" << endl;
	}
	outputFile.close();
	return 0;
}

int InventoryList::readFromFile(string filename)
{
	ifstream inputFile;
	inputFile.open(filename, ios::in);
	if (!inputFile)
	{
		cout << "ERROR: could not open file" << endl;
		return -2;
	}

	//create temp placeholder for items
	int id;
	string name;
	double cost;
	int qty;
	string inputstring;
	while (!inputFile.eof())
	{
		// reading from the file
		getline(inputFile,inputstring, '|');
		if (inputstring.length() >= 1)
		{
			id = stoi(inputstring);
			getline(inputFile, name, '|');
			getline(inputFile, inputstring, '|');
			cost = stod(inputstring);
			getline(inputFile, inputstring, '|');
			qty = stoi(inputstring);
			getline(inputFile, inputstring, '\n');

			// now add data to objects in list
			items[numItems].setIdentifier(id);
			items[numItems].setName(name);
			items[numItems].setCost(cost);
			items[numItems].setQuantity(qty);
			numItems++;
			totalInventory += qty;
		}
	}
	
	inputFile.close();
	return 0;
}