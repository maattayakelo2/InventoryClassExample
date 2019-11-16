#pragma once
#include <iostream>
#include <string>
#include "Inventory.h"
using namespace std;

class InventoryList
{
	Inventory items[1000];
	int numItems;
	int totalInventory;
public:
	InventoryList();
	void AddItem();
	void showList();
	int readFromFile(string filename);
	int writeToFile(string filename);
};