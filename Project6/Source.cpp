#include <iostream>
#include <string>
#include "Inventory.h"
#include "InventoryList.h"
using namespace std;

int main()
{
	

	InventoryList myList;
	myList.readFromFile("c:\\users\\michelle\\documents\\mytest.txt");

	myList.AddItem();
	myList.AddItem();
	myList.AddItem();

	myList.showList();
	myList.writeToFile("c:\\users\\michelle\\documents\\mytest.txt");


	system("pause");
	return 0;
}