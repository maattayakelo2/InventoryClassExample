#include <iostream>
#include <string>
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