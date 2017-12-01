#include <iostream>
#include <fstream>
#include <string>
#include "countInventory.h"
#include "playersInventory.h"
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
//string listInventory(){
//  ifstream textfile1;
//  textfile1.open("inventoryItems.txt");
//  int count = countInventory();

//  for(int i=0; i<count; ++i){
//    textfile1 >> Items.at(i).inventoryItemID >> Items.at(i).inventoryItemName >> Items.at(i).inventoryItemDescription;
//    cout << i.inventoryItemID << ", "
//         << i.inventoryItemName << ", "
//         << i.inventoryItemDescription << endl;
//  }
//   textfile1.close();
//   return "";
//}
