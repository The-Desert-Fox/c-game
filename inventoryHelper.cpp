#include <iostream>
#include <fstream>
#include <string>
#include "inventoryHelper.h"

using namespace std;

void listInventory(){
  ifstream textfile1;
  textfile1.open("inventoryItems.txt");
  int count = countInventory();

  for(int i=0; i<count; ++i){
    cout << "item " << i << " is in your inventory" << endl;
    //textfile1 >> ;
    //cout <<  << endl;
  }
  textfile1.close();
  //return "";
}

int countInventory(){
  ifstream textfile1;
  textfile1.open("inventoryItems.txt");

  int count = 0;
  string line;
  while(getline(textfile1, line))
  {
    ++count;
  }

  count = count / 3; // how many lines does a single inventory item take (id, name, description)
  textfile1.close();

  return count;
}
