#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include "Item.h"
#include "Room.h"
#include "playersInventory.h"
#include "inventoryHelper.h"

//using namespace std;

int main(){
  /*
  string textfile1 = "inventroyItems.txt";
  vector<Item> inventory;
  vector<Room> rooms;
  int count = countInventory();
  ++count;

  //MENU
  string x, ret;
	cout << "What would you like to do?" << endl;
  cout << "Enter Here : ";
	cin >> x;

  // Converting input data to lower case
  std::transform(x.begin(), x.end(),x.begin() , ::tolower);

	if(x == "inventory"){
		playersInventory();
	}
  else if(x == "describe"){

  }
  */

  Room r = Room("Bedroom", "Just a comfy oul bed here", "Keyword", 5);
  cout << r;
}
