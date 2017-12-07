/*
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "playersInventory.h"
#include "inventoryHelper.h"

//using namespace std;

int main(){
  string textfile1 = "inventroyItems.txt";
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
}
*/
