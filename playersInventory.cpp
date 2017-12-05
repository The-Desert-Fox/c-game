#include <iostream>
#include <fstream>
#include <string>
#include "playersInventory.h"
#include "inventoryHelper.h"
using namespace std;

void playersInventory(){
  ifstream textfile1;
  textfile1.open("inventoryItems.txt");
  // Count's the amount of items in the players inventory

  int count = countInventory();
  cout << "there are " << count << " Items in your inventory." << endl;

  // Display's the Players Inventory contents
  //string list = listInventory();

  // Let the Player choose what to do
  string choice, itemName, ret;
  cout << "What would you like to do?" << endl;
  cout << "Enter Here : ";
	cin >> choice;

  if(choice == "list" || choice == "List" || choice == "LIST")
  {
    ret = "Your Inventory consists of...";
    cout << ret << endl;
    listInventory();
  }
  // Use (itemName) || Examine (itemName) || Read (itemName)
  //USE POINTERS
	else if(choice == "use" || choice == "Use" || choice == "USE")
  {
    ret = "you chose to type ";
    cout << ret << choice << endl;

    //if(itemName =){
    //  ret = use(Inventory, textfile1);
    //  cout << ret << endl;
    //}
	}
  else if(choice == "examine" || choice == "Examine" || choice == "EXAMINE")
  {
    ret = "you chose to type ";
    cout << ret << choice << endl;

    //if(itemName =){
    //  ret = examine(Inventory, textfile1);
    //  cout << ret << endl;
    //}
  }
  else if(choice == "?" || choice == "help"){
    cout << "The choices are list, use and examine" << endl;
  }
  cout << "Exiting inventory" << endl;
}
