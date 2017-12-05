#include <iostream>
#include <fstream>
#include <string>
#include "playersInventory.h"
#include "countInventory.h"
#include "listInventory.h"
using namespace std;

int main(){
  string textfile1 = "inventroyItems.txt";
  int count = countInventory();
  ++count;

  //MENU
  string x, ret;
	cout << "What would you like to do?" << endl;
  cout << "Enter Here : ";
	cin >> x;
	if(x == "inventory" || x == "Inventory" || x == "INVENTORY"){
		playersInventory();
	}
}
