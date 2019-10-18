#include <iostream>
#include <string>
#include "Inventory.h"
#include "InventoryList.h"
using namespace std;

int main()
{
	Inventory iobject1;
	iobject1.getInventoryInput();
	cout << iobject1 << endl;

	InventoryList myList;
	myList.AddItem();
	myList.AddItem();
	myList.AddItem();

	myList.showList();


	system("pause");
	return 0;
}